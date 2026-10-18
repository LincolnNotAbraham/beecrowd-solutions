/*
 * Beecrowd 1487 - Six Flags
 * https://judge.beecrowd.com/pt/problems/view/1487
 *
 * Escolhe brinquedos para maximizar a diversao dentro do tempo disponivel,
 * podendo repetir o mesmo brinquedo varias vezes.
 *
 * Abordagem: mochila ilimitada (unbounded knapsack) com programacao
 * dinamica bottom-up; le instancias ate n = 0.
 */
#include <bits/stdc++.h>
 
using namespace std;



int main() {
    int n,t;
    int ist=1;
    while (cin>>n>>t && n!=0){
     
    vector<int> dur;
    vector<int> pon;
     for (int i=0;i<n;i++){
         int d,p;
         cin>>d;
         dur.push_back(d);
         cin>>p;
         pon.push_back(p);
     }
     vector<int> dp(t+1,0); 
     
     //dp bottom up
     for (int i=0;i<n;i++){
         for(int j=dur[i];j<=t;++j){
             dp[j] = max(dp[j],dp[j-dur[i]]+pon[i]);
         }
     }
    cout<< "Instancia "<<ist<<"\n";
    cout<< dp[t]<<"\n"<<"\n";
    ist++;
    }
    return 0;
}