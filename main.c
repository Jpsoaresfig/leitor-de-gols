#include <stdio.h>
#include <stdlib.h>

int main()
{
    int time1, time2;

    printf("digite a quantidade de gols do primeiro time: ");
    scanf("%d", &time1);

     printf("digite a quantidade de gols do segundo time: ");
    scanf("%d", &time2);


    if(time1>time2){
        printf("o time 1 venceu com o total de %d gols" ,time1);
    }
    else{
        printf("o time 2 venceu com o total de %d gols" ,time2);
    }




    return 0;
}
