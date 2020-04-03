#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int theLoveLetterMystery(string s) {
    int c=0;
    int n=s.size();
    for(int i=0,j=n-1;i<j;i++,j--)
    {
        c+=abs(s[i]-s[j]);
    }
    return c;
}

int main()
{
    int n,result;
    string s;

    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        result = theLoveLetterMystery(s);
        cout<<result<<endl;
    }
    return 0;
}
