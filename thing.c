#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void rps(){
    int number;

srand(time(0));
number = rand()%10 ;

if( number!=1 && number!=2 && number!=3 ){
    srand(time(0));
number = rand()%10 ;
}

// 1. rock 2. paper 3. scissors
int input;
printf("Enter your choice: \n 1. Rock \n 2. Paper \n 3. Scissors \n");
scanf("%d", &input);

switch(input){

    case 1:
        if(number==1){
            printf("Draw");
            
        }
        else if(number==2){
            printf("You win");
            
        }
        else if(number==3){
            printf("You lose");
            
        }
        break;

    case 2:
        if(number==1){
            printf("You lose");
            
        }
        else if(number==2){
            printf("Draw");
            
        }
        else if(number==3){
            printf("You win");
            
        
        }
        break;
     
    case 3:
        if(number==1){
            printf("You win");
            
        }
        else if(number==2){
            printf("You lose");
            
        }
        else if(number==3){
            printf("Draw");
            
        
        }
        break;
}

}
    
int main (){

int choice;
printf("Do you want to play rock paper scissors ? \nFor Yes enter 1 \nFor No enter 2 \n");
scanf("%d", &choice);

while(choice==1){
    rps();
    printf("\nPress 1 to play again \nPress 2 to exit\n");
    scanf("%d", &choice);
}
return 0;
}