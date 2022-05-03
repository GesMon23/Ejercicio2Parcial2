//Construir un programa que indique si un número es un par positivo.
#include <iostream>
int main(int argc, char** argv) {
	int Numero;
	printf("INGRESE CUALQUIER NUMERO ENTERO\n");
	scanf("%d", &Numero);
	if(Numero%2==0 && Numero>=0){
		printf("\nEL NUMERO ES UN PAR POSITIVO\n");
	}
	else printf("\nEL NUMERO NO ES UN PAR POSITIVO\n ");
	system("pause");
}
