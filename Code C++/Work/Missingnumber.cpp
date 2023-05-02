#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    bool b[n]={};
    for (int i=1;i<=n;i++)
    {
        cin >> a[i];
        b[a[i]]=true;
    }
    int i=0;
    while (b[i]==true)
        i++;
    cout << i;
    return 0;
}
