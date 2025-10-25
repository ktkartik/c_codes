/*Write a program for a matchstick game being played between the computer and a user. 
Your program should ensure that the computer always wins. Rules for the game are as follows:
There are 21 matchsticks.
The computer asks the player to pick 1, 2, 3, or 4 matchsticks.
After the person picks, the computer does its picking.
Whoever is forced to pick up the last matchstick loses the game.*/

#include<stdio.h>
int main(){
    int matchstics=21;
    
    while (1)
    {   
        int usermove;
        int compuser;

        printf("Total no of matchistices are left %d \n",matchstics);
        printf("\nuser pickup no matchistic => ");
        scanf("%d",&usermove);
        if (usermove>4||usermove<1)
        {
            continue;
        }
        
        compuser =5-usermove;
        printf("\ncomputer pickes ==> %d",compuser);
        matchstics=matchstics-5;
        if(matchstics==1){
              printf("\nTotal no of matchistices are left %d",matchstics);

              printf("    \n");

              printf("You Lose the game! ");
              break;
        }


    }
    
   
    return 0;
}