#include <iostream>
#include <ctime>

int main()
{

    int num = 0;
    int guess = 0;
    int tries = 0;

    srand(time(0));
    num = (rand() % 100) + 1;

    do
    {
        std::cout << "Tebak (1-100): ";
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
            std::cout << "BENAR!! Kamu menebaknya dalam " << tries << " percobaan\n";
        }

    } while (guess != num);

    return 0;
}