#include <iostream>

using namespace std;
bool kiemtra(int n)
{
    while (n % 3==0&& n>0)
    {
        n=n/3;
    }
    if (n==1);
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