#include <iostream>

int main(){
    double kilometers;
    double miles;

    std::cout << "Enter Kilometers: ";
    std::cin >> kilometers;

    miles = kilometers * 0.621;

    std::cout << "That is " << miles << " miles";

    return 0;
}

