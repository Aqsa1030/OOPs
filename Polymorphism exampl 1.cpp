#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

string add(string a, string b) 
{
    return a + b;
}

int main() {
    cout << add(5, 10) << endl;           
    cout << add("Hello, ", "world!") << endl;  
    
    return 0;
}
