#include <bits/stdc++.h>

using namespace std;


class Solution{

    public:
    pair <int,int> min_max1(int arr[],int n ){

    int max1= arr[0];
    int min1= arr[0];


    for (int i = 1; i < n; i++)
    {
        if(max1<arr[i]){
            max1=arr[i];
        }
         if(min1>arr[i]){
            min1=arr[i];
        }
    }
    


        return make_pair(min1,max1);

    }

};


int main(){

    // int arr[] = {1,2332,2,45,4};
    // Solution obec;
    // cout<< obec.min_max1(arr,5);
//brute force for missing number 
    int a[] = {1,2,3,5};
    
    int n = 4;
    int num = 1 ;
    sort(a,a + n);
    for(int i = 0 ;i < n ;i++){
        if(a[i]==num){
             num++;
            continue;
           
        }
        else{
            cout<< num;
        }
        // cout<<a[i]<<endl;
    }




    return 0;
}