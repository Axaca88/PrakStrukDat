#include <iostream> // untuk cout, endl
#include <limits>   // untuk numeric_limits
#include <iomanip>  // untuk setprecision

using namespace std;

int main(){
    cout << "Selamat Datang" << endl;
    cout << "--------------" << endl;
    cout << endl;
    cout << "Ukuran short int: " << sizeof(short int) << " Byte" << endl;
    cout << "Ukuran int: " << sizeof(int) << " Byte" << endl;
    cout << "Ukuran long int: " << sizeof(long int) << " Byte" << endl;
    cout << endl;
    cout << "Min limit dari unsigned short int: " << numeric_limits<unsigned short int>::min() << endl;
    cout << "Max limit dari unsigned short int: " << numeric_limits<unsigned short int>::max() << endl;
    cout << "Min limit dari signed short int: " << numeric_limits<signed short int>::min() << endl;
    cout << "Max limit dari signed short int: " << numeric_limits<signed short int>::max() << endl;
    cout << endl;
    cout << "Min limit dari unsigned int: " << numeric_limits<unsigned int>::min() << endl;
    cout << "Max limit dari unsigned int: " << numeric_limits<unsigned int>::max() << endl;
    cout << "Min limit dari signed int: " << numeric_limits<signed int>::min() << endl;
    cout << "Max limit dari signed int: " << numeric_limits<signed int>::max() << endl;
    cout << endl;
    cout << "Min limit dari unsigned long int: " << numeric_limits<unsigned long int>::min() << endl;
    cout << "Max limit dari unsigned long int: " << numeric_limits<unsigned long int>::max() << endl;
    cout << "Min limit dari signed long int: " << numeric_limits<signed long int>::min() << endl;
    cout << "Max limit dari signed long int: " << numeric_limits<signed long int>::max() << endl;
    cout << endl;
    cout << "Ukuran float: " << sizeof(float) << " Byte" << endl;
    cout << "Ukuran double: " << sizeof(double) << " Byte" << endl;
    cout << endl;
    cout << "Perbedaan presisi float dan double" << endl;
    cout << "Untuk menyimpan nilai dari: 6.666666666666666666666666666666" << endl;
    cout << setprecision(20);
    float f = 6.666666666666666666666666666666f;
    cout << "Float: " << f << endl;
    double e = 6.666666666666666666666666666666;
    cout << "Double: " << e << endl;

    return 0;
}
