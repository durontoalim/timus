#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N,count, arr[15001],t=1,posi,n;

    N = 15000;

    cin>>n;

        arr[0] = 2;

        for(int i=3; i < N; i++){
            count = 0;
            for(int j=2; j < i; j++){
                if(i % j == 0){
                    count++;
                    break;
                }
            }
            if(count == 0){
                arr[t] = i;
                t++;
            }
        }

        while(n--){
            cin>>posi;
            cout<<arr[posi-1]<<endl;
        }
    
    
    



    return 0;
}