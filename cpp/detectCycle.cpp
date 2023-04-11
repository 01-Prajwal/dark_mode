#include<bits/stdc++.h>

using namespace std;


// class Node{


//     int data;
//     Node * next ;

//     Node(int data){


//         this ->data = data;
//         this ->next = NULL;
//     }
// };

// Node *floyd(Node* head ){


//     Node * fast = head;
//     Node* slow = head;

//     while(slow !=NULL && fast !=NULL){


//         fast = fast -> next ;
//         if(fast !=NULL){


//             fast = fast->next;

//         }
//         slow = slow ->next;
//         if(slow == fast ){
//             return slow
//         }

//     }
// return NULL;

// };

int main(){

    int num = 15;
    int num1 = 15;


    int sum = num + num1 ;
    cout<<"sum"<<sum<<endl;
    cout<<"digit:"<<sum%10<<endl;
    cout<<"carry:"<<sum/10<<endl;
    return 0;
}