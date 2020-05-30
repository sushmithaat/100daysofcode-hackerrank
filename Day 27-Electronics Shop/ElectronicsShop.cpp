//Problem Link-https://www.hackerrank.com/challenges/electronics-shop/problem

/*
 * Complete the getMoneySpent function below.
 */
int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) 
{
    /*
     * Write your code here.
     */
    int s1=keyboards.size();
    int s2=drives.size();
    int max=-1;

    for(int i=0;i<s1;i++)
    {
        for(int j=0;j<s2;j++)
        {
            if(keyboards[i]+drives[j]<=b && keyboards[i]+drives[j]>max)
            {
                max=keyboards[i]+drives[j];
            }
        }
    }
    return max;

}
