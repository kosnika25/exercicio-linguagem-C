willian funções
 
1) mensagem na tela
#include <stdio.h>
 
void mensagem(){
	printf("bem-vindo ao estudo de funções em c!\n");
}
int main (){
	mensagem();
	return 0;
}
 
2)soma
#include <stdio.h>
 
int somar (int a, int b){
	return a + b ;
}
int main (){
	int x= 10, y = 5;
	int resultado;
	resultado = somar(x,y);
	printf ("Resultado da soma : %d\n",resultado);
	return 0;
}
 
3) fatorial
#include <stdio.h>
 
int fatorial (int n){
	int resultado = 1;
	for (int i =1; i<= n; i++){
		resultado*=i;
	}
	return resultado;
}
int main (){
	int numero =5;
	printf ("Fatorial de %d é: %d\n",numero,fatorial(numero));
	return 0;
}
 
4) função recursiva 
#include <stdio.h>
 
 
int fatorial(int n){
  if(n ==0|| n==1){
	  return 1;
  }
  return n*fatorial(n-1);
}
int main (){
  int numero =6;
   printf("fatorial de %d é %d\n",numero,fatorial(numero));
    return 0;
}
 
5) while
 
#include <stdio.h>
 
 
int soma(int a, int b){
  int s = a+b;
  return s;
  }
  int sub(int a , int b){
	  int s= a-b;
	  return s;
  }
  int main(){
	  int n1,n2, op,res;
	  int fim =0;
	  while(fim==0){
	  	printf("\n digite um valor: ");
	  scanf("%d",&n1);
	  	printf("\n digite um valor: ");
	  scanf("%d",&n2);
	  	printf("\n escolha a operação:\n1 - Adição\n2 - Subtração\n ");
	  scanf("%d",&op);
	  if(op == 1){
		  res= soma(n1,n2);
	  }
	  if(op ==2){
		  res= sub(n1,n2);
	  }
	  printf("o resultado é: %d", res);
	  printf("\n0 - continuar\n1 - parar\n");
	  scanf("%d",&fim);
	  }
	  }
 
  6) vetor
 
#include <stdio.h>
#include<locale.h>
 
 
int main(){
     int numeros[5] = {2,4,6,8,10};
     for (int i = 0; i < 5; i++){
		 printf("numeros[%d] = %d\n",i,numeros[i]);
	 }
}
 
7)vetor
 
#include <stdio.h>
 
 
int main(){
 
int numeros[5] = {10,20,30,40,50};
  printf("posição 0: %d\n",numeros [0]);
  printf("posição 1: %d\n",numeros [1]);
  printf("posição 2: %d\n",numeros [2]);
  printf("posição 3: %d\n",numeros [3]);
  printf("posição 4: %d\n",numeros [4]);
  return 0;
}
 
8) vetor
 
#include <stdio.h>
 
 
int main(){
 
   int valores [3];
   for(int i=0; i<3; i++){
	   printf("digite o valor da posição %d : ",i);
	   scanf("%d", &valores[i]);
   }
   for (int i =0; i<3;i++){
	   printf("valores [%d] = %d\n",i , valores[i]);
   }
  return 0;
}
 
9) vetor
 
#include <stdio.h>
 
 
int main(){
 
   float notas [4];
   float soma = 0;
   float media;
   for (int i =0; i<4;i++){
	   printf("digite a nota %d\n",i +1);
	   scanf("%f",&notas[i]);
	   soma += notas[i];
   }
   media = soma / 4;
   printf("media das notas : %2.f\n",media);
  return 0;
}
 
10) vetor
 
#include <stdio.h>
 
 
void mostrarVetor(int v[], int tamanho) {
	for(int i=0;i< tamanho ; i++){
		printf("v[%d] = %d\n", i,v[i]);
		}
}
int main(){
 
   int dados [5] = {1,3,5,7,9};
   mostrarVetor(dados,5);
  return 0;
}