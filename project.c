 #include<stdio.h>
 #include<stdlib.h>
 #include<time.h>
  
 int main(){
    srand(time(0));
 int min=0,max=100;
 int randnum=(rand()%(max-min+1))+min;
 int no_of_guesses=0;
 int guessed;
 do
 {
    printf("Guess a number\n");
    scanf("%d",& guessed);
    no_of_guesses++;
    if(guessed>randnum){
        printf("lower number please\n");
    }
    else if(guessed==randnum){
        printf("you guessed it!\n");
    }
    else{
        printf("Higher number please\n");
    }
 } while (guessed!=randnum);
 printf("You guessed the number in %d guesses !",no_of_guesses);
 
 return 0;
 }  