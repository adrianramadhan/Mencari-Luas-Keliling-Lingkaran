#include <iostream>

using namespace std;

int main () {

    float a, b, hasil;
    float c = 3.14;
    float d = 2;

    cout << "Selamat datang di program lingkaran \n";
    cout << "Berikut menu yang ada \n";
    cout << "1. Mencari Luas Lingkaran \n";
    cout << "2. Mencari Keliling Lingkaran \n \n";
    cout << "Pilih Menu : ";
    cin >> a;

    if (a == 1)
    {
        // Rumus Luas Lingkaran //
        cout << "Masukan Jari - Jari Lingkaran : ";
        cin >> b;
        hasil = c * b * b ;
        cout << "Luas Lingkaran Adalah : " << hasil << endl;
    }
    else if (a == 2)
    {
        // Rumus Keliling Lingkaran //
        cout << "Masukan Jari - Jari Lingkaran : ";
        cin >> b;
        hasil = c * b * d ;
        cout << "Keliling Lingkaran Adalah : " << hasil << endl;
    }
    else
    {
        cout << "Perintah tidak tersedia";
    }
    cout << "Terimakasih Telah Menggunakan Program ini :)" << endl;
    cin.get();
    return 0;
}