#include <bits/stdc++.h>

using namespace std;

class Solution
{

public:
    void sort(int a[], int n)
    {
        int low = 0 ;
        int mid = 0 ;
        int high = n - 1 ;


        while(mid<=high){

            if(a[mid]==0){
                swap(a[mid],a[low]);
                mid++;
                low++;
                
            }
            if(a[mid]==1)
                mid++;
            if(a[mid]==2){
                swap(a[mid],a[high]);
                high--;
            }

        }

    }
};

int main()
{

    int arr[]= {1,2,3,4,5};
  
    int n= 5;
    // Solution obe;
    // obe.sort(arr,n);
    // cout<<front(arr)<<endl;
    for(int i = n-1 ; i >=0 ;i--){
        cout<<arr[i]<<endl;

    }



    return 0;
}