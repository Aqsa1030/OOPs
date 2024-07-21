#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

string add(string a, string b) // Function which concatenate two strings
{
    return a + b;
}

int main() {
    cout << add(5, 10) << endl;           // Outputs 15
    cout << add("Hello, ", "world!") << endl;  // Outputs "Hello, world!"
    return 0;
}
