#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N,check,fact=1;
    cin>>N;

    for(int i=2; i<= sqrt(N); i++){
        if(N%2 == 1){
            check = i;
            break;
        }
    }
    for (int i = N; i > 1; i -= check)
    {
        fact = fact*i;
    }

    cout<<fact<<endl;
    

    return 0;
}