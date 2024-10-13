#include <iostream>
//Nama: Zulita Lutfiana
//NIM: F12.2023.00089

using namespace std;

int main()
{

    int x;

    cout << "Masukkan Angka: ";
    cin >> x;

    if (x % 2 == 0){
        cout << "Genap" << endl;
    }else{
        cout << "Ganjil" << endl;
    }

    cout << "====------====-----===="<<endl;

    if (x % 3 == 0){
        cout << "Kelipatan 3" << endl;
    }else{
        cout << "Bukan Kelipatan 3" << endl;
    }
    return 0;
}

