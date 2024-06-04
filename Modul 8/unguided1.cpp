#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

string sentence;
char c;

void toLower() {
    string temp_065;
    for (int i = 0; i < sentence.length(); i++) {
        temp_065 += tolower(sentence[i]);
    }
    sentence = temp_065;
}

void selection_sort()
{
    int min, i, j;
    char temp_065;
    toLower();
    for (i = 0; i < sentence.length(); i++)
    {
        min = i;
        for (j = i + 1; j < sentence.length(); j++)
        {
            if (sentence[j] < sentence[min])
            {
                min = j;
            }
        }
        temp_065 = sentence[i];
        sentence[i] = sentence[min];
        sentence[min] = temp_065;
    }
}
void binarysearch()
{
    int awal, akhir, tengah, b_flag = 0;
    awal = 0;
    akhir = sentence.length();
    while (b_flag == 0 && awal <= akhir)
    {
        tengah = (awal + akhir) / 2;
        if (sentence[tengah] == c)
        {
            b_flag = 1;
            break;
        }
        else if (sentence[tengah] < c)
            awal = tengah + 1;
        else
            akhir = tengah - 1;
    }
    if (b_flag == 1)
        cout << "\n Karakter '" << c << "' ditemukan pada index ke - " << tengah << endl;
    else
        cout << "\nData tidak ditemukan\n";
}
int main()
{
    cout << "\t ---------PENCARIAN BINARRY---------- " << endl;
    cout << "Masukkan kalimat : ";
    getline(cin, sentence);
    cout << "\nMasukkan karakter yang ingin Anda cari : ";
    cin >> c;
    c = tolower(c);
    cout << "\nKalimat yang diurutkan berdasarkan karakter : ";
    selection_sort();
    for (int x = 0; x < sentence.length(); x++)
        cout << sentence[x];
    cout << endl;
    binarysearch();

    
    return EXIT_SUCCESS;
}