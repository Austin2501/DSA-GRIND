#include <iostream>

// Interface (Abstract class with only pure virtual functions)
class Printable {
public:
    virtual void print() const = 0;
    virtual ~Printable() = default;
};

// Concrete class implementing the interface
class Document : public Printable {
public:
    void print() const override {
        std::cout << "Printing the document." << std::endl;
    }
};

int main() {
    // Cannot instantiate an interface
    // Printable printable; // Error

    // Instantiate a class implementing the interface
    Document document;
    document.print();

    return 0;
}
