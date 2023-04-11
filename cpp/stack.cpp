#include <bits/stdc++.h>

using namespace std;


class Stack{

    public :
    int * arr;
    int size ;
    int top ;

    Stack(int size){
        this -> size = size;
        arr = new int[size];
        top  = -1 ; 

    }
     void push(int element){
        if(size - top > 1){

            top++ ;
            arr[top] = element;
        }else{
            cout<<"stack overflow"<<endl;
        }
     }
     void pop(){

        if(top >=0){
            top--;
            
        }else{
            cout<<"stock underflow"<<endl;
        }
     }
     int peek(){
        if(top >=0 ){
            return arr[top];
            cout<<endl;
        }
        else{
            cout<<"stack is empty"<<endl;
            return -1;
        }
     }
    bool isEmpty(){
        if(top == -1){
            return 1;
        }
        else{
            return 0 ;
        }
    }

};




int main(){

    Stack st(5);

    st.push(1);
    st.push(2);
    st.push(78);    
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;

    return 0 ;
}