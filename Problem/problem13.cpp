#include <iostream>
#include <cmath>

int main()
{

    int N = 0;
    std::cin >> N;

    for (int i = 1; i <= N; i++)
    {
        if (i > 1 && i <= std::sqrt(N) && N % i == 0)
        {
            std::cout << N << " bukan bilangan prima\n";
            break;
        }
        else if (i > 1 && i <= std::sqrt(N) && N % i != 0)
        {
            std::cout << N << " bilangan prima\n";
            break;
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