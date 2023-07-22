#include<bits/stdc++.h>
using namespace std;


int isSorted(int n, vector<int> a) {
    // Write your code here.
    // int ans  ;


    // for (int i = 0; i < n  ; i++)
    // {
    //     for (int j = i +1; j <n; j++)
    //     {
    //         if (a[i]<a[j])
    //         {
    //             /* code */
    //             ans = 1 ;
    //         }
    //         else{
    //             ans = 0;
    //         }
            
    //     }
        
    // }
    
    
    // return ans;
    for (int i = 1; i < n; i++)
    {
        /* code */
        if(a[i] < a[i-1]){
            return 0 ;
        }
    }
    return 1;

}
int main(){

    vector<int>a;
    a.push_back(0);
    a.push_back(0);
    a.push_back(0);
    a.push_back(0);
    a.push_back(4);

    cout << isSorted(5,a);





    return 0 ;
}