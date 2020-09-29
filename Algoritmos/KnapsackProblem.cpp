// Knapsack problem
// Dado un peso maximo, y una lista de objetos con valores
// y pesos, maximizar valor
// O(n*k) n objetos y peso k
#include<bits/stdc++.h>
using namespace std;

int n, k;
vector<vector<int> > dp;
vector<int> peso;
vector<int> valor;

int DP(int n, int k){
	
	if(dp[n][k]!=-1){
		return dp[n][k];
	}
	
	if(k-peso[n]>=0){
		dp[n][k] = max(DP(n-1,k), DP(n-1,k-peso[n]) + valor[n]);
		return dp[n][k];
	}
	
	dp[n][k] = DP(n-1,k);
	return dp[n][k];
	
}

int main(){
	
	cin>>n>>k;
	dp.resize(n+1,vector<int>(k+1,-1));
	peso.push_back(0);
	valor.push_back(0);
	
	
	for(int i = 0; i<n; i++){
		int a, b;
		cin>>a>>b;
		peso.push_back(a);
		valor.push_back(b);
	}
	
	for(int i = 0; i<=n; i++){
		dp[i][0] = 0;
	}
	for(int i = 0; i<=k; i++){
		dp[0][i] = 0;
	}
	
	int i = n;
	int j = k;
	vector<int> seleccionados;
	
	while(i!=0&&j!=0){
		if(DP(i,j)!=DP(i-1,j)){
			j = j - peso[i];
			seleccionados.push_back(i);
			i--;
		}
		else{
			i--;
		}
	}
	
	cout<<DP(n,k)<<endl;
	for(int i = 0; i<seleccionados.size();i++){
		cout<<seleccionados[i]<<" ";
	}
	
	return 0;
}
