#include <iostream>
using namespace std;
class Factorial {
private:
    int number;

    // Calculate factorial
    long long calculateFactorial(int n) {
        if (n <= 1) return 1;
        return n * calculateFactorial(n - 1);
    }

public:
    // Public method to set the number
    void setNumber(int num) {
        number = num;
    }

    // Public which calculate factorial
    long long getFactorial() {
        return calculateFactorial(number);
    }
};

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    Factorial factorial;
    factorial.setNumber(num);
    std::cout << "Factorial of " << num << " is: " << factorial.getFactorial() << std::endl;

    return 0;
}
