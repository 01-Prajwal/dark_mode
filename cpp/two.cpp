#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{

public:
    bool reverse(vector<int> a, vector<int> b, int n)
    {
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        for (int i = 0; i < n; i++)
        {
            if(a[i]!=b[i]){
                return 0 ; 
            }
        }
        return 1;
        
        

    }
};

int main()
{

    vector<int> arr = {1, 2, 3, 6,7};
    vector<int> arr1 = {11, 21, 3, 4, 5};
    int n = 5;
    Solution obj;

    cout << obj.reverse(arr, arr1, 5);
    // vector<int>::iterator it;

    // multiset<int> s;
    // s.insert(1);
    // s.insert(10);
    // s.insert(10);
    // s.insert(10);

    // multiset <int>::iterator it;

    // for ( it = s.begin(); it != s.end() ;it++)
    // {
    //     cout<<*it<<endl;
    // }

    return 0;
}