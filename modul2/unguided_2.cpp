#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cout << "Masukkan dimensi 1 : ";
    cin >> a;

    cout << "Masukkan dimensi 2 : ";
    cin >> b;

    cout << "Masukkan dimensi 3 : ";
    cin >> c;

    int array_dim3[a][b][c];
    for (int i = 0; i <a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            for (int k = 0; k < c; k++)
            {
                cout << "Masukkan elemen ke [" << i << "][" << j << "][" << k << "] : ";
                cin >> array_dim3[i][j][k];
            }
        }

        cout << endl;
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            for (int k = 0; k < c; k++)
            {
                cout << "Data Array[" << i << "][" << j << "][" << k << "] = " << array_dim3[i][j][k] << endl;
            }
        }
    }
    cout << endl;

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            for (int k = 0; k < c; k++)
            {
                cout << array_dim3[i][j][k] << ends;
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
