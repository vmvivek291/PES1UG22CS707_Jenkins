#include <iostream>
#include <string>

int main() {
    std::string srn = "PES1UG22CS707"; // Replace with your actual SRN
    
    std::cout << "========================================" << std::endl;
    std::cout << "C++ Application for Jenkins Pipeline Demo" << std::endl;
    std::cout << "SRN: " << srn << std::endl;
    std::cout << "Build ID: " << srn << "-1" << std::endl;
    std::cout << "========================================" << std::endl;
    
    // Simple calculation to demonstrate functionality
    int a = 10;
    int b = 20;
    int sum = a + b;
    
    std::cout << "Performing test calculation:" << std::endl;
    std::cout << a << " + " << b << " = " << sum << std::endl;
    std::cout << "Test completed successfully!" << std::endl;
    
    return 0;
}
