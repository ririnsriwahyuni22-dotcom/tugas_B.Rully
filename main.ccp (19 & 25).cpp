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
    nilai NilaiAkhir; // struct in struct
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
        while  (pilihan !=5)
        
        return 0;
        }
        
        //menghitung nilai akhir
        float hitungNilaiAkhir(Nilai n) {
        return (0.4 * n.Mtk) + (0.3 * n.IPA) + (0.2 * n.BIn) + (0.1 * n.BIg); 
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
        cin>>a.Nilai.Mtk;
        cout<<"Bahasa Indonesia: ";
        cin>>a.Nilai.BIn;
        cout<<"Bahasa Inggris: ";
        cin>>a.Nilai.Big;
        cout<<"IPA: ";
        cin>>a.Nilai.IPA;
        cin.ignore();

        a.nilaiAkhir = hitungNilaiAkhir(a.Nilai);
        
        ofstream file("siswa.txt",ios::app);
        if(file.is_open()){
        file<<"Nama: "<<a.nama<<endl;
            file<<"NISN: "<<a.NISN<<endl;
            file<<"Jurusan: "<<a.jurusan<<endl;
            file<<"Nilai: "<<endl;
            file<<"Matematika: "<<a.Nilai.Mtk<<endl;
            file<<"Bahasa Indonesia :"<<a.Nilai.BIn<<endl;
            file<<"Bahasa Inggris : "<<a.Nilai.Big<<endl;
            file<<"IPA"<<a.Nilai.IPA<<endl;
            file<<"Nilai Akhir : "<<a.nilaiAkhir<<endl;
            
        file.close();
            cout << "File berhasil disimpan\n";
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
        cout << "\nDATA SISWA:\n";
        cout <<"------------------------------";
        cout << "NISN\tNAMA\tjURUSAN\tMtk\tBInd\tBIng\tIPA\tNilaiAkhir";
        cout <<"------------------------------";

        while (file >> a.NISN >> a.nama >> a.jurusan >> a.nilai.Mtk >> a.nilai.BIn >> a.nilai.BIg >> a.nilai.IPA >> a.nilaiAkhir) {
            cout <<  a.NISN << "\t" << a.nama << "\t" << a.jurusan << "\t" << a.nilai.Mtk << "\t" << a.nilai.BIn << "\t" << a.nilai.Big << "\t" << a.nilai.IPA << "\t" << a.nilaiAkhir << endl;
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
             << a.nilai << endl;
        file.close();
        cout << "\nData berhasil disimpan!\n";
    } else {
        cout << "Gagal membuka file!\n";
    }
}
//rangking siswa
   void rangking(){
       ifstream file("siswa.txt");
       if (file.is_open()){
           cout<<"file tidak ditemukan\n";
       }
       siswa daftar[100];
       int n =0;
       while (file>>daftar[n].NISN >> daftar[n].nama >>daftar[n].jurusan >>daftar[n].nilai.Mtk >>daftar[n].nilai.BIn>> daftar[n].IPA >> daftar[n].nilaiAkhir){
           n++;
       }
        file.close();
if(n == 0) {
cout << "tidak ada data siswa";
}
for (int i = 0; i<n-1;i++){
for (int j=0; j<n-i-1;j++) {
if daftar[j].nilaiAkhir< daftar [j+1].nilaiAkhir){
Siswa temp = daftar[j];
daftar[j] = daftar[j+1];
daftar[j+1]=temp;
}
}
}

cout<<"RANGKING SISWA\n";
cout<<"--------------------------------------------------------------------------\n";
cout<<"Rank\tNISN\tNama\tJurusan\tNilai akhit\n";
for (int i=0;i<n;i++) {
cout<<i+1<<"\t";
<<daftar[i].NISN<<"\t" <<daftar[i].nama<<"\t" <<daftar[i].jurusan<<"\t" <<daftar[i].nilaiAkhir<<endl;
}
   }


