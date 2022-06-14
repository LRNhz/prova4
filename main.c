#include <stdio.h>
#include <time.h>
#include "funcoes.h"
int main()
{
    int alfa=0,beta=0,charlie=0,delta=0,eco=0,omega;
    FILE *arq;
    int op = 1, opcao, soma, contador=0;
    struct chamado{
    int tipo;
    char nome[50], setor[30];
    int vetor[10000],x;




    };
    struct tm*data_hora_atual;
    struct chamado chamados;
    time_t segundos;
    time(&segundos);
    data_hora_atual = localtime(&segundos);
    arq = fopen("Dados.txt", "a+");
    inicio:
        menu:
    printf("Selecione a opcao desejada: \n1 - Abrir chamado \n2 - Gerar Arquivo TXT \n3 - Historico de dados \n4 - Finalizar Programa\n");
    scanf("%d", &opcao);
    switch (opcao) {
    case 1:


    while (op == 1) {
        printf("\nNome do solicitante: ");
        fflush(stdin);
        scanf("%[^\n]s", &chamados.nome);
        printf("\nSetor do solicitante: ");
        fflush(stdin);
        scanf("%[^\n]s", &chamados.setor);
        printf("\nOcorrencias: \n911 Falha de conexao (Internet)\n912 Problema com impressora\n913 Usuario sem senha\n914 Problemas na rede interna\n915 Computador nao liga\nTipo de ocorrencia: ");
        fflush(stdin);
        scanf("%d", &chamados.tipo);

                if(chamados.tipo==911){

  alfa++;

        }

        if(chamados.tipo==912){

 beta++;

        }

if(chamados.tipo==913){

 charlie++;

        }

if(chamados.tipo==914){

 delta++;

        }

        if(chamados.nome==915){

 eco++;

        }



        fprintf(arq,"\nNome do solicitante: %s",chamados.nome);
        fprintf(arq,"\nSetor do solicitante: %s",chamados.setor);
        fprintf(arq,"\nTipo  da ocorrencia: %d",chamados.tipo);
        fprintf(arq,"\nHora do chamado: %d",data_hora_atual->tm_hour);
        fprintf(arq,":%d",data_hora_atual->tm_min);
        fprintf(arq,":%d",data_hora_atual->tm_sec);
        fprintf(arq,"\nData do chamado: %d/",data_hora_atual->tm_mday);
        fprintf(arq,"%d/",data_hora_atual->tm_mon+1);
        fprintf(arq,"%d\n\n",data_hora_atual->tm_year+1900);



        printf("\nContinuar? (1-sim / 2-nao): ");
        scanf("%d", &op);
        if(op == 1) {
            fputs("\n", arq);
        }

/////////911///912///913///914///915/////
    }
            goto menu;
     break;
    case 2:
        system("cls");
        printf("Seu arquivo foi gerado com sucesso! Verifique a pasta aonde o projeto esta salvo. \n");
        goto menu;
        break;
    case 3:
        system("cls");

    if(alfa>beta){
        if(alfa>charlie){
            if(alfa>delta){
                if(alfa>eco){

                    printf("O mais chamado foi: 911\nFoi chamado um total de %d vezes",alfa);
                }
            }
        }
    }

        if(beta>alfa){
        if(beta>charlie){
            if(beta>delta){
                if(beta>eco){

                    printf("O mais chamado foi: 912\nFoi chamado um total de %d vezes",beta);
                }
            }
        }
    }

            if(charlie>alfa){
        if(charlie>beta){
            if(charlie>delta){
                if(charlie>eco){

                    printf("O mais chamado foi: 913\nFoi chamado um total de %d vezes",charlie);
                }
            }
        }
    }
                if(delta>alfa){
        if(delta>beta){
            if(delta>charlie){
                if(charlie>eco){

                    printf("O mais chamado foi: 914\nFoi chamado um total de %d vezes",delta);
                }
            }
        }
    }
              if(eco>alfa){
        if(eco>beta){
            if(eco>charlie){
                if(eco>charlie){

                    printf("O mais chamado foi: 915\nFoi chamado um total de %d vezes",eco);
                }
            }
        }
    }
omega = alfa+beta+charlie+delta+eco;

printf("\nO numero de ocorrencias do dia foi: %d",omega);

        goto menu;
        break;
    case 4:
        system("cls");
        printf("voce pediu para sair, prencione qualquer tecla para continuar\n");
        break;
    default:
        printf("Voce deve escolher uma opcao valida\n");
        system("pause");
        goto inicio;
    }

    fclose(arq);
    return 0;
}
