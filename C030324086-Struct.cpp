#include <iostream>
#include <conio.h>

using namespace std;

struct Mahasiswa
{
    string nim;
    string nama;
    string alamat;
    float ipk;
};

int main(int argc, char const *argv[])
{
    Mahasiswa Farish;
    Mahasiswa *ptrFarish = &Farish;

    cout << "Masukkan NIM: ";
    cin >> ptrFarish->nim;
    system("cls");
    cout << "Masukkan Nama: ";
    cin >> ptrFarish->nama;
    system("cls");
    cout << "Masukkan Alamat: ";
    cin >> ptrFarish->alamat;
    system("cls");
    cout << "Masukkan ipk: ";
    cin >> ptrFarish->ipk;
    system("cls");
    cout << "NIM: " << ptrFarish->nim << endl;
    cout << "Nama: " << ptrFarish->nama << endl;
    cout << "Alamat: " << ptrFarish->alamat << endl;
    cout << "IPK: " << ptrFarish->ipk << endl;
    return 0;
}
