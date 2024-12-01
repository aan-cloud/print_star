#include <iostream>
using namespace std;

void printStars(int n) {
    int mid = n / 2; 
    for (int i = 0; i < n; i++) {
        if (i == mid) {
            
            for (int j = 0; j < n; j++) {
                cout << "*";
            }
        } else {
            
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    char repeat;
    do {
        int rows;
        cout << "Jumlah baris? ";
        cin >> rows;

        if (rows % 2 == 0) {
            
            cout << "Anda memasukkan jumlah Genap. Masukkan hanya jumlah Ganjil" << endl;
        } else {
            
            cout << "Bintang(" << rows << "):" << endl;
            printStars(rows);
        }

        
        cout << "Apakah anda ingin mengulang Program (Y/N): ";
        cin >> repeat;

    } while (repeat == 'Y' || repeat == 'y');

    cout << "Terima kasih telah menggunakan Program ini." << endl;
    return 0;
}