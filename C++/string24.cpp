#include <iostream>
#include <string>

int main()
{
    std::string greeting;
    std::cout << "Enter Greeting" <<std::endl;
    getline(std::cin, greeting);
    std::cout << greeting << std::endl;
}