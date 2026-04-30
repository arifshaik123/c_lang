#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


int set_bit(int,int);
int clear_bit(int,int);
void print_bits(int);
int set_bitcnt(int);
int clear_bitcnt(int);


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

/**
 *@brief Toggle the bit of a number at a particular position
 *
 *@param num is a integer number 
 *@param pos is a position number 
 *@returns updated integer number  
  */
int toggle(int num,int pos)
{
  num = (num^(1<<pos));
  return num;
}


/**
*@brief count the set bits in a integer number 
*
*@param num is a integer number 
*@return count of the set bits in a number 
  */
int set_bitcnt(int num)
{
    static cnt = 0;
    for(int i = 31;i>=0;i--)
      if(num>>i&1)
        cnt++;
  return cnt;
  
}


/**
*@brief count the zero bits in a integer number 
*
*@param num is a integer number 
*@return count integer will be returned 
  */
int clear_bitcnt(int num)
{
  static cnt = 0;
  for(int i = 31;i>=0;i--)
    if((num>>i&1)!=1)
      cnt++;
  return cnt;
      
}


/**
*@brief set first five odd bits in a integer number 
*
*@param num is a integer number 
*@return updated integer number 
  */
int set_5oddbits(int num)
{
  for(int i = 1;i<=10;i = i+1)
    num = (num|(1<<i));
  return num;
}

int main()
{
    printf("Let's Start \n");
    int num = 10,pos=2,cnt = 0;
    num = set_bit(num,pos);
    print_bits(num);
    num = clear_bit(num,pos);
    print_bits(num);
    num = toggle(num,pos);
    print_bits(num);
    cnt = set_bitcnt(num);
    print_bits(num);
    
    return 0;
}
