//YASVIN SYAHGANA
//2311102065
//GUIDED 2 MODUL 5

#include <iostream>
#include <string>
#include <vector>

using namespace std;
const int TABLE_SIZE = 11;
string nama_2311102065;
string phone_number_2311102065;
class HashNode {
public:
  string nama_2311102065;
  string phone_number_2311102065;
  HashNode(string nama_2311102065, string phone_number_2311102065) {
    this->nama_2311102065 = nama_2311102065;
    this->phone_number_2311102065 = phone_number_2311102065;
  }
};
class HashMap {
private:
  vector<HashNode *> table[TABLE_SIZE];

public:
  int hashFunc(string key) {
    int hash_val = 0;
    for (char c : key) {
      hash_val += c;
    }
    return hash_val % TABLE_SIZE;
  }
  void insert(string nama_2311102065, string phone_number_2311102065) {
    int hash_val = hashFunc(nama_2311102065);
    for (auto node : table[hash_val]) {
      if (node->nama_2311102065 == nama_2311102065) {
        node->phone_number_2311102065 = phone_number_2311102065;
        return;
      }
    }
    table[hash_val].push_back(new HashNode(nama_2311102065, phone_number_2311102065));
  }
  void remove(string nama_2311102065) {
    int hash_val = hashFunc(nama_2311102065);
    for (auto it = table[hash_val].begin(); it != table[hash_val].end(); it++) {
      if ((*it)->nama_2311102065 == nama_2311102065) {
        table[hash_val].erase(it);
        return;
      }
    }
  }
  string searchByNama_2311102065(string nama_2311102065) {
    int hash_val = hashFunc(nama_2311102065);
    for (auto node : table[hash_val]) {
      if (node->nama_2311102065 == nama_2311102065) {
        return node->phone_number_2311102065;
      }
    }
    return "";
  }  
  void print() {
    for (int i = 0; i < TABLE_SIZE; i++) {
      cout << i << ": ";
      for (auto pair : table[i]) {
        if (pair != nullptr) {
          cout << "[" << pair->nama_2311102065 << ", " << pair->phone_number_2311102065 << "]";
        }
      }
      cout << endl;
    }
  }
};
int main() {
  HashMap employee_map;
  employee_map.insert("Mistah", "1234");
  employee_map.insert("Pastah", "5678");
  employee_map.insert("Ghana", "91011");
  cout << "NomerHpMistah:" << employee_map.searchByNama_2311102065("Mistah") << endl;
  cout << "PhoneHpPastah:" << employee_map.searchByNama_2311102065("Pastah") << endl;
  employee_map.remove("Mistah");
  cout << "NomerHpMistahsetelahdihapus:" << employee_map.searchByNama_2311102065("Mistah") << endl << endl;
  cout << "HashTable:" << endl;
  employee_map.print();
  return 0;
}