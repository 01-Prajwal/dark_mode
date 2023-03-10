#include <bits/stdc++.h>

using namespace std;
class Solution
{

public:
    vector<int> subarray;

    vector<int> sum(vector<int> arr, int n, long long s)
    {

        // int sum1 = arr[0];
        int sum1 = 0 ;
        bool found = false;

        int left = 0;
        int right = 0;

        while (right < n  && s!=0)
        {
            if (sum1 == s)
            {
                found = true;
                break;
            }
            else if (sum1 < s)
            {
                right++;
                if (right < n)
                {
                    sum1 += arr[right];
                }
            }
            else
            {
                sum1 -= arr[left];
                left++;
            }
        }
        if (found)
        {
            subarray.push_back(left+1);
            subarray.push_back(right+1);
            return subarray;
        }else{

            subarray.push_back(-1);
            return subarray;

        }


    }
};

int main()
{
    vector<int> arr = {1, 2, 3, 4};
    Solution obec;
     obec.sum(arr, 4,0);


    for (auto it : obec.subarray)
    {

        cout << it << endl;
    }

    return 0;
}
