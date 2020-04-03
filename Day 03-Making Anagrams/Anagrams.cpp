#include<iostream>
#include <bits/stdc++.h>

using namespace std;

// Complete the makingAnagrams function below.
int makingAnagrams(string s1, string s2) {
    int n1[26]={0};
    int n2[26]={0};
    int count=0;
    for(int i=0;i<s1.length();i++)
    {
        char c=s1[i];
        n1[c-'a']++;
    }
    for(int i=0;i<s2.length();i++)
    {
        char c=s2[i];
        n2[c-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        count=count+abs(n2[i]-n1[i]);
    }
    return count;
}

int main()
{
    string s1;
    //getline(cin, s1);
    cin>>s1;

    string s2;
    //getline(cin, s2);
    cin>>s2;

    int result = makingAnagrams(s1, s2);

    cout << result << "\n";

    return 0;
}

