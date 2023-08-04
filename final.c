#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int dice;
int position,position2, new_p;
int position_check();
int dice1,dice2=0;
char player1[100], player2[100];


int new_position(int position){

    switch(position){
        
            case 2 : new_p=38;
            printf("\nwohooo!! You landed on a ladder and your new position is %d\n", new_p);
            break;

            case 8 : new_p=31;
            printf("\nwohooo!! You landed on a ladder and your new position is %d\n", new_p);
            break;

            case 21 : new_p=42;
            printf("\nwohooo!! You landed on a ladder and your new position is %d\n", new_p);
            break;

            case 46 : new_p=84;
            printf("\nwohooo!! You landed on a ladder and your new position is %d\n", new_p);
            break;

            case 51 : new_p=67;
            printf("\nwohooo!! You landed on a ladder and your new position is %d\n", new_p);
            break;

            case 71 : new_p=91;
            printf("\nwohooo!! You landed on a ladder and your new position is %d\n", new_p);
            break;


            case 80 : new_p=99;
            printf("\nwohooo!! You landed on a ladder and your new position is %d\n", new_p);
            break;

            case 33 : new_p=05;
            printf("\nalas!! you stepped on a snake and your new position is %d\n", new_p);
            break;

            case 54 : new_p=34;
            printf("\nalas!! you stepped on a snake and your new position is %d\n", new_p);
            break;
            case 63 : new_p=16;
            printf("\nalas!! you stepped on a snake and your new position is %d\n", new_p);
            break;

            case 93 : new_p=74;
            printf("\nalas!! you stepped on a snake and your new position is %d\n", new_p);
            break;

            case 97 : new_p=61;
            printf("\nalas!! you stepped on a snake and your new position is %d\n", new_p);
            break;

            default:
            new_p=position;
    }
   return new_p;
}



int main(){
    

    printf("Rules and guidelines for the game\n");

    printf("Hello and welcome to Snake and Ladders game the rules are simple\n");

    printf(" |  100  99  98  97  96  95  94  93  92  91  |   01 = start        |   02 = ladder to 38 |\n");
    printf(" |   81  82  83  84  85  86  87  88  89  90  |   33 = snake to 05  |   08 = ladder to 31 |\n");
    printf(" |   80  79  78  77  76  75  74  73  72  71  |   54 = snake to 34  |   21 = ladder to 42 |\n");
    printf(" |   61  62  63  64  65  66  67  68  69  70  |   63 = snake to 16  |   46 = ladder to 84 |\n");
    printf(" |   60  59  58  57  56  55  54  53  52  51  |   93 = snake to 74  |   51 = ladder to 67 |\n");
    printf(" |   41  42  43  44  45  46  47  48  49  50  |   97 = snake to 61  |   71 = ladder to 91 |\n");
    printf(" |   40  39  38  37  36  35  34  33  32  31  |  100 = end          |   80 = ladder to 99 |\n");
    printf(" |   21  22  23  24  25  26  27  28  29  30  |                                           |\n");
    printf(" |   20  19  18  17  16  15  14  13  12  11  |                                           |\n");
    printf(" |   01  02  03  04  05  06  07  08  09  10  |                                           |\n");

    printf("\nenter the name of player 1 :");
    scanf("%s", player1);
    printf("\nenter the name of player 2 :");
    scanf("%s", player2);
    char roll;
    printf("\nSo the match is between %s and %s\n", player1 , player2);
    printf("\nlet's get started with %s", player1);
    char trash[1], trash3[1000];
    srand(time(NULL));
    scanf("%c", &trash[0]);

    while(position < 100  &&  position2 < 100){
/*...............1111111111111111111111111111...............*/
        printf("\nPress any key to roll the dice %s", player1);
        dice1 = (getch());
        dice1  = ((rand()%6)+1);
        printf("\n%s rolled a dice and got a %d \n",player1,dice1);
        
        if(position+dice1>100){
            printf("\nYou can't move ahead from 100\n");
            position=position;
        }
        else{
            position+=dice1;
        }
        

        if(dice1==6){

            printf("\nyou get an extra chance for scoring 6 in the previous throw\n");
          
            printf("\nPress any key to roll the dice %s:", player1);

            dice1 = (getch());
            dice1  = ((rand()%6)+1);
            
            
            printf("\n%s rolled a dice and got a %d \n",player1,dice1);
            
            if(position+dice1>100){
                printf("\nYou can't move ahead from 100\n");
                position=position;
            }
            else{
                position+=dice1;
            }
         
        }
        
       
        position=new_position(position);
        
    
        printf("\n%s: %d\n",player1, position);
        
/*...................22222222222222222222222222222222222................*/
    
     printf("\nPress any key to roll the dice %s:", player2);

        dice2 = (getch());
        dice2  = ((rand()%6)+1);
        printf("\n%s rolled a dice \n",player2);
         printf("\n%s rolled a dice and got a %d \n",player2,dice2);
         
        if(position2+dice2>100){
            printf("\nYou can't move ahead from 100\n");
            position2=position2;
        }
        else{
            position2+=dice2;
        }
        

        if(dice2==6){

            printf("\nyou get an extra chance for scoring 6 in the previous throw\n");
          
            printf("\nPress enter to roll the dice %s", player2);  
            dice1 = (getch());
                dice1  = ((rand()%6)+1);
            printf("\n%s rolled a dice and got a %d \n",player2,dice2);
            if(position2+dice2>100){
                printf("\nYou can't move ahead from 100\n");
                position2=position2;
            }
            else{
                position2+=dice2;
            }
         
        }
       
        
       
        position2=new_position(position2);
        
         printf("\n%s: %d\n",player2, position2);



    };

    
        if(position>position2)
        printf("\n%s WON!!\n",player1);
        else if(position2>position)
        printf("\n%s WON!!\n",player2);
     else
     printf("\n!! It's a DRAW !! Both of you took same attempts to complete the game , so congratulations to both of you\n");

    printf("\n\nHope you enjoyed playing \n\npress enter to end the game \n");
    char trash2;
    scanf("%c", &trash2);

    return 0;
}