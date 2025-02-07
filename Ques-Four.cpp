#include <iostream>
#include <string>
#include <cctype>  
using namespace std;

string cleanString(string str) {
    string result = "";
    for(char c : str) {
        if(c != ' ') {
            result += tolower(c);
        }
    }
    return result;
}

bool isPalindrome(string str) {
    
    string cleanStr = cleanString(str);
    int start = 0;
    int end = cleanStr.length() - 1;
    
    while(start < end) {
        if(cleanStr[start] != cleanStr[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

void countCharacterFrequency(string str) {
    int frequency[26] = {0};  
    for(char c : str) {
        if(isalpha(c)) {  
            frequency[tolower(c) - 'a']++;
        }
    }
    
    cout << "Character frequencies:" << endl;
    for(int i = 0; i < 26; i++) {
        if(frequency[i] > 0) {  
            cout << (char)(i + 'a') << ": " << frequency[i] << endl;
        }
    }
}

string replaceVowels(string str, char replacement) {
    string result = str;
    for(int i = 0; i < result.length(); i++) {
        char c = tolower(result[i]);
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            result[i] = replacement;
        }
    }
    return result;
}

int main() {
    string input;
    
    cout << "Enter a string: ";
    getline(cin, input);
    
    if(isPalindrome(input)) {
        cout << "\nThe string IS a palindrome!" << endl;
    } else {
        cout << "\nThe string is NOT a palindrome." << endl;
    }
    
    cout << "\n";
    countCharacterFrequency(input);
    char replacement = '*';
    string modifiedString = replaceVowels(input, replacement);
    cout << "\nString with vowels replaced: " << modifiedString << endl;
    
   return 0;
}
