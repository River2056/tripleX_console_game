#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

void PrintIntroduction()
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
    std::cout << "beginning security level " << "1" << "...\n";
    std::cout << "You need to enter the correct codes to continue...\n\n";
}

void PlayGame()
{
    PrintIntroduction();
    const int CodeA = 5;
    const int CodeB = 6;
    const int CodeC = 7;

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

    if(GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "You Win!\n";
    }
    else
    {
        std::cout << "Wrong Guess, You lose...\n";
    }
}

int main()
{
    PlayGame();
    return 0;
}
