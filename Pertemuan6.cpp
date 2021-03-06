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
        cout << "Masukkan jenis operasi Antrian: " << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;

        switch(pilihan){
            case 1:
                if(indeks == panjang){
                    cout << "Antrian Penuh" << endl;
                }
                else{
                    cout << "Push data: ";
                    cin >> data[indeks];
                    indeks++;
                }
                break;
            case 2:
                if(indeks == 0){
                    cout << "Antrian kosong" << endl;
                }
                else{
                    indeks--;
                    cout << "Pop data: " << data[0] << endl;
                    for(int i = 0; i <= indeks; i++){
                        data[i] = data[i+1];
                    }
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
