////
////Nhập vào 1 xâu kí tự,
////đếm xem mỗi từ xuất hiện bao nhiêu lần.
////In ra các từ theo thứ tự từ điển

#include <iostream>
#include <vector>
using namespace std;
int main()
{

    string my_string;
    cin.ignore();
    getline(cin, my_string);
    string b = "";
    vector<string>arr;
    int max_len;
    for(int i = 0; i < my_string.length(); i++)
    {
        if(my_string[i] != ' ')
        {
            b += my_string[i];
        }
        else
        {
            arr.push_back(b);
            b = "";

        }
    }
    sort(arr.begin(), arr.end());
    max_len = arr.size();
    int count[max_len] ;
    for(int i = 0; i < arr.size(); i++)
    {
        for(int j = 0; j < i; j++)
        {
            if(arr[j] == arr[i])
            {
                count[max_len - i] += 1;
            }
            else
            {
                count[max_len - i] = count[max_len - i];
            }

        }

    }
    for(int i = 0; i < max_len; i++)
    {
        cout << count[i] << endl;
    }
}




#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<vector>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
int main() {
    string my_string;
    getline(cin,my_string);
    vector <string> s;
    while (!my_string.empty())
    {
        s.push_back(my_string.substr(0,my_string.find(" ")));
        if (my_string.find(" ") > my_string.size())
            break;
        else
        my_string.erase(0, my_string.find(" ") + 1);
    }

    sort(s.begin(), s.end());
    int count=1;
    int arr[100];
    //int k=0;
    for(int i=0; i<s.size();i++){
        if(s[i]==s[i+1]){
            count++;
        }
        else {
            cout<<s[i]<<" : "<<count<<endl;
            count = 1;
        }

    }
}
