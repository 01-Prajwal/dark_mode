#include<bits/stdc++.h>
using namespace std;

vector<int> rotateArray(vector<int>& arr, int n) {
    // Write your code here.
    //Brute Force works fine (47%)
    vector <int> ans;
    for(int i  = 0; i< n;i++ ){
        if(i == n-1){
            ans.push_back(arr[0]);
            break;
        }
        ans.push_back(arr[i+1]);

    }

    


    for(auto &it : ans){
        cout<<it<<" ";
    }
    return ans;
}

int main(){

    vector <int> a;
    a.push_back(4);
    a.push_back(0);
    a.push_back(3);
    a.push_back(2);
    a.push_back(5);


    rotateArray(a,5);
    // cout<< a.size();


    return 0 ;

}