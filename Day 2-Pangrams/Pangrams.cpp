#include <bits/stdc++.h>

using namespace std;

// Complete the pangrams function below.
string pangrams(string s) {
    int n=s.length();

    vector<bool> v(26,false);
    int ind=0;
    for(int i=0;i<n;i++)
    {
        if('A' <= s[i] && s[i] <='Z' )
            ind=s[i]-'A';
        else if('a' <= s[i] && s[i] <= 'z')
            ind=s[i]-'a';
        v[ind]=true;
    }
    for(int i=0;i<=25;i++)
    {
        if(v[i]==false)
            return "not pangram";

    }
    return "pangram";

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
