#include <bits/stdc++.h>

using namespace std;



class Solution{


    public:

    int search(int arr[],int n ,int x){

        int val = x ;
        for(int i = 0 ; i < n ;i++){
            if(val == arr[i]){
                return i;
            }

        }
        return -1;
    }


};

int main(){

    int arr[]={1,2,3,4,5};
    Solution obje;

    cout<<obje.search(arr,5,6);


    return 0 ; 
}