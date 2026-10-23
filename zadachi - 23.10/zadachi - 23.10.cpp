// zadachi - 23.10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
int absoluteValue(int number) {
    if (number > 0)
    {
        return 0;
    }
    else 

   return -(number);

    // main int number = 0;
    //std::cin >> number;
    //std::cout << absoluteValue(number);
}

char isDigit(char symbol)
{
    if (symbol >= '0' && symbol <= '9') {
        return '1';
    }
    else
        return '0';

    //char sym;
   //std::cin >> sym;
   //std::cout << isDigit(sym) << std::endl;
}

char isUpper(char s) {
    if (s >= 'A' && s <= 'Z')
    {
        return '1';
    }
    else
        return '0';
}

char isLower(char s) {
    if (s >= 'a' && s <= 'z')
    {
        return '1';
    }
    else
        return '0';


    //char sym;
   //std::cin >> sym;
   //std::cout << isUpper(sym) << std::endl;
   //std::cout << isLower(sym) << std::endl;
}

char toUpper(char symbol) {
    if (symbol >= 'a' && symbol <= 'z')
    {
        return symbol + 'A' - 'a';
    }
    else
        return 0;
}

char toLower(char symbol) {
    if (symbol >= 'A' && symbol <= 'Z')
    {
        return symbol + 'a' - 'A';
    }
    else
        return 0;
    //char sym;
    //std::cin >> sym;
    //std::cout << toUpper(sym) << std::endl;
   // std::cout << toLower(sym) << std::endl;
}

int main()
{
    
}


