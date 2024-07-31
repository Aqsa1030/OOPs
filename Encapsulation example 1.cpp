#include <iostream>
using namespace std;

class Rectangle {
private:
    int width;
    int height;

public:
    void setDimensions(int w, int h) {
        width = w;
        height = h;
    }

    int area() const {
        return width * height;
    }
};

int main() {
    Rectangle rect;
    rect.setDimensions(5, 10);
    cout << "Area: " << rect.area() << std::endl;
    return 0;
}
