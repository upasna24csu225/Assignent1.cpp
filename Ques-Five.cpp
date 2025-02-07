#include <iostream>
using namespace std;

int main() {
    int size = 3; // Size of the matrix (3x3)
    int matrix[3][3];
    
    cout << "Enter the elements of 3x3 matrix:" << endl;
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
   
    cout << "\nOriginal Matrix:" << endl;
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
   
    int rotated[3][3];
   
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            rotated[j][size-1-i] = matrix[i][j];
        }
    }
    
    cout << "\nMatrix after 90 degree rotation:" << endl;
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            cout << rotated[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
