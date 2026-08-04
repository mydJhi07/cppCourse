#include <iostream>
#include <algorithm>

int main()
{

    float n = 0;
    float rata = 0;
    float n1 = 0;
    float total = 0;
    float max;
    float min;

    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cin >> n1;
        total += n1;

        if (i == 0)
        {
            max = n1;
        }
        else if (n1 > max)
        {
            max = n1;
        }

        if (i == 0)
        {
            min = n1;
        }
        else if (min > n1)
        {
            min = n1;
        }
    }
    rata = total / n;

    std::cout << "Jumlah = " << total << " | ";
    std::cout << "Rata-rata = " << rata << " | ";
    std::cout << "Max = " << max << " | ";
    std::cout << "Min = " << min << " | \n";

    return 0;
}