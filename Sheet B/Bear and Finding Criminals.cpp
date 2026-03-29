#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int main(){
    int n , c , cnt;
    cin>>n>>c;
    vi v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int i = 1;
    c = c - 1;
    cnt = v[c];
    while(c-i>=0 || c+i< n){
        if(c-i>=0 && c+i<n && v[c-i] && v[c+i]){
            cnt+=2;
        }else if(c-i<0 && c+i<n && v[c+i]){
            cnt++;
        }else if(c-i>=0 && c+i>=n && v[c-i]){
            cnt++;
        }
        i++;
    }
    cout<<cnt<<"\n";
    return 0;
}