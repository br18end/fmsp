#include <stdio.h>

void insertion(int v[], int n);

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
	insertion(v, n);
}

void insertion(int v[], int n) {
	int i, j, aux;

	for (i = 2; i < n; i++) {
		aux=v[i];
		j=i-1;
		while(j>=0 && v[j]>aux){
			v[j+1]=v[j];
			j--;
		}
		v[j+1]=aux;
	}

	printf("Arreglo ordenado\n");
	for (i = 0; i < n; i++) {
		printf("%d\n", v[i]);
	}
}