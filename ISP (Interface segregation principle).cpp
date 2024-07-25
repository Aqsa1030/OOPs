#include <iostream>
using namespace std;

class Document {
public:
    virtual void open() = 0;
    virtual void close() = 0;
    virtual void save() = 0;
    virtual void print() = 0;
};

class TextDocument : public Document {
public:
    void open() override {
        cout << "Opening text document." << endl;
    }

    void close() override {
        cout << "Closing text document." << endl;
    }

    void save() override {
        cout << "Saving text document." << endl;
    }

    void print() override {
        cout << "Printing text document." << endl;
    }
};

class Machine {
public:
    virtual void print() = 0;
};

class PrinterMachine : public Machine {
public:
    void print() override {
        cout << "Printing from the printer." << endl;
    }
};

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
