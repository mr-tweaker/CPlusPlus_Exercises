#include <iostream>

int main(){
    int num1, num2;

    std::cout<<"Enter two numbers: ";
    std::cin>>num1>>num2;

    if(num1 > num2){
        std::cout<<"The larger number is: "<<num1;
    } else if (num2 > num1){
        std::cout<<"The larger number is: "<<num2;
    } else {
        std::cout<<"Both numbers are equal.";
    }
}