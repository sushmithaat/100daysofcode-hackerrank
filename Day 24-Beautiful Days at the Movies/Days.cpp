//Problem Link-https://www.hackerrank.com/challenges/beautiful-days-at-the-movies/problem

//function
// Complete the beautifulDays function below.
int beautifulDays(int i, int j, int k) 
{
    int temp,count=0;
    for(int v=i;v<=j;v++)
    {
        temp=v;
        int q=0;
        while(temp>0)
        {
            q=q*10+temp%10;
            temp/=10;
        }
        if(abs(v-q)%k==0)
            count++;
    }
    return count;
}
//Main Program

#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,k;
    int temp=0,count=0;

    cin>>i>>j>>k;

    for(int v=i;v<=j;v++)
    {
        int r=0;
        temp=v;

        while(temp>0)
        {
            r=r*10+temp%10;
            temp/=10;
        }
        if(abs(v-r)%k==0)
            count++;

    }
    cout<<count<<endl;
    return 0;

}
