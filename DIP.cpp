#include <iostream>
#include <string>
using namespace std;
class EmailSender {
public:
    void sendEmail(const std::string& message) {
        std::cout << "Sending email: " << message << std::endl;
    }
};

// High-level module
class NotificationService {
private:
    EmailSender emailSender; // Direct dependency on EmailSender
public:
    void notify(const std::string& message) {
        emailSender.sendEmail(message);
    }
};

int main() {
    NotificationService service;
    service.notify("Hello, Dependency Inversion Principle!");
    return 0;
}
