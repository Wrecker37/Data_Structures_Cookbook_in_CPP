#include <iostream>

class Stack{

public:
int top = -1;
int size;
int stackArr[];

Stack(int arrsize){
    stackArr[arrsize];
    size = arrsize;
}//end of constructor

void Push(int num){
    if(top > size){
        std::cout << "stack full : Push() aborted" << std::endl;
        return;
    }

    top++;
    stackArr[top] = num;
}//end of Push()

void Pop(){
    if(top == -1){
        std::cout << "stack empty : Pop() aborted" << std::endl;
        return;
    }
    top--;
}//end of Pop()

int Top(){
    return stackArr[top];
    top--;
}//end of Top()

void printTop(){
    printf("Top val: %d\n", stackArr[top]);   
}//end of printTop()

int size(){
    return size;
}//end of size

};//end of stack class

int main(){


    return 0;
}