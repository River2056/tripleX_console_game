#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <ctime>

int main()
{
    std::string line = "123";
    std::string r = "0";
    std::size_t found;
    found = line.find(r);
    std::cout << found << std::endl;
    std::cout << std::string::npos << std::endl;
    return 0;
}
