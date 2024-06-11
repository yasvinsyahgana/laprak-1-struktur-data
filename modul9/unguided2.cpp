#include <iostream>
using namespace std;

// Deklarasi Pohon
struct Pohon {
    char data;
    Pohon *left, *right, *parent;
};

Pohon *root2311102065 = NULL;

// Buat Node Baru
Pohon* buatNode(char data, Pohon* parent = NULL) {
    Pohon* node = new Pohon();
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    node->parent = parent;
    return node;
}

// Menemukan Node Berdasarkan Data
Pohon* findNode(Pohon *node, char data) {
    if (!node) return NULL;
    if (node->data == data) return node;
    Pohon* leftResult = findNode(node->left, data);
    if (leftResult) return leftResult;
    return findNode(node->right, data);
}

// Tambah Node Kiri atau Kanan
void tambahNode(char data, char parentData, bool kiri) {
    if (!root2311102065) {
        root2311102065 = buatNode(data);
        cout << "\nNode " << data << " berhasil dibuat menjadi root2311102065." << endl;
    } else {
        Pohon* parentNode = findNode(root2311102065, parentData);
        if (parentNode) {
            if (kiri) {
                if (!parentNode->left) {
                    parentNode->left = buatNode(data, parentNode);
                    cout << "\nNode " << data << " berhasil ditambahkan ke child kiri " << parentNode->data << endl;
                } else {
                    cout << "\nNode " << parentNode->data << " sudah ada child kiri!" << endl;
                }
            } else {
                if (!parentNode->right) {
                    parentNode->right = buatNode(data, parentNode);
                    cout << "\nNode " << data << " berhasil ditambahkan ke child kanan " << parentNode->data << endl;
                } else {
                    cout << "\nNode " << parentNode->data << " sudah ada child kanan!" << endl;
                }
            }
        } else {
            cout << "\nParent tidak ditemukan!" << endl;
        }
    }
}

// Menampilkan Child dan Descendant dari Node
void displayChildAndDescendant(Pohon *node) {
    if (!node) {
        cout << "\nNode yang ditunjuk tidak ada!" << endl;
    } else {
        cout << "\nChild dari node " << node->data << " : ";
        if (node->left) {
            cout << "Left: " << node->left->data << " ";
        } else {
            cout << "Left: NULL ";
        }
        if (node->right) {
            cout << "Right: " << node->right->data << " ";
        } else {
            cout << "Right: NULL ";
        }
        cout << "\nDescendants dari node " << node->data << " : ";
        if (node->left || node->right) {
            if (node->left) cout << " " << node->left->data;
            if (node->right) cout << " " << node->right->data;
            displayChildAndDescendant(node->left);
            displayChildAndDescendant(node->right);
        } else {
            cout << "Tidak ada descendant";
        }
        cout << "\n";
    }
}

// Menu Interaktif
void menu() {
    int choice;
    char data, parentData;

    do {
        cout << "\nMenu:\n";
        cout << "1. Tambah Node Kiri\n";
        cout << "2. Tambah Node Kanan\n";
        cout << "3. Tampilkan Child dan Descendant\n";
        cout << "4. Keluar\n";
        cout << "Pilih: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Masukkan data untuk node baru: ";
                cin >> data;
                if (root2311102065) {
                    cout << "Masukkan data parent: ";
                    cin >> parentData;
                }
                tambahNode(data, root2311102065 ? parentData : '\0', true);
                break;
            case 2:
                cout << "Masukkan data untuk node baru: ";
                cin >> data;
                if (root2311102065) {
                    cout << "Masukkan data parent: ";
                    cin >> parentData;
                }
                tambahNode(data, root2311102065 ? parentData : '\0', false);
                break;
            case 3:
                cout << "Masukkan data node: ";
                cin >> data;
                displayChildAndDescendant(findNode(root2311102065, data));
                break;
            case 4:
                cout << "Keluar..." << endl;
                break;
            default:
                cout << "Pilihan tidak valid!" << endl;
        }
    } while (choice != 4);
}

int main() {
    menu();
    return 0;
}
