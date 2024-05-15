//YASVIN SYAHGANA
//2311102065
//UNGUIDED 1 MODUL 5

#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
  string name_gana;
  string nim_2311102065;
  int nilai_2311102065;
};

class HashTable {
private:
  static const int tableSize = 100;
  struct Node {
    Mahasiswa data;
    Node *next;
  };
  Node *hashtable[tableSize];

public:
  HashTable() {
    for (int i = 0; i < tableSize; i++) {
      hashtable[i] = nullptr;
    }
  }

  int hashFunction(string key) {
    int hash = 0;
    for (int i = 0; i < key.length(); i++) {
      hash += (int)key[i];
    }
    return hash % tableSize;
  }

  void addData(Mahasiswa mhs) {
    int index = hashFunction(mhs.nim_2311102065);
    Node *newNode = new Node;
    newNode->data = mhs;
    newNode->next = hashtable[index];
    hashtable[index] = newNode;
    cout << "Data mahasiswa berhasil ditambahkan" << endl;
  }

  void removeData(string nim_2311102065) {
    int index = hashFunction(nim_2311102065);
    Node *currentNode = hashtable[index];
    Node *previousNode = nullptr;
    while (currentNode != nullptr) {
      if (currentNode->data.nim_2311102065 == nim_2311102065) {
        if (previousNode == nullptr) {
          hashtable[index] = currentNode->next;
        } else {
          previousNode->next = currentNode->next;
        }
        delete currentNode;
        cout << "Data mahasiswa dengan NIM " << nim_2311102065 << " berhasil dihapus"
             << endl;
        return;
      }
      previousNode = currentNode;
      currentNode = currentNode->next;
    }
    cout << "Data mahasiswa dengan NIM " << nim_2311102065 << " tidak ditemukan" << endl;
  }

  void findDataByNIM_2311102065(string nim_2311102065) {
    int index = hashFunction(nim_2311102065);
    Node *temp = hashtable[index];
    while (temp != nullptr) {
      if (temp->data.nim_2311102065 == nim_2311102065) {
        cout << "Data mahasiswa dengan NIM " << nim_2311102065 << ":" << endl;
        cout << "Nama : " << temp->data.name_gana << endl;
        cout << "Nilai: " << temp->data.nilai_2311102065 << endl;
        return;
      }
      temp = temp->next;
    }
    cout << "Data mahasiswa dengan NIM " << nim_2311102065 << " tidak ditemukan" << endl;
  }

  void findDataByRange(int min, int max) {
    int count = 0;
    for (int i = 0; i < tableSize; i++) {
      Node *temp = hashtable[i];
      while (temp != NULL) {
        if (temp->data.nilai_2311102065 >= min && temp->data.nilai_2311102065 <= max) {
          if (count == 0) {
            cout << "Data mahasiswa dengan nilai antara " << min<< " dan " << max << " : " << endl; 
          }
          cout << "NIM: " << temp->data.nim_2311102065 << endl;
          cout << "Nama: " << temp->data.name_gana << endl;
          cout << "Nilai: " << temp->data.nilai_2311102065 << endl;
          count++;
        }
        temp = temp->next;
      }
    }
    if (count == 0) {
      cout << "Tidak ditemukan data mahasiswa dengan nilai antara " << min
           << " dan " << max << endl;
    }
  }
};

int main() {
  cout<<"YASVIN SYAHGANA"<<endl;
  cout<<"2311102065"<<endl;
  HashTable hashTable;
  int choice;
  do {
    cout << "||===================================================||" << endl;
    cout << "|| MENU:" << endl;
    cout << "|| 1. TAMBAH DATA MAHASISWA|| " << endl;
    cout << "|| 2. HAPUS DATA MAHASISWA ||" << endl;
    cout << "|| 3. CARI DATA MAHASISWA BERDASARKAN NIM ||" << endl;
    cout << "|| 4. CARI DATA MAHASISWA BERDASARKAN NILAI ||" << endl;
    cout << "|| 5. EXIT ||" << endl;
    cout << "|| Pilih:  ";
    cin >> choice;
    cout << "||===================================================||" << endl;

    switch (choice) {
    case 1: {
      Mahasiswa mhs;
      cout << "Masukkan Nama mahasiswa: ";
      cin.ignore();
      getline(cin, mhs.name_gana);
      cout << "Masukkan Nim mahasiswa: ";
      cin >> mhs.nim_2311102065;
      cout << "Masukkan nilai mahasiswa: ";
      cin >> mhs.nilai_2311102065;
      hashTable.addData(mhs);
      break;
    }
    case 2: {
      string nim_2311102065;
      cout << "Masukkan Nim mahasiswa yang ingin dihapus: ";
      cin >> nim_2311102065;
      hashTable.removeData(nim_2311102065);
      break;    
    }
    case 3: {
      string nim_2311102065;
      cout << "Masukkan Nim mahasiswa yang ingin dicari: ";
      cin >> nim_2311102065;
      hashTable.findDataByNIM_2311102065(nim_2311102065); 
      break;
    }
    case 4: {
      int min, max;
      cout << "Masukkan rentang nilai (minimal dan maksimal): ";
      cin >> min >> max;
      hashTable.findDataByRange(min, max);
      break;
    }
    case 5:
      cout << "Terima kasih" << endl;
      break;
    default:
      cout << "Pilihan tidak valid" << endl;
    }
  } while (choice != 5);

  return 0;
}