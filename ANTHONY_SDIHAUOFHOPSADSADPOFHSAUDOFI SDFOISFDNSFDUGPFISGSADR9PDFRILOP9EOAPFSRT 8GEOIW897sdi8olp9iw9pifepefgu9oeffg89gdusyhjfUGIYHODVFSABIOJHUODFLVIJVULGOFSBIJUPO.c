#include <stdio.h>
#include <stdlib.h> 
int main (){
    int num;
    scanf("%d", &num);//Escribir número
    int randnum = rand()%30;//crear número aleatorio
    while (num != randnum) {
        if(num > randnum){
            printf("try lower, mothertrocker -Samuel\n");
        }
        else{
            printf("Try higher, you piece of puperdooper -old Korone\n");
        }
        scanf("%d", &num);
    }
    printf("you win, moderfocker -Arnold\n");

}