#include <stdio.h>
// void fun(unsigned int a)
// {
//  if(a/10 !=0)
//   {
//    fun(a/10);
//   }
// printf("%d ",a%10);
// }
// int main()
// {
//     unsigned int num=0;
//     scanf("%u",&num);
//     fun(num);
//     return 0;
// }
// int my_strlen(char arr[])
// {
//     if(*arr !='\0')
//     {
//        return my_strlen(arr+1)+1;
//     }
//     return 0;
// }
// int main()
// {
//     char arr[]="abcdef";
//     int len=my_strlen(arr);
//     printf("%d\n",len);
//     return 0;
// }
// int fac(int n)
// {
//     if(n<=1)
//     {
//         return 1;
//     }
//     else
//     return n*fac(n-1);
// }
// int main()
// {
//     int n=0;
//     scanf("%d",&n);
//     int ret=fac(n);
//     printf("%d\n",ret);
//     return 0;
// }
// int fun(int n)
// {
//     // if (n == 1)
//     //     return 1;
//     // if (n == 2)
//     //     return 1;
//     if(n<=2)
//     {
//         return 1;
//     }
//     if (n>2)
//     {
//         return fun(n-2)+fun(n-1);
//     }
// }
// int main()
// {
//     int n = 0;
//     scanf("%d", &n);
//     int ret = fun(n);
//     printf("%d\n", ret);
//     return 0;
// }
// int main()
// {
//     int a=1;
//     int b=1;
//     int c=0;
//     int i=0;
//     int n=40;
//     int count=0;
//     for(i=2;i<n;i++)
//     {
//        c=a+b;
//        a=b;
//        b=c;
//        count++;
//     }
//     printf("%d\n",c);
//     printf("count=%d\n",count);
//     return 0;
// }
// int main()
// {
//     int arr[3]={0};
//     int i=0;
//      for(i=0;i<3;i++)
//      {
//         scanf("%d",&arr[i]);
//      }
     
//      for(i=0;i<3;i++)
//      {
//         int j=0;
//         for(j=0;j<3-i;j++)
//         {
//           if(arr[j+1]>arr[j])
//           { int tmp=0;
//             tmp=arr[j+1];
//             arr[j+1]=arr[j];
//             arr[j]=tmp;
//           }
//         }
//      }
//      for(i=0;i<3;i++)
//      {
//         printf("%d ",arr[i]);
//      }
//      printf("\n");
//      return 0;
    
// }
// int main()
// {
//     int n=0;
//     scanf("%d",&n);
//     int arr[n];
//     int i=0;
//      for(i=0;i<n;i++)
//      {
//         scanf("%d",&arr[i]);
//      }
     
//      for(i=0;i<n;i++)
//      {
//         int j=0;
//         for(j=0;j<n-i;j++)
//         {
//           if(arr[j+1]>arr[j])
//           { int tmp=0;
//             tmp=arr[j+1];
//             arr[j+1]=arr[j];
//             arr[j]=tmp;
//           }
//         }
//      }
//      for(i=0;i<n;i++)
//      {
//         printf("%d ",arr[i]);
//      }
//      printf("\n");
//      return 0;
    
// }
// int main()
// {
//     int i=0;
//     for(i=1;i<=100;i++)
//     {
//         if(i%3==0)
//         {
//             printf("%d ",i);
//         }
//     }
//     printf("\n");
//     return 0;
// }
// int main()
// {
//     int a=0;
//     int b=0;
//     scanf("%d %d",&a,&b);
//     int i=0;
//     for(i=1;i<=b;i++)
//     {
//         if((i*a)%b==0)
//         {
//             printf("%d\n",i*a);
//             break;
//         }
//     }
//     return 0;
// }
// int main()
// {
//     int a=0;
//     int b=0;
//     scanf("%d %d",&a,&b);
//     int c=0;
//     while(c=a%b)
//     {
//        a=b;
//        b=c;
//     }
//     printf("%d\n",b);
//     return 0;
// }
