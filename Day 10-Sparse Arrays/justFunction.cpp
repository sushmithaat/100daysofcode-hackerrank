//Sparse Arrays Problem
// Complete the matchingStrings function below.
vector<int> matchingStrings(vector<string> strings, vector<string> queries)
{
    int n1=strings.size();
    int n2=queries.size();

    vector<int> v(n2);

    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            if(strings[i]==queries[j])
            {
                v[j]=v[j]+1;
               
            }     
        }
    }
    
    return v;
}
