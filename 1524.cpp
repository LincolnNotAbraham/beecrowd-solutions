#include <bits/stdc++.h>
 
using namespace std;

int main() {
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    int k;
    while(cin>>n>>k){

        vector<int> v(n-1);
        for (auto &x:v){int temp; cin>>temp; x=temp;}
        vector<int> gaps(n-1);
        gaps[0]=v[0];
        
        for (int l=1;l<v.size(); l++){
            
            gaps[l]=v[l]-v[l-1];
            
        }
        sort(gaps.rbegin(), gaps.rend());
        
        
        int re=0;
        for(int i=k-1; i<gaps.size();i++){
            re+=gaps[i];
        }
        
        cout<<re<<"\n";
    }
 
 
    return 0;
}
