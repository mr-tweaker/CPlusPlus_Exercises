#include <iostream>

int main(){
    char inputChar;

    std::cout<<"Enter a character: ";
    std::cin>>inputChar;

    std::cout<<"The ASCII value of " <<inputChar<<" is: "<<int(inputChar);
}