#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
enum stat{win,lose,conten};
int roll(void);
int main()
{
    srand(time(NULL));
    enum stat gamestat;
    unsigned int sum=0,points=0;

    sum = roll();
    printf("%d\n",sum);
    if(sum==7||sum==11){
        gamestat = win;
        printf("wining");
        return 0;
    } else if(sum==2||sum==3||sum==12){
        gamestat = lose;
    } else{
        gamestat = conten;
        points+=sum;
        sum=0;
    }
    printf("%d\n",points);
    while(gamestat==conten){
        sum=roll();

        if(points==sum){
            gamestat=win;
        }else if(sum==7){
            gamestat=lose;
        }
    }

    if(gamestat==win){
        printf("you won");
    }else{
        printf("you lose");
    }

    return 0;
}
int roll(void){
    srand(time(NULL));
    return 2+ rand()%6 + rand()%6;
}
