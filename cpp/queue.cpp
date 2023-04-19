#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int *arr;
    int size;
    int qfront;
    int rear;

    Solution(int data)
    {
        size = 1000111;
        arr = new int[size];
        qfront = rear = 0;

    }
    bool isEmp(){
        if(qfront == rear){
            return true;
        }
        else{
            return false;
        }
    }
    void enqueue(int data){
        if(rear == size){
            cout<<"Queue is full";

        }
        else{
            arr[rear] = data;
            rear++;
        }

    }
    int dequeue(){
        if(qfront == rear ){
            return -1;
        }
        else{
            int ans = qfront;
            arr[qfront] = -1;
            qfront++;
            return ans;
        }
    }
};

int main()
{

    // queue<int> qu;

    // qu.push(2);
    // qu.push(21);
    // qu.push(12);

    // cout<<qu.front()<<endl;
    // cout<<qu.back()<<endl;
    // qu.pop();
    // cout<<qu.front()<<endl;

    int arr[] = {2, 6, 7, 4, 9};
    vector <int> ar;
    int maxe = 0;
   for (int i =4 ; i>0;i--){
        if(arr[i]>maxe){
            maxe= arr[i];
            ar.push_back(maxe);
        }else{
            maxe = 0 ;
        }
    }
    cout<<maxe<<endl;
    for(auto it : ar){
        cout<<it<<endl;
    }

        return 0;
}
