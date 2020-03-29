#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int alternatingCharacters(string s)
{
    int n=s.length();
    int alt=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]==s[i+1])
            alt++;
    }
    return alt;
}
int main()
{
    int n,result;
    string s;

    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        result = alternatingCharacters(s);
        cout<<result<<endl;
    }
    return 0;
}
