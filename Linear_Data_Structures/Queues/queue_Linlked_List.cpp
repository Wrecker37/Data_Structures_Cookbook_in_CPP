#include <iostream>

class Node{
    
public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};

class LLQueue{
public:
    Node *front, *back;
    int count;

    LLQueue(){
        this->front = nullptr;
        this->back = nullptr;
        count = 0;
    }

    void enqueue(int data){
        
        Node *temp = front;
        Node *newNode = new Node(data);

        if(back == nullptr){
            front = back = newNode;
            return;
        }

        back->next = newNode;
        back = newNode;
        count++;
    }

    int dequeue(){
        if(front == nullptr){
            std::cout << "queue is empty : aborted" << std::endl;
            return -1;
        };

        Node *temp = front;
        front = front->next;

        if(front == nullptr){
            back = nullptr;
        }
        int x = temp->data;
        delete temp;
        count--;
        return x;
    }

    int size(){
        return count;
    }

    bool isEmpty(){
        return(count == 0);
    }
};

int main(){
    LLQueue queue;

    //enqueue 10 times
    for(int i = 0; i < 10; i++){
        queue.enqueue(i);
    }

    //print frot and back
    std::cout << "front: " << queue.front->data << std::endl;
    std::cout << "back: " << queue.back->data << std::endl;

    //dequeue 5 times
    for(int i = 0; i < 5; i++){
        queue.dequeue();
    }

    //print frot and back
    std::cout << "front: " << queue.front->data << std::endl;
    std::cout << "back: " << queue.back->data << std::endl;


    return 0;
}