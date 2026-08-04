#include <iostream>

int main()
{

    double nilai;

    std::cin >> nilai;

    if (nilai <= 100 && nilai >= 0)
    {
        if (nilai >= 85)
        {
            std::cout << "Nilai: A ";
        }
        else if (nilai >= 70)
        {
            std::cout << "Nilai: B ";
        }
        else if (nilai >= 55)
        {
            std::cout << "Nilai: C ";
        }
        else if (nilai >= 40)
        {
            std::cout << "Nilai: D ";
        }
        else
        {
            std::cout << "Nilai: E ";
        }
        nilai >= 55 ? std::cout << "| Status: Lulus\n" : std::cout << "| Status: Tidak Lulus\n";
    }
    else
    {
        std::cout << "Nilai tidak valid\n";
    }

    return 0;
}