# include <stdio.h>
# define SIZE 5
int main()
{
    //define and initialize an array
    int arr1[]={10,30,100,45,40};
    //value that need to search
    int search_item= 45;
    //function call and assign the return integer value to result variable
    int result=LinearSearch(arr1, search_item);
    if(result==-1)
        printf("%d is NOT Found\n",search_item);
    else
        printf("%d is Found\narray index is %d",search_item,result);
 }
 //function definition that used for linear searching
    int LinearSearch(int arr[], int item)
    {
        //define index
         int index=0;

        //check the index with defined size
         while(index<SIZE)
        {
             //check the search item with array element
             ///if it is equal to array element return the index
            if(item == arr[index])
                return index;
             ///if it is not increment the index by 1
            else
             index++;
        }
    return -1;
    }
