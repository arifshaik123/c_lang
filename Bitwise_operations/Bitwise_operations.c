#include<stdio.h>

int set_bit(int,int);



//THIS FUNCTION PERFORMS TO SET THE PARTICULAR BIT POSITION 

/*



*/
int set_bit(int num,int pos)
{
    num = (num|(1<<pos));

    return num;
}


/*


*/
void print_bits(int num)
{
    int count = 0;
    for(int i = 31;i>=0;i--)
    {
        count++;
        printf("%d ",num>>i&1);
        if(count == 4)
        {
            printf(" "),
            count = 0;
        }
    }
}

int main()
{
    printf("Let's Start \n");
    int num = 10,pos=2;
    num = set_bit(num,pos);

    print_bits(num);

    return 0;
}
