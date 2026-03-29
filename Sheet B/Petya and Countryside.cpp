#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int main(){
    int n , mx=0;
    cin>>n;
    vi v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        int l = i , r = i;
        int cnt = 1;
        for(l;l>0;l--){
            if(v[l-1]>v[l]){
                break;
            }else{
                cnt++;
            }
        }
        for(r;r<n-1;r++){
            if(v[r+1]>v[r]){
                break;
            }else{
                cnt++;
            }
        }
        if(cnt>mx){
            mx=cnt;
        }
    }
    cout<<mx<<"\n";
    return 0;
}