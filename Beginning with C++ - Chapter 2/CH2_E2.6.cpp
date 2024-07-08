#include <iostream>

class Temp {
    public:
        void inputFahrenheit();
        double toCelsius() const;
        void displayCelsius() const;
    
    private:
        double fahrenheit;
};

void Temp::inputFahrenheit(){
    std::cout<<"Enter temperature in Fahrenheit: ";
    std::cin>>fahrenheit;
}

double Temp::toCelsius() const{
    return (fahrenheit - 32) * 5.0 / 9.0;
}

void Temp::displayCelsius() const{
    std::cout<<"Temperature in Celsius: "<<toCelsius();
}

int main(){
    Temp temperature;

    temperature.inputFahrenheit();
    temperature.displayCelsius();
}