#include <iostream>

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
    std::cout << "Area: " << rect.area() << std::endl;
    return 0;
}
