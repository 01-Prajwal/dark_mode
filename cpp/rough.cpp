#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int basic = 419 ;
    
    char ch = 'A';
    
        double hra ,da,pf;
        int allow;

    if(ch=='A'){
        allow = 1700;
    }
    else if(ch=='B'){
        allow = 1500;
    }
    else {
        allow = 1300;
    }


    hra =0.2*100*basic;
    da = 0.5*100 * basic;
    pf = 1.1 * 100 * basic ;


    int total = round(basic) + round(hra) + round(da) +allow - round(pf);
    cout<<round(total);
    return 0;
}