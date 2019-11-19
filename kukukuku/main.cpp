#include <stdio.h>
#define N 1000
int arr[N];
/* 对长度为n的数组arr执行插入排序 */
void insertionSort(int arr[], int n);
/* 打印长度为n的数组arr */
void printArray(int arr[], int n);
int main() {
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    insertionSort(arr, n);
    printArray(arr, n);
    return 0;
}
/* 打印长度为n的数组arr */
void printArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1)  /* 下标0..n-2每个元素后面有个空格 */
            printf(" ");/*下标n-1,也就是最后一个元素后面没有空格*/
    }
    printf("\n");/* 一行打印完后换行 */
}
void insertionSort(int arr[], int n)
{
    int i,t;
    for(i=0;i<n;i++) //1 2 3
    {
        for(int j=i+1;j<n;j--)
        {
            t=arr[j];
            if(arr[i]<arr[j])
                //取代，插入；
                
        }
    }
}
    
