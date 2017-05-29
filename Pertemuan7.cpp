#include <iostream>
#include <queue>

using namespace std;

int main(){
    int panjang = 0;
    int singledata = 0;
    int pilihan = 0;
    queue<int> data;
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
                cout << "Push data: ";
                cin >> singledata;
                data.push(singledata);
                break;
            case 2:
                if(!data.empty()){
                    singledata = data.front();
                    data.pop();
                    cout << "Pop data: " << singledata << endl;
                }
                else{
                    cout << "Antrian kosong" << endl;
                }
                break;
            default:
                    cout << "Pilihan tidak tersedia" << endl;
                break;
        }
        cout << endl;
        cout << "Queue size: " << data.size() << endl;
        cout << "Ulangi Operasi (y/n): ";
        cin >> ulangi;
    } while(ulangi == 'y');

    return 0;
}
