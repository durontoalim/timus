#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N,sum=0;
    cin>>N;

    if(N > 0){
        for(int i=1; i<= N ; i++){
            sum += i;
        }
    }

    if(N <= 0){

        for(int i=N; i <= 1 ; i++){
            sum += i;
        }
    }

    cout<<sum<<endl;


    return 0;
}