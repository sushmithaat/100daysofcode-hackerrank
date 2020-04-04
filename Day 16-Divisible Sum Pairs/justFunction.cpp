//Problem link-https://www.hackerrank.com/challenges/divisible-sum-pairs/problem

// Complete the divisibleSumPairs function below.
int divisibleSumPairs(int n, int k, vector<int> ar) 
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((ar[i]+ar[j])%k ==0) //when sum of ar[i]+a[j] is divisible by k then increment the count value by 1
                count++;
        }
    }
    return count; //return the count value
}
