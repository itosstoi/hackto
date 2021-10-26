#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;

    while(tc--)
    {
        long long int a,b;
        cin>>a>>b;

        long long int ne,no,me,mo;

        if(a%2==0 && b%2==0)
        {
            ne = no = a/2;
            me = mo = b/2;
        }
        else if(a%2==0 && b%2==1)
        {
            ne = no = a/2;
            me = (b/2);
            mo = (b/2)+1;
        }
        else if(a%2==1 && b%2==0)
        {
            me = mo = b/2;
            ne = (a/2);
            no = (a/2)+1;
        }
        else
        {
            ne = (a/2);
            no = (a/2)+1;
            me = (b/2);
            mo = (b/2)+1;
        }
        
        cout<<(ne*me) + (no*mo)<<endl;

    }
}