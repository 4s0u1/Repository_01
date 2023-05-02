#include <iostream>

using namespace std;
int arr[30][30];
void show(int x)
{
    arr[x][1]=1;
    arr[x][x]=1;
    for(int i=2;i<x;i++)
        arr[x][i]=arr[x-1][i]+arr[x-1][i-1];
    for(int i=1;i<=x;i++)
        cout << arr[x][i]<<" ";
    cout<< endl;
}
int main()
{
    int n;
    cin >> n;
    for (int i=1;i<=n;i++)
        show(i);
    return 0;
}