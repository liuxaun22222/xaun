#include <stdio.h>

// int main()
// {
//     int a = 0;
//     scanf("%d",&a);
//     printf("%d\n",a);
//     return 0;
// // }
// int main()
// {
//     int a = 0;
//     while(scanf("%d",&a))
//     {
//         int i = 0;
//         int j = 0;
//         for(i=0;i<a;i++)
//         {
//             for(j=0;j<a;j++)
//             {
//                 printf("* ");
//             }
//                 printf("\n");

//         }
//     }

//     return 0;
// }
int mep(int arr[],int k,int sz)
{
    int laft = 0;
    int larht = sz - 1;
    while(laft<=larht)
   {  
    int mid = (laft + larht)/2;
    if(arr[mid] < k)
    {
        laft = mid + 1;
    }
     if(arr[mid] > k)
    {
        larht = mid - 1;
    }
    else if(arr[mid] == k)
    {
        return mid;
    }
    }
}
int main()
{
   int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int k = 0;
    scanf("%d",&k);
     int sz = sizeof(arr)/sizeof(arr[0]);
     int ret = mep(arr,k,sz);
    if(ret == -1)
    {
        printf("找不到该下标\n");
    }
    else
    {
        printf("找到了：下标是：%d",ret);
    }
    return 0;
}