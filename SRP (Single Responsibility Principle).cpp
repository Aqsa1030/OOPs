#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class Logger {
public:
    void logError(const std::string& errorMessage) {
        std::ofstream logFile("error.log", std::ios::app);
        logFile << "Error: " << errorMessage << std::endl;
        logFile.close();
    }

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

// Refactored to adhere to SRP:
class FileLogger {
public:
    void logError(const std::string& errorMessage) {
        std::ofstream logFile("error.log", std::ios::app);
        logFile << "Error: " << errorMessage << std::endl;
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
