/*#include<bits/stdc++.h>
using namespace std;

int toggle(int a){
    if(a == 0) return 1;
    else return 0;
}

int main()
{
    int a[3][3];
    int b[3][3]={1,1,1,1,1,1,1,1,1};

     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(a[i][j]%2 == 1)
            {
                b[i][j] = toggle(b[i][j]);
                if(j!=0)
                {b[i][j-1] = toggle( b[i][j-1]);}
                if(j!=2)
                {b[i][j+1] = toggle(b[i][j+1]);}
                if(i!=2)
                {b[i+1][j] = toggle(b[i+1][j]);}
                if(i!=0)
                {b[i-1][j] = toggle(b[i-1][j]);}
            }
            //else
              //   b[i][j] = ;
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<b[i][j];
        }
        cout<<endl;
    }
}*/
#include <bits/stdc++.h>
using namespace std;
int n,i,j,a,b[9][9];
main() {
	for(i=1;i<4;i++)
        for(j=1;j<4;j++)
        {cin>>a;if(a%2){b[j][i]++;b[j+1][i]++;b[j][i+1]++;
            b[j-1][i]++;b[j][i-1]++;}}
	for(i=1;i<4;i++)
	{for(j=1;j<4;j++)
	cout<<1-b[j][i]%2;
	cout<<endl;}
}
