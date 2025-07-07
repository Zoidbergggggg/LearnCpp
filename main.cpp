
#include <iostream> // Include the iostream library for input and output

int main() {
    std::string name; // Declare a variable to hold the user's name

    // Ask the user for their name
    std::cout << "Enter your name: ";
    std::cin >> name; // Read the user's input and store it in the 'name' variable

    // Print a personalized greeting
    std::cout << "Hello, " << name << "! Welcome to the world of C++!" << std::endl;

    return 0; // Return 0 to indicate that the program ended successfully
}
