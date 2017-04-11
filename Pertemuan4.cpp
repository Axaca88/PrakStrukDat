#include <iostream>

using namespace std;

int main(){
    int panjang = 0;
    int indeks = 0;
    int pilihan = 0;
    cout << "Masukkan panjang data maksimum: ";
    cin >> panjang;
    int data[panjang] = {};
    char ulangi = 'n';

    do{
        cout << endl;
        cout << "Masukkan jenis operasi Stack: " << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;

        switch(pilihan){
            case 1:
                if(indeks == panjang){
                    cout << "Stack Penuh" << endl;
                }
                else{
                    cout << "Push data: ";
                    cin >> data[indeks];
                    indeks++;
                }
                break;
            case 2:
                if(indeks == 0){
                    cout << "Stack kosong" << endl;
                }
                else{
                    indeks--;
                    cout << "Pop data: " << data[indeks] << endl;
                    data[indeks] = 0;
                }
                break;
            default:
                    cout << "Pilihan tidak tersedia" << endl;
                break;
        }
        cout << endl;
        cout << "Data: ";
        for(int i = 0; i < panjang; i++){
            cout << data[i] << " ";
        }
        cout << endl;
        cout << "Ulangi Operasi (y/n): ";
        cin >> ulangi;
    } while(ulangi == 'y');

    return 0;
}
