// Nama Produk, Jumlah Produk dan Tiper Produk
// menyimpan data produk
// mengurutkan data produk berdasarkan jumlah produk
// mencari data produk dengan mudah berdasarkan nama produk.

#include <iostream>
#include <string>
using namespace std;

class Node {
public: 
    //isi disini
    string nama;
    int jumlah;
    string tipe;
    Node* next;
};
class ManajemenProduk {
private:
    Node* first;
public:
    ManajemenProduk() {
        first = NULL;
    }
    void tambahProduk() {
        cout << "========== TAMBAH PRODUK ==========" << endl;

        Node* newNode = new Node;

        cout << "Nama Produk : " << endl;
        getline(cin, newNode->nama);
        cout << "Jumlah Produk : " << endl;
        cin >> newNode->jumlah;
        cin.ignore(); // Membersihkan buffer input
        cout << "Tipe Produk : " << endl;
        getline(cin, newNode->tipe);

        //isi disini

        if (first == NULL) {
            first = newNode;
        }
        else {
            Node* current = first;
            while (current->next != NULL) {
                current = current->next;
            }
        }

        int posisi = NULL;
        posisi++;
        cout << "Produk berhasil ditambahkan!" << endl;

    }
}

    //isi disini
void tampilkanSemuaProduk() {
    cout << "========== SEMUA DATA PRODUK ==========" << endl;
    Node* first;
    if (first == NULL) {
        cout << "Belum ada data produk yang tersimpan." << endl;
        return;
    }
    else {
        Node* current = first;

        //isi disini

        while (current != NULL) {
            cout << "------------------------------------" << endl;
            cout << "Nama    : " << current->nama << endl;
            cout << "Jumlah   : " << current->jumlah << endl;
            cout << "Tipe  : " << current->tipe << endl;
            cout << "------------------------------------" << endl;
            current = current->next;
        }
    }
}
    
   




//mencari data produk dengan mudah berdasarkan nama produk.
void cariProdukByNama() {
    cout << "========== CARI PRODUK BERDASARKAN NAMA ==========" << endl;
    Node* first;

    if (first == NULL) {

        cout << "Belum ada data produk yang tersimpan." << endl; 
    else {
        string targetNama;
        cout << "Nama Produk yang dicari: " << endl;
        getline(cin, targetNama);
        Node* current = first;
        int posisi = 0;

    }
        while (current != NULL) {
            posisi++;
            //isi disini
            while (current != NULL) {
                if (current->nama == targetNama) {
                    cout << "Produk ditemukan!" << endl;
                    cout << "Nama    : " << current->nama << endl;
                    cout << "Jumlah   : " << current->jumlah << endl;
                    cout << "Tipe : " << current->tipe << endl;
                    return;
                }
            }
        }

            if (current == NULL) {
                cout << "Nama produk " << targetNama << " TIDAK DITEMUKAN" <<
            }
        
    }
}

// mengurutkan data produk berdasarkan jumlah produk
void algorithmaSortByJumlahProduk() {
    Node* first;
    if (first == NULL || first->next == NULL) {
        return; // Tidak perlu sorting jika hanya terdapat 0 atau 1 node
        Node* current;
        Node* last = NULL;
        current = first;
    }
}


//isi disini
int main() {
    ManajemenProduk manajemenProduk;
    int pilihan;
    do {
        cout << "========== APLIKASI MANAJEMEN DATA PRODUK ==========" << endl; cout << "1. Tambah Produk" << endl;
        cout << "2. Tampilkan Semua Produk" << endl;
        cout << "3. Cari Produk berdasarkan Nama" << endl;
        cout << "4. Urutkan Produk berdasarkan Jumlah" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;
        cin.ignore();
        switch (pilihan) {
        case 1:
            tambahProduk();
            break;
        case 2:
            tampilkanSemuaProduk();
            break;
        case 3:
            cariProdukByNama();
            break;
        case 4:
            void algorithmaSortByJumlahProduk();
            break;
        case 5:
            cout << "Terima kasih! Program selesai." << endl;
            break;
        default:
            cout << "Pilihan tidak valid. Silakan coba lagi." << endl; cout << endl;
        }
    } while (pilihan != 5);
    return 0;
}

// JAWABAN
// 2. Single Linkedlist
// 3. Jika menggunakan queue maka data yang masuk paling awal diletakkan di paling awal, dan data ke 2 diletakkan setelahnya.Dan data yang keluar juga di set paling awal
// 4. Misalnya Undo Dan Redo, jika menggunakan undo dan redo maka data yang terakhir yang akan keluar bukan data yang pertama
// 5. a. 4
//    b. Preorder,  50 48 30 20 15 32 25 35 31 70 65 67 66 69 90 98 94 99
