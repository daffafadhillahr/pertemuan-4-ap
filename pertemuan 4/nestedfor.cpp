#include <iostream>
using namespace std; 

int main () { 
    int a, b; 
    cout << "masukkan jumlah kolom : "; 
    cin >> a; 
    cout << "masukkan jumlah baris : "; 
    cin >> b;

    for (int i = 1; i <= a; i++) { //kolom -> |
        // i = 3 ; 3 <=5; 3++
        for (int j = 1; j <= b; j++) { //baris -> - 
        // j = 4; 4 <=5; 4++   
            cout << " * "; 
        } 
        cout << endl;
    } 
} 
