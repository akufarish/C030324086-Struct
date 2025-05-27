#include <iostream>

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
    Mahasiswa farish;
    farish.nim = "C030324086";
    farish.nama = "Farish";
    farish.alamat = "Banjarmasin";
    farish.ipk = 4.01;

    cout << "Nama: " << farish.nama << endl;
    cout << "Alamat: " << farish.alamat << endl;
    cout << "NIM: " << farish.nim << endl;
    cout << "IPK: " << farish.ipk << endl;
    return 0;
}
