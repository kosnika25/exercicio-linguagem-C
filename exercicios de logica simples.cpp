Faça um programa que receba dois números inteiros, calcule e imprima: • soma dos dois números; 

 

#include <stdio.h> 

  

int main() { 

    int num1, num2, soma; 

  

    // Solicita ao usuário para digitar os dois números 

    printf("Digite o primeiro número: "); 

    scanf("%d", &num1); 

    printf("Digite o segundo número: "); 

    scanf("%d", &num2); 

  

    // Calcula a soma 

    soma = num1 + num2; 

  

    // Imprime o resultado 

    printf("A soma dos dois números é: %d\n", soma); 

  

    return 0; 

} 

 

• subtração do primeiro pelo segundo; 

 

#include <stdio.h> 

  

int main() { 

    int num1, num2, resultado; 

  

    printf("Digite o primeiro número: "); 

    scanf("%d", &num1); 

    printf("Digite o segundo número: "); 

    scanf("%d", &num2); 

  

    resultado = num1 - num2; 

    printf("A subtração do primeiro pelo segundo é: %d\n", resultado); 

  

    return 0; 

} 

 

• subtração do segundo pelo primeiro; 

 

#include <stdio.h> 

  

int main() { 

    int num1, num2, resultado; 

  

    printf("Digite o primeiro número: "); 

    scanf("%d", &num1); 

    printf("Digite o segundo número: "); 

    scanf("%d", &num2); 

  

    resultado = num2 - num1; 

    printf("A subtração do segundo pelo primeiro é: %d\n", resultado); 

  

    return 0; 

} 

 

• multiplicação dos dois números; 

 

#include <stdio.h> 

  

int main() { 

    int num1, num2, resultado; 

  

    printf("Digite o primeiro número: "); 

    scanf("%d", &num1); 

    printf("Digite o segundo número: "); 

    scanf("%d", &num2); 

  

    resultado = num1 * num2; 

    printf("A multiplicação dos dois números é: %d\n", resultado); 

  

    return 0; 

} 

 

• divisão do primeiro pelo segundo (resultado em real); 

 

#include <stdio.h> 

  

int main() { 

    int num1, num2; 

    float resultado; 

  

    printf("Digite o primeiro número: "); 

    scanf("%d", &num1); 

    printf("Digite o segundo número: "); 

    scanf("%d", &num2); 

  

    if (num2 != 0) { 

        resultado = (float)num1 / num2; 

        printf("A divisão do primeiro pelo segundo é: %.2f\n", resultado); 

    } else { 

        printf("Erro: divisão por zero!\n"); 

    } 

  

    return 0; 

} 

 

• divisão do segundo pelo primeiro (resultado em real); 

#include <stdio.h> 

  

int main() { 

    int num1, num2; 

    float resultado; 

  

    printf("Digite o primeiro número: "); 

    scanf("%d", &num1); 

    printf("Digite o segundo número: "); 

    scanf("%d", &num2); 

  

    if (num1 != 0) { 

        resultado = (float)num2 / num1; 

        printf("A divisão do segundo pelo primeiro é: %.2f\n", resultado); 

    } else { 

        printf("Erro: divisão por zero!\n"); 

    } 

  

    return 0; 

} 

 

• quociente inteiro da divisão do primeiro pelo segundo; 

 

#include <stdio.h> 

  

int main() { 

    int num1, num2, resultado; 

  

    printf("Digite o primeiro número: "); 

    scanf("%d", &num1); 

    printf("Digite o segundo número: "); 

    scanf("%d", &num2); 

  

    if (num2 != 0) { 

        resultado = num1 / num2; 

        printf("O quociente inteiro da divisão do primeiro pelo segundo é: %d\n", resultado); 

    } else { 

        printf("Erro: divisão por zero!\n"); 

    } 

  

    return 0; 

} 

 

• quociente inteiro da divisão do segundo pelo primeiro; 

 

#include <stdio.h> 

  

int main() { 

    int num1, num2, resultado; 

  

    printf("Digite o primeiro número: "); 

    scanf("%d", &num1); 

    printf("Digite o segundo número: "); 

    scanf("%d", &num2); 

  

    if (num1 != 0) { 

        resultado = num2 / num1; 

        printf("O quociente inteiro da divisão do segundo pelo primeiro é: %d\n", resultado); 

    } else { 

        printf("Erro: divisão por zero!\n"); 

    } 

  

    return 0; 

} 

 

• resto da divisão do primeiro pelo segundo; 

 

#include <stdio.h> 

  

int main() { 

    int num1, num2, resultado; 

  

    printf("Digite o primeiro número: "); 

    scanf("%d", &num1); 

    printf("Digite o segundo número: "); 

    scanf("%d", &num2); 

  

    if (num2 != 0) { 

        resultado = num1 % num2; 

        printf("O resto da divisão do primeiro pelo segundo é: %d\n", resultado); 

    } else { 

        printf("Erro: divisão por zero!\n"); 

    } 

  

    return 0; 

} 

 

• resto da divisão do segundo pelo primeiro. 

#include <stdio.h> 

  

int main() { 

    int num1, num2, resultado; 

  

    printf("Digite o primeiro número: "); 

    scanf("%d", &num1); 

    printf("Digite o segundo número: "); 

    scanf("%d", &num2); 

  

    if (num1 != 0) { 

        resultado = num2 % num1; 

        printf("O resto da divisão do segundo pelo primeiro é: %d\n", resultado); 

    } else { 

        printf("Erro: divisão por zero!\n"); 

    } 

  

    return 0; 

} 

 

 

2. Faça um programa que receba três notas de um aluno, calcule e imprima a média aritmética entre essas notas. 

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

    printf("A média aritmética é: %.2f\n", media); 

  

    return 0; 

} 

 

 

3. Faça um programa que receba o valor de um depósito e o valor da taxa de juros. Calcule e imprima o valor do rendimento e o valor total depois do rendimento. 

Resposta 

#include <stdio.h> 

  

int main() { 

    float deposito, taxa, rendimento, total; 

  

    printf("Digite o valor do depósito: "); 

    scanf("%f", &deposito); 

    printf("Digite a taxa de juros: "); 

    scanf("%f", &taxa); 

  

    rendimento = deposito * (taxa / 100); 

    total = deposito + rendimento; 

  

    printf("O valor do rendimento é: %.2f\n", rendimento); 

    printf("O valor total depois do rendimento é: %.2f\n", total); 

  

    return 0; 

} 

 

 

4. Faça um programa que receba um número real e imprima: 

• a parte inteira do número; 

#include <stdio.h> 

#include <math.h> 

  

int main() { 

    float numero; 

  

    // Solicita ao usuário para digitar um número real 

    printf("Digite um número real: "); 

    scanf("%f", &numero); 

  

    // Parte inteira 

    printf("Parte inteira: %.0f\n", floor(numero)); 

  

    return 0; 

} 

 

• a parte fracionária do número; 

#include <stdio.h> 

#include <math.h> 

  

int main() { 

    float numero; 

  

    // Solicita ao usuário para digitar um número real 

    printf("Digite um número real: "); 

    scanf("%f", &numero); 

  

    // Parte fracionária 

    printf("Parte fracionária: %.2f\n", numero - floor(numero)); 

  

    return 0; 

} 

 

• arredondamento do número (sem casas decimais. Pesquise o floor(), ceil() e round()). 

#include <stdio.h> 

#include <math.h> 

  

int main() { 

    float numero; 

  

    // Solicita ao usuário para digitar um número real 

    printf("Digite um número real: "); 

    scanf("%f", &numero); 

  

    // Arredondamento 

    printf("Arredondamento: %.0f\n", round(numero)); 

  

    return 0; 

} 

 

 

5. Faça um programa que receba um número inteiro, calcule e imprima: • a raiz quadrada desse número (sqrt()); 

#include <stdio.h> 

#include <math.h> 

  

int main() { 

    int num; 

  

    // Solicita ao usuário para digitar um número inteiro 

    printf("Digite um número inteiro 

 

• esse número elevado ao quadrado. 

#include <stdio.h> 

  

int main() { 

    int num; 

  

    // Solicita ao usuário para digitar um número inteiro 

    printf("Digite um número inteiro: "); 

    scanf("%d", &num); 

  

    // Calcula e imprime o número elevado ao quadrado 

    printf("O número %d elevado ao quadrado é: %d\n", num, num * num); 

  

    return 0; 

} 

 

 

6. Faça um programa que receba a idade de uma pessoa em anos, calcule e imprima essa idade em: • Meses, Dias, Horas e Minutos. 

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

 

 

7. Faça um programa que calcule a área de um triângulo. 

Resposta 

#include <stdio.h> 

  

int main() { 

    float base, altura, area; 

  

    printf("Digite a base do triângulo: "); 

    scanf("%f", &base); 

    printf("Digite a altura do triângulo: "); 

    scanf("%f", &altura); 

  

    area = (base * altura) / 2; 

    printf("A área do triângulo é: %.2f\n", area); 

  

    return 0; 

} 

 

 

8. Faça um programa que calcule e imprima a área de um círculo. 

Resposta 

#include <stdio.h> #include <math.h> 

int main() { float raio, area; 

printf("Digite o raio do círculo: "); 
scanf("%f", &raio); 
 
area = M_PI * raio * raio; 
printf("A área do círculo é: %.2f\n", area); 
 
return 0; 
  

} 

 

 

9. Faça um programa que calcule e imprima a área de um trapézio. 

Resposta 

#include <stdio.h> 

int main() { float base_maior, base_menor, altura, area; 

printf("Digite a base maior do trapézio: "); 
scanf("%f", &base_maior); 
printf("Digite a base menor do trapézio: "); 
scanf("%f", &base_menor); 
printf("Digite a altura do trapézio: "); 
scanf("%f", &altura); 
 
area = ((base_maior + base_menor) * altura) / 2; 
printf("A área do trapézio é: %.2f\n", area); 
 
return 0; 
  

} 

 

 

10. Faça um programa que receba o salário de um funcionário, calcule e imprima o valor do imposto de renda a ser pago, sabendo que o imposto equivale a 5% do salário. 

Resposta 

#include <stdio.h> 

  

int main() { 

    float salario, imposto; 

  

    printf("Digite o salário do funcionário: "); 

    scanf("%f", &salario); 

  

    imposto = salario * 0.05; 

    printf("O valor do imposto de renda a ser pago é: %.2f\n", imposto); 

  

    return 0; 

} 