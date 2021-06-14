#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

int main()
{
    std::cout << "You are a secret agent hacking into a secure server room..." << std::endl;
    std::cout << "beginning security level " << "1" << "..." << std::endl;
    std::cout << "You need to enter the correct codes to continue..." << std::endl;

    const int a = 5;
    const int b = 6;
    const int c = 7;

    const int sum = a + b + c;
    const int product = a * b * c;

    std::cout << std::endl;
    std::cout << "+ There are 3 numbers in the code" << std::endl;
    std::cout << "+ The 3 numbers add up to: " << sum << std::endl;
    std::cout << "+ The 3 numbers multiply up to: " << product << std::endl;

    std::cout << "what are the 3 number code?" << std::endl;

    std::string code;
    std::stringstream ans;
    getline(std::cin, code);
    std::sort(code.begin(), code.end());

    ans << c << a << b;
    std::string sortedAns = ans.str();
    std::sort(sortedAns.begin(), sortedAns.end());
    if(sortedAns == code)
    {
        std::cout << "Congradulations! you got it right!" << std::endl;
    }
    else
    {
        std::cout << "Wrong! guess again!" << std::endl;
    }
    return 0;
}
