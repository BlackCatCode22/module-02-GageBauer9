#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a >= b) {
        if (a >= c){
            cout << "The Largest Number is: " << a;
        }
        else { 
            cout << "The Largest Number is: " << c;
        }
    }
    else { 
        if  (b >= c){
            cout << "The Largest Number is: " << b;
        }
        else {
            cout << "The Largest Number is: " << c;
        }
    }
    return 0;
}