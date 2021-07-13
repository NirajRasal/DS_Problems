#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'marsExploration' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int marsExploration(string s) {
    int count=0;
    int len = s.size();
    string code = "SOS";
    
    int x = s.find("SOS");
    
    /*for(int i=0;s[i]<len;i=i+2)
    {
        
        if(s[i] = 'S' && s[i+1] == 'O' && s[i+2] == 'S')
        {
            count++;
        }
        else
        {
            continue;
        }
    }
    */
    
    return len;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    cout<<"enter string:";
    getline(cin, s);

    int result = marsExploration(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
