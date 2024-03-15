#include <iostream>

// Abstract class
class Shape {
public:
    virtual void draw() const = 0; // Pure virtual function
    virtual double area() const = 0;
    virtual ~Shape() = default; // Virtual destructor (recommended)

    void displayInfo() const {
        std::cout << "This is a shape." << std::endl;
    }
};

// Concrete class derived from Shape
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    void draw() const override {
        std::cout << "Drawing a circle" << std::endl;
    }

    double area() const override {
        return 3.14 * radius * radius;
    }
};

int main() {
    // Cannot instantiate an abstract class
    // Shape shape; // Error

    // Instantiate a concrete class
    Circle circle(5.0);
    circle.draw();
    std::cout << "Area: " << circle.area() << std::endl;

    // Accessing a non-virtual function from the base class
    circle.displayInfo();

    return 0;
}
