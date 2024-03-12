#include <iostream>

using namespace std;

struct DataDiri
{
    string nama;
    int umur;
    string status;
    string hobi;
};

int main() {
    DataDiri ghana;
    ghana.nama = "Yasvin Syahgana";
    ghana.umur = 20;
    ghana.hobi = "olahraga";
    ghana.status = "Mahasiswa";
    cout << "Nama : " << ghana.nama << endl;
    cout << "Umur : " << ghana.umur << endl;
    cout << "Hobi : " << ghana.hobi << endl;
    cout << "Status : " << ghana.status << endl;
    return 0;
}