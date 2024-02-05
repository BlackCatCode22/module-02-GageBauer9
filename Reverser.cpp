#include <algorithm> 
#include<iostream>
#include<string>
using namespace std; 
int main() 
{ 
    string phrase;
    cout << "Hello please enter something: ";
    getline(cin, phrase);
    reverse(phrase.begin(), phrase.end()); 
	cout<<phrase; 
    return 0;
}