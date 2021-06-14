#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <ctime>

std::string generateRandomNumber()
{
    srand((unsigned) time(0));
    std::string result;
    const std::string numbers[] = { "1", "2", "3", "4", "5", "6", "7", "8", "9" };
    int length = sizeof(numbers) / sizeof(numbers[0]);
    std::size_t found;
    for(int i = 0; i < 3; i++)
    {
        std::string r;
        do 
        {
            // look for r in result,
            // if not found, found == std::string::npos => append new number to result
            // if found, found != std::string::npos => pick random number again
            r = numbers[rand() % length];
            std::cout << "r: " << r << std::endl;
            found = result.find(r);
            std::cout << "found: " << found << std::endl;
        } while(found != std::string::npos);
        result += r;
    }
    std::sort(result.begin(), result.end());
    return result;
}

std::string promptEnterCode(std::string code)
{
    getline(std::cin, code);
    std::sort(code.begin(), code.end());
    return code;
}

void tripleXMainGame(int maxLevel)
{
    int initLevel = 1;
    while(initLevel < maxLevel)
    {
        initLevel++;
        std::cout << "You are a secret agent hacking into a secure server room..." << std::endl;
        std::cout << "beginning security level " << initLevel << "..." << std::endl;
        std::cout << "You need to enter the correct codes to continue..." << std::endl;

        std::string number = generateRandomNumber();
        const int CodeA = number[0] - '0';
        const int CodeB = number[1] - '0';
        const int CodeC = number[2] - '0';

        const int sum = CodeA + CodeB + CodeC;
        const int product = CodeA * CodeB * CodeC;

        std::cout << std::endl;
        std::cout << "+ There are 3 numbers in the code" << std::endl;
        std::cout << "+ The 3 numbers add up to: " << sum << std::endl;
        std::cout << "+ The 3 numbers multiply up to: " << product << std::endl;

        std::cout << "what are the 3 number code?" << std::endl;

        std::string code;
        std::stringstream ans;
        code = promptEnterCode(code);
        std::cout << "code: " << code << std::endl;

        ans << CodeC << CodeA << CodeB;
        std::string sortedAns = ans.str();
        std::sort(sortedAns.begin(), sortedAns.end());
        std::cout << "sortedAns: " << sortedAns << std::endl;
        int tryTimes = 3;
        while(sortedAns != code && tryTimes > 0)
        {
            tryTimes--;
            std::cout << "Wrong! guess again!" << std::endl;
            std::cout << "You have " << tryTimes << " times left..." << std::endl;
            std::cout << "enter your guess: " << std::endl;
            code = promptEnterCode(code);
        }
        if(tryTimes <= 0)
        {
            std::cout << "You failed to break into the server room! Mission failed!" << std::endl;
        }
        if(sortedAns == code && tryTimes > 0)
        {
            std::cout << "Congradulations! you got it right!" << std::endl;
        }
    }
}

int main()
{
    tripleXMainGame(10);
    return 0;
}
