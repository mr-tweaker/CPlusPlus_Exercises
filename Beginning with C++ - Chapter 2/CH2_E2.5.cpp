#include <iostream>

int main(){
    double fahrenheit, celsius;

    std::cout<<"Enter temperature in Fahrenheit: ";
    std::cin>>fahrenheit;

    celsius = (fahrenheit - 32) * 5.0 / 9.0;

    std::cout<<"Temperature in Celsius: "<<celsius;
}