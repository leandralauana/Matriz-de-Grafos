#include <stdio.h>
#include <stdlib.h>

// #include "Estrutura.cpp"
#include "Grafo.cpp"
// Questão Unica
int main()
{
    float **G = criarGrafo();

    dataItem *CidadesIforamacaoRN = RN();
    float D[] = {0.05, 0.1, 0.15, 0.20, 0.25};
    // Primeiro Topico
    for (size_t i = 0; i < 5; i++)
    {

        imprimirmatriz(calculaDistancia(G, CidadesIforamacaoRN, D[i]));
    }

    // Segundo Topico
    for (size_t i = 0; i < 5; i++)
    {
        printf("\nCidades Com Maior Numero de Vzinhos:\n");
        ImprimeVizinhos(calculaDistancia(G, CidadesIforamacaoRN, D[i]), CidadesIforamacaoRN, D[i]);
    }

    // Terceiro Topico
    for (size_t i = 0; i < 5; i++)
    {
        printf("\nCidades Sem Vizinhos:\n", D[i]);
        ImprimirSemVizinhos(calculaDistancia(G, CidadesIforamacaoRN, D[i]), CidadesIforamacaoRN, D);
    }

    // Topico Final
    minimadistancia(CidadesIforamacaoRN);
    distanciamaximacidades(CidadesIforamacaoRN);
    ImprimirDistancias(CidadesIforamacaoRN);//Mostra todas as distancias!
}