#include <iostream>

using namespace std;

bool kiemtra(int n)
{
    if (n==0)
        return true;
    while (n % 2==0)
    {
        n=n/2;
    }
    while (n % 3==0)
    {
        n=n/3;
    }
    while (n % 5==0)
    {
        n=n/5;
    }
    if (n==1)
        return true;
    return false;
}   


int main()
{
    int n;
    cin >> n;
    if (kiemtra(n))
        cout << "true";
    else
        cout << "false";
    return 0;
}