#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

struct nilai{
    float Mtk;
    float BIn;
    float Big;
    float IPA;
};
struct siswa{
    string nama;
    string NISN;
    string jurusan;
    nilai Nilai; // struct in struct
};

void tambahDataSiswa();//menambahkan data pada file siswa.txt
void tampilDataSiswa();//membaca data dari file siswa.txt dan ditampilkan
void cariSiswa();// berdasarkan NISN
float nilaiAkhir();// nilai akhir = 40%matematika+30%IPA+20%B indonesia +20%B Inggris
void ranking(); // menampilkan data siswa berdasarkan peringkatnya

int main() {
    int pilihan;
    do {
        cout << "\n--MENU--" << endl;
        cout << "1. Tambah Data Siswa" << endl;
        cout << "2. Tampilkan Data Siswa" << endl;
        cout << "3. Cari Siswa" << endl;
        cout << "4. Ranking" << endl;
        cout << "5. Keluar" << endl;
        cout << "----------------------" << endl;
        cout << "Pilihan (1-5):" << endl;
        cin >> pilihan;

        switch (pilihan) {
        case 1:
            tambahDataSiswa(); break;
        case 2:
            tampilDataSiswa(); break;
        case 3:
            cariSiswa(); break;
        case 4:
            ranking(); break;
        case 5:
            cout << "Terimakasih \n" ; break;
            default : cout << "Tidak ada pilihan\n" ;
        }
        while
            (pilihan !=5)
        }
        return 0;
        }
        
        //menghitung nilai akhir
        float hitungNilaiAkhir(nilai n) {
        return (0.4 * n.Mtk) + (0.3 * n.IPA) + (0.2 * BIn) + (0.1 * n.Big); 
        }
        


        void tambahDataSiswa(){
        siswa a;
        cout << "Masukkan data: \n";
        cout << "Nama : ";
        getline(cin, a.nama);
        cout << "NISN : " ;
        cin>>a.NISN;
        cout<<"Jurusan : ";
        getline(cin, a.jurusan);

        cout<<"Nilai :\n"; 
        cout<<"Matematika: ";
        cin>>a.nilai.Mtk;
        cout<<"Bahasa Indonesia: ";
        cin>>a.nilai.BIn;
        cout<<"Bahasa Inggris: ";
        cin>>a.nilai.Big;
        cout<<"IPA: ";
        cin>>a.nilai.IPA;
        cin.ignore();

        a.nilaiAkhir = hitungNilaiAkhir(a.Nilai);
        
        ofstream file("siswa.txt",ios::app)
        if(file.is_open()){
        file<<"Nama: "<<a.nama<<endl;
            file<<"NISN: "<<a.NISN<<endl;
            file<<"Jurusan: "<<a.jurusan<<endl;
            file<<"Nilai: "<<endl;
            file<<"Matematika: "<<a.nilai.Mtk<<endl;
            file<<"Bahasa Indonesia"<<a.nilai.BIn<<endl;
            file<<"Bahasa Inggris"<<a.nilai.BIg<<endl;
            file<<"IPA"<<a.nilai.IPA<<endl;
            file<<"NilaiAkhir<<a.nilai.akhir<<endl;
            
        file.close();
            cout << "\nDara berhasil disimpan\n";
        } else {
            cout << "Gagal membuka file!\n";
        }
}

    //menampilkan data
    void tampilDataSiswa() {
        ifstream file("siswa.txt");
        if (!file.is_open()) {
            cout << "File tidak ada.\n";
            return;
        }

        siswa a;
        cout << "\nDATA SISWA:\"n;
        cout <<"------------------------------";
        cout << "NISN\tNAMA\tjURUSAN\tMtk\tBInd\tBIng\tIPA\tNilaiAkhir";
        cout <<"------------------------------";

        while (file >> a.NISN >> a.nama >> a.jurusan >> a.Nilai.Mtk >> a.Nilai.BIn >> a.Nilai.BIg >> a.Nilai.IPA >> a.NilaiAkhir) {
            cout <<  a.NISN << "\t" << a.nama << "\t" << a.jurusan << "\t" << a.Nilai.Mtk << "\t" << a.Nilai.BIn << "\t" << a.Nilai.BIg << "\t" << a.Nilai.IPA << "\t" << a.NilaiAkhir << endl;
        }
        file.close():
            }

    //mencari siswa
    void tambahDataSiswa() {
    siswa a;

    cout << "\nMasukkan data siswa:\n";
    cout << "Nama        : ";
    getline(cin, a.nama);
    cout << "NISN        : ";
    getline(cin, a.NISN);
    cout << "Jurusan     : ";
    getline(cin, a.jurusan);

    cout << "\nMasukkan nilai:\n";
    cout << "Matematika       : "; cin >> a.Nilai.Mtk;
    cout << "Bahasa Indonesia : "; cin >> a.Nilai.BIn;
    cout << "Bahasa Inggris   : "; cin >> a.Nilai.Big;
    cout << "IPA              : "; cin >> a.Nilai.IPA;
    cin.ignore();

    a.nilaiAkhir = hitungNilaiAkhir(a.Nilai);

    ofstream file("siswa.txt", ios::app);
    if (file.is_open()) {
        file << a.NISN << " "
             << a.nama << " "
             << a.jurusan << " "
             << a.Nilai.Mtk << " "
             << a.Nilai.BIn << " "
             << a.Nilai.Big << " "
             << a.Nilai.IPA << " "
             << a.nilaiAkhir << endl;
        file.close();
        cout << "\nData berhasil disimpan!\n";
    } else {
        cout << "Gagal membuka file!\n";
    }
}

        
        
            
                
            
        
    }




