#include <bits/stdc++.h>

using namespace std;

int main()
{
    int s,t,a,b,m,n;
    int sum1=0,sum2=0,c1=0,c2=0;

    cin>>s>>t>>a>>b>>m>>n;

    vector<int> app(m);
    vector<int> o(n);

    for(int i=0;i<m;i++)
    {
        cin>>app[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>o[i];
    }
    for(int i=0;i<m;i++)
    {
        sum1=a+app[i];
        if(sum1>=s && sum1<=t)
                c1++;
    }
    for(int j=0;j<n;j++)
    {
        sum2=b+o[j];
        if(sum2>=s && sum2<=t)
            c2++;
    }
    cout<<c1<<endl;
    cout<<c2<<endl;

    return 0;
}
