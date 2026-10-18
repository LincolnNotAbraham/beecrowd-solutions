/*
 * Beecrowd 1310 - Lucro
 * https://judge.beecrowd.com/pt/problems/view/1310
 *
 * Calcula o lucro maximo em um periodo de dias, em que cada dia gera uma
 * receita e um custo fixo.
 *
 * Abordagem: subtrai o custo de cada receita e aplica o algoritmo de Kadane
 * para encontrar a soma maxima de um subarray contiguo (lucro nao negativo).
 */
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