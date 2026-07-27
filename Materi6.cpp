#include <iostream>

int main() {
    int students = 20;

    // 1. Shorthand & Increment
    students += 2; // students menjadi 22 --> ini berlaku untuk operator yang lain juga
    students++;    // students menjadi 23 --> ini berlaku untuk operator yang lain juga
    std::cout << "Jumlah murid sekarang: " << students << '\n';

    // 2. Integer Truncation (Pemotongan Desimal)
    int intDivision = 20 / 3;
    double doubleDivision = 20.0 / 3.0; // Menggunakan angka desimal agar hasilnya double
    
    std::cout << "20 / 3 (Integer): " << intDivision << '\n';       // Hasil: 6
    std::cout << "20 / 3 (Double): " << doubleDivision << '\n';     // Hasil: 6.66667

    // 3. Modulus (Sisa Bagi)
    int remainder = 20 % 3;
    std::cout << "Sisa bagi 20 dibagi 3 adalah: " << remainder << '\n'; // Hasil: 2

    // 4. Urutan Operasi (Parentheses / Kurung)
    int hitung1 = 6 - 5 + 4 * 3 / 2;      // Proses: (4*3)=12 -> (12/2)=6 -> (6-5)=1 -> (1+6)=7
    int hitung2 = 6 - (5 + 4) * 3 / 2;    // Proses: (5+4)=9 -> (9*3)=27 -> (27/2)=13 -> (6-13)=-7
    
    std::cout << "Tanpa tanda kurung: " << hitung1 << '\n'; // Hasil: 7
    std::cout << "Dengan tanda kurung: " << hitung2 << '\n'; // Hasil: -7

    return 0;
}