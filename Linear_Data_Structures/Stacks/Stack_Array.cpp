#include <iostream>

class Stack{

public:
int top = -1;
int size;
int stackArr[];

Stack(int arrsize){
    stackArr[arrsize];
    size = arrsize;
}

void Push(int num){
    if(top > size){
        std::cout << "stack full" << std::endl;
    }
    top++;
    stackArr[top] = num;
}

void Pop(){
    if(top == -1){
        std::cout << "stack empty" << std::endl;
        return;
    }

    top--;
}

int Top(){

}

int size(){

}



};