//The Hurdle Race

// Complete the hurdleRace function below.
int hurdleRace(int k, vector<int> height) 
{
    
    int max=*max_element(height.begin(),height.end());
    if(k>max)
        return 0;
    else
        return max-k;
}
