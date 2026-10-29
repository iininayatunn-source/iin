#include <iostream>
using namespace std;

int main (){

    cout << "=== Program Pembayaran ===" << endl;
    unsigned int total_belanja;

    cout << "Masukan total belanja:";
    cin >> total_belanja;

    // menggunakan percabangan if
    if(total_belanja > 100000){
        cout << "selamat anda dapat hadiah" <<endl;

    }
    cout << "terimakasih sudah berbelanja di toko kami" << endl;
    return 0;
}