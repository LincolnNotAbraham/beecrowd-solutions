/*
 * Beecrowd 1524 - Cafeteria
 * https://judge.beecrowd.com/pt/problems/view/1524
 *
 * Divide as posicoes de uma sequencia em K grupos contiguos, minimizando
 * a soma dos intervalos internos de cada grupo.
 *
 * Abordagem: calcula os intervalos entre posicoes consecutivas, descarta
 * os K-1 maiores (ordenacao decrescente) e soma os intervalos restantes
 * com uma estrategia gulosa.
 */
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
