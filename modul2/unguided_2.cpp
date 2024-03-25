#include <iostream>

using namespace std;

int main() {
    int panj_arr;
    cout << "masukkan Panjang data : ";
    cin >> panj_arr;
    float datanya[panj_arr];
    float sum = 0;

    for (int i = 0; i< panj_arr; i++) {
        cout << "Masukkan data ke " << i << " : ";
        cin >> datanya[i];
    }

    float min = datanya[0];
    float max = datanya[0];

    for (int i = 0; i< panj_arr; i++) {

        if (datanya[i] > max) {
            max = datanya[i];
        }
        
    }

     for (int i = 0; i< panj_arr; i++) {

        if (datanya[i] < min) {
            min = datanya[i];
        }
    
    }


     for (int i = 0; i < panj_arr; i++) {
    
        sum += datanya[i];
    }

    cout << "Minimum : " << min << endl;

    cout << "Maximum : " << max << endl;

    cout << "Rata Rata : " << sum/panj_arr << endl;


    return 0;
}