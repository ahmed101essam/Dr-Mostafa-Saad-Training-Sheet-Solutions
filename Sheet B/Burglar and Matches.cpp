#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<pair<int,int>>vpi;

bool compareBySecondDesc(const pair<int, int>& a, const pair<int, int>& b) {
    return a.second > b.second;
}

int main(){
    int n , m , cnt=0;
    cin>>n>>m;
    vpi v(m);
    for(int i=0;i<m;i++){
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end(),compareBySecondDesc);
    for(int i=0;i<m && n>0;i++){
        int c = min(n , v[i].first);
        cnt+=(c*v[i].second);
        n-=c;
        
    }
    cout<<cnt<<"\n";
    return 0;
}