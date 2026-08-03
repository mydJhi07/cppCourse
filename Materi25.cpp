#include <iostream>
#include <ctime>

int main()
{

    int num = 0;
    int guess = 0;
    int tries = 0;

    srand(time(0));
    num = (rand() % 100) + 1;

    std::cout << "***** NUMBER GUESING GAME *****\n";

    do
    {
        std::cout << "Masukkan sebuah angka antara 1-100: ";
        std::cin >> guess;
        tries++;

        if (guess > num)
        {
            std::cout << "Terlalu tinggi\n";
        }
        else if (guess < num)
        {
            std::cout << "Terlalu rendah\n";
        }
        else
        {
            std::cout << "BENAR!! Anda mendapatkannya pada percobaan ke " << tries << '\n';
        }

    } while (guess != num);

    std::cout << "**********************************\n";

    return 0;
}