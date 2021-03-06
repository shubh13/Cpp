#include<iostream>

using namespace std;

template <typename T>
class node{
    public:
    T value;
    node *next;
    node *previous;

    node(T value){
        this->value = value;
    }
};

template <typename T>
class queue{
    private:
    int size;
    node<T> *head = NULL;
    node<T> *tail = NULL;

    public:
    queue(){
        this->size = 0;
    }

    void enqueue(T value){
        if(this->head = NULL){
            this->head = new node<T>(value);
            this->tail = this->head;
        }else{
            this->tail->next = new node<T>(value);
            this->tail->next->previous = this->tail;
            this->tail = this->tail->next;
        }
        this->size+=1;
    }

    node<T> dequeue(){
        node<T> *temp = this->tail;

        this->tail = this->tail->previous;
        this->tail->next = NULL;

        this->size-=1;

        return temp; 
    }
};

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
