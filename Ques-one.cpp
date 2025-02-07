#include <iostream>
#include <cmath>
using namespace std;

bool isprime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int findnextPrime(int n) {
    int prime = n + 1;
    while (true) {
        if (isprime(prime)) {
            return prime;
        }
        prime++;
    }
}

void findFactors(int n) {
    cout << "Factors of " << n << ": ";
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (isprime(n)) {
        cout << n << " is a prime number." << endl;
        int nextPrimeNumber = findnextPrime(n);
        cout << "The next prime number greater than " << n << " is " << nextPrimeNumber << "." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
        findFactors(n);
    }

    return 0;
}
