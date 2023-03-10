#include<iostream>
using namespace std;

class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        // code here

        int start = 0 ;
        int end = n -1 ; 
        int ans = -1;
        int mid = (start  + end ) / 2;
        while (start <= end)
        {
            if(arr[mid] == k){
                ans = mid;
                return ans;
            }
            else if(k > arr[mid]){
                start = mid + 1;
            }
            else if( k < arr[mid]){
                end = mid - 1 ;

            }
            mid = (start  + end ) / 2;
        }
        return ans ;
        
    }
};

int main(){
    Solution  obj ;
    int arr[] = { 1,2,3,4,5};

    cout<< obj.binarysearch(arr,5,5);
    
    return 0;
}