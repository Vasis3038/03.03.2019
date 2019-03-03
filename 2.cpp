# 03.03.2019
//Реализуйте класс string_queue -  очередь строк. Класс должен содержать конструктор, деструктор, методы push,pop.

#include <iostream>

using namespace std;

struct node{
string data;
node* next=NULL;
};

class string_queue{
node* head;
public:
    string_queue(){
    head=NULL;
    }
    void push(string x){
    node* temp = new node;
    temp->data=x;
    temp->next=head;
    }
    string pop(){
    node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    string x = temp->data;
    delete temp;
    return x;
    }
    ~string_queue(){
    while(head!=NULL){
        node* temp = head;
        head=head->next;
        delete temp;
    }
    }
};

int main()
{

    return 0;
}
