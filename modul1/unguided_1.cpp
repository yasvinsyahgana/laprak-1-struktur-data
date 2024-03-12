#include <iostream>

using namespace std;

double kuadrat_bil(double c) {
    double kuadrat = c * c;
    return kuadrat;
}

double kubik_bil(double c) {
    double kubik = c * c * c;
    return kubik;
}

int main() {
    double bill;
    cout << "Masukkan Bilangan : ";
    cin >> bill;
    double kuadrat = kuadrat_bil(bill);
    double kubik = kubik_bil(bill);
    cout << "Nilai Kuadrat : " << kuadrat << endl;
    cout << "Nilai Kubik : " << kubik << endl;
    return 0;
}