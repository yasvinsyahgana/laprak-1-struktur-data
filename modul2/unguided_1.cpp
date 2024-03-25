#include <iostream>

using namespace std;

int main()
{
    int array_angka[10];
   
    for (int i = 0; i < 10; i++) {
        cout << "masukkan angka ke " << i + 1 << " : ";
        cin >> array_angka[i];
    }

    cout << "Data Array : ";
    for (int i = 0; i < 10; i++)
    {
             cout << array_angka[i] << " ";
    }
    cout << endl;
   
    cout << "Genap : ";
    for (int i = 0; i < 10; i++)
    {
        if (array_angka[i] % 2 == 0) {
             cout << array_angka[i] << " ";
        } 
    }
    cout << endl;

    cout << "Ganjil : ";
    for (int i = 0; i < 10; i++)
    {
        if (array_angka[i] % 2 != 0) {
             cout << array_angka[i] << " ";
        } 
    }
    cout << endl;
    return 0;
}