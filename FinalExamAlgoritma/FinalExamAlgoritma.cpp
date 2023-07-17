//1
#include <iostream>
#include <string>

using namespace std;

const int MAX_MAHASISWA = 100;
int NIM[MAX_MAHASISWA];
string nama[MAX_MAHASISWA];
string jurusan[MAX_MAHASISWA];
int tahunMasuk[MAX_MAHASISWA];
int jumlahMahasiswa = 0;

void tambahMahasiswa() {
    if (jumlahMahasiswa < MAX_MAHASISWA) {
        cout << "========== TAMBAH MAHASISWA ==========" << endl;
        cout << "NIM: ";
        cin >> NIM[jumlahMahasiswa];
        cin.ignore();
        cout << "Nama: ";
        getline(cin, nama[jumlahMahasiswa]);
        cout << "Jurusan: ";
        getline(cin, jurusan[jumlahMahasiswa]);
        cout << "Tahun Masuk: ";
        cin >> tahunMasuk[jumlahMahasiswa];
        cin.ignore();
        jumlahMahasiswa++;
        cout << "Mahasiswa berhasil ditambahkan!" << endl;
    }
    else {
        cout << "Kapasitas maksimum mahasiswa telah tercapai." << endl;
    }
}

void tampilkanSemuaMahasiswa() {
    cout << "========== DAFTAR MAHASISWA ==========" << endl;
    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "NIM    : " << NIM[i] << endl;
        cout << "Nama   : " << nama[i] << endl;
        cout << "Jurusan: " << jurusan[i] << endl;
        cout << "Tahun  : " << tahunMasuk[i] << endl;
        cout << endl;
    }
}

void AlgoritmaMencariMahasiswaByNIM() {
    int nimCari;
    bool ditemukan = false;

    cout << "========== CARI MAHASISWA BERDASARKAN NIM ==========" << endl;
    cout << "Masukkan NIM yang ingin dicari: ";
    cin >> nimCari;

    for (int i = 0; i < jumlahMahasiswa; i++) {
        if (NIM[i] == nimCari) {
            cout << "Mahasiswa ditemukan!" << endl;
            cout << "NIM    : " << NIM[i] << endl;
            cout << "Nama   : " << nama[i] << endl;
            cout << "Jurusan: " << jurusan[i] << endl;
            cout << "Tahun  : " << tahunMasuk[i] << endl;
            cout << endl;
            ditemukan = true;
            break;
        }
    }

}

void AlgoritmaSortByTahunMasuk() {
    cout << "========== DAFTAR MAHASISWA BERDASARKAN TAHUN MASUK ==========" << endl;

    int tempNIM, tempTahunMasuk;
    string tempNama, tempJurusan;

    for (int i = 0; i < jumlahMahasiswa; i++) {
        for (int j = i + 1; j < jumlahMahasiswa; j++) {
            if (tahunMasuk[i] > tahunMasuk[j]) {
                tempNIM = NIM[i];
                tempTahunMasuk = tahunMasuk[i];
                tempNama = nama[i];
                tempJurusan = jurusan[i];

                NIM[i] = NIM[j];
                tahunMasuk[i] = tahunMasuk[j];
                nama[i] = nama[j];
                jurusan[i] = jurusan[j];
            }
        }
    }
}

int main() {
    int pilihan;
    do {
        cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
        cout << "1. Tambah Mahasiswa" << endl;
        cout << "2. Tampilkan Semua Mahasiswa" << endl;
        cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
        cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;
        cin.ignore();
        switch (pilihan) {
        case 1:
            tambahMahasiswa();
            break;
        case 2:
            tampilkanSemuaMahasiswa();
            break;
        case 3:
            AlgoritmaMencariMahasiswaByNIM();
            break;
        case 4:
            AlgoritmaSortByTahunMasuk();
            break;
        case 5:
            cout << "Terima kasih! Program selesai." << endl;
            break;
        default:
            cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
        }
        cout << endl;
    } while (pilihan != 5);

    return 0;
}




//2. Algoritma yang digunakan dalam program ini adalah :
//boableshort
//liniersearch

//3. Perbedaan mendasar antara algoritma stack dan queue adalah :
//-Stack adalah struktur data yang mengikuti prinsip Last-In-First-Out, artinya yang terakhir dimasukkan akan menjadi pertama yang dikeluarkan.
//- Queue adalah struktur data yang mengikuti prinsip First-In-First-Out artinya yang pertama dimasukkan akan menjadi pertama yang dikeluarkan.

//4. Algoritma stack digunakan dalam situasi berikut :
//-Ketika kita ingin menyimpan elemen - elemen data dalam urutan terbalik atau mengakses data terbaru terlebih dahulu.
//- Ketika ada kebutuhan untuk melakukan operasi undo dan redo.

//5. a.Berdasarkan gambar yang diberikan, kedalaman struktur tersebut adalah 5
    //b. - in :benar
    //   - preorder :benar
    //   - post :benar