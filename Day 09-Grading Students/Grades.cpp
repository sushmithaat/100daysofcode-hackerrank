#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n;
    
    cin>>t;
    
    while(cin>>n)
    {
        if(n<38)
            cout<<n<<endl;
        else if(n%5>2)
         cout<<n+(5-n%5)<<endl;
        else
            cout<<n<<endl;
    }
    return 0;
    
}
