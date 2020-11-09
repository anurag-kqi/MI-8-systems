#include <stdio.h>
void checkForSum (int arr1[], int n, int s)
{
    // read upto to the last element - 1
    for (int i = 0; i < n - 1; i++)
    {
    
        for (int j = i + 1; j < n; j++)
        {
        
            if (arr1[i] + arr1[j] == s)
            {
                printf("Pair of elements can make the given sum by the value of index %d and %d", i, j);
                return;
            }
        }
    }
    printf("No Pair can make the given sum.");
}
 
int main()
{
    int arr1[] = { 6, 8, 4, -5, 7, 9 };
    int s = 15;
    printf("The given array : ");
    int n = sizeof(arr1)/sizeof(arr1[0]);
	 for (int i = 0; i <= n - 1; i++)
    {
	printf("%d  ",arr1[i]);
	}  
	printf("\nThe given sum : %d\n",s);
	printf("\n");
    checkForSum(arr1, n, s);
    return 0;
}