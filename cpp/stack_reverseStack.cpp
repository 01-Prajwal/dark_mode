#include <bits/stdc++.h>

using namespace std;

void solve(stack <int> &st,int x){


    if(st.empty()){
        st.push(x);
        return;

    }
    int num  = st.top();
    st.pop();

    solve(st,x);
    st.push(num);
}


void reverseStack(stack<int> &stack) {
    // Write your code here
    if(stack.empty())
        return;

    int num = stack.top();
    stack.pop();

    reverseStack(stack);
    solve(stack,num);
}


int main(){


    stack <int> tp;
    tp.push(10);
    tp.push(11);
    tp.push(12);
    tp.push(1);

    reverseStack(tp);


    return 0 ;
}