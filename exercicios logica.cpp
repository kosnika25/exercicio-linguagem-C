1. Fazer um programa em C que pergunta um valor em metros e imprime o correspondente em decimetros, cent�metros e mil�metros.


#include <stdio.h> int main(){ float metros,decimetros,centimetros, milimetros; printf("digite numero em metros: "); scanf("%f",&metros); decimetros += metros * 10; milimetros+= metros *1000; centimetros+= metros *100; printf("o resultado e %.2f %.2f %.2f: ",decimetros,centimetros, milimetros); return 0; }


2. Fazer um programa em C que imprime uma tabela com a tabuada de 1 a 9


#include <stdio.h> int main(){ int numero; printf(" digite um numero tabuada: "); scanf("%d", &numero); for (int i=0; i<10 ;i++){ printf("a tabuada �: %d X %d = %d\n ", numero, i, numero*i); } return 0; }


3. Fazer um programa que solicita um n�mero decimal e imprime o correspondente em hexa e octal.


#include <stdio.h> int main(){ int decimal,hexa,octal; printf("digite numero decimal: "); scanf("%d",&decimal); hexa += decimal *16; octal += decimal*8; printf("o valor hexa %d, octal %d", hexa, octal); return 0; }













4. Fazer um programa em "C" que pergunte um valor em graus Fahrenheit e imprime no v�deo o correspondente em graus Celsius usando as f�rmulas que seguem.


a) Usar uma vari�vel double para ler o valor em Fahrenheit e a f�rmula

C=(f-32.0) * (5.0/9.0).

b) Usar uma vari�vel int para ler o valor em Fahrenheit e a f�rmula

C-(1-32) (5/9)

#include <stdio.h>

int main() { double fahrenheit, celsius;

printf("Digite a temperatura em Fahrenheit (com ponto flutuante): "); scanf("%lf", &fahrenheit);

celsius = (fahrenheit - 32.0) * (5.0 / 9.0); printf("Temperatura em Celsius: %.2lf\n", celsius);

return 0; }

5. Fazer um programa em "C" que solicite 2 n�meros e informe:

a) A soma dos n�meros;

b) O produto do primeiro n�mero pelo quadrado do segundo;

c) O quadrado do primeiro n�mero;

d) A raiz quadrada da soma dos quadrados;

e) O seno da diferen�a do primeiro n�mero pelo segundo;

f) O m�dulo do primeiro n�mero


int main() { int num1, num2; double resultado; printf("Digite o primeiro n�mero: "); scanf("%d", &num1); printf("Digite o segundo n�mero: "); scanf("%d", &num2); printf("Soma: %d\n", num1 + num2); printf("Produto do primeiro n�mero pelo quadrado do segundo: %d\n", num1 * num2 * num2); printf("Quadrado do primeiro n�mero: %d\n", num1 * num1); resultado = sqrt(num1 * num1 + num2 * num2); printf("Raiz quadrada da soma dos quadrados: %.2lf\n", resultado); resultado = sin(num1 - num2); printf("Seno da diferen�a entre os n�meros: %.2lf\n", resultado); printf("M�dulo do primeiro n�mero: %d\n", abs(num1)); return 0; }

6. Fa�a um programa em "C" que le dois valores e imprime:

- se o primeiro valor for menor que o segundo, a lista de valores do primeiro at� o segundo;

- se o primeiro valor for menor que o segundo a lista de valores do segundo at�]

o primeiro em ordem decrescente;

- se ambos forem iguais a mensagem "valores iguais".


#include <stdio.h>


int main() {

int num1, num2;

printf("Digite o primeiro valor: ");

scanf("%d", &num1);

printf("Digite o segundo valor: ");

scanf("%d", &num2);

if (num1 < num2) {

printf("Lista de valores do primeiro at� o segundo:\n");

for (int i = num1; i <= num2; i++) {

printf("%d ", i);

}

}

else if (num1 > num2) {

printf("Lista de valores do segundo at� o primeiro em ordem decrescente:\n");

for (int i = num1; i >= num2; i--) {

printf("%d ", i);

}

}

else {

printf("Valores iguais.\n");

}

printf("\n");

return 0;
}

7.

#include <stdio.h> int main() 
{ float preco, precoFinal; printf("Digite o pre�o do produto: "); scanf("%f", &preco);
 if (preco < 100) { precoFinal = preco * 1.10; } else { precoFinal = preco * 1.20; }
  printf("Pre�o final do produto: %.2f\n", precoFinal);
 return 0; }