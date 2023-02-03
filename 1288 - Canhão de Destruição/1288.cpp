#include <bits/stdc++.h>

using namespace std;

#define MAX_W 200
#define MAX_V 200
#define MAX_ITENS 200

int W[MAX_ITENS];
int V[MAX_ITENS];

int memo[MAX_W][MAX_V];

int knapsack(int i, int w){
	if(i < 0 || w <= 0) 
        return 0;
	if(memo[i][w] != -1) 
        return memo[i][w];
	if(W[i] > w) 
        return memo[i][w] = knapsack(i - 1, w);
	return memo[i][w] = max(knapsack(i - 1, w), knapsack(i - 1, w - W[i]) + V[i]);
}

int main(){

	int casos_teste, num_projeteis, capacidade_carga_canhao, resistencia_castelo;

	cin >> casos_teste;

	while(casos_teste--){
		memset(memo, -1, sizeof memo);
		memset(V, 0, sizeof V);
		memset(W, 0, sizeof W);

		cin >> num_projeteis;
		for(int i = 0; i < num_projeteis; ++i){
            // V = Poder de destruição do projétil
            // W = Peso do projétil
			cin >> V[i] >> W[i];
		}
		cin >> capacidade_carga_canhao;
		cin >> resistencia_castelo;
		
		if(knapsack(num_projeteis, capacidade_carga_canhao) >= resistencia_castelo)
			cout << "Missao completada com sucesso\n";
		else
			cout << "Falha na missao\n";
	}
	return 0;
}