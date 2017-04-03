#include <iostream> // untuk cout, cin, endl

using namespace std;

int main(){
    // soal:
    // buatlah sebuah program yang dapat menghitung rata-rata dari 
    // nilai-nilai yang diinputkan oleh user.
    //
    // nilai plus apabila nilai yang akan diinputkan oleh user juga
    // ditentukan oleh user melalui input user
    //
    // gunakan array
    int panjang = 0;
    int jumlah = 0;
    float rerata = 0.0f;

    cout << "Masukkan panjang data: ";
    cin >> panjang;

    int data[panjang];

    for(int i = 0; i < panjang; i++){
        cout << "Input data ke-" << (i+1) << ": ";
        cin >> data[i];
    }

    // penampilan dan penjumlahan data dipisahkan
    // untuk menguji apakah data dapat tersimpan di 
    // array
    cout << "Data: ";
    for(int i = 0; i < panjang; i++){
        cout << data[i] << " ";
        jumlah += data[i];
    }
    rerata = float(jumlah) / panjang;

    cout << endl;
    cout << "Jumlah: " << jumlah << endl;
    cout << "Rata-rata: " << rerata << endl;

    cin.get();
    cin.get();
    return 0;
}
