#include <iostream>

using namespace std;

bool kiemtra(int n)
{
    int x=n;
    int y=0;
    while (n > 0)
    {
        y = y*10 + n%10;
        n = n/10;
    }
    if (x == y)
        return true;
    return false;
}

int main()
{
    int n;
    cin >> n;
    if (kiemtra(n))
    cout<<"true";
    else
    cout<<"false";
    return 0;
}