#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int number,guess,nguesses=1;
    srand(time(0));
    number = rand()%100+1;
    do{
        printf("Guess the number\n");
        scanf("%d",&guess);
        if(guess<number){
            printf("Enter the higher number\n");
        }
        else if(guess>number){
            printf("Enter the lower number\n");
        }
        else{
            printf("you guessed it in %d attempts\n",nguesses);
        }
        nguesses++;
    }while(guess!=number);
    return 0;
}