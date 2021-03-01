#include<iostream>

using namespace std;

template<typename T>
class node{
    T value;
    node *next;
    
    node(T value){
        this->value = value;
    }
};

template<typename T>
class stack{
    int size;
    node<T> *top;
    node<T> *itr;

    public:
        stack(){
            this->size = 0;
        }

        void push(T value){
            if(this->top == NULL){
                this->top = new node<T>(value);
            }else{
                node<T> *temp = new node<T>(value);
                this->next = this->top;
                this->top = temp;
            }
            this->size+=1;
        }

        node<T> *pop(){
            node<T> *temp = this->top;
            this->top = this->top->next;
            this->size-=1;

            return temp;
        }

        node<T> *peek(){
            return this->top;            
        }

        int size(){
            return this->size;
        }

        node<T> *iterate(){
            if(this->itr == NULL){
                this->itr = this->top;
            }else{
                this->itr = this->itr->next;
            }

            return this->itr;
        }

        T ptr(){
            return this->itr->value;
        }

        void resetIterator(){
            this->itr = NULL;
        }
};

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
