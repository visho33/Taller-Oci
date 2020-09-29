//buscamos el valor mas pequeño que es mayor o igual que un x
#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n, x;
	cin>>n>>x;
	vector<int> lista;
	for(int i = 0; i<n; i++){
		int c; cin>>c;
		lista.push_back(c);
	}
	
	sort(lista.begin(), lista.end());
	
	if(lista[n-1]<x){
		cout<<"No existe dicho numero";
		return 0;
	}
	
	int inf = 0;
	int sup = n-1;
	int med;
	
	while(inf!=sup){
		med = (inf+sup)/2;
		if(lista[med]<x){
			 inf = med + 1;
		}
		else{
			 sup = med;
		}
	}
	
	cout<<lista[inf];
	
	return 0;
}
