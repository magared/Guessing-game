#include <stdio.h>
#include <stdlib.h>

int main()

{

   int secretNumber =5;
   int guess;
   int guessCount = 6;
   int GuessLimit = 2;
   int outofguesses =2;

   while(guess != secretNumber && outofguesses == 0){
        if(guessCount < GuessLimit){
            printf("Enter a number:");
            scanf("%d", &guess);

            guessCount++;


           } else{
                    outofguesses = 1;
}

}
    if (outofguesses == 1 ){
    printf(" out of guesses ");

    } else{

    printf(" You are the best");

    }
}
