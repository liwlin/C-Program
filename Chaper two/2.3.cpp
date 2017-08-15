#include<stdio.h>
void butler(void);
int main()
{   
    printf("I will summon the butler function.\n");
    butler();
    printf("yes. Bring me some tea and writeable DVDS.\n");
    getchar();
    return 0;
}

void butler()
{
    printf("You rang, sir?\n");
}