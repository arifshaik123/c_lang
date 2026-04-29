#include<stdio.h>

int set_bit(int,int);
int clear_bit(int,int);
void print_bits(int);

/** 
 *@brief Set the bit of a number at a particular position
 *
 *@param num is a integer number
 *@param pos is a position number
 *@return updated integer number 
    */
int set_bit(int num,int pos)
{
    num = (num|(1<<pos));

    return num;
}


/**
*@brief Printing the bits of the integer number 
*
*@param num is a integer
*@return Nothing to return 
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


/**
*@brief Clear the bit of the integer Number
*
*@Param num is a integer number 
*@Param Pos is a Position number 
*@returns updated integer number 
   */
int clear_bit(int num,int pos)
{
   num = (num&~(1<<pos));
   return num;
}



int main()
{
    printf("Let's Start \n");
    int num = 10,pos=2;
    num = set_bit(num,pos);

    print_bits(num);

    return 0;
}
