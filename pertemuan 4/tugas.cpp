#include <iostream>
using namespace std;

int main() {
    int a;

    cout << "Masukkan jumlah baris : ";
    cin >> a;

    for (int i = 1; i <= a; i++) {      // baris
        for (int j = 1; j <= i; j++) {  // jumlah bintang
            cout << " * ";
        }
        cout << endl;
    }


}