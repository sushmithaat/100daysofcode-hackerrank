#include <bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{

    int o,n;

    cin>>n>>o;

    vector<int> v(n);
    
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    rotate(v.begin(),v.begin()+o,v.end());
    
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
