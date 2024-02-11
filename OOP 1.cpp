#include <iostream>
#include <string>
using namespace std;

class Buku {
private:
    string Judul_Buku;
    int Tahun_Terbit;
    string Penulis;

public:
    Buku(string jdl, int thn, string pnls) : Judul_Buku(jdl), Tahun_Terbit(thn), Penulis(pnls) {}
    // Buku(string Judul_Buku, int Tahun_Terbit, string Penulis) : jdl(Judul_Buku), thn(Tahun_Terbit), pnls(Penulis) {}
    //     // Judul_Buku = judul;
    //     // Tahun_Terbit = tahun;
    //     // Penulis = penulis;


    void TampilkanInfo() {
        cout << "Judul: " << Judul_Buku << endl;
        cout << "Tahun: " << Tahun_Terbit << endl;
        cout << "Penulis: " << Penulis << endl;

        if (Tahun_Terbit < 2000) {
            cout << "Status Buku: kuno" << endl;
        } else {
            cout << "Status Buku: ini buku baru" << endl;
        }
    }
};

int main() {
    Buku buku1("Program C++", 1998, "John Doe");
    Buku buku2("Python Cookbook", 2022, "Jane Smith");

    buku1.TampilkanInfo();
    cout << "----------------------" << endl;
    buku2.TampilkanInfo();

    return 0;
}