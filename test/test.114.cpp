#include<stdio.h>
void say(int i,int j)
{
    i++;
    j++;
    printf("I'm Robot_LI\n %d,%d\n", i , j);
}

int main(void)
{
    int i,j,k;
    int a[10];
    for(i=0;i<=10;i++)
    {
        int a[i];
        printf("a[%d]=%d\n",i,i);
    }
    i = 1;
    j = i++;
    k = ++i;
    say(5,7);
    printf("%d,%d,%d,%d",i,j,k,j+k);
    
    getchar();
    return 0;

}