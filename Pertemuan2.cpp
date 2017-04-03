#include <iostream> // untuk cout, cin, endl

using namespace std;

int main(){
    // soal:
    // buatlah sebuah program yang dapat menghitung rata-rata dari 
    // nilai-nilai yang diinputkan oleh user.
    // nilai plus apabila nilai yang akan diinputkan oleh user juga
    // ditentukan oleh user melalui input user
    int input = 0;
    int panjang = 0;
    int jumlah = 0;
    float rerata = 0.0f;

    cout << "Masukkan panjang data: ";
    cin >> panjang;

    for(int i = 0; i < panjang; i++){
        cout << "Input data ke-" << (i+1) << ": ";
        cin >> input;
        jumlah += input;
    }
    rerata = float(jumlah) / panjang;

    cout << "Jumlah: " << jumlah << endl;
    cout << "Rata-rata: " << rerata << endl;

    cin.get();
    cin.get();
    return 0;
}
