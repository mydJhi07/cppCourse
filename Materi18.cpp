#include <iostream>
#include <string>

int main()
{
    std::string name;

    // Saat program baru jalan, 'name' memang kosong,
    // jadi kondisi name.empty() adalah TRUE.
    while (name.empty())
    {
        std::cout << "Masukkan namamu (Tidak boleh kosong!): ";
        std::getline(std::cin, name);
    }

    // Kode di baris ini TIDAK AKAN PERNAH tersentuh
    // sampai pengguna benar-benar mengetikkan sebuah nama di atas.
    std::cout << "\nAkhirnya! Halo, " << name << ".\n";

    return 0;
}