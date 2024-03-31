// YASVIN SYAHGANA
// 2311102065
// UNGUIDED 1
#include <iostream>
#include <string>

using namespace std;

class Node {
public:
    string nama;
    int umur;
    Node* next;

    Node(string nama, int umur) : nama(nama), umur(umur), next(nullptr) {}
};

class SingleLinkedList {
public:
    Node* head;

    SingleLinkedList() : head(nullptr) {}

    void tambahSiswaDiPosisi(const string& nama, int umur, int posisi) {
        Node* newNode = new Node(nama, umur);
        if (posisi == 1) {
            newNode->next = head;
            head = newNode;
        } else {
            Node* current = head;
            Node* prev = nullptr;
            int currPosisi = 1;

            while (current != nullptr && currPosisi < posisi) {
                prev = current;
                current = current->next;
                currPosisi++;
            }

            if (prev == nullptr) {
                head = newNode;
            } else {
                prev->next = newNode;
            }
            newNode->next = current;
        }
    }

    bool hapusSiswa(const string& nama) {
        Node* current = head;
        Node* prev = nullptr;

        while (current != nullptr && current->nama != nama) {
            prev = current;
            current = current->next;
        }

        if (current == nullptr) {
            return false;
        }

        if (prev == nullptr) {
            head = current->next;
        } else {
            prev->next = current->next;
        }

        delete current;
        return true;
    }

    void tampilkanList() {
        Node* current = head;
        while (current != nullptr) {
            cout << "Nama: " << current->nama << ", Umur: " << current->umur << endl;
            current = current->next;
        }
    }
};

void menu() {
    SingleLinkedList listSiswa;
    int pilihan, umur, posisi;
    string nama;

    while (true) {
        cout << "Menu:\n";
        cout << "1. Tambah Siswa\n";
        cout << "2. Hapus Siswa\n";
        cout << "3. Tampilkan List Siswa\n";
        cout << "4. Keluar\n";
        cout << "Masukkan pilihan Anda: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan nama siswa: ";
                cin >> nama;
                cout << "Masukkan umur siswa: ";
                cin >> umur;
                cout << "Masukkan posisi untuk menambahkan siswa: ";
                cin >> posisi;
                listSiswa.tambahSiswaDiPosisi(nama, umur, posisi);
                break;
            case 2:
                cout << "Masukkan nama siswa yang akan dihapus: ";
                cin >> nama;
                if (listSiswa.hapusSiswa(nama)) {
                    cout << nama << " berhasil dihapus dari list.\n";
                } else {
                    cout << nama << " tidak ditemukan dalam list.\n";
                }
                break;
            case 3:
                listSiswa.tampilkanList();
                break;
            case 4:
                cout << "Terima kasih telah menggunakan program ini.\n";
                return;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi.\n";
        }
    }
}

int main() {
    menu();
    return 0;
}
