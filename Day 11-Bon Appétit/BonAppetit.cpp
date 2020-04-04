//Problem link-https://www.hackerrank.com/challenges/bon-appetit/problem

#include <bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
    int n,k,b,sum,ac=0;

    cin>>n>>k;

    vector<int> bill(n);

    for(int i=0;i<n;i++)
    {
        cin>>bill[i];
    }
    cin>>b;

    sum=accumulate(bill.begin(),bill.end(),0); //accumulate function is used to find the sum of elements in vector(bill)
    for(int i=0;i<n;i++)
    {
        if(k==i)
           sum=sum-bill[k]; //subtracting the bill of Anna didn't eat 
    }
    ac=sum/2; //finding the actual cost per two person by dividing the sum by 2
    if(ac==b) //when actual bill amount is equal to charged bill print 'Bon Appetit'
        cout<<"Bon Appetit\n";
    else    
        cout<<b-ac<<endl; //otherwise subtract the charged bill with actual bill 
    
    return 0;
}
