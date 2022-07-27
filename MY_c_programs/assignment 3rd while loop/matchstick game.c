/*(c) Write a program for a matchstick game being played between the computer and a user. Your program should ensure that the computer always
wins. Rules for the game are as follows:
There are 21 matchsticks.
The computer asks the player to pick 1, 2, 3, or 4 matchsticks.
After the person picks, the computer does its picking.
Whoever is forced to pick up the last matchstick loses the game.*/
# include<stdio.h>
int main()
{
    int computer,user;
    int matchsticks=21;
    while(1)
    {
        printf("\n num of matchsticks left=%d\n",matchsticks);
        printf("pick 1or2or3or4 matches\n");
        scanf("%d",&user);
        if(user>4||user<1)
        continue;
        matchsticks=matchsticks-user;
        printf("number of matches left=%d\n",matchsticks);
        computer=5-user;
        printf("out of which computer pick up %d\n",computer);
        matchsticks=matchsticks-computer;
        if(matchsticks==1)
        {
            printf("\n number of matches left=%d\n",matchsticks);
            printf("you lost the game\n");
            break;
        }
    }
}
