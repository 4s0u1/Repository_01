#include <iostream>

using namespace std;
int a[10000],b[10000];

void biendoi(int x)
{
    a[0]=0;
    for (int i=x; i>0; i--)
    {
        if (a[i]>1)
            {
                a[i-1]++;
                a[i]-=2;
            }
    }
    if (a[0]==1)
        cout << 1;
    for (int i=1; i<=x;i++)
        cout <<a[i];
}
void chuyendoi(string x, string y)
{
    while (x.length()>y.length())
        y= '0'+y;
    while (x.length()<y.length())
        x= '0'+x;
    for (int i=1;i<=x.length();i++)
    {
        if (x[i-1]=='0')
            a[i]=0;
        else 
            a[i]=1;
        if (y[i-1]=='0')
            b[i]=0;
        else 
            b[i]=1;
        a[i]+=b[i];
    }
    biendoi(x.length());
}

int main()
{
    string m,n;
    cin >> m >> n;
    chuyendoi(m,n);
    return 0;
}