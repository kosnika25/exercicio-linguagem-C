Fa�a um programa que receba dois n�meros inteiros, calcule e imprima: � soma dos dois n�meros; 

 

#include <stdio.h> 

  

int main() { 

    int num1, num2, soma; 

  

    // Solicita ao usu�rio para digitar os dois n�meros 

    printf("Digite o primeiro n�mero: "); 

    scanf("%d", &num1); 

    printf("Digite o segundo n�mero: "); 

    scanf("%d", &num2); 

  

    // Calcula a soma 

    soma = num1 + num2; 

  

    // Imprime o resultado 

    printf("A soma dos dois n�meros �: %d\n", soma); 

  

    return 0; 

} 

 

� subtra��o do primeiro pelo segundo; 

 

#include <stdio.h> 

  

int main() { 

    int num1, num2, resultado; 

  

    printf("Digite o primeiro n�mero: "); 

    scanf("%d", &num1); 

    printf("Digite o segundo n�mero: "); 

    scanf("%d", &num2); 

  

    resultado = num1 - num2; 

    printf("A subtra��o do primeiro pelo segundo �: %d\n", resultado); 

  

    return 0; 

} 

 

� subtra��o do segundo pelo primeiro; 

 

#include <stdio.h> 

  

int main() { 

    int num1, num2, resultado; 

  

    printf("Digite o primeiro n�mero: "); 

    scanf("%d", &num1); 

    printf("Digite o segundo n�mero: "); 

    scanf("%d", &num2); 

  

    resultado = num2 - num1; 

    printf("A subtra��o do segundo pelo primeiro �: %d\n", resultado); 

  

    return 0; 

} 

 

� multiplica��o dos dois n�meros; 

 

#include <stdio.h> 

  

int main() { 

    int num1, num2, resultado; 

  

    printf("Digite o primeiro n�mero: "); 

    scanf("%d", &num1); 

    printf("Digite o segundo n�mero: "); 

    scanf("%d", &num2); 

  

    resultado = num1 * num2; 

    printf("A multiplica��o dos dois n�meros �: %d\n", resultado); 

  

    return 0; 

} 

 

� divis�o do primeiro pelo segundo (resultado em real); 

 

#include <stdio.h> 

  

int main() { 

    int num1, num2; 

    float resultado; 

  

    printf("Digite o primeiro n�mero: "); 

    scanf("%d", &num1); 

    printf("Digite o segundo n�mero: "); 

    scanf("%d", &num2); 

  

    if (num2 != 0) { 

        resultado = (float)num1 / num2; 

        printf("A divis�o do primeiro pelo segundo �: %.2f\n", resultado); 

    } else { 

        printf("Erro: divis�o por zero!\n"); 

    } 

  

    return 0; 

} 

 

� divis�o do segundo pelo primeiro (resultado em real); 

#include <stdio.h> 

  

int main() { 

    int num1, num2; 

    float resultado; 

  

    printf("Digite o primeiro n�mero: "); 

    scanf("%d", &num1); 

    printf("Digite o segundo n�mero: "); 

    scanf("%d", &num2); 

  

    if (num1 != 0) { 

        resultado = (float)num2 / num1; 

        printf("A divis�o do segundo pelo primeiro �: %.2f\n", resultado); 

    } else { 

        printf("Erro: divis�o por zero!\n"); 

    } 

  

    return 0; 

} 

 

� quociente inteiro da divis�o do primeiro pelo segundo; 

 

#include <stdio.h> 

  

int main() { 

    int num1, num2, resultado; 

  

    printf("Digite o primeiro n�mero: "); 

    scanf("%d", &num1); 

    printf("Digite o segundo n�mero: "); 

    scanf("%d", &num2); 

  

    if (num2 != 0) { 

        resultado = num1 / num2; 

        printf("O quociente inteiro da divis�o do primeiro pelo segundo �: %d\n", resultado); 

    } else { 

        printf("Erro: divis�o por zero!\n"); 

    } 

  

    return 0; 

} 

 

� quociente inteiro da divis�o do segundo pelo primeiro; 

 

#include <stdio.h> 

  

int main() { 

    int num1, num2, resultado; 

  

    printf("Digite o primeiro n�mero: "); 

    scanf("%d", &num1); 

    printf("Digite o segundo n�mero: "); 

    scanf("%d", &num2); 

  

    if (num1 != 0) { 

        resultado = num2 / num1; 

        printf("O quociente inteiro da divis�o do segundo pelo primeiro �: %d\n", resultado); 

    } else { 

        printf("Erro: divis�o por zero!\n"); 

    } 

  

    return 0; 

} 

 

� resto da divis�o do primeiro pelo segundo; 

 

#include <stdio.h> 

  

int main() { 

    int num1, num2, resultado; 

  

    printf("Digite o primeiro n�mero: "); 

    scanf("%d", &num1); 

    printf("Digite o segundo n�mero: "); 

    scanf("%d", &num2); 

  

    if (num2 != 0) { 

        resultado = num1 % num2; 

        printf("O resto da divis�o do primeiro pelo segundo �: %d\n", resultado); 

    } else { 

        printf("Erro: divis�o por zero!\n"); 

    } 

  

    return 0; 

} 

 

� resto da divis�o do segundo pelo primeiro. 

#include <stdio.h> 

  

int main() { 

    int num1, num2, resultado; 

  

    printf("Digite o primeiro n�mero: "); 

    scanf("%d", &num1); 

    printf("Digite o segundo n�mero: "); 

    scanf("%d", &num2); 

  

    if (num1 != 0) { 

        resultado = num2 % num1; 

        printf("O resto da divis�o do segundo pelo primeiro �: %d\n", resultado); 

    } else { 

        printf("Erro: divis�o por zero!\n"); 

    } 

  

    return 0; 

} 

 

 

2. Fa�a um programa que receba tr�s notas de um aluno, calcule e imprima a m�dia aritm�tica entre essas notas. 

Resposta 

#include <stdio.h> 

  

int main() { 

    float nota1, nota2, nota3, media; 

  

    printf("Digite a primeira nota: "); 

    scanf("%f", &nota1); 

    printf("Digite a segunda nota: "); 

    scanf("%f", &nota2); 

    printf("Digite a terceira nota: "); 

    scanf("%f", &nota3); 

  

    media = (nota1 + nota2 + nota3) / 3; 

    printf("A m�dia aritm�tica �: %.2f\n", media); 

  

    return 0; 

} 

 

 

3. Fa�a um programa que receba o valor de um dep�sito e o valor da taxa de juros. Calcule e imprima o valor do rendimento e o valor total depois do rendimento. 

Resposta 

#include <stdio.h> 

  

int main() { 

    float deposito, taxa, rendimento, total; 

  

    printf("Digite o valor do dep�sito: "); 

    scanf("%f", &deposito); 

    printf("Digite a taxa de juros: "); 

    scanf("%f", &taxa); 

  

    rendimento = deposito * (taxa / 100); 

    total = deposito + rendimento; 

  

    printf("O valor do rendimento �: %.2f\n", rendimento); 

    printf("O valor total depois do rendimento �: %.2f\n", total); 

  

    return 0; 

} 

 

 

4. Fa�a um programa que receba um n�mero real e imprima: 

� a parte inteira do n�mero; 

#include <stdio.h> 

#include <math.h> 

  

int main() { 

    float numero; 

  

    // Solicita ao usu�rio para digitar um n�mero real 

    printf("Digite um n�mero real: "); 

    scanf("%f", &numero); 

  

    // Parte inteira 

    printf("Parte inteira: %.0f\n", floor(numero)); 

  

    return 0; 

} 

 

� a parte fracion�ria do n�mero; 

#include <stdio.h> 

#include <math.h> 

  

int main() { 

    float numero; 

  

    // Solicita ao usu�rio para digitar um n�mero real 

    printf("Digite um n�mero real: "); 

    scanf("%f", &numero); 

  

    // Parte fracion�ria 

    printf("Parte fracion�ria: %.2f\n", numero - floor(numero)); 

  

    return 0; 

} 

 

� arredondamento do n�mero (sem casas decimais. Pesquise o floor(), ceil() e round()). 

#include <stdio.h> 

#include <math.h> 

  

int main() { 

    float numero; 

  

    // Solicita ao usu�rio para digitar um n�mero real 

    printf("Digite um n�mero real: "); 

    scanf("%f", &numero); 

  

    // Arredondamento 

    printf("Arredondamento: %.0f\n", round(numero)); 

  

    return 0; 

} 

 

 

5. Fa�a um programa que receba um n�mero inteiro, calcule e imprima: � a raiz quadrada desse n�mero (sqrt()); 

#include <stdio.h> 

#include <math.h> 

  

int main() { 

    int num; 

  

    // Solicita ao usu�rio para digitar um n�mero inteiro 

    printf("Digite um n�mero inteiro 

 

� esse n�mero elevado ao quadrado. 

#include <stdio.h> 

  

int main() { 

    int num; 

  

    // Solicita ao usu�rio para digitar um n�mero inteiro 

    printf("Digite um n�mero inteiro: "); 

    scanf("%d", &num); 

  

    // Calcula e imprime o n�mero elevado ao quadrado 

    printf("O n�mero %d elevado ao quadrado �: %d\n", num, num * num); 

  

    return 0; 

} 

 

 

6. Fa�a um programa que receba a idade de uma pessoa em anos, calcule e imprima essa idade em: � Meses, Dias, Horas e Minutos. 

Resposta 

#include <stdio.h> 

  

int main() { 

    int anos, meses, dias, horas, minutos; 

  

    printf("Digite a idade em anos: "); 

    scanf("%d", &anos); 

  

    meses = anos * 12; 

    dias = anos * 365; 

    horas = dias * 24; 

    minutos = horas * 60; 

  

    printf("Idade em meses: %d\n", meses); 

    printf("Idade em dias: %d\n", dias); 

    printf("Idade em horas: %d\n", horas); 

    printf("Idade em minutos: %d\n", minutos); 

  

    return 0; 

} 

 

 

7. Fa�a um programa que calcule a �rea de um tri�ngulo. 

Resposta 

#include <stdio.h> 

  

int main() { 

    float base, altura, area; 

  

    printf("Digite a base do tri�ngulo: "); 

    scanf("%f", &base); 

    printf("Digite a altura do tri�ngulo: "); 

    scanf("%f", &altura); 

  

    area = (base * altura) / 2; 

    printf("A �rea do tri�ngulo �: %.2f\n", area); 

  

    return 0; 

} 

 

 

8. Fa�a um programa que calcule e imprima a �rea de um c�rculo. 

Resposta 

#include <stdio.h> #include <math.h> 

int main() { float raio, area; 

printf("Digite o raio do c�rculo: "); 
scanf("%f", &raio); 
 
area = M_PI * raio * raio; 
printf("A �rea do c�rculo �: %.2f\n", area); 
 
return 0; 
  

} 

 

 

9. Fa�a um programa que calcule e imprima a �rea de um trap�zio. 

Resposta 

#include <stdio.h> 

int main() { float base_maior, base_menor, altura, area; 

printf("Digite a base maior do trap�zio: "); 
scanf("%f", &base_maior); 
printf("Digite a base menor do trap�zio: "); 
scanf("%f", &base_menor); 
printf("Digite a altura do trap�zio: "); 
scanf("%f", &altura); 
 
area = ((base_maior + base_menor) * altura) / 2; 
printf("A �rea do trap�zio �: %.2f\n", area); 
 
return 0; 
  

} 

 

 

10. Fa�a um programa que receba o sal�rio de um funcion�rio, calcule e imprima o valor do imposto de renda a ser pago, sabendo que o imposto equivale a 5% do sal�rio. 

Resposta 

#include <stdio.h> 

  

int main() { 

    float salario, imposto; 

  

    printf("Digite o sal�rio do funcion�rio: "); 

    scanf("%f", &salario); 

  

    imposto = salario * 0.05; 

    printf("O valor do imposto de renda a ser pago �: %.2f\n", imposto); 

  

    return 0; 

} 