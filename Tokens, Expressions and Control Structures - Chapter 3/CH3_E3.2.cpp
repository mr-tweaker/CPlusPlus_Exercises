#include <iostream>
#include <vector>

std::vector<int>* createVector(int M){
    std::vector<int>* vec = new std::vector<int>(M);
    return vec;
}

int main(){
    int M;

    std::cout<<"Enter the size of the vector (M): ";
    std::cin>>M;

    std::vector<int>* myVector = createVector(M);

    std::cout<<"Vector of size "<<M<<" created successfully." << std::endl;
    
    delete myVector;

    return 0;
}
