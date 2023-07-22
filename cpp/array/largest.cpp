#include <bits/stdc++.h> 
using namespace std;
int largestElement(vector<int> &arr, int n) {
    // Write your code here.
    int ans = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        /* code */
        if (arr[i]>ans){
            ans=arr[i];
        }


    }
    return ans;
    
}


int main(){
    vector <int> a;
    a.push_back(4);
    a.push_back(7);
    a.push_back(8);
    a.push_back(6);
    a.push_back(7);
    a.push_back(6);


    cout << largestElement(a,6);



    
}