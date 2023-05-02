#include <iostream>

using namespace std;
int main()
{
    int n;
    int a[1000];
    int b[1000]={};
    cin >> n;
    for (int i=1;i<=n;i++)
    {
        cin >> a[i];
        b[a[i]]++;
    }   
    int i=1;
    while (b[a[i]]>1)
        i++;
    cout << a[i];
    return 0;
}