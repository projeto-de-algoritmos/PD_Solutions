#include <bits/stdc++.h>

using namespace std;

#define MAX_W 1000
#define MAX_V 1000
#define MAX_ITENS 1000

int W[MAX_ITENS];
int V[MAX_ITENS];
int memo[MAX_W][MAX_V];

int knapsack(int i, int w) {
    if (i < 0 || w <= 0) return 0;

    if (memo[i][w] != -1) return memo[i][w];

    if (W[i] > w) return memo[i][w] = knapsack(i - 1, w);

    return memo[i][w] = max(knapsack(i - 1, w),
                            knapsack(i - 1, w - W[i]) + V[i]);
}

	
int main() {			

	int num_pedidos, max_pizzas;
	while(cin >> num_pedidos, num_pedidos){
		
		cin >> max_pizzas;

		memset(memo, -1, sizeof memo);
		memset(V, 0, sizeof V);
		memset(W, 0, sizeof W);

		for(int i = 0; i < num_pedidos; ++i){
			cin >> V[i];
			cin >> W[i];	
		}

		printf("%d min.\n", knapsack(num_pedidos, max_pizzas));
	}
	return 0;
}