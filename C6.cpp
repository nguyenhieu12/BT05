#include <iostream>

using namespace std;

int UCLN(int a, int b)
{
    while(a*b != 0){
        if(a > b) a = a % b;
        else b = b % a;
    }
    return (a+b);
}

int main()
{
    int a, b;
    cin >> a >> b;
    if(UCLN(a, b) == 1) cout << "nguyen to cung nhau";
    else cout << "khong nguyen to cung nhau";
    return 0;
}
