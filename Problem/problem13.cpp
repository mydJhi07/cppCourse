#include <iostream>
#include <cmath>

int main()
{

    int N = 0;
    std::cin >> N;

    // KOREKSI !!

    // --- 1. LOGIKA BILANGAN PRIMA ---
    bool isPrime = true;

    if (N <= 1)
    {
        isPrime = false;
    }
    else
    {
        // Cukup periksa pembagi dari 2 hingga akar kuadrat N
        for (int i = 2; i <= std::sqrt(N); i++)
        {
            if (N % i == 0)
            {
                // Jika bisa dibagi angka lain, berarti BUKAN prima
                isPrime = false;
                break; // Langsung berhenti mencari
            }
        }
    }

    std::cout << "Faktor: ";

    for (int i = 1; i <= N; i++)
    {
        if (N % i == 0)
        {
            std::cout << i << " ";
        }
    }

    std::cout << std::endl;

    return 0;
}
