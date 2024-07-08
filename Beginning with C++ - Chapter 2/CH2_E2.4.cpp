#include <iostream>

int main(){
    double a, b, c, x;

    std::cout<<"Enter the value of a: ";
    std::cin>>a;

    std::cout<<"Enter the value of b: ";
    std::cin>>b;

    std::cout<<"Enter the value of c: ";
    std::cin>>c;

    if(b == 0){
        std::cout<<"Division by zero isn't allowed";
    }

    x = a / b - c;

    std::cout<<"The value of x is = "<<x;
}