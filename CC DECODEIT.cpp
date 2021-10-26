#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;

    while(tc--)
    {
        int n;
        cin>>n;

        string s;
        cin>>s;

        string ans = "";

        int dec;
        int x;

        for(int i=0;i<n;i+=4)
        {
            dec=0;
            x=8;
            for(int j=i;j<i+4;j++)
            {
                if(s[j] == '1')
                {
                    dec += x;
                    x/=2; 
                }
                else
                {
                    x/=2;
                }
            }
            char c;
            c = 97 + dec;
            ans += c;
        }
        cout<<ans<<endl;
    }
}