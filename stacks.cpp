#include<iostream>

using namespace std;

template<typename T>
class node{
    public:
        T value;
        node *next;
    
        node(T value){
            this->value = value;
        }
};

template<typename T>
class stack{
    private:
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
    stack<int> stk;
    stk.push(10);
    stk.push(20);
    stk.push(30);
    stk.push(40);
    stk.push(50);
    stk.push(60);
    stk.push(70);
    stk.push(80);
    stk.push(90);
    stk.push(15);
    stk.push(25);

    cout<<"Printing stack : "<<endl;

    while(stk.iterate() != NULL){
        cout<<stk.ptr()<<endl;
    }

    cout<<endl;
    return 0;
}
