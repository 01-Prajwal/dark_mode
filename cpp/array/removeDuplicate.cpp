#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
    int ans =1 ;
    for(int i = 1 ; i < n;i++){
        ans++;
        if(arr[i] == arr[i -1]){
            ans--;
        }

    }
    return ans;
}
int main(){
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(5);
    a.push_back(3);
    a.push_back(4);
    cout<< removeDuplicates(a,5);
    return 0 ;
}