//Viết chương trình nhập vào một mảng số thực có độ dài n (Độ dài n và các phần tử của mảng là input của chương trình)
//In ra tất cả những giá trị lớn hơn hoặc bằng giá trị trung bình μ
//Biết μ=1n∑i=1nxi
//
//Đầu vào:
//
//Dòng đầu tiên chứa số nguyên n là số phần tử của dãy;
//Dòng tiếp theo chứa n số thực.
//Đầu ra: Tất cả các số thực lớn hơn giá trị trung bình của dãy. Các số cách nhau bởi dấu cách và làm tròn đến chữ số thập phân thứ hai.
//
//Dữ liệu vào nhập từ bàn phím và kết quả được in ra màn hình.

#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n; cin >> n;
    double a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    double mean;
    double sum;
    for(int i = 0; i< n; i++)
    {
        sum += a[i];
    }
    mean = sum / n;
    for(int i = 0; i < n; i++)
    {
        if(a[i]> mean)
        {
            cout <<setprecision(2)<<fixed<< a[i];
        }
    }
    return 0;

}
