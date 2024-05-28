// YASVIN SYAHGANA
// 2311102065
// UNGUIDED 2

#include <iostream>

using namespace std;

struct Node {
  string nama_065;
  string nim_065;
  Node *next_065;
};
Node *top;
void init() { top = NULL; }
bool isEmpety() { return top == NULL; }
void push(string nama_065, string nim_065) {
  Node *newNode = new Node;
  newNode->nama_065 = nama_065;
  newNode->nim_065 = nim_065;
  newNode->next_065 = top;
  top = newNode;
  cout << " Data Mahasiswa " << nama_065 << " dengan NIM " << nim_065
       << " berhasil  di tambahkan!." << endl;
}
void pop() {
  if (isEmpety()) {
    cout << "Data mahasiswa kosong!" << endl;
  } else {
    Node *temp = top;
    cout << "Data Mahasiswa " << temp->nama_065 << " dengan NIM "
         << temp->nim_065 << "dihapus dari stack" << endl;
    top = top->next_065;
    delete temp;
  }
}
void reset() {
  while (isEmpety()) {
    pop();
  }
  cout << " Data mahasiswa berhasil di reset! " << endl;
}
void TAMPILKAN() {
  if (isEmpety()) {
    cout << " Data  Mahasiswa kosong! " << endl;
  } else {
    Node *current = top;
    int position = 1;
    while (current != NULL) {
      cout << position << " Nama :" << current->nama_065 << endl;
      cout << " NIM : " << current->nim_065 << endl;
      current = current->next_065;
      position++;
    }
  }
}
int main() {
  int choice;
  string nama_065, nim_065;
  init();
loop_menu:
  cout << "\n======= Data Mahasiswa =======" << endl;
  cout << " 1. Masukkan Data Mahasiswa " << endl;
  cout << " 2. Hapus Satu Data Mahasiwa " << endl;
  cout << " 3. Reset data Mahasiwa " << endl;
  cout << " 4. Tampilkan Data Mahasiswa " << endl;
  cout << " 5. Keluar. " << endl;
  cout << " Masukkan Pilihan Anda (1-5) = ";
  cin >> choice;
  cout << endl;
  switch (choice) {
  case 1:
    cout << " ======= Masukkan Data Mahasiswa =======" << endl;
    cout << " Masukkan Nama : ";
    cin >> nama_065;
    cout << " Masukkan NIM : ";
    cin >> nim_065;
    push(nama_065, nim_065);
    break;
  case 2:
    pop();
    break;
  case 3:
    reset();
    break;
  case 4:
    cout << "====Tampilkan Data Mahasiswa====" << endl;
    TAMPILKAN();
    break;
  case 5:
    cout << " Terimakasih!" << endl;

    return 0;
  default:
    cout << " Pilihan tidak valid " << endl;
  }
  goto loop_menu;
}