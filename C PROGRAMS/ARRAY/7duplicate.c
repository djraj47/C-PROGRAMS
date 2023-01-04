#include <stdio.h>
 
int main()
{
	int i, j, Size, Count = 0;
	
	printf("\n Please Enter Number of elements in an array  :   ");
	scanf("%d", &Size);
	int arr[Size];
	
	printf("\n Please Enter %d elements of an Array  :  ", Size);
	for (i = 0; i < Size; i++)
	{
    	scanf("%d", &arr[i]);
   	}     
 printf("the duplicate elements are ");
	for (i = 0; i < Size; i++)                          
	{
		for(j = i + 1; j < Size; j++)
		{
    		if(arr[i] == arr[j])
    		{
                printf(" %d",arr[i]);
    			//Count++;
				break;
			}
		}
	}

 	 // printf("\n Total Number of Duplicate Elements in this Array  =  %d ", Count);
	     
 	return 0;
}

