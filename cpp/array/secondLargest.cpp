#include<bits/stdc++.h>
using namespace  std;

vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.

    int small = INT_MAX;
    int secondSmall = INT_MAX;
    int large = INT_MIN;
    int secondLarge = INT_MIN;
    

    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        if(a[i]<small){
            secondSmall=small;
            small = a[i];
        }
        else if(a[i]<secondSmall && a[i]!=small){
            // ans.push_back(a[i]);
            secondSmall=a[i];
        }
    }
    for (int i = 0; i < n; i++)
    {


        if (a[i]>large){
            secondLarge=large;
            large=a[i];
        }
        else if(a[i]>secondLarge && a[i]!=large ){
            // ans.push_back(a[i]);
            secondLarge = a[i];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        if(a[i] == secondSmall || a[i] == secondLarge){
            ans.push_back(a[i]);
        }
    }
    

    
    
    
    return ans;
}


int main(){


    vector<int>aa;
    aa.push_back(1);
    aa.push_back(2);
    aa.push_back(3);
    aa.push_back(4);
    aa.push_back(5);


    getSecondOrderElements(5,aa);



    return 0;
}