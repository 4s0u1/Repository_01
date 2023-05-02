#include <iostream>

using namespace std;

int a[10000];
bool b[10000]={};

void ketqua(int x)
{
    int i=0;
    while (b[x-a[i]]==false)
        i++;
    int j=i+1;
    while (a[j]!=x-a[i])
        j++;
    cout << i << " "<< j;
}

int main()
{
    int n, target;
    cin >> n >> target;
    for (int i=0;i<n;i++)
    {
        cin >> a[i];
        b[a[i]]=true;
    }
    ketqua(target);
    
}