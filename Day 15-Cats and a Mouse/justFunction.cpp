// Complete the catAndMouse function below.
string catAndMouse(int x, int y, int z) 
{
    string s;
    if(abs(x-z)<abs(y-z))
    {
            s="Cat A";
    }
    else if(abs(x-z)>abs(y-z))
    {
            s="Cat B"; 
    }  
    else
        s="Mouse C";
    return s;
}
