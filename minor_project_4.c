#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main ()
{
    char str[10],comp[10];
    int end=1;
    while(end!=0)
    {
        printf ("\nPlease choose rock,paper,scissor or quit :");
        scanf("%s",&str);
        int comp=rand()%3+1;
        if(strcmp(str,"rock")==0)
        {
            printf("You choose:%s\n",str);
            if(comp==1)
            {
                printf("Computer choose:rock\n");
                printf("Draw!!");
            }
            if(comp==2)
            {
                printf("Computer choose:paper\n");
                printf("Computer won.");
            }
            if(comp==3)
            {
                printf("Computer choose:scissors\n");
                printf("Player won.");
            }
        }
        else if(strcmp(str,"paper")==0)
        {
            printf("You choose:%s\n",str);
            if(comp==1)
            {
                printf("Computer choose:rock\n");
                printf("Player won.");
            }
            if(comp==2)
            {
                printf("Computer choose:paper\n");
                printf("Draw!!");
            }
            if(comp==3)
            {
                printf("Computer choose:scissors\n");
                printf("Computer won.");
            }
        }
        else if(strcmp(str,"scissor")==0)
        {
            printf("You choose:%s\n",str);
            if(comp==1)
            {
                printf("Computer choose:rock\n");
                printf("Computer won.");
            }
            if(comp==2)
            {
                printf("Computer choose:paper\n");
                printf("Player won.");
            }
            if(comp==3)
            {
                printf("Computer choose:scissors\n");
                printf("Draw!!");
            }
        }
        else if(strcmp(str,"quit")==0)
        {
            end=0;
        }
    }
}