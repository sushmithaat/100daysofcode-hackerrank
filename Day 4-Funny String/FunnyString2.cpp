#include<bits/stdc++.h>
#include<iostream>

using namespace std;

// Complete the funnyString function below.
string funnyString(string s) 
{
    int n = s.size();
    string r = s;
    reverse(r.begin(),r.end());
    for(int i=1;i<n;i++)
    {
        int d1=s[i]-s[i-1];
        int d2=r[i]-r[i-1];
        
        if(abs(d1)!=abs(d2))
            return "Not Funny";
    }
    return "Funny";

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) 
    {
        string s;
        getline(cin, s);

        string result = funnyString(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
