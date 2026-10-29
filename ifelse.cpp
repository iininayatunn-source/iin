#include <iostream>
using namespace std;

int main() {
    string password;

    cout << "====== Login ======" << endl;
    cout << "Masukan Password: ";
    cin >> password;

    // percabangan if/else
    if (password == "kopi"){
        cout << "selamat datang bos!" << endl;
    } else {
        cout << "password salah, coba lagi!" << endl;
    }

    cout << "terimakasih sudah menggunakan aplikasi ini!" << endl;
    return 0;
}