#include <stdio.h>
#include <string.h>

int main()
{
    float salary, days_worked, late;
    char saturday[20], mes[20];
    printf("Insira o valor do salário: ");
    scanf("%f", &salary);
    printf("Insira a quantidade de dias trabalhados: ");
    scanf("%f", &days_worked);
    printf("Insira a quantidade de horas a serem descontadas: ");
    scanf("%f", &late);
    printf("Insira o mes ao extenso: ");
    scanf("%s", &mes);
    printf("O colaborador trabalha aos sabados(sim ou nao)? ");
    scanf("%s", &saturday);
    if (strcmp(saturday, "sim") == 0) {
        if (strcmp(mes, "janeiro") == 0){
            salary = ((salary/26 * days_worked)/(days_worked * (((21*8)+(5*4))/26)) * ((days_worked * (((21*8)+(5*4))/26)) - late));
            printf("Total a ser pago: %.2f", salary); 
        }
        else if (strcmp(mes, "feveiro") == 0){
            salary = ((salary/24 * days_worked)/(days_worked * (((20*8)+(4*4))/24)) * ((days_worked * (((20*8)+(4*4))/24)) - late));
            printf("Total a ser pago: %.2f", salary); 
        }
        else if (strcmp(mes, "março") == 0){
            salary = ((salary/27 * days_worked)/(days_worked * (((23*8)+(4*4))/27)) * ((days_worked * (((23*8)+(4*4))/27)) - late));
            printf("Total a ser pago: %.2f", salary); 
        }
        else if (strcmp(mes, "abril") == 0){
            salary = ((salary/26 * days_worked)/(days_worked * (((21*8)+(5*4))/26)) * ((days_worked * (((21*8)+(5*4))/26)) - late));
            printf("Total a ser pago: %.2f", salary); 
        }
        else if (strcmp(mes, "maio") == 0){
            salary = ((salary/26 * days_worked)/(days_worked * (((22*8)+(4*4))/26)) * ((days_worked * (((22*8)+(4*4))/26)) - late));
            printf("Total a ser pago: %.2f", salary); 
        }
        else if (strcmp(mes, "junho") == 0){
            salary = ((salary/26 * days_worked)/(days_worked * (((22*8)+(4*4))/26)) * ((days_worked * (((22*8)+(4*4))/26)) - late));
            printf("Total a ser pago: %.2f", salary); 
        }
        else if (strcmp(mes, "julho") == 0){
            salary = ((salary/26 * days_worked)/(days_worked * (((21*8)+(5*4))/26)) * ((days_worked * (((21*8)+(5*4))/26)) - late));
            printf("Total a ser pago: %.2f", salary); 
        }
        else if (strcmp(mes, "agosto") == 0){
            salary = ((salary/27 * days_worked)/(days_worked * (((23*8)+(4*4))/27)) * ((days_worked * (((23*8)+(4*4))/27)) - late));
            printf("Total a ser pago: %.2f", salary); 
        }
        else if (strcmp(mes, "setembro") == 0){
            salary = ((salary/26 * days_worked)/(days_worked * (((22*8)+(4*4))/26)) * ((days_worked * (((22*8)+(4*4))/26)) - late));
            printf("Total a ser pago: %.2f", salary); 
        }
        else if (strcmp(mes, "outubro") == 0){
            salary = ((salary/26 * days_worked)/(days_worked * (((21*8)+(5*4))/26)) * ((days_worked * (((21*8)+(5*4))/26)) - late));
            printf("Total a ser pago: %.2f", salary); 
        }
        else if (strcmp(mes, "novembro") == 0){
            salary = ((salary/26 * days_worked)/(days_worked * (((22*8)+(4*4))/26)) * ((days_worked * (((22*8)+(4*4))/26)) - late));
            printf("Total a ser pago: %.2f", salary); 
        }
        else if (strcmp(mes, "dezembro") == 0){
            salary = ((salary/27 * days_worked)/(days_worked * (((22*8)+(5*4))/27)) * ((days_worked * (((22*8)+(5*4))/27)) - late));
            printf("Total a ser pago: %.2f", salary); 
        }
        
    }
    else {
        if (strcmp(mes, "janeiro") == 0){
            salary = ((salary/21 * days_worked)/(days_worked * ((21*8)/21)) * ((days_worked * ((21*8)/21)) - late));
            printf("Total a ser pago: %.2f", salary); 
        }
        else if (strcmp(mes, "feveiro") == 0){
            salary = ((salary/20 * days_worked)/(days_worked * ((20*8)/20)) * ((days_worked * ((20*8)/20)) - late));
            printf("Total a ser pago: %.2f", salary); 
        }
        else if (strcmp(mes, "março") == 0){
            salary = ((salary/23 * days_worked)/(days_worked * ((23*8)/23)) * ((days_worked * ((23*8)/23)) - late));
            printf("Total a ser pago: %.2f", salary); 
        }
        else if (strcmp(mes, "abril") == 0){
            salary = ((salary/21 * days_worked)/(days_worked * ((21*8)/21)) * ((days_worked * ((21*8)/21)) - late));
            printf("Total a ser pago: %.2f", salary); 
        }
        else if (strcmp(mes, "maio") == 0){
            salary = ((salary/22 * days_worked)/(days_worked * ((22*8)/22)) * ((days_worked * ((22*8)/22)) - late));
            printf("Total a ser pago: %.2f", salary); 
        }
        else if (strcmp(mes, "junho") == 0){
            salary = ((salary/22 * days_worked)/(days_worked * ((22*8)/22)) * ((days_worked * ((22*8)/22)) - late));
            printf("Total a ser pago: %.2f", salary); 
        }
        else if (strcmp(mes, "julho") == 0){
            salary = ((salary/21 * days_worked)/(days_worked * ((21*8)/21)) * ((days_worked * ((21*8)/21)) - late));
            printf("Total a ser pago: %.2f", salary); 
        }
        else if (strcmp(mes, "agosto") == 0){
            salary = ((salary/23 * days_worked)/(days_worked * ((23*8)/23)) * ((days_worked * ((23*8)/23)) - late));
            printf("Total a ser pago: %.2f", salary); 
        }
        else if (strcmp(mes, "setembro") == 0){
            salary = ((salary/22 * days_worked)/(days_worked * ((22*8)/22)) * ((days_worked * ((22*8)/22)) - late));
            printf("Total a ser pago: %.2f", salary); 
        }
        else if (strcmp(mes, "outubro") == 0){
            salary = ((salary/21 * days_worked)/(days_worked * ((21*8)/21)) * ((days_worked * ((21*8)/21)) - late));
            printf("Total a ser pago: %.2f", salary); 
        }
        else if (strcmp(mes, "novembro") == 0){
            salary = ((salary/22 * days_worked)/(days_worked * ((22*8)/22)) * ((days_worked * ((22*8)/22)) - late));
            printf("Total a ser pago: %.2f", salary); 
        }
        else if (strcmp(mes, "dezembro") == 0){
            salary = ((salary/22 * days_worked)/(days_worked * ((22*8)/22)) * ((days_worked * ((22*8)/22)) - late));
            printf("Total a ser pago: %.2f", salary); 
        }

    }
    sleep(60);
}
