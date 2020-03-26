#include<iostream>
#include<bits/stdc++.h>

using namespace std;
const int MAX_CHAR=26;

bool twostrings(string s1,string s2)
{
    int n1=s1.length();
    int n2=s2.length();

    vector<bool> v(MAX_CHAR,0);

    for(int i=0;i<n1;i++)
    {
        v[s1[i]-'a']=true;
    }
    for(int i=0;i<n2;i++)
    {
        if(v[s2[i]-'a'])
            return true;
    }
    return false;
}
int main()
{
    int t;
    string s1,s2;

    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>s1;
        cin>>s2;
        if(twostrings(s1,s2))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}

