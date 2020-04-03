#include <stdio.h>






int binary_search(int *arr, int low, int high, int val) {
    
    int middle=(low+high)/2;

    if (low > high)
        return -1;
    if (arr[middle]==val)
    {
        return middle;
    }
    else if(arr[middle]>val)
    {
        return binary_search(arr,low,middle-1,val);
    }
    else if(arr[middle]<val)
    {
        return binary_search(arr,middle+1,high,val);
    }

}

int binary_search2(int*arr,int low,int high,int val)
{
    while(low <=high)
    {
        
        int middle=(low+high)/2;

        if(arr[middle]==val)
        {
            return middle;
        }

        else if(middle>val)
        {
            high = middle -1;
        }
        else if (middle < val) {
           low = middle + 1;
        }
    }
    return -1;
}

int main(void)
{
    int arr[]={2,3,4,10,40};
    int result=binary_search2(arr,0, 4, 11);
    printf("Result: %d\n", result);
    return 0;
}
