#include <iostream>
#include <string>

/*  Karena std::string di C++ secara teknis adalah sebuah object, ia memiliki fungsi-fungsi bawaan (disebut methods) yang sangat
    berguna untuk memanipulasi teks. Untuk menggunakan fungsi-fungsi ini, kita cukup menambahkan titik (.) setelah nama variabel
    string, lalu memanggil nama fungsinya. */

int main()
{
    std::string name;

    std::cout << "Masukkan nama depan kamu (contoh: Budi): ";
    std::getline(std::cin, name);

    // 1. .empty() - Mengecek apakah input kosong
    if (name.empty())
    {
        std::cout << "Kamu belum mengetikkan nama sama sekali!\n";
    }
    else
    {
        std::cout << "\n--- HASIL MANIPULASI STRING ---\n";

        // 2. .length() - Menghitung panjang karakter
        std::cout << "1. Panjang nama kamu adalah " << name.length() << " karakter.\n";

        // 3. .append() - Menambahkan teks di paling belakang
        name.append(" The Great");
        std::cout << "2. Setelah di-append: " << name << '\n';

        // 4. .insert() - Menyisipkan teks di indeks tertentu (0 = paling depan)
        name.insert(0, "Tuan ");
        std::cout << "3. Setelah di-insert: " << name << '\n';

        // 5. .at() - Mengambil satu karakter di indeks tertentu
        std::cout << "4. Karakter pertama namamu sekarang adalah: '" << name.at(0) << "'\n";

        // 6. .find() - Mencari indeks letak karakter tertentu (mencari spasi)
        int letakSpasi = name.find(' ');
        std::cout << "5. Spasi pertama ditemukan pada indeks ke-" << letakSpasi << '\n';

        // 7. .erase() - Menghapus teks (Mulai dari indeks 0, hapus 5 karakter yaitu "Tuan ")
        name.erase(0, 5);
        std::cout << "6. Setelah di-erase (gelar dihapus): " << name << '\n';

        // --- METODE TAMBAHAN (BONUS) ---

        // 8. .substr() - Mengambil potongan string (Mulai indeks 0, ambil 3 karakter)
        std::string nickname = name.substr(0, 3);
        std::cout << "7. [BONUS] Hasil substr (nickname 3 huruf): " << nickname << '\n';

        // 9. .replace() - Mengganti teks (Mulai indeks 0, timpa 3 karakter dengan "Bro")
        name.replace(0, 3, "Bro");
        std::cout << "8. [BONUS] Setelah di-replace (3 huruf awal jadi Bro): " << name << '\n';

        // -------------------------------

        // 10. .clear() - Mengosongkan seluruh isi string
        name.clear();
        std::cout << "9. Setelah di-clear, isi memori string: '" << name << "' (Kosong)\n";
    }

    return 0;
}