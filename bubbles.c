#include <stdio.h>

void bubble(int v[], int n);

void main() {
	int n, i;

	printf("Tamaño del arreglo ");
	scanf("%d", &n);
	
	int v[n];

	printf("Inserte valores\n");
	for (i = 0; i < n; i++) {
		scanf("%d", &v[i]);
	}

	printf("Arreglo desordenado\n");
	for (i = 0; i < n; i++) {
		printf("%d\n", v[i]);
	}
	bubble(v, n);
}

void bubble(int v[], int n) {
	int i, j;

	for (i = 0; i < n; i++) {
		for (j = 1; j < n; j++)	{
			if (v[j-1]>v[j])	{
				int aux = v[j-1];
				v[j-1]=v[j];
				v[j]=aux;
			}
		}
	}

	printf("Arreglo ordenado\n");
	for (i = 0; i < n; i++) {
		printf("%d\n", v[i]);
	}
}