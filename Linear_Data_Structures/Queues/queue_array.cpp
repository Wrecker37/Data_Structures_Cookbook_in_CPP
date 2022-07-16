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
        return -1;
    }
    int x = arr[front];
    front = (front + 1) % capacity;
    count--;
    return x;
}//end of dequeue

void enqueue(int data){
    if(isFull()){
        std::cout << "queue is full : aborted" << std::endl;
        return;
    }
    back = (back + 1) % capacity;
    arr[back] = data;
    count++;
    
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
    return(size() == 0);
}//end of isEmpty

bool isFull(){
    return(size() == capacity);
}//end of isFull

};//end of queue class

int main(){
    Queue queue(10);

    // queue.dequeue();
    //queue.enqueue() 10 items
    for(int i = 0; i < 10; i++){
        queue.enqueue(i);
        printf("%d, ", i);
    }
    std::cout << std::endl;
    while(!queue.isEmpty()){
        printf("%d ", queue.dequeue());
    }



    return 0;
}