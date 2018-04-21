#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

void bubble_sort(int vetor[], int n) {
    int k, j, aux;
    for (k = 1; k < n; k++) {
        for (j = 0; j < n - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                aux          = vetor[j];
                vetor[j]     = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}


int buscaBinaria(int vet[]){
	int n,i;
	int pos = -1;
	int tamanho = 3;
	int inicio=0;
	int fim = tamanho-1;
	bubble_sort(vet,3);
	
	for(i=0;i<=2;i++){
			cout<<vet[i]<<"|";
			
	}
		
	
	cout<<"Digite o valor que deseja: ";
	cin>>n;
	do{
		pos = (inicio+fim)/2;
		
		if(n<vet[pos]){
			
			fim=pos-1;
		}
		else{
			
			inicio = pos+1;
			
		}
	}while(n!=vet[pos] && inicio<=fim);
	
	if(n==vet[pos]){
		return pos;
	}
	else{
		return -1;
	}
	
}

int main(int argc, char** argv) {
	int vet[3];
	int indice;
	int i=0;
	int posNum;
		for(i=0;i<=2;i++){
			cout<<"Digite um valor: ";
			cin>>vet[i];
			
	 }
		
		
		indice = buscaBinaria(vet);
	
		if(indice == -1){
			
			cout<<"Valor não encontrado!";
		}else{
			cout<<"Indice: "<<indice;
		}
	
	
	
	
	return 0;
}
