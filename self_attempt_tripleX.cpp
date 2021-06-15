#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <ctime>

void PrintIntroduction(int level)
{
    /*
                          _____                          
                   _.+sd$$$$$$$$$bs+._                   
               .+d$$$$$$$$$$$$$$$$$$$$$b+.               
            .sd$$$$$$$P^*^T$$$P^*"*^T$$$$$bs.            
          .s$$$$$$$$P*     `*' _._  `T$$$$$$$s.          
        .s$$$$$$$$$P          ` :$;   T$$$$$$$$s.        
       s$$$$$$$$$$;  db..+s.   `**'    T$$$$$$$$$s       
     .$$$$$$$$$$$$'  `T$P*'             T$$$$$$$$$$.     
    .$$$$$$$$$$$$P                       T$$$$$$$$$$.    
   .$$$$$$$$$$$$$b                       `$$$$$$$$$$$.   
  :$$$$$$$$$$$$$$$.                       T$$$$$$$$$$$;  
  $$$$$$$$$P^*' :$$b.                     d$$$$$$$$$$$$  
 :$$$$$$$P'      T$$$$bs._               :P'`*^T$$$$$$$; 
 $$$$$$$P         `*T$$$$$b              '      `T$$$$$$ 
:$$$$$$$b            `*T$$$s                      :$$$$$;
:$$$$$$$$b.                                        $$$$$;
$$$$$$$$$$$b.                                     :$$$$$$
$$$$$$$$$$$$$bs.                                 .$$$$$$$
$$$$$$$$$$$$$$$$$bs.                           .d$$$$$$$$
:$$$$$$$$$$$$$P*"*T$$bs,._                  .sd$$$$$$$$$;
:$$$$$$$$$$$$P     TP^**T$bss++.._____..++sd$$$$$$$$$$$$;
 $$$$$$$$$$$$b           `T$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ 
 :$$$$$$$$$$$$b.           `*T$$P^*"*"*^^*T$$$$$$$$$$$$; 
  $$$b       `T$b+                        :$$$$$$$BUG$$  
  :$P'         `"'               ,._.     ;$$$$$$$$$$$;  
   \                            `*TP*     d$$P*******$   
    \                                    :$$P'      /    
     \                                  :dP'       /     
      `.                               d$P       .'      
       `.                             `'      .'        
          `-.                               .-'          
             `-.                         .-'             
                `*+-._             _.-+*'                
                      `"*-------*"'
    */
    const char *art = 
    "                          _____                          \n"
    "                   _.+sd$$$$$$$$$bs+._                   \n"
    "               .+d$$$$$$$$$$$$$$$$$$$$$b+.               \n"
    "            .sd$$$$$$$P^*^T$$$P^*\"*^T$$$$$bs.            \n"
    "          .s$$$$$$$$P*     `*' _._  `T$$$$$$$s.          \n"
    "        .s$$$$$$$$$P          ` :$;   T$$$$$$$$s.        \n"
    "       s$$$$$$$$$$;  db..+s.   `**'    T$$$$$$$$$s       \n"
    "     .$$$$$$$$$$$$'  `T$P*'             T$$$$$$$$$$.     \n"
    "    .$$$$$$$$$$$$P                       T$$$$$$$$$$.    \n"
    "   .$$$$$$$$$$$$$b                       `$$$$$$$$$$$.   \n"
    "  :$$$$$$$$$$$$$$$.                       T$$$$$$$$$$$;  \n"
    "  $$$$$$$$$P^*' :$$b.                     d$$$$$$$$$$$$  \n"
    " :$$$$$$$P'      T$$$$bs._               :P'`*^T$$$$$$$; \n"
    " $$$$$$$P         `*T$$$$$b              '      `T$$$$$$ \n"
    ":$$$$$$$b            `*T$$$s                      :$$$$$;\n"
    ":$$$$$$$$b.                                        $$$$$;\n"
    "$$$$$$$$$$$b.                                     :$$$$$$\n"
    "$$$$$$$$$$$$$bs.                                 .$$$$$$$\n"
    "$$$$$$$$$$$$$$$$$bs.                           .d$$$$$$$$\n"
    ":$$$$$$$$$$$$$P*\"*T$$bs,._                  .sd$$$$$$$$$;\n"
    ":$$$$$$$$$$$$P     TP^**T$bss++.._____..++sd$$$$$$$$$$$$;\n"
    " $$$$$$$$$$$$b           `T$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ \n"
    " :$$$$$$$$$$$$b.           `*T$$P^*\"*\"*^^*T$$$$$$$$$$$$; \n"
    "  $$$b       `T$b+                        :$$$$$$$BUG$$  \n"
    "  :$P'         `\"'               ,._.     ;$$$$$$$$$$$;  \n"
    "   \\                            `*TP*     d$$P*******$   \n"
    "    \\                                    :$$P'      /    \n"
    "     \\                                  :dP'       /     \n"
    "      `.                               d$P       .'      \n"
    "       `.                             `'      .'        \n"
    "          `-.                               .-'          \n"
    "             `-.                         .-'             \n"
    "                `*+-._             _.-+*'                \n"
    "                      `\"*-------*\"'\n"
    ;
    std::cout << art << std::endl;
    std::cout << "You are a secret agent hacking into a secure server room...\n";
    std::cout << "beginning security level " << level << "...\n";
    std::cout << "You need to enter the correct codes to continue...\n\n";
}

int *generateRandomNumbers(int maxRange)
{
    srand((unsigned) time(0));
    static int numbers[3];
    for(int i = 0; i < 3; i++)
    {
        int *find, r;
        do
        {
            r = rand() % maxRange;
            find = std::find(std::begin(numbers), std::end(numbers), r);
        } while (find != std::end(numbers));
        numbers[i] = r;
    }
    return numbers;
}

int *promptEnterCode()
{
    static int GuessNum[3];
    std::cin >> GuessNum[0] >> GuessNum[1] >> GuessNum[2];
    return GuessNum;
}

void tripleXMainGame(int maxLevel)
{
    int initLevel = 1;
    while(initLevel < maxLevel)
    {
        PrintIntroduction(initLevel);
        initLevel++;

        int *number = generateRandomNumbers(initLevel * (5 + initLevel - 1));
        const int CodeA = number[0];
        const int CodeB = number[1];
        const int CodeC = number[2];
        std::cout << "CodeA: " << CodeA << std::endl;
        std::cout << "CodeB: " << CodeB << std::endl;
        std::cout << "CodeC: " << CodeC << std::endl;

        const int CodeSum = CodeA + CodeB + CodeC;
        const int CodeProduct = CodeA * CodeB * CodeC;

        std::cout << std::endl;
        std::cout << "+ There are 3 numbers in the code" << std::endl;
        std::cout << "+ The 3 numbers add up to: " << CodeSum << std::endl;
        std::cout << "+ The 3 numbers multiply up to: " << CodeProduct << std::endl;

        std::cout << "what are the 3 number code?" << std::endl;

        int GuessA, GuessB, GuessC, GuessSum, GuessProduct;
        // std::cin >> GuessA >> GuessB >> GuessC;
        int *UserInput = promptEnterCode();
        GuessA = UserInput[0];
        GuessB = UserInput[1];
        GuessC = UserInput[2];
        std::cout << "A: " << GuessA << std::endl;
        std::cout << "B: " << GuessB << std::endl;
        std::cout << "C: " << GuessC << std::endl;
        GuessSum = GuessA + GuessB + GuessC;
        GuessProduct = GuessA * GuessB * GuessC;

        int tryTimes = 3;
        while(GuessSum != CodeSum && GuessProduct != CodeProduct && tryTimes > 0)
        {
            tryTimes--;
            std::cout << "Wrong! guess again!" << std::endl;
            std::cout << "You have " << tryTimes << " times left..." << std::endl;
            std::cout << "enter your guess: " << std::endl;
            UserInput = promptEnterCode();
            GuessA = UserInput[0];
            GuessB = UserInput[1];
            GuessC = UserInput[2];
            GuessSum = GuessA + GuessB + GuessC;
            GuessProduct = GuessA * GuessB * GuessC;
        }
        if(tryTimes <= 0)
        {
            std::cout << "You failed to break into the server room! Mission failed!" << std::endl;
        }
        if(GuessSum == CodeSum && GuessProduct == CodeProduct && tryTimes > 0)
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
