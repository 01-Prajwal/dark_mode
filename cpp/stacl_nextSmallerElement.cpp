#include <bits/stdc++.h>

using namespace std;



vector <int>nextSmaller(vector <int>& arr,int n){

    stack <int> sr;
    vector <int> ans(n);
    sr.push(-1);

    for(int i = n - 1 ; i >= 0 ; i--){
        int curr = arr[i];
        while (sr.top()>=curr)
        {
            sr.pop();
        }

        ans[i]= sr.top();
        sr.push(curr);

        
    }
    return ans;


}

int main (){


    return 0 ;
}