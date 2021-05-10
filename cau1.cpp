//Cho số nguyên n,
//tính hiệu của chữ số lớn nhất và chữ số nhỏ nhất của số nguyên đó.

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, min, max;cin >> n;
    max = n%10;
    min = n%10;
    while(n)
    {
        int temp = n%10;
        n/=10;
        if(max<temp)
        {
            max = temp;
        }
        if(min>temp)
        {
            min = temp;
        }
    }
    int hieu;
    hieu = max - min;
    cout << hieu << endl;
    return 0;

}
