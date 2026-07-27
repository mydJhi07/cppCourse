#include <iostream>
#include <string>
#include <limits> // Wajib disertakan untuk memanggil std::numeric_limits

/*  Selama ini kita menggunakan std::cout (Character Output) beserta tanda << (Insertion Operator) untuk menampilkan teks ke layar. 
    Nah, untuk menerima masukan dari pengguna, kita menggunakan kebalikannya, yaitu std::cin (Character Input) beserta tanda 
    >> (Extraction Operator). */

int main() {
    int age;
    std::string fullName;

    std::cout << "Berapa umurmu? (Coba ketik '21 tahun' lalu Enter): ";
    std::cin >> age; // std::cin hanya akan mengambil angka '21'

    // Membuang semua karakter sisa di buffer (seperti " tahun\n") secara mutlak
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Siapa nama lengkapmu? ";
    std::getline(std::cin, fullName); // Aman, buffer sudah benar-benar kosong

    std::cout << "\n--- HASIL ---\n";
    std::cout << "Nama : " << fullName << '\n';
    std::cout << "Umur : " << age << " tahun\n";

    return 0;
}