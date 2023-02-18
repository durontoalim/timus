#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()  
{   int t = 1;  // 1 10 100 1000 10000
    int c = 0;
    vector<int> v;

    while(1)
    {
        c++;
        v.push_back(t);
        t += c;
        
        if(t >= pow(2,32)) break;
    }

    int N;
    cin>>N;
    while(N--)
    {
        int n; cin>>n;

        if(binary_search(v.begin(), v.end(),n)){
            cout<<1<<" ";
        }
        else{
            cout<<0<<" ";
        }
    }
    cout<<endl;
    
    return 0;
}