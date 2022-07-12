#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin>>N;

    int arr[N];
    int t = 0,num = N;

    while(N--){
        int n,count = -1;
        cin>>n;

        for(int i=1;i<= n;i *= 10){
            if(i >= n){
                break;
            }
            count++;
        }
        arr[t] = count;
        t++;
    }

    for (int i = 0; i < num; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}