#include <iostream>

using namespace std;
int arr[100];

void duara(int x)
{
    for (int i=x;i>=1;i--)
    {
        if (arr[i]==1) cout <<"A";
        if (arr[i]==2) cout <<"B";
        if (arr[i]==3) cout <<"C";
        if (arr[i]==4) cout <<"D";
        if (arr[i]==5) cout <<"E";
        if (arr[i]==6) cout <<"F";
        if (arr[i]==7) cout <<"G";
        if (arr[i]==8) cout <<"H";
        if (arr[i]==9) cout <<"I";
        if (arr[i]==10) cout <<"J";
        if (arr[i]==11) cout <<"K";
        if (arr[i]==12) cout <<"L";
        if (arr[i]==13) cout <<"M";
        if (arr[i]==14) cout <<"N";
        if (arr[i]==15) cout <<"O";
        if (arr[i]==16) cout <<"P";
        if (arr[i]==17) cout <<"Q";
        if (arr[i]==18) cout <<"R";
        if (arr[i]==19) cout <<"S";
        if (arr[i]==20) cout <<"T";
        if (arr[i]==21) cout <<"U";
        if (arr[i]==22) cout <<"V";
        if (arr[i]==23) cout <<"W";
        if (arr[i]==24) cout <<"X";
        if (arr[i]==25) cout <<"Y";
        if (arr[i]==0) cout <<"Z";
    }
}

int main ()
{
    int n;
    int i=0;
    cin >> n;
    while (n > 0)
    {
        i++;
        arr[i]=n%26;
        n/=26;
        if (arr[i]==0)
            n--;
    }
    duara(i);
    return 0;
}