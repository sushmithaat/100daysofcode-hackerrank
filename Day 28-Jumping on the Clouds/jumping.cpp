Problem Link-https://www.hackerrank.com/challenges/jumping-on-the-clouds/problem

// Complete the jumpingOnClouds function below.
int jumpingOnClouds(vector<int> c) 
{
    int n=c.size(),count=-1;

    for(int i=0;i<n;i++,count++)
    {
        if(i<n-2 && (c[i+2]==0))
        {
            i++;
        }
       
    }
    return count;

}
