#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class Logger {
public:
    void logError(const string& errorMessage) {
        ofstream logFile("error.log", ios::app);
        logFile << "Error: " << errorMessage << endl;
        logFile.close();
    }

    void authenticateUser(const string& username, const string& password) {
        
        if (username == "admin" && password == "password123") {
            cout << "Authentication successful!" << endl;
        }
        else {
            cout << "Authentication failed!" << endl;
        }
    }
};

class FileLogger {
public:
    void logError(const std::string& errorMessage) {
        ofstream logFile("error.log", ios::app);
        logFile << "Error: " << errorMessage << endl;
        logFile.close();
    }
};

class Authenticator {
public:
    void authenticateUser(const std::string& username, const std::string& password) {
        // Simulated authentication logic
        if (username == "admin" && password == "password123") {
            std::cout << "Authentication successful!" << std::endl;
        }
        else {
            std::cout << "Authentication failed!" << std::endl;
        }
    }
};

int main() {
    // Example usage after refactoring:
    FileLogger logger;
    Authenticator authenticator;

    logger.logError("Something went wrong!");

    authenticator.authenticateUser("admin", "password123");

    return 0;
}
