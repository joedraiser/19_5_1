#include <iostream>
#include <string>
#include <fstream>

int main()
{
    std::ifstream words;
    words.open("words.txt");

    if(!words.is_open()) {
        std::cout << "file is not opened";
        exit(EXIT_FAILURE);
    }

    std::cout << "Input word: ";
    std::string input;
    std::cin >> input;

    std::string temp;
    int count;

    while(!words.eof())
    {
        words >> temp;

        if(temp==input)
            count++;
    }

    std::cout << count;
    words.close();
}
