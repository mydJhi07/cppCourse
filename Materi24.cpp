#include <iostream>
#include <ctime>

int main()
{
    // 1. Inisialisasi seed menggunakan waktu saat ini
    srand(time(0));

    // 2. Menghasilkan angka acak antara 1 sampai 5
    // Ada 5 hadiah, jadi rentangnya 0-4, lalu ditambah 1 menjadi 1-5.
    int randomNum = (rand() % 5) + 1;

    std::cout << "--- UNDIAN BERHADIAH ---\n";
    std::cout << "Memutar roda undian...\n";

    // 3. Memasukkan angka acak ke dalam switch
    switch (randomNum)
    {
    case 1:
        std::cout << "Selamat! Kamu memenangkan: Stiker Bemper\n";
        break;
    case 2:
        std::cout << "Selamat! Kamu memenangkan: Kaos T-Shirt\n";
        break;
    case 3:
        std::cout << "Selamat! Kamu memenangkan: Makan Siang Gratis\n";
        break;
    case 4:
        std::cout << "Selamat! Kamu memenangkan: Gift Card (Voucher)\n";
        break;
    case 5:
        std::cout << "JACKPOT! Kamu memenangkan: Tiket Konser VIP\n";
        break;
    default:
        std::cout << "Maaf, terjadi kesalahan sistem.\n";
        break;
    }

    return 0;
}

/*  sama seperti materi 23

    Kita menggunakan #include <ctime> agar program C++ bisa "melihat jam komputer". Angka detik dari jam tersebut kemudian
    digunakan untuk mengocok sistem random agar tebakan atau undiannya tidak pernah menghasilkan urutan pola yang sama. */