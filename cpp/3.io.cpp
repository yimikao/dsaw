#include <iostream>

void main() {
    std::string first_data = "first";
    // send value into stream
    std::cout << first_data << std::endl;
    // get value from stream into var
    std::cin >> first_data;
    std::cout << first_data << std::endl;
    /**
     * NOTE
     * When the program reads input into a string variable it only reads the text until the first whitespace.
     * To read an entire line you should instead use the getline function
    */
   std::getline(std::cin, first_data);
   std::cout << first_data << std::endl;
}