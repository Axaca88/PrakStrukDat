// Program ini memberikan contoh penggunaan Linked List
// dengan memanfaatkan pointer.
//
// Program ini meminta user untuk input data bertipe integer. 
// Selanjutnya, setiap data disimpan ke dalam sebuah tipe data bertipe struct 
// yang berisi variabel bertipe integer untuk menyimpan data dan juga 
// variabel bertipe pointer yang menyimpan alamat memori ke data selanjutnya.
// Silahkan kembali dibuka teori dasar tentang pointer.
//
// Dapat diperhatikan kelebihan dari Linked List adalah Linked List dapat menyimpan
// data secara kontinu tanpa harus dideklarasikan panjang data yang akan diinputkan 
// oleh user seperti halnya dalam Array.


#include <iostream>

using namespace std;

// Pada bagian ini dibuat sebuah tipe struct yang dinamakan node
// untuk menyimpan data berupa integer dan juga menyimpan 
// lokasi dari node berikutnya.
struct node {
    // ini variabel menyimpan nilai berupa integer.
    int data;
    // ini pointer ke data selanjutnya.
    node *next;
};

int main(){
    bool ulangi = false;
    int input = 0;
    // ini untuk menyimpan permulaan deret data;
    node *awal;
    // ini untuk mengarahkan ke masing-masing node di Linked List;
    node *kotak;

    // persiapan awal
    awal = new node;
    kotak = awal;

    cout << "Program Deret Data dengan Linked List" << endl;
    cout << "--------------------------------------" << endl;
    cout << "Input nilai selain 0 untuk menyelesaikan input data" << endl;
    // Bagian ini menerima input data baru untuk disimpan ke linked list.
    do{
        // input data baru
        cout << "Input Data Baru: ";
        cin >> input;
        // jika input data = 0 maka proses data akan berakhir,
        // jika input data != 0 maka dibuat node untuk menyimpan data.

        if(input != 0){
            // jika node pertama, maka langsung diisi data
            // jika bukan node pertama, maka dibuatkan node baru baru diisi data.
            if(kotak->data != 0){
                kotak->next = new node;
                kotak = kotak->next;
            }
            kotak->data = input;
            ulangi = true;
        }
        else{
            ulangi = false;
        }
    } while(ulangi);

    // bagian ini adalah menjelajahi node-node linked list dan mencetak data nya.
    kotak->next = new node;
    cout << endl;
    cout << "Isi Data: ";
    kotak = awal;
    while(kotak->next != NULL){
        cout << kotak->data << " ";
        kotak = kotak->next;
    }
    cout << endl;

    return 0;
}
