/*Sorting an array using selection short technique*/
#include<stdio.h>
int main()  //Main function
{
    //Reading values
    int n,i,j,temp;
    printf("Enter array size=");
    scanf("%d", &n);
    int a[n];
    printf("Enter the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0;i<n-1;i++)  //Loop 1
    {
        for(j=i+1;j<n;j++)  //Loop 2 to sort the array
        {
            if(a[j]<a[i])  //Condition 1
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            } 
        }  //End of loop 2
    }  //End of loop 1
    printf("Sorted array:\n");
    for ( i = 0; i <n; i++)  //Loop 3 to print the array
    {
        printf("%d ", a[i]);
    }  //End of loop 3
    return 0;
}