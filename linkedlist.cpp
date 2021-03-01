#include<iostream>

using namespace std;

template<typename T>
class node{
    public:
        T data;
        node *next;
        node *previous;

        node(T data){
            this->data = data;
        }

};

template<typename T>
class LinkedList{
    private:
        int size;
        node<T> *head = NULL;
        node<T> *tail = NULL;
        node<T> *itr = NULL;

        public:
            LinkedList(){
                this->size = 0;
            }

            void append(T data){
                if (this->head == NULL){
                    this->head = new node<T>(data);
                    this->tail = this->head;
                }else{
                    this->tail->next = new node<T>(data);
                    this->tail->next->previous = this->tail;
                    this->tail = this->tail->next;
                }
                this->size+=1;
            }

            void prepend(T data){
                if (this->head == NULL){
                    this->head = new node<T>(data);
                    this->head = this->tail;
                }else{
                    this->head->previous = new node<T>(data);
                    this->head->next->previous = this->head;
                    this->head = this->head->previous;
                }
                this->size+=1;
            }

            node<T> *iterate(){
                if(this->itr == NULL){
                    this->itr = this->head;
                }else{
                    this->itr = this->itr->next;
                }

                return this->itr;
            }

            T ptr(){
                return this->itr->data;
            }

            void resetItr(){
                this->tail = NULL;
            }
};

int main(int argc, char const *argv[])
{
    /* code */
    LinkedList<int> llist;
    llist.append(10);
    llist.append(20);
    llist.append(30);
    llist.append(40);
    llist.append(50);
    llist.append(60);
    llist.append(70);

    cout<<"The linked list entered is : "<<endl;

    while(llist.iterate() != NULL){
        cout<<llist.ptr()<<"\t";
    }

    cout<<endl;

    return 0;
}
