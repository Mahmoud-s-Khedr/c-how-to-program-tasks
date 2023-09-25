#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    char arr[50][50];
    int x=0,y=0;
    for(int i=0;i<50;i++){
        for(int j=0;j<50;j++){
            arr[i][j]='_';
            printf("%c ",arr[i][j]);
        }
        puts("");
    }
    int command;
    char pen = '_';
    int turn = 0;
    do{
        scanf("%d",&command);
        if(command==1){
            pen='_';
            puts("pen is _");
        }
        if(command==2){
            pen='#';
            puts("pen is #");
        }
        if(command==3){
            turn += 1;
            turn = turn%4;
            printf("turn is %d",turn);
        }
        if(command==4){
            turn -= 1;
            turn = turn%4;
            printf("turn is %d",turn);
        }
        if(command==5){
            scanf("%d",&command);

            if(turn == 0){
                for(int i=x;i<x+command;i++){
                    arr[y][i] = pen;
                }
                x=x+command;
                printf("x is %d",x);
            }

            if(turn == 1){
                for(int i=y;i<y+command;i++){
                    arr[i][x] = pen;
                }
                 y=y+command;
                 printf("y is %d",y);
            }

            if(turn==2){
                for(int i=x;i>x-command;i--){
                    arr[y][i] = pen;
                }
                x=x-command;
                printf("x is %d",x);
            }

            if(turn==3){
                for(int i=y;i>y-command;i--){
                    arr[i][x] = pen;
                }
                y=y-command;
                printf("y is %d",y);
            }

        }
        if(command==6){
            for(int i=0;i<50;i++){
                for(int j=0;j<50;j++){
                    printf("%c ",arr[i][j]);
                }
                puts("");
            }
        }
        if(command==9){
            break;
        }

    }while(1);

    return 0;
}

