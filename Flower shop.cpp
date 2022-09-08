#include <bits/stdc++.h>

using namespace std;

int visited[10005];

int main() {
    int n;
    cin>>n;
    for(int i=0 ; i< n ; i++)
    {
        int x;
        cin>>x;
        visited[x]++;
    }
    int ans = 0;
    for(int i =0 ; i<= 10000 ; i++)
    {
        if(visited[i] != 0)
        {
            ans++;
            for(int j=0 ; j<=4 ; j++)
                visited[i+j] = 0;
        }
    }
    cout<<ans<<endl;
    return 0;
}