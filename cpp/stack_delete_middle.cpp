#include <bits/stdc++.h>
using namespace std;

void solve(stack<int> &inputStack, int count, int size)
{

    // if(count ==  size/2){
    //     inputstack.pop();
    //     return;
    // }

    // int num = inputstack.top();
    // inputstack.pop();

    // solve(inputstack,count+1,size);

    // inputstack.push(num);
    if (inputStack.empty())
    {
        return;
    }
    if (count == size / 2)
    {
        inputStack.pop();
        return;
    }
    if (inputStack.size() < 1)
    {
        return;
    }
    int num = inputStack.top();
    inputStack.pop();
    // if (inputStack.size() >= size)
    // {
    //     return;
    // }
    // RECURSIVE CALL
    solve(inputStack, count + 1, size);

    inputStack.push(num);
}

void deleteMiddle(stack<int> &inputstack, int N)
{

    int count = 0;
    solve(inputstack, count, N);
    
}

int main()
{

    // int arr[] = {1,2,3,4,5};
    stack<int> op;
    op.push(1);
    op.push(2);
    op.push(3);
    op.push(4);
    op.push(5);



    deleteMiddle(op, 4);
    cout<<endl;

    return 0;
}