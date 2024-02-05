#include <iostream>
#include <string>
using namespace std;
int getintfromuserA()
{
    std::cout << "Please enter a number: ";
    int number1{};
    std::cin >> number1;

    return number1;

}

int compare()
{
    int numx, numy { getintfromuserA()};
    if (numx == numy)
    std::cout << ":/";

    if (numx > numy)
    std::cout << ":)";

    if (numx < numy)
    std::cout << ":(";

    return numx, numy;

}

int sum(){
    int numx, numy { compare()};
    std::cout << numx + numy;

    return 0;
}
    
int main()
{
    int numz { compare()};
    int numh { sum()};
 
    return 0;
}