#include <iostream>
#include <string>

int main()
{

    std::string password;

    std::cout << "Input: ";
    std::cin >> password;

    std::cout << "Panjang: " << password.length() << " | ";
    std::cout << "Mengandung '@': ";

    password.find('@') != std::string::npos ? std::cout << "Ada | " : std::cout << "Tidak | ";

    std::cout << "Verdict: ";

    if (password.length() >= 8 && password.find('@') != std::string::npos)
    {
        std::cout << "KUAT\n";
    }
    else
    {
        std::cout << "LEMAH\n";
    }

    return 0;
}