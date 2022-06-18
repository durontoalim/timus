#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N,check,fact=1;
    cin>>N;
    string str;
    cin>>str;

    int len = str.length();

    for (int i = N; i > 1; i -= len)
    {
        fact = fact*i;
    }

    cout<<fact<<endl;
    

    return 0;
}