#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define temp_ambiente 25
#define constante_k  0.6

///Função
double Derivada(double t,double y)
{
    double y_linha;

    y_linha = -1 * constante_k *(y-temp_ambiente); ///Aplicando a derivada da função de trabalho(lei do resfriamento)

    return y_linha;
}

///Método de Euler para resolução do problema do Valor inicial
double Euler(double t0,double y0,int t,int qtd_intervalo)
{
    double K1,Y,H,T;
    int i;
    Y = y0;                 ///Setamos o valor incial de y
    H  =  (t-t0)/qtd_intervalo;       ///Setando o valor do intervalo,por exemplo de t0 = 1 ate t = 2,com 2 divisões resulta em h = 0.5;
    for(i = 0;i < qtd_intervalo;i++)
    {
        K1 = Derivada(T,Y);      ///Recuperando o Valor da derivada da função no ponto (t,y)
        Y = Y + (H * K1);         ///Atualizando o valor de Y calculado em t
        T = T + H;                ///Atualizandooo valor de y
    }

    return Y;///Retorna o Valor Calculado pelo método
}

///Método
double runge_kutta()
{


}

///Método de Euler modificado

double Euler_modificado()
{


}

int main()
{
    double t0 = 0;
    double y0 = 40;
    double result = 0;
    printf("********************************************************************************\n");
    printf("************************Projeto Métodos Numéricos 2015.2************************\n");
    printf("************************Lei de Resfriamento de Newton***************************\n");

    result = Euler(t0,y0,5,2);            ///Chamando Função

    printf("Resultado Método de Euler %.7f\n",result);

    return 0;
}
