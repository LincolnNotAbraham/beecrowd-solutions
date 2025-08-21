#include <bits/stdc++.h>
 
using namespace std;


int main() {

    int n;
    while(cin>>n){
        int c;
        cin>>c;
        vector<int> v(n);
        for (auto &x:v){int temp; cin>>temp; x=temp-c;}
        
        int maxi=v[0];
        int cur = v[0];
        
        for (int i=1;i<v.size();i++){
            cur = max(v[i],cur+v[i]);
            maxi = max(maxi,cur);
            
        }
        cout<<max(maxi,0)<< "\n";
    }


    return 0;
}