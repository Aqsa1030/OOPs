#include <iostream>
using namespace std;

class Document {
public:
    virtual void open() = 0;
    virtual void close() = 0;
    virtual void save() = 0;
    virtual void print() = 0;
};

// Class implementing a TextDocument
class TextDocument : public Document {
public:
    void open() override {
        std::cout << "Opening text document." << std::endl;
    }

    void close() override {
        std::cout << "Closing text document." << std::endl;
    }

    void save() override {
        std::cout << "Saving text document." << std::endl;
    }

    void print() override {
        std::cout << "Printing text document." << std::endl;
    }
};

// Interface for a Machine
class Machine {
public:
    virtual void print() = 0;
};

// Class implementing a PrinterMachine
class PrinterMachine : public Machine {
public:
    void print() override {
        std::cout << "Printing from the printer." << std::endl;
    }
};

// Function demonstrating usage
void operate(Document& document) {
    document.open();
    document.print();
    document.save();
    document.close();
}

int main() {
    TextDocument textDocument;
    PrinterMachine printer;

    operate(textDocument);  // Operate on TextDocument
    // operate(printer);    // Error: PrinterMachine doesn't implement all methods of Document

    return 0;
}
