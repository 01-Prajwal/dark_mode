#include<bits/stdc++.h>

using namespace std;


class Solution {

    public:
    vector<int> leaders(int a[], int n){
        // Code here
        
        int max = -1;
        vector<int> lead;
        // int j = n-1;
        for (int i = n-1 ; i>0;i--){

            if(a[i]>max){
                max= a[i];
                // lead.push_back(max);
                lead.insert(lead.begin(),max);
            }
        }
        for(auto it : lead){
            cout<<it<< " ";
        }
        return lead;
    }


};
int main(){

    int arr[]={16 17 4 3 5 2};
    
    Solution obj ;
    obj.leaders(arr,2722);
    // vector <int> lea;

    // for (int i = 0; i < 5; i++)
    // {
    //     lea.insert(lea.begin(),i);
    // }
    
    // for (auto it : lea)
    // {
    // cout<<it<<endl;
    // }
    



    return 0 ;
}

