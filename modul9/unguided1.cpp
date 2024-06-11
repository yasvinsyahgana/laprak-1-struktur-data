#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int jumlahSimpu2311102065;
    cout << "Silakan masukkan jumlah simpul: ";
    cin >> jumlahSimpu2311102065;

    string simpul[jumlahSimpu2311102065];
    int busur[jumlahSimpu2311102065][jumlahSimpu2311102065];

    for (int i = 0; i < jumlahSimpu2311102065; i++) {
        cout << "Simpul " << i + 1 << ": ";
        cin >> simpul[i];
    }

    for (int i = 0; i < jumlahSimpu2311102065; i++) {
        for (int j = 0; j < jumlahSimpu2311102065; j++) {
            cout << "Silakan masukkan bobot antara simpul " << simpul[i] << " dan " << simpul[j] << ": ";
            cin >> busur[i][j];
        }
    }

    cout << "\nGraf yang dihasilkan:\n";
    cout << setw(15) << " ";
    for (int i = 0; i < jumlahSimpu2311102065; i++) {
        cout << setw(15) << simpul[i];
    }
    cout << endl;

    for (int i = 0; i < jumlahSimpu2311102065; i++) {
        cout << setw(15) << simpul[i];
        for (int j = 0; j < jumlahSimpu2311102065; j++) {
            cout << setw(15) << busur[i][j];
        }
        cout << endl;
    }

    return 0;
}