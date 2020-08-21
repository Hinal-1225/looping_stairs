/*C program draw something like stairs using looping statement*/
#include<stdlib.h>
#include<stdio.h>
int main()
{
    system("cls");
    int i,j,n;
    printf("\nEnter number of stair you want : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    system("pause");
	return 10;
}
