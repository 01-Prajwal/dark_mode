#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

};
void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}
void insertAtTail(Node * &tail,int data){

    Node *temp = new Node(data);
    tail->next= temp ;
    tail = temp ;
}
void insertAtPos(Node * &tail,Node * &head,int position,int data){


    if(position ==1){
        insertAtHead(head,data);
        return;
    }

    Node * temp = head;
    int cnt =1;

    while(cnt < position -1 ){
        temp = temp ->next;
        cnt++;
    }

    if(temp ->next == NULL){
        insertAtTail(tail,data);
        return;
    }

    Node * node_to_insert = new Node(data);

    node_to_insert->next=temp->next;
    temp->next = node_to_insert;


}
void deleteNode(int position, Node* & head) { 

    //deleting first or start node
    if(position == 1) {
        Node* temp = head;
        head = head -> next;
        //memory free start ndoe
        temp -> next = NULL;
        delete temp;
    }
    else
    {
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        prev -> next = curr -> next;
        curr -> next  = NULL;
        delete curr;

    }
}
void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {

        cout << temp->data << " ";
        // cout << temp->next << endl;
        temp = temp->next;
    }
    cout <<endl;
}


Node* kReverse(Node* head, int k) {
    //base call
    if(head == NULL) {
        return NULL;
    }
    
    //step1: reverse first k nodes
    Node* next = NULL;
    Node* curr = head;
    Node* prev = NULL;
    int count= 0;
    
    while( curr != NULL && count < k ) {
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    
    //step2: Recursion dekhlega aage ka 
    if(next != NULL) {
        head -> next = kReverse(next,k);
    }
    
    //step3: return head of reversed list
    return prev;
}
int main()
{

    Node *node1 = new Node(10);

    Node *head = node1;
    Node *tail = node1;
    // print(head);
    insertAtHead(head, 100);
    print(head);
    insertAtTail(tail, 90);
    print(head);
    // insertAtPos(tail,head, 2, 22);
    //     print(head);
    // deleteNode(1,head);
    //     print(head);
    // kReverse(head,2);
    //     print(head);

    
    // cout << "DATA" << node1->data << endl;
    // cout << "NEXT" << node1->next << endl;

    return 0;
}

// int dat = 10;
// int * add = &dat;
// cout<<add<<endl;
// cout<<*add<<endl;
// cout<<&add<<endl;