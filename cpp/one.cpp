#include<iostream>
using namespace std;


class Solution{
    public:
    // Function to search x in arr
    // arr: input array
    // X: element to be searched for
    int index=0;
    int search(int arr[], int N, int X)
    {
        
        // Your code here
        // int a = X;

        for ( index  ; index < N ; index++)
        {
            if (arr[index]==X)
            {
                return index;
                //  cout<<"The index of the input element is = "<<index<<endl;

                break;

            }
            // else
            // {
            //     index++;
            //     // return 0;

            // }
            
            
        };
        
                return 0;


    }
    void display(){
        cout<<"The index of the input element is = "<<index<<endl;
    }

};
int main(){
    
    int arr[4]={1,2,3,4};
    int n = 4;
    Solution obj;
    obj.search(arr,n,2);
    obj.display();
    // cout<<":hii";
    return 0;
}