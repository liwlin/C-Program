#include<stdio.h>

void jolly(void)
{
    printf("For he's a jolly good fellow!\n");
}

void deny(void)
{
    printf("Which nobody can deny!");
}

int main(void)
{
   int i;
    for(i=0;i<3;i++)
    {
    jolly();
    }
    deny();
    getchar();

}

