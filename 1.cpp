# 03.03.2019
/*Реализуйте класс double_stack -  стек вещественных чисел переменного размера. Класс должен содержать конструктор, деструктор, методы push,pop*/
#include <iostream>

using namespace std;

class double_stack
{
    struct Node
    {
    int data;
    Node* next=NULL;
    };

Node* head;
public:

     double_stack():head(NULL){}

     void push(int x)
     {
         Node*temp= new Node;
         temp->data=x;
         temp->next=head;
         head=temp;
     }
     int pop()
     {
     if(head==NULL){
        return 0;
     }
     int x = head->data;
     Node*temp=head;
     head=head->next;
     delete temp;
     return x;
     }

};
int main()
{

    return 0;
}
