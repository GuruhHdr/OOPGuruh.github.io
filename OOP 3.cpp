#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string nama;
    int umur;
    double nilai;

public:
    Student(string namastudent, int umurstudent, double nilaistudent)
        : nama(namastudent), umur(umurstudent), nilai(nilaistudent) {}

    void cetakinfo() {
        cout << "Nama: " << nama << endl;
        cout << "Usia: " << umur << " tahun" << endl;
        cout << "Nilai: " << nilai << endl;
    }
};

int main() {
    Student student("Bandi Mahlani", 20, 89.5);
    student.cetakinfo();

    return 0;
}