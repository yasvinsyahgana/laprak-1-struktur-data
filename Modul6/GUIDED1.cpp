//Yasvin Syahgana
//2311102065
//GUIDED 1
#include <iostream>
using namespace std;
string arrayBuku[5];
int maksimal_065 = 5, top_065 = 0;
bool isFull() {
  if (top_065 == maksimal_065) {
    return true;
  } else {
    return false;
  }
}
bool isEmpty() {
  if (top_065 == 0) {
    return true;
  } else {
    return false;
  }
}
void pushArrayBuku(string data) {
  if (isFull()) {
    cout << "data telah penuh" << endl;
  } else {
    arrayBuku[top_065] = data;
    top_065++;
  }
}
void popArrayBuku() {
  if (isEmpty()) {
    cout << "tidak ada data yang dihapus" << endl;
  } else {
    arrayBuku[top_065 - 1] = "";
    top_065--;
  }
}
void peekArrayBuku(int posisi) {
  if (isEmpty()) {
    cout << "tidak ada data yang bisa dilihat" << endl;
  } else {
    int index = top_065;
    for (int i = 1; i <= posisi; i++) {
      index--;
    }
    cout << "posisi ke " << posisi << " adalah " << arrayBuku[index] << endl;
  }
}
int countStack() { return top_065; }
void changeArrayBuku(int posisi, string data) {
  if (posisi > top_065) {
    cout << "posisi melebihi data yang ada" << endl;
  } else {
    int index = top_065;
    for (int i = 1; i <= posisi; i++) {
      index--;
    }
    arrayBuku[index] = data;
  }
}
void destroyArraybuku() {
  for (int i = top_065; i <= 0; i--) {
    arrayBuku[i] = "";
  }
  top_065 = 0;
}
void cetakArrayBuku() {
  if (isEmpty()) {
    cout << "tidak ada data yang dicetak" << endl;
  } else {
    for (int i = top_065; i >= 0; i--) {
      cout << arrayBuku[i] << endl;
    }
  }
}
int main() {
  cout<<"Yasvin Syahgana"<<endl;
  cout<<"GUIDED 1\n";
  pushArrayBuku("Kalkulus");
  pushArrayBuku("Struktur Data");
  pushArrayBuku("Matematika Distit");
  pushArrayBuku("Dasar Multimedia");
  pushArrayBuku("Inggris");
  cetakArrayBuku();
  cout << "\n" << endl;
  cout << "apakah data stack penuh? " << isFull() << endl;
  cout << "apakah data stack kosong? " << isEmpty() << endl;
  peekArrayBuku(2);
  popArrayBuku();
  cout << "banyaknya data = " << countStack() << endl;
  changeArrayBuku(2, "Bahasa Jerman");
  cetakArrayBuku();
  cout << "\n" << endl;
  destroyArraybuku();
  cout << top_065;
  cetakArrayBuku();
}
