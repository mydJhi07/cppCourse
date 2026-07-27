#include <iostream>

/*  Kata kunci const digunakan untuk menetapkan bahwa nilai dari sebuah variabel adalah konstan (tetap). Ini memberi tahu kompiler 
    C++ untuk mencegah apa pun mengubah nilai tersebut setelah pertama kali dideklarasikan. Dengan kata lain, variabel tersebut 
    berubah menjadi read-only (hanya bisa dibaca, tidak bisa diubah nilainya). */
    
int main() {
    // Mendeklarasikan konstanta menggunakan huruf kapital
    const double PI = 3.14159;
    
    double radius = 10;
    
    // Menghitung keliling (circumference)
    double circumference = 2 * PI * radius;

    // Menampilkan hasil
    std::cout << "Keliling lingkaran: " << circumference << " cm\n";

    // --- CONTOH EROR ---
    // PI = 42069; 
    // Jika tanda // (komentar) pada baris di atas dihapus dan kode dijalankan, 
    // program akan EROR karena kita tidak boleh mengubah nilai variabel const.

    return 0;
}