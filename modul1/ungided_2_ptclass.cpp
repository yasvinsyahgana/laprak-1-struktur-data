#include <iostream>

using namespace std;

class Kucing
{
private:
    int makan = 0;
public:
    string nama;
    int umur;
    int cek_makan () {
        return makan;
    }
};




int main() {
    Kucing miaw2;
    miaw2.nama = "Sicila";
    miaw2.umur = 1;
    cout << "Nama Kucing : " << miaw2.nama << endl;
    cout << "Umur Kucing : " << miaw2.umur << endl;
    cout << "Kucing Makan sebanyak " << miaw2.cek_makan() << " kali" << endl;
    return 0;
}