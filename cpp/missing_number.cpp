#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> v1;
    int MissingNumber(vector<int> &array, int n)
    {

        int len = array.size();
        int exp_total = (n * (n + 1)) / 2;

        int total = 0;
        for (int num : array)
        {
            total += num;
        }
        return exp_total - total;
    }
};

int main()
{

    vector<int> vec = {6, 1, 2, 8, 3, 4, 7, 10, 5};
    int n = 10;

    Solution obec;
    cout << obec.MissingNumber(vec, n);
    // int xo = 1^1;
    // cout<<xo;
    //   vector <int> v1 ;
    //     for(int i = 0 ;i < n; i++){

    //     v1.push_back(i+1);
    // }
    // for(auto it : v1){
    // cout<<v1.size()<<endl;
    // }

//brute force for missing number 
    int a[] = {1,2,3,5};
    
    int n = 4;
    int num = 1 ;
    sort(a,a + n);
    for(int i = 0 ;i < n ;i++){
        if(a[i]==num){
             num++;
            continue;
           
        }
        else{
            cout<< num;
        }
        // cout<<a[i]<<endl;
    }

    return 0;
}
