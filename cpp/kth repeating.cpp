#include <bits/stdc++.h>
using namespace std;
//{ Driver Code Starts

// } Driver Code Ends
class Solution
{
public:
    map<int, int> mp;
  

    map<int,int>::iterator it;
    int firstElementKTime(int a[], int n, int k)
    {

        for (int i = 0; i < n; i++)
        {
            auto it = mp.find(a[i]);
            if (it != mp.end()) {
                it->second++;
                if (it->second == k) {
                    return it->first;
                }
            } else {
                mp.insert(make_pair(a[i], 1));
            }
        }
        return -1;
    }
};

//{ Driver Code Starts.

int main()
{
    int arr[] = {3,1,2};
    int n = 3;
    Solution ob;
    cout << ob.firstElementKTime(arr, n, 1) << endl;
    // for (auto i : ob.m)
    // {
    //     cout << i.first << " " << i.second << endl;
    // }
    // map<int, int> m1;


    




    return 0;
}
