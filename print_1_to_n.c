#include<stdio.h>
void print_hello(int i, int range)
{
    if (i > range)
        return;
    printf("\n%d",i);  
    print_hello(i+1, range);
}
int main()
{
    int range, i=1;
    printf("Enter range: ");
    scanf("%d",&range);
    print_hello(i, range);
}