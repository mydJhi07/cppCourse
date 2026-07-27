#include <iostream>
#include <cmath> // Wajib untuk pow, sqrt, abs, round, ceil, floor

int main() {
    double x = 3.14;
    double y = 4;
    
    std::cout << std::max(x, y) << '\n'; // 4
    std::cout << std::min(x, y) << '\n'; // 3.14
    
    std::cout << pow(2, 3) << '\n';      // 8
    std::cout << sqrt(9) << '\n';        // 3
    std::cout << abs(-3) << '\n';        // 3
    
    std::cout << round(x) << '\n';       // 3
    std::cout << ceil(x) << '\n';        // 4
    std::cout << floor(3.99) << '\n';    // 3
    
    return 0;
}

// kunjungi https://cplusplus.com/reference/cmath/ untuk mengetahui fungsinya lebih lanjut