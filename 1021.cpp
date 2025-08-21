#include <bits/stdc++.h>
 
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    double x;
    cin>>x;
    
    unordered_map<int,int> m;
    vector<int> val = {10000,5000,2000,1000,500,200,100,50,25,10,5,1};
    
    int cent = static_cast<int>(round(x*100));
    
   for (auto k:val){
       int quantidade = cent/k;
       m[k]=quantidade;
       cent %= k;
   }    
    
std::cout << "NOTAS:" << "\n";
std::cout << m[10000] << " nota(s) de R$ 100.00" << "\n";
std::cout << m[5000] << " nota(s) de R$ 50.00" << "\n";
std::cout << m[2000] << " nota(s) de R$ 20.00" << "\n";
std::cout << m[1000] << " nota(s) de R$ 10.00" << "\n";
std::cout << m[500] << " nota(s) de R$ 5.00" << "\n";
std::cout << m[200] << " nota(s) de R$ 2.00" << "\n";

std::cout << "MOEDAS:" << "\n";
std::cout << m[100] << " moeda(s) de R$ 1.00" << "\n";
std::cout << m[50] << " moeda(s) de R$ 0.50" << "\n";
std::cout << m[25] << " moeda(s) de R$ 0.25" << "\n";
std::cout << m[10] << " moeda(s) de R$ 0.10" << "\n";
std::cout << m[5] << " moeda(s) de R$ 0.05" << "\n";
std::cout << m[1] << " moeda(s) de R$ 0.01" << "\n";
}
