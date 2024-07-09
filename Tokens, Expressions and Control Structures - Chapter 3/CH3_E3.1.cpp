#include <iostream>

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int x, y;

    std::cout<<"Enter x: ";
    std::cin>>x;

    std::cout<<"Enter y: ";
    std::cin>>y;

    std::cout<<"Before swap: x = "<<x<<", y = "<<y<<"\n";

    swap(x, y);

    std::cout<<"After swap: x = "<<x<< ", y = "<<y;
}