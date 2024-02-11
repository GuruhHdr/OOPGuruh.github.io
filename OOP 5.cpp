#include <iostream>
#include <string>

using namespace std;

class Pekerja {
private:
    string nama;
    int upahPerJam;
    int jamKerja;

public:
    Pekerja(string namaPekerja, int rate, int jam)
        : nama(namaPekerja), upahPerJam(rate), jamKerja(jam) {}

    double HitungGaji() {
        return upahPerJam * jamKerja;
    }

    void TampilkanInfo() {
        cout << "Nama: " << nama << endl;
        cout << "Upah Per Jam: " << upahPerJam << endl;
        cout << "Jumlah Jam Kerja: " << jamKerja << endl;
        cout << "Total Gaji: " << HitungGaji() << endl;
    }
};

int main() {
    Pekerja pekerja("John Doe", 70000, 26);
    pekerja.TampilkanInfo();

    return 0;
}