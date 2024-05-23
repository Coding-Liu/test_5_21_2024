#include <stdio.h>
#include <string.h>
// int main()
// {
//     char arr1[20]={0};
//     char arr2[]="hello bit!";
//     strcpy(arr1,arr2);
//     printf("%s\n",arr1);
//     return 0;
// }
// int main()
// {
//     // char arr[20]="hello world!";
//     // memset(arr,'2',4);
//     // printf("%s\n",arr);
//     printf("%d\n",sizeof(char*));
//     return 0;
// }
// int Max(int a,int b)
// {
//     if(a>b)
//     return a;
//     else
//     return b;
// }
// int main()
// {
//     int a=0;
//     int b=0;
//     scanf("%d %d",&a,&b);
//     int r=Max(a,b);
//     printf("%d\n",r);
//     return 0;
// }
// void swap(int *pa,int *pb)
// {
//     int *tmp=NULL;
//     tmp=pa;
//     pa=pb;
//     pb=tmp;
// }
// int main()
// {
//     int a=0;
//     int b=0;
//     scanf("%d %d",&a,&b);
//     printf("a=%d,b=%d\n",a,b);
//     swap(&a,&b);
//     printf("a=%d,b=%d\n",a,b);
//     printf("a=%p,b=%p\n",&a,&b);
//     return 0;
// }
// void swap(int* *ppa,int* *ppb)
// {
//     int* tmp=NULL;
    
//     tmp=*ppa;
//     *ppa=*ppb;
//     *ppb=tmp;
// }
// void swap(int* ppa,int* ppb)
// {
//     int* tmp=NULL;
    
//     tmp = * ppa;
//     *ppa=*ppb;
//     *ppb=tmp;
// }

// int main()
// {
//     int a=10;
//     int b=20;
//     int *pa=&a;
//     int *pb=&b;
//     int* *ppa=&pa;
//     int* *ppb=&pb;
//     printf("a=%p,b=%p\n",pa,pb);
//     printf("a=%p,b=%p\n",&a,&b);
//     swap(&pa,&pb);
//     printf("a=%p,b=%p\n",pa,pb);
//     printf("a=%p,b=%p\n",&a,&b);
// return 0;
// }
// int main()
// {
//     int i=0;
//     int j=0;
//     for(i=101;i<=200;i=i+2)
//     {
//       for(j=2;j<i;j++)
//       {
//         if(i%j==0)
//         {
//             break;
//         }
//       }
//       if(i<=j)
//       printf("%d ",i);
//     }
//     printf("\n");
//     return 0;
// }
// #include <math.h>
// int main()
// {
//     int i=0;
//     int j=0;
//     for(i=101;i<200;i=i+2)
//     {
//         for(j=2;j<=sqrt(i);j++)
//         {
//             if(i%j==0)
//             {
//                 break;
//             }
//         }
//         if(j>sqrt(i))
//         {
//             printf("%d ",i);
//         }
//     }
//     printf("\n");
//     return 0;
// }
// int main()
// {
//     int year=0;
//     int count=0;
//     for(year=1000;year<=2000;year++)
//     {
//         if(((year%4==0)&&(year%100 !=0)) || year%400==0)
//         {
//             printf("%d ",year);
//             count++;
//         }
//     }
//     printf("\ncount=%d\n",count);
//     return 0;
// }
// int main()
// {
//     int year=0;
//     int count=0;
//     for(year=1000;year<=2000;year++)
//     {
//         if(year%400==0)
//         {
//             printf("%d ",year);
//             count++;
//         }
//         else if(year%4==0)
//         {
//             if(year%100 !=0)
//             {
//                 printf("%d ",year);
//                 count++;
//             }
//         }
//     }
//     printf("\n");
//     printf("count=%d\n",count);
//     return 0;
// }
//int main()
// {
//     int year=0;
//     int count=0;
//     for(year=1000;year<=2000;year++)
//     {
//         if(year%400==0)
//         {
//             printf("%d ",year);
//             count++;
//         }
//         if(year%4==0)
//         {
//             if(year%100 !=0)
//             {
//                 printf("%d ",year);
//                 count++;
//             }
//         }
//     }
//     printf("\n");
//     printf("count=%d\n",count);
//     return 0;
// }
// int binary_search(int arr[],int k,int sz)
// {
// int left=0;
// int right=sz-1;
// while(left<=right)
// {
//     int mid=left+(right-left)/2;
//     if(arr[mid]>k)
//     {
//         right=mid-1;
//     }
//     else if(arr[mid]<k)
//     {
//         left=mid+1;
//     }
//     else
//     return mid;
// }
// if(left>right)
// {
//     return -1;
// }
// }
// int main()
// {
//     int arr[]={1,2,3,4,5,6,7,8,9,10};
//     int sz=sizeof(arr)/sizeof(arr[0]);
//     int k=0;
//     int ret=binary_search(arr,k,sz);
//     if(ret !=-1)
//     {
//         printf("找到了，下标是：%d\n",ret);
//     }
//     else
//     {
//         printf("找不到！\n");
//     }
//     return 0;
// }
int fun(int arr[])
{
    return sizeof(arr)/sizeof(arr[0]);
}
int main()
{
    int arr[10]={0};
    int r=fun(arr);
    printf("%d\n",r);
    return 0;
}