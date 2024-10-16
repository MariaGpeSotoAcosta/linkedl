#include <iostream>

using namespace std;

struct Node{
int data;
Node* next;
};

void addNode(Node* &head, int value){
    Node* newNode= new Node(); //nuevo nodo en memoria
    newNode -> data = value; //asignacion de value a la estructura accediendo a data
    newNode -> next = nullptr; //el sigueinte nodo es nullptr

    if(head==nullptr){
        head=newNode;
    }else{
        Node* temp = head;
        while(temp->next != nullptr){
            temp = temp->next;
        }
        temp->next = newNode;
    }

}

void showList(Node* head){
    Node* temp = head;
    while(temp!=nullptr){
        cout<<temp->data<<"->";
        temp = temp -> next;
    }
}
//2 de sorting, 1 puntero, est de datos PRESENTACION
int main()
{
    Node* list1 = nullptr;
    addNode(list1,40);
    addNode(list1,2);

    cout<<"lista de valores"<<endl;
    showList(list1);
    return 0;
}
