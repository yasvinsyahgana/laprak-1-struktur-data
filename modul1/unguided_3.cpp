#include <iostream>
#include <map>

using namespace std;

int main() {
    map <string, int> pakaian;
    pakaian["gamis"] = 1000;
    pakaian["kemeja"] = 200;
    pakaian["koko"] = 900;
    string pakai;
    cout << "Masukkan Nama Pakaian : ";
    cin >> pakai;
    int hargaa = pakaian[pakai];
    if (hargaa == 0) {
        cout << "Pakaian tidak ditemukan " << endl;
        return 0;
    }
    cout << "Harganya adalah : " << pakaian[pakai] << endl;
    return 0;
}