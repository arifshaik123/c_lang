#include<stdio.h>

int set_bit(int num);
//THIS FUNCTION PERFORMS TO SET THE PARTICULAR BIT POSITION 
int set_bit(int num)
{
    int bitpos;

    printf("enter the bitpos \n");
    scanf("%d",&bitpos);

    num = (num|(1<<bitpos));

    return num;
}

void print_bits(int num)
{
    for(int i = 31;i>=0;i--)
        printf("%d ",num>>i&1);

    printf("\n"); //for next line 
}

int main()
{
    printf("Let's Start \n");
    int num = 10,mod;
    mod = set_bit(num);

    print_bits(mod);

    return 0;
}
