#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i;

    cin>>n;
    vector<int> v(n);
    
    for(i=0;i<n;i++)
    {
        cin>>v[i];
    }

    for (i = n - 1; i >= 0; i--) 
    {
       cout<<v[i]<<" ";
    }
    return 0;
}
