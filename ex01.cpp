/*
=========================================================
Exercício 01: Contagem Crescente (1 a 20)
ALGORITMO EM PORTUGOL:
algoritmo "Contagem_Crescente"
var inteiro i
inicio
    para i de 1 ate 20 faca
        escreva(i, "")
    fimpara
fimalgoritmo
============================================================
*/

/* 
============================================================
EXERCÍCIO 02: Contagem Decrescente (20 a 1)
ALGORITMO EM PORTUGOL:
algoritmo "Contagem_Decrescente"
var inteiro i
inicio
    para i de 20 ate 1 passo -1 faca
        escreva(i, " ")
        fimpara
    fimalgoritmo
==============================================================
*/

/* 
==================================================================
EXERCÍCIO 03: Números Pares (1 a 50)
ALGORITMO EM PORTUGOL:
algoritmo "Numeros_Pares"
var inteiro i 
inicio
    para i de 1 ate 50 faca
        se (i % 2 = 0) entao
            escreva(i, " ")
        fimse
    fimpara
fimalgoritmo
==================================================================
*/

/* 
==================================================================
EXERCÍCIO 04: Números Impares (1 a 50)
ALGORITMO EM PORTUGOL:
algoritmo "Numeros_Impares"
var inteiro i
inicio
    para i de 1 ate 50 faca
        se (i % 2 <> 0) entao 
            escreva(i, " ")
        fimse
    fimpara
fimalgoritmo
==================================================================
*/

/*
===================================================================
EXERCÍCIO 05: Tabuada
ALGORITMO EMPORTUGOL:
algoritmo "Tabuada"
var inteiro num,i
inicio
    escreva("Digite um numero: ")
    leia(num)
    para i de 1 ate 10 faca
        escreva(num, " x ", i, " = ", num * i)
        fimpara
    fimalgoritmo
====================================================================
*/

/* 
====================================================================
EXERCICIO 06: Soma dos Numeros (1 a 100)
algoritmo "Soma_1_a_100"
var inteiro i,soma
inicio
    soma <- 0
    para i de 1 ate 100 faca
        soma <- soma + i
    fimpara
    escreva(soma)
fimalgoritmo
====================================================================
*/

/* 
====================================================================
EXERCICIO 07: Tabuada de 1 a 10
ALGORITMO EM PORTUGOL:
algoritmo "Tabuadas_1_a_10"
var inteiro i, j
inicio
    para i de 1 ate 10 faca
        para j  de 1 ate 10 faca
            escreva(i, " x ", j, " = ", i * j)
        fimpara
    fimpara
fimalgoritmo
=====================================================================
*/

/* 
=====================================================================
EXERCICIO 08: Contagem Regressiva com Passo 2 (10 a 1)
ALGORITMO EM PORTUGOL:
algoritmo " Cotagem_passo_2"
var inteiro i 
inicio 
    para i de 10 ate 1 passo -2 faca
        escreva(i, " ")
    fimpara
fimalgoritmo
=====================================================================
*/

/*
=====================================================================
EXERCICIO 09: Verificação de Numero Primo
ALGORITMO EM PORTUGOL:
algritmo "Numero_primo"
var inteiro num, i,divisores
inicio
    escreva("Digite um numero: ")
    leia(num)
    divisores <- 0
    para i de 1 ate num faca 
        se (num % i = 0) entao
        divisores <- divisores + 1
    fimse
fimpara
se (divisores = 2) entao
    escreva("Nao e primo")
    fimse
fimalgoritmo
=====================================================================
*/

/* 
====================================================================
EXERCICIO 10: Sequência de fibonacci (10 primeiros termos)
ALGORITMO EM PORTUGOL:
algoritmo "Finonacci"
var inteiro t1, t2, proximo,i
inicio
        t1 <- 0
        t2 <- 1
        escreva(t1, " ", t2, " ")
        para i de 3 ate 10 faca
        proximo <- t1 + t2
         escreva(proximo, " ")
        t1 <- t2
        t2 <- proximo
    fimpara
fimalgoritmo
====================================================================
*/
 
/* 
===================================================================
EXERCÍCIO 11: Fatorial de um Numero
ALGORITMO EM PORTUGOL:
algoritmo "Fatorial"
var inteiro num, i, fat
inicio
        escreva("Digite um numero: ")
        leia(num)
        fat <- fat * i
    fimpara
    escreva(fat)
fimalgoritmo
====================================================================
*/

/* 
====================================================================
EXERCÍCIO 12: Média de 5 Numeros
ALGORITMO EM PORTUGOL:
algoritmo "Media_5_Numero"
var inteiro i
real num, soma, media
inicio 
    soma <- 0
    para i de 1 ate 5 faca
        escreva("Digite um numero: ")
        leia(num)
        soma <- soma + num
    fimpara
    media <- soma / 5 
    escreva(media)
fimalgoritmo
====================================================================
*/

/* 
====================================================================
EXERCÍCIO 13: Maior e Menor entre 5  Numeros
ALGORITMO EM PORTUGOL:
algoritmo "Maior_Menor"
var inteiro i 
real num, maior, menor
inicio
    para i de 1 até 5 faca
        escreva("Digite um numero: ")
        leia(num)
        se (i = 1) entao
            maior <- num
            menor <- num
        senao
            se (num > maior) entao
                menor <- num
            fimse
        fimse
    fimpara
    escreva("Maior: ", menor, " Menor: ", menor)
fimalgoritmo
==================================================================
*/ 

/* 
==================================================================
EXERCÍCIO 14: Contagem de Positivos e Negativos
ALGORITMO EM PORTUGOL:
algoritmo "Positivos_Negativos"
var inteiro i, positivos, negativos
real num
inicio
    positivos <- 0
    negativos <- 0
    para i de 1 ate 10 faca
        escreva("Digite um numero: ")
        leia(num)
        se (num > 0) entao
            positivos <- positivos + 1 
        senao
            se (num < 0) entao
                negativos <- negativos + 1
            fimse
        fimse
    fimpara
    escreva("positivos: ", positivos, " Negativos: ", negativos)
fimalgoritmo
===================================================================
*/

/* 
====================================================================
EXERCÍCIO 15: Soma dos Pares entre 1 e 100
ALGORITMO EMPORTUGOL:
algoritmo " Soma_Pares"
var inteiro i, soma
inicio
    soma <- 0 
    para i de 1 ate 100 faca
        se (i % 2 = 0) entao
            soma <- soma + 1
        fimse
    fimpara
    escreva(soma)
fimalgoritmo
====================================================================
*/

/* 
====================================================================
EXERCÍCIO 16: Quadrado dos Numeros d 1 a 15
ALGORITMO EM PORTUGOL:
algoritmo "Quadrado_Numeros"
var inteiro i
inicio
    para i de 1 ate 15 faca 
        escreva(i, "ao quadrado = ", i * i)
    fimpara
fimalgoritmo
====================================================================
*/

/* 
====================================================================
EXERCÍCIO 17: Potência (Base e Expoente)
ALGORITMO EM PORTUGOL
algoritmo "Potencial"
var inteiro base, expoente, i, resultado
inicio
    escreva("Base: ")
    leia(base)
    escreva("Expoente: ")
    leia(expoente)
    resultado <- 1
    para i de 1 ate expoente faca
        resultado <- resultado * base
    fimpara
    escreva(resultado)
fimalgoritmo
====================================================================
*/

/* 
====================================================================
EXERCÍCIO 18: dIVISORES DE UM Numero
ALGORITMO EM PORTUGOL:
algoritmo "Divisores"
var inteiro num, i
inicio
        escreva("Digite um numero: ")
        leia(num)
        para i de 1 ate num faca
        se (num % i= 0) entao
            escreva(i, " ")
        fimse
    fimpara
fimalgoritmo
====================================================================
*/

/* 
====================================================================
EXERCÍCIO 19: Validação de Nota (0 a 10)
ALGORITMO EM PORTUGOL
algoritmo "Validacao_Nota"
var real nota
inicio
    escreva("Digite uma nota entre 0e 10: ")
    leia(nota)
    enquanto (nota < 0) ou (nota > 10 ) faca
        escreva("Nota invalida. Digite novamente: ")
        leia(nota)
    fimenquanto
    escreva("Nota valida: ", nota)
fimalgoritmo
===================================================================
*/ 

/* 
===================================================================
EXERCICIO 20: Contagem com Intervalo Personalizado
ALGORITMO EM PORTUGOL
algoritmo "Intervalo_personalizado"
var inteiro inicio_val, fim_val, i
inicio
        escreva("inicio: ")
        leia(inicio_val)
        escreva("fim: ")
        leia(fim_val)
        para i de inicio_val ate fim_val faca
            escreva(i, " ")
        fimpara
fimalgoritmo
=====================================================================
*/

#include <iostream>
using namespace std;

int main() {
    // --- EXECUTANDO O EXERCÍCIO 01 ---
    cout << "=== EXERCICIO 01: Contagem Crescente ===" << endl;
    for (int i = 1; i <= 20; i++) {
        cout << i << " ";
    }
    cout << endl;
    
    // --- EXECUTANDO O EXERCÍCIO 02 ---
    cout << "=== EXERCICIO 02: Contagem Decrescente ===" << endl;
    for (int i = 20; i >=; i--) {
        cout << i << " ";
    }
    cout << endl;

    //  --- EXECUTANDO O EXERCÍCIO 03 ---
    cout << "=== EXERCÍCIO 03: Numeros Pares (1 a 50) ===" <<endl;
    for (int i = 1; i <= 50; i++) {
        if (i % == 0){
            cout << i << " ";
        }
    }

    //--- EXECUTANDO O EXERCÍCIO 04 ---
    cout << "=== EXERCÍCIO 04: Numeros Impares (1 a 50) ===" << endl;
    for (int i = 1; i <= 50; i++) {
        if (i % 2 != 0) { // Verfica se o resto da divisao por 2 e diferente de zero (numero impar)
            cout << i << " ";

        }
    }
    cout << endl;

    // --- EXECUTANDO O  EXERCÍCIO 05 ---
    cout << "=== EXRCICIO 05: Tabuada ===" << endl;
    int numero = 5; // valor fixo para teste em sequencia
    cout << "Tabuada do " << numero << ":" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << numero << " x " << i << " = " << endl;
    }

    cout <<  endl;
    //--- EXERCICIO 06 ---
    cout << "=== EXERCICIO 06: Soma dos Numeros (1 a 100) ===" << endl;
    int soma = 0;
    for (int i = 1; i <= 100; i++) {
        soma += i;
    }
    cout << " Soma total: " <<  soma << endl << endl;

    // --- EXERCÍCIO 07 ---
    cout << "=== EXERCICIO 07: Tabuadas de 1 a 10 ===" << endl;
    for (int i = 1; i <= 3; i++) { // Limitado aos primeirios para nao poluir tanto a tela 
        cout << "Tabuada do " << i << ":" << endl;
        for (int j = 1; j <= 10; j++) {
            cout << i << " x " << j << " = " << (i * j) << endl;
        }    
        cout << endl;
    }

    // --- EXERCIÍCIO 08 ---
    cout << "=== EXERCICIO 08: Contagem Regressiva (passo 2) ===" endl;
    for (int i = 10; i >= 1; i -= 2) {
        cout << i << " ";
    }
    cout << endl << endl;

    // --- EXERCÍCIO 09 ---
    cout << "=== EXERCICIO 09: Verificacao de Numero Primo ===" << endl;
    int numPrimo = 7; 
    int divisores = 0;
    for (int i = 1; i <= numPrimo; i++) {
        if (numPrimo % i == 0) {
            divisores++;
        }
    }
    if (divisores == 2){
        cout << numPrimo << " e primo." << endl;
    } else {
        cout << numPrimo << " nao e primo." << endl;
    }
    cout << endl;

    // --- EXERCÍCIO 10 ---
    cout << "=== EXERCICIO 10: Sequencia de fibonacci ===" << endl;
    int t1 = 0, t2 = 1, proximo;
    cout << t1 << " " << t2 << " ";
    for (int i = 3; i <= 10; i++) {
        proximo = t1 + t2;
        cout << proximo << " ";
        t1 = t2;
        t2 = proximo;
    }
    cout << endl << endl;

    // --- EXERCÍCIO 11 ---
    cout << "=== Exercicio 11: Fatorial ===" << endl;
    int n11 = 5;
    long long fat11 = 1;
    for (int i = 1; i <= n11;i++) {
        fat11 *= i;
    }
    cout << "Fatorial de " << n11 << " = " << fat11 << endl << endl;

    // --- EXERCÍCIO 12 ---
    cout << "=== EXERCICIO 12: Media de 5 Numeros ===" << endl;
    double valores12[] = {7.0, 8.5, 9.0, 6.0, 10.0};
    double soma12 = 0;
    for (int i =0; i < 5; i++) {
        soma12 += valores12[i];
    }
    cout << "Media = " << (soma12 / 5.0) << endl << endl;

    // --- EXERCÍCIO 13 ---
    cout << "=== EXERCICIO 13: Maior e Menor ===" << endl;
    double valores13[] = { 15.5, 2.0, 42.1, 8.9, 31.0};
    double maior13 = valores13[0], menor13 = valores13[0];
    for (int i = 1; i < 5; i++) {
        if (valores13[i] > maior13) maior13 = valores13[i];
        if (valores13[i] < menor13)  menor13 = valores13[i];
    }
    cout << "Maior: " << maior13 << " | Menor: " << menor << endl << endl;

    // --- EXERCÍCIO 14 ---
    cout << "=== EXERCICIO 14: Positivos e Negativos ===" << endl;
    int valores14[] = {5, -2, 10, -8, 3, 0, 1, -1, 4, 6};
    int pot14 = 0, neg14 = 0;
    for (int i = 0; i < 10; i++){
        if (valores14[i] > 0) pos14++;
        else if (valores14[i] < 0) neg14++;
    }
    cout << "Positivos: " << pos14 << " | Negativos: " << neg14 << endl << endl;

    // --- EXERCÍCIO 15 ---
    cout << "=== EXERCICIO 15: Soma dos Pares (1 a 100) ===" << endl;
    int somaPares15 = 0;
    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0) somaPares15 += i;

    }
    cout << "Soma dos pares: " << somaPares15 << endl<< endl;

    // --- EXERCÍCIO 16 ---
    cout << "=== XERCICIO 16: Quadrado  dos numeros (1 a 15) ===" << endl;
    for (int i = 1 <= 15; i++){
        cout << i << "^2 = " << (i * i ) << " | ";
    }
    cout << endl << endl;

    // --- EXERCICIO 17 ---
    cout << "=== EXECICIO 17: P otencias (2^4) ===" << endl;
    int base17 = 2, exp17 = 4, res17 = 1;
    for (int i = 1; i <= exp17; i++) {
        res17 *= base17;
    }
    cout << base17 << " elevado a " << exp17 << " = " << res17 << endl << endl;

    // --- EXERCÍCIO 18 ---
    cout << "=== EXERCICIO 18: Divisores de 24 ===" << endl;
    int num18 = 24;
    cout << "Divisores de " << num18 << ": ";
    for (int i = 1; i <= num18; i++) {
        if (num18 % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl << endl;
    // EXERCÍCIO 19 ---
    cout << "=== EXERCICIO 19: Validacao de Nota ===" << endl;
    double nota19 = 8.5; // Nota simulada valida dentro do fluxo
    cout << "Nota informada: " << nota19 << " (Valida)" << endl << endl;

    // --- EXERCÍCIO 20 ---
    cout << "=== EXERCICIO 20: Intervalo Personlizado (5 a 15) ===" << endl;
    int inicio20 = 5, fim20 = 15;
    for (int i = iniciado20; i <= fim20; i++){
        cout << i << " ";
    }
    cout << endl;

    return 0;
    }


    