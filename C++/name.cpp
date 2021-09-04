#include <iostream>
#include <string>

int main()
{
    int x;
    std::string FName;
    std::cout << "Enter Name" <<std::endl;
    std::cin >> FName;
    FName="Hi " + FName;
    std::cout << FName << std::endl;
    std::cout << "Enter Number: " << std::endl; 
    std::cin >> x;
    std::cout << "X= " + x << std::endl; 
}