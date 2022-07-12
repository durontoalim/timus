#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<long long int> n;
    long long int N;

    while(cin>>N){
        n.push_back(N);
    }

    for (int i = n.size() - 1; i >= 0; i-- )
    {
        cout<<fixed<<setprecision(4)<<sqrt(double(n[i]))<<endl;
    }


    return 0;
}