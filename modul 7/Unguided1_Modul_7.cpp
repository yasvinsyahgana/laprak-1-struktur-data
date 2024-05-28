// YASVIN SYAHGANA
// 2311102065
// UNGUIDED 1

#include <iostream>

using namespace std;

struct Node {
  string data_065;
  Node *next_065;
};
class Queue {
private:
  Node *front_065;
  Node *rear_065;

public:
  Queue() {
    front_065 = NULL;
    rear_065 = NULL;
  }
  bool Empety_065() { return front_065 == NULL; }
  void enqueue(string data_065) {
    Node *newNode = new Node();
    newNode->data_065 = data_065;
    newNode->next_065 = NULL;

    if (Empety_065()) {
      front_065 = newNode;
      rear_065 = newNode;
    } else {
      rear_065->next_065 = newNode;
      rear_065 = newNode;
    }
    cout << " Mahasiswa " << data_065
         << "berhasil di tambahkan ke dalam antrian." << endl;
  }
  void dequeue_065() {
    if (Empety_065()) {
      cout << "antrian kosong" << endl;
    } else {
      Node *temp = front_065;
      cout << "Mahasiswa " << front_065->data_065
           << "telah selesai dilayani dan di keluarkan dari antrian.\n"
           << endl;

      if (front_065 == rear_065) {
        front_065 = NULL;
        rear_065 = NULL;
      } else {
        front_065 = front_065->next_065;
      }
      delete temp;
    }
  }
  int countQueue() {
    int count = 0;
    Node *temp = front_065;
    while (temp != NULL) {
      count++;
      temp = temp->next_065;
    }
    return count;
  }
  void hapusQueue() {
    if (Empety_065()) {
      cout << "Antrian Kosong" << endl;
    } else {
      while (Empety_065()) {
        dequeue_065();
      }
      cout << "Seluruh Antrian telah di hapus." << endl;
    }
  }
  void tampilQueue() {
    if (Empety_065()) {
      cout << "Antrian kosong." << endl;
    } else {
      cout << "Data Antrian Mahasiswa:" << endl;
      Node *temp = front_065;
      int position = 1;
      while (temp != NULL) {
        cout << position << " Nama :" << temp->data_065 << endl;
        temp = temp->next_065;
        position++;
      }
    }
  }
};
int main() {
  Queue queue;
  queue.enqueue("Andi");
  queue.enqueue("Maya");
  queue.tampilQueue();
  cout << " Jumlah antrian : " << queue.countQueue() << endl;
  queue.dequeue_065();
  queue.tampilQueue();
  cout << " Jumlah antrian : " << queue.countQueue() << endl;
  queue.hapusQueue();
  queue.tampilQueue();
  cout << " Jumlah antrian : " << queue.countQueue() << endl;

  return 0;
}