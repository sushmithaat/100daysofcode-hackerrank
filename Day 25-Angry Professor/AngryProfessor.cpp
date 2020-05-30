//Problem Link-https://www.hackerrank.com/challenges/angry-professor/problem

// Complete the angryProfessor function below.
string angryProfessor(int k, vector<int> a) 
{
    int s=a.size();
    string s1;
    int ontime=0;
    for(int i=0;i<s;i++)
    {
        if(a[i]<=0)
        {
            ontime++;
        }
    }
    if(ontime<k)
    {
        s1="YES";
    }
    else if(ontime>=k)
    {
        s1="NO";
    }
    return s1;
}
