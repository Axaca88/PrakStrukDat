// Program ini memberikan contoh penggunaan Linked List
// dengan memanfaatkan container List.

#include <iostream>
#include <list>

using namespace std;

int main(){
    bool ulangi = false;
    int input = 0;
    list<int> data = {};
    list<int>::iterator i;

    i = data.begin();

    cout << "Program Deret Data dengan Linked List" << endl;
    cout << "--------------------------------------" << endl;
    cout << "Input nilai selain 0 untuk menyelesaikan input data" << endl;
    // Bagian ini menerima input data baru untuk disimpan ke linked list.
    do{
        // input data baru
        cout << "Input Data Baru: ";
        cin >> input;
        if(input != 0){
            data.insert(i, input);
            ulangi = true;
        }
        else{
            ulangi = false;
        }
    } while(ulangi);

    // bagian ini adalah menjelajahi node-node linked list dan mencetak data nya.
    cout << endl;
    cout << "Isi Data: ";
    for(int x: data){
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
