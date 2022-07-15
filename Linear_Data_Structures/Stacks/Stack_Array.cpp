#include <iostream>

class Stack{

public:
int top = -1;
int sizeOfArr;
int stackArr[];

Stack(int arrsize){
    stackArr[arrsize];
    sizeOfArr = arrsize;
}//end of constructor

void Push(int num){
    if(top > sizeOfArr){
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
    return sizeOfArr;
}//end of size

};//end of stack class

int main(){

    Stack stack(10);

    // stack.Pop();

    stack.Push(100);
    stack.Push(200);
    stack.Push(300);
    stack.Push(400);

    stack.printTop();

    return 0;
}