#include <iostream>
using namespace std;

// Function to add integers
int add(int a, int b) {
    return a + b;
}

// Function to concatenate strings
string add(string a, string b) {
    return a + b;
}

int main() {
    cout << add(5, 10) << endl;           // Outputs 15
    cout << add("Hello, ", "world!") << endl;  // Outputs "Hello, world!"
    return 0;
}
