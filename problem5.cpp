#include <iostream>
#include <cmath>

int main()
{
    double x1, y1, x2, y2 = 0;
    std::cin >> x1 >> y1 >> x2 >> y2;

    double jarak = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
    std::cout << "Jarak = " << jarak << '\n';

    return 0;
}