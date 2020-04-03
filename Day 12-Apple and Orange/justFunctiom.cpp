// Complete the countApplesAndOranges function below.
void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) 
{
    int n1=apples.size();
    int n2=oranges.size();
    int sum1=0;
    int sum2=0;
    int c1=0,c2=0;

    for(int i=0;i<n1;i++)
    {
        sum1=a+apples[i];
        if(sum1>=s && sum1<=t)
                c1++;
    }
    for(int j=0;j<n2;j++)
    {
        sum2=b+oranges[j];
        if(sum2>=s && sum2<=t)
            c2++;
    }
    cout<<c1<<endl;
    cout<<c2<<endl;
}
