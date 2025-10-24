#include <iostream>
#include <fstream>
#include <vector>
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
            cout << "Thanks~ \n" ; break;
            default : cout << "Tidak ada pilihan\n" ;
        }

        while
            (pilihan !=5)
        }
        return 0;
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

        ofstream file("siswa.txt",ios::app)
        if(file.is_open()){
        file<<"Nama: "<<a.nama<<endl;
            file<<"NISN: "<<a.NISN<<endl;
            file<<"Jurusan: "<<a.jurusan<<endl;
            file<<"Nilai: "<<endl;
            file<<"Matematika: "<<a.nilai.Mtk<<endl;
            file<<"Bahasa Indonesia"<<a.nilai.BIn<<endl;
            file<<"Bahasa Inggris"<<a.nilai.BIg<<endl;
        
    }


