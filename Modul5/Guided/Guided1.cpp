//YASVIN SYAHGANA
//2311102065
//GUIDED 1 MODUL 5

#include <iostream>
using namespace std;
const int MAX_SIZE = 10;
// Fungsi hash sederhana
int hash_func(int key_2311102065) { return key_2311102065 % MAX_SIZE; }
// Struktur data untuk setiap node
struct Node {
  int key_2311102065;
  int value_2311102065;
  Node *next_2311102065;
  Node(int key_2311102065, int value_2311102065) : key_2311102065(key_2311102065), value_2311102065(value_2311102065), next_2311102065(nullptr) {}
};
// Class hash table
class HashTable {
private:
Node **table;
public:
  HashTable() { table = new Node *[MAX_SIZE](); }
  ~HashTable() {
    for (int i = 0; i < MAX_SIZE; i++) {
      Node *current = table[i];
      while (current != nullptr) {
        Node *temp = current;
        current = current->next_2311102065;
        delete temp;
      }
    }
    delete[] table;
  }
  // Insertion
  void insert(int key_2311102065, int value_2311102065) {
    int index = hash_func(key_2311102065);
    Node *current = table[index];
    while (current != nullptr) {
      if (current->key_2311102065 == key_2311102065) {
        current->value_2311102065 = value_2311102065;
        return;
      }
      current = current->next_2311102065;
    }
    Node *node = new Node(key_2311102065, value_2311102065);
    node->next_2311102065 = table[index];
    table[index] = node;
  }
  // Searching
  int get(int key_2311102065) {
    int index = hash_func(key_2311102065);
    Node *current = table[index];
    while (current != nullptr) {
      if (current->key_2311102065 == key_2311102065) {
        return current->value_2311102065;
      }
      current = current->next_2311102065;
    }
    return -1;
  }
  // Deletion
  void remove(int key_2311102065) {
    int index = hash_func(key_2311102065);
    Node *current = table[index];
    Node *prev = nullptr;
    while (current != nullptr) {
      if (current->key_2311102065 == key_2311102065) {
        if (prev == nullptr) {
          table[index] = current->next_2311102065;
        } else {
          prev->next_2311102065 = current->next_2311102065;
        }
        delete current;
        return;
      }
      prev = current;
      current = current->next_2311102065;
    }
  }
  // Traversal
  void traverse() {
    for (int i = 0; i < MAX_SIZE; i++) {
      Node *current = table[i];
      while (current != nullptr) {
        cout << current->key_2311102065 << ": " << current->value_2311102065 << endl;
        current = current->next_2311102065;
      }
    }
  }
};
int main() {  
  HashTable ht;
  // Insertion
  ht.insert(1, 10);
  ht.insert(2, 20);
  ht.insert(3, 30);
  // Searching
  cout << "Get key_2311102065 1: " << ht.get(1) << endl;
  cout << "Get key_2311102065 4: " << ht.get(4) << endl;
  // Deletion
  ht.remove(4);
  // Traversal
  ht.traverse();
  cout<<endl;
  return 0;
}