#include <bits/stdc++.h>

using namespace std;


void sortedInsert(stack<int> &stack, int num) {
    //base case
    if(stack.empty() || (!stack.empty() && stack.top() < num) ) {
        stack.push(num);
        return;
    }
    
    int n = stack.top();
    stack.pop();
    
    //recusrive call
    sortedInsert(stack, num);
    
    stack.push(n);
}

void sortStack(stack<int> &stack)
{
		//base case
    	if(stack.empty()) {
            return ;
        }
    
    	int num = stack.top();
    	stack.pop();
    
    	//recursive call
    	sortStack(stack);
    
    	sortedInsert(stack, num);
}

int main(){
    stack <int> tp;
    tp.push(1);
    tp.push(2);
    tp.push(10);
    tp.push(5);
    tp.push(3);


    sortStack(tp);

    return 0 ;
f}