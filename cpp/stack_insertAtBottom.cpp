#include <bits/stdc++.h>

using namespace std;


void solve (stack <int>&st,int x){

    if(st.empty()){
        st.push(x);
        return;
    }
    int num = st.top();
    st.pop();

    solve(st,x);
    st.push(num);
    
}

stack <int> insertAtBottom(stack <int> &s, int x){
    solve(s,x);
    return s;

}

int main(){


    stack <int> tp;
    tp.push(10);
    tp.push(11);
    tp.push(12);
    tp.push(1);

    insertAtBottom(tp,78);


    return 0 ;
}