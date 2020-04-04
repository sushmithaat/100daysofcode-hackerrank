//Problem link-https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem

#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int n;
    int maxc=0,minc=0;
    int max,min; 

    cin>>n;

    vector<int> s(n);

    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    } 
    
    max=s[0]; 
    min=s[0];
    
    for(int i=1;i<n;i++)
    {
        if(s[i]>max) 
        {
            max=s[i];
            maxc++;
        }
        else if(s[i]<min)
        {
            min=s[i];
            minc++;
        }
    }
    cout<<maxc<<" "<<minc;
    return 0;
}
