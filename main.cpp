#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <ctime>

void PrintIntroduction(int LevelDifficulty, bool PrintArtAndGreeting)
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
    if(PrintArtAndGreeting)
    {
        std::cout << art << std::endl;
        std::cout << "You are a secret agent hacking into a secure server room...\n";
        std::cout << "beginning security level " << LevelDifficulty << "...\n";
        std::cout << "You need to enter the correct codes to continue...\n\n";
    }
    else
    {
        std::cout << "\nBeginning security level " << LevelDifficulty << "...\n";
    }
}

bool PlayGame(int LevelDifficulty, bool PrintArtAndGreeting, int life)
{
    PrintIntroduction(LevelDifficulty, PrintArtAndGreeting);
    const int CodeA = (rand() % LevelDifficulty) + LevelDifficulty;
    const int CodeB = (rand() % LevelDifficulty) + LevelDifficulty;
    const int CodeC = (rand() % LevelDifficulty) + LevelDifficulty;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    std::cout << "+ There are 3 numbers in the code";
    std::cout << "\n+ The 3 numbers add up to: " << CodeSum;
    std::cout << "\n+ The 3 numbers multiply up to: " << CodeProduct;

    std::cout << "\nwhat are the 3 number code?\n";

    int GuessA, GuessB, GuessC, GuessSum, GuessProduct;
    std::cin >> GuessA >> GuessB >> GuessC;
    GuessSum = GuessA + GuessB + GuessC;
    GuessProduct = GuessA * GuessB * GuessC;

    if(GuessSum == CodeSum && GuessProduct == CodeProduct && life > 0)
    {
        std::cout << "*** Hacking success! entering next level... ***\n";
        return true;
    }
    else
    {
        std::cout << "*** Wrong Guess, try again(you have " << life - 1 << " more tries left) ***\n";
        return false;
    }
    return false;
}

int main()
{
    srand((unsigned) time(NULL));
    bool PrintArtAndGreeting = true;
    int LevelDifficulty = 1;
    const int MaxDifficulty = 7;
    int life = 3;
    while(LevelDifficulty <= MaxDifficulty)
    {
        bool bLevelComplete = PlayGame(LevelDifficulty, PrintArtAndGreeting, life);
        std::cin.clear();
        std::cin.ignore();
        if(bLevelComplete)
        {
            LevelDifficulty++;
        }
        else
        {
            life--;
            if(life <= 0)
            {
                std::cout << life << " tries left, sercurity alert! you have been caught!\n";
                break;
            }
        }
        PrintArtAndGreeting = false;
    }
    if(life > 0)
    {
        std::cout << "*** Access Granted... You're in... ***" << std::endl;
        std::cout << "*** Anti-Sercurity System disabled, Congratulations! ***" << std::endl;
    }
    return 0;
}
