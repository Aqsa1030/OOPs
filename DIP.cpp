#include <iostream>
#include <string>
using namespace std;

class EmailSender {
public:
    void sendEmail(const string& message) {
        cout << "Sending email: " << message << endl;
    }
};

class NotificationService {
private:
    EmailSender emailSender; 
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
