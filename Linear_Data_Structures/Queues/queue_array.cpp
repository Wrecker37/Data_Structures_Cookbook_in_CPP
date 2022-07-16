#include <iostream>

class Queue{
    int *arr;
    int capacity, front, back, count;

public:
Queue(int initSize){
    arr = new int[initSize];
    capacity = initSize;
    front= 0;
    back = -1;
    count = 0;

}//end of constructor

~Queue(){
    delete []arr;
}//end of destructor

int dequeue(){
    if(isEmpty()){
        std::cout << "list is empty : aborted" << std::endl;
        return;
    }
    int x = arr[front];
    front = (front + 1) % capacity;
    return x;
}//end of dequeue

void enqueue(int data){
    if(isFull()){
        std::cout << "queue is full : aborted" << std::endl;
        return;
    }

    arr[back] = data;
    back = (back + 1) % capacity;
}//end enqueue

int printFront(){
    return arr[front];
}//end printFront

int printBack(){
    return arr[back];
}//end printBack

int size(){
    return count;
}//end size

bool isEmpty(){
    return(this->size() == 0);
}//end of isEmpty

bool isFull(){
    return(this->size() == capacity);
}//end of isFull

};