/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author shravani patel
 * @date 27-06-20
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};


 

/* Add other Implementation File Code Here */
  float mean =find_mean( test,SIZE);
  float meadian=find_median( test,SIZE);
  unsigned char maximum=find_maximum(test,SIZE);
  unsigned char minimum=find_minimum(test,SIZE);
  /* Other Variable Declarations Go Here */
  print_statistics(mean, meadian, minimum, maximum);
  printf("\narray before sorting \n");
  print_array( test,SIZE);
  printf("\narray after sorting in descending order \n");
  sort_array( test,SIZE);
  print_array(test,SIZE);
    
  /* Statistics and Printing Functions Go Here */
 
  

}
void  print_statistics(float meadian,float mean,unsigned char maximum,unsigned char minimum) 
{

      printf("the means is %f",mean);
      printf("the median is %f",meadian);
      printf("the maximum value is %c",maximum);
      printf("the minimum value is %c",minimum);
}
void print_array(unsigned char *ptr,unsigned int size)
{
      for (int i=0;i<size;i++)
      {
        printf(%d \t", ptr[i]);
        
      }
      
}
/* Add other Implementation File Code Here */
float find_mean(unsigned char *ptr,unsigned int size)   //mean       
               {
                   unsigned int sum=0;
                   for (int i=0;i<size;i++)
            {
                          sum=sum+ptr[i];
                     
                     
          }         
                 
                    unsigned int nomean;
                    nomean=(sum)/(size);
                    return mean;
               }
           
unsigned char find_maximum(unsigned char *ptr,unsigned int size)  //maximum
   {          
               unsigned int max=ptr[0];
               for (int i=1;i<=size;i++)
         {
                      if (ptr[i]>max)
                {           
                        max=ptr[i];
                        
                }
                 
         }
               
               return max;
     
   }
unsigned char find_minimum(unsigned char *ptr,unsigned int size)  //maximum
   {          
               unsigned int min=ptr[0];
               for (int i=1;i<=size;i++)
         {
                      if (ptr[i]<min)
                {           
                        min=ptr[i];
                        
                }
                 
         }
               
               return min;
     
   }
float find_median(unsigned char *ptr,unsigned int size)
   {         
             unsigned char sorted_array[size];
	           for(int i = 0; i < size; i++)
		         sorted_array[i] = ptr[i];

             
             for (int i=0;i<size;i++)
             {
               
                 for (int j=i+1;j<size;j++)
              {
                     if (sorted_array[i]<sorted_array[j])
                   {   
                        temp=sorted_array[i];
                        sorted_array[i]=sorted_array[j];
                        sorted_array[j]=temp;
         
                   }
                   
             }
               
           }
             unsigned int meadian;
             if (size % 2==0)//when size is even 
             {
               unsigned int x=size/2;
               unsigned int y=x+1;
               meadian = (ptr[x]+ptr[y])/2;
               return meadian;
             }
             else //when size is odd
             {
                 unsigned int z=(size+1)/2;
                 meadian = ptr[z];
                 return meadian;
             } 
            
     }
void sort_array(unsigned char *ptr,unsigned int size)
 {    unsigned char = temp;
      for (int i=0;i<size;i++)
      {
        for (int j=i+1;j<size;j++)
        {
             if (ptr[i]<ptr[j])
             {   
                   temp=ptr[i];
                   ptr[i]=ptr[j];
                   ptr[j]=temp;
             }
        }
      }
   }
