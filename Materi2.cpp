#include <iostream> // Header untuk operasi input-output dasar (seperti std::cout)
#include <string>   // Header wajib agar bisa menggunakan tipe data std::string

int main()
{
    // 1. Integer (int) - Menyimpan bilangan bulat
    int umur; // deklarasi
    umur = 21;
    int tahun = 2026;

    // 2. Double (double) - Menyimpan bilangan desimal / pecahan
    double harga = 10.99;
    double ipk = 3.75;

    // 3. Character (char) - Menyimpan satu karakter tunggal (menggunakan kutip tunggal)
    char nilaiHuruf = 'A';
    char simbolMataUang = '$';

    // 4. Boolean (bool) - Menyimpan nilai logika (benar/salah)
    bool isStudent = true;
    bool forSale = false;

    // 5. String (std::string) - Menyimpan deretan teks/kalimat (menggunakan kutip ganda)
    std::string nama = "Yeurekaa";
    std::string makananFavorit = "Mie Ayam";

    // --- MENAMPILKAN OUTPUT KE LAYAR ---

    // Menggabungkan string literal (teks biasa) dengan variabel menggunakan operator <<
    std::cout << "Halo, nama saya " << nama << std::endl;
    std::cout << "Umur saya " << umur << " tahun pada tahun " << tahun << std::endl;

    std::cout << "Harga makanan: " << simbolMataUang << harga << std::endl;
    std::cout << "IPK terakhir saya adalah " << ipk << " dengan nilai " << nilaiHuruf << std::endl;

    // Catatan: Boolean secara default akan menampilkan angka 1 untuk true dan 0 untuk false
    std::cout << "Apakah status saya pelajar? (1 = Ya, 0 = Tidak): " << isStudent << std::endl;
    std::cout << "Makanan favorit saya adalah " << makananFavorit << std::endl;

    return 0; // Menandakan bahwa program berjalan dengan sukses tanpa eror
}