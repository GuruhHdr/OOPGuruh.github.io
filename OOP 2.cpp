#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string Merek;
    int Tahun_Pembuatan;
    double Kecepatan;

public:
    Car(string label, int thn, double kcptn)
        : Merek(label), Tahun_Pembuatan(thn), Kecepatan(kcptn) {}

    double CalculateTravelTime(double Jarak) {
        return Jarak / Kecepatan;
    }

    void tampilkaninfo () {
        cout << "Merek: " << Merek << endl;
        cout << "Tahun Pembuatan: " << Tahun_Pembuatan << endl;
        cout << "Kecepatan: " << Kecepatan << endl;
    }

};

int main() {

    Car myCar("Toyota", 2020, 60.0);
 
    double Jarak = 100.0;

    double travelTime = myCar.CalculateTravelTime(Jarak);
  
    cout << "Waktu yang dibutuhkan untuk menempuh jarak " << Jarak << " km adalah " << travelTime << " jam" << endl;
   
    return 0;
}
