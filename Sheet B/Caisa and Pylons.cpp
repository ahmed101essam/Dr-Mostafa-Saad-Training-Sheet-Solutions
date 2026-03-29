#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<pair<int,int>>vpi;

bool compareBySecondDesc(const pair<int, int>& a, const pair<int, int>& b) {
    return a.second > b.second;
}

int main(){
    int n ,mx=0;
    cin>>n;
    vi v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
       mx = max(mx,v[i]);
    }
    cout<<mx<<"\n";
    return 0;
}