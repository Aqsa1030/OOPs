#include <iostream>
#include <string>
using namespace std;
int main()
{
      //create and initialize a string
    string str = "Hello World" ; 
    cout << str << endl ;

    //Concatenation of two strings
    string str1 = "Welcome to Programming ";
    string str2 = "in C++";
    string result = str1 + str2 ;
    cout << result << endl;

    //Find the length of string
    string str3;
    cout << "Enter the string :";
    cin >> str3;
    int length = str3.length();
    cout << "Length = " << length;

    // Accessing characters of string
    char first_Character = str1[8];
    cout << first_Character << endl;
}
