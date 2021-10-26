#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int tc;
    cin>>tc;

    while(tc--)
    {
        long long int n,k,x,y;
        cin>>n>>k>>x>>y;
        
        long long int colX_1,colY_1;
        long long int colX_2,colY_2;
        long long int colX_3,colY_3;
        long long int colX_4,colY_4;

        if(x==y)
        {
            cout<<n<<" "<<n<<endl;
        }
        else if(x>y)
        {
            colX_1 = n;
            colY_1 = n - x + y;

            colX_2 = colY_1;
            colY_2 = colX_1;

            colX_4 = x - y;
            colY_4 = 0;

            colX_3 = colY_4;
            colY_3 = colX_4;

            if(k%4 == 0)
            {
                cout<<colX_4<<" "<<colY_4<<endl;
            }
            else if(k%4 == 1)
            {
                cout<<colX_1<<" "<<colY_1<<endl;
            }
            else if(k%4 == 2)
            {
                cout<<colX_2<<" "<<colY_2<<endl;
            }
            else if(k%4 == 3)
            {
                cout<<colX_3<<" "<<colY_3<<endl;
            }
        }
        else if(x<y)
        {
            colX_1 = n - y + x;
            colY_1 = n;

            colX_2 = colY_1;
            colY_2 = colX_1;

            colX_4 = 0;
            colY_4 = y - x;

            colX_3 = colY_4;
            colY_3 = colX_4;

            if(k%4 == 0)
            {
                cout<<colX_4<<" "<<colY_4<<endl;
            }
            else if(k%4 == 1)
            {
                cout<<colX_1<<" "<<colY_1<<endl;
            }
            else if(k%4 == 2)
            {
                cout<<colX_2<<" "<<colY_2<<endl;
            }
            else if(k%4 == 3)
            {
                cout<<colX_3<<" "<<colY_3<<endl;
            }
        }
        
    }
}