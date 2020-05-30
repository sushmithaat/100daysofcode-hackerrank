//Problem Link-https://www.hackerrank.com/challenges/find-digits/problem?h_r=profile

// Complete the findDigits function below.
int findDigits(int n) 
{
    int temp=n,c=0;
    while(temp!=0)
    {
        int d=temp %10;
        temp/=10;

        if(d>0 && n%d==0)
        {
            c++;
        }

    }
      return c;

}
