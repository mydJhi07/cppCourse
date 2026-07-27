#include <iostream>

int main()
{

    double a;
    double b;
    double c;

    std::cin >> a >> b >> c;

    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        if (a == b && a == c && b == c)
        {
            std::cout << "Segitiga sama sisi\n";
        }
        else if (a == b || a == c || b == c)
        {
            std::cout << "Segitiga sama kaki\n";
        }
        else
        {
            std::cout << "Segitiga sembarang\n";
        }
    }
    else
    {
        std::cout << "Bukan segitiga\n";
    }

    return 0;
}