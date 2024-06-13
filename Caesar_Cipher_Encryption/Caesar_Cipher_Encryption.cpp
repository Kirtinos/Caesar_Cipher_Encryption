#include <iostream>
#include <cstring>

int main()
{
    std::cout << "Caesar cipher!\n\n\n";
    std::string word;
    std::string result;
    int s = 11;
    int choice = 1;
    int fwths;
    int i = 0;
    while (choice == 1) {
        std::cout << "1 encrypt 2 decrypt: ";
        std::cin >> fwths;
        std::cout << "Enter message: ";
        std::cin >> word;

        std::string letters = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";
        
        if (fwths == 1) {
            std::cout << "Encrypted message: ";
            for (i = 0; i < word.length(); i++){
                if (isupper(word[i])) {
                    result += char(int(word[i] + s - 65) % 26 + 65);
                }
                else
                {
                    result += char(int(word[i] + s - 97) % 26 + 97);
                }
            }
            std::cout << result;
            result = "";
        }
        if (fwths == 2) {
            std::cout << "Decrypted message: ";
            for (i = 0; i < word.length(); i++)
            {
                if(isupper(word[i]))
                    result += char(int(word[i] - s - 97) % 26 + 97);
                else
                    result += char(int(word[i] + (26-s) - 97) % 26 + 97);

                
            }
            std::cout << result;
            result = "";
        }
        
        std::cout << "\n\nEnter '1' To Input new message, '2' to exit : " << std::endl;
        std::cin >> choice;
    }
}

