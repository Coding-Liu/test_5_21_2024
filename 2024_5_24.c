#include <stdio.h>
// void fun(int n)
// {
//     if(n/10 !=0)
//     {
//         fun(n/10);
//     }
//     printf("%d ",n%10);
// }
// int main()
// {
//     int n=0;
//     scanf("%d",&n);
//     fun(n);
//     return 0;
// }
// int fun(int n)
// {
//     if(n==0)
//     return 1;
//     if(n==1)
//     return 2;
//     if(n>1)
//     return 2*fun(n-1);
// }
// int main()
// {
//     int n=0;
//     scanf("%d",&n);
//     int ret=fun(n);
//     printf("%d\n",ret);
//     return 0;
// }
// int main()
// {
//     int i=0;
//     float sum=0.0f;
//     int flag=1;
//     for(i=1;i<100;i++)
//     {
//        sum=sum+flag*(1.0/i);
//        flag=-flag;
//     }
//     printf("%f\n",sum);
//     return 0;
// }
// int main()
// {
//     int i=0;
//     float sum=0.0f;
//     for(i=1;i<100;i=i+2)
//     {
//         sum=sum+(1.0/i);
//     }
//     for(i=2;i<99;i=i+2)
//     {
//         sum=sum-(1.0/i);
//     }
//     printf("%f\n",sum);
//     return 0;
// }
// int main()
// {
//     int i=0;
//     float sum=0.0f;
//     for(i=1;i<100;i++)
//     {
//         if(i%2==1)
//         {
//             sum=sum+(1.0/i);
//         }
//         if(i%2==0)
//         {
//             sum=sum-(1.0/i);
//         }
//     }
//     printf("%f\n",sum);
//     return 0;
// }
// int fun(int n)
// {
//     if(n==1)
//     return 1;
//     if(n>1)
//     {
//         return fun(n-1)*n;
//     }
// }
// int main()
// {
//     int n=0;
//     scanf("%d",&n);
//     int ret=fun(n);
//     printf("%d\n",ret);
//     return 0;
// }
// int main()
// {
//     int i=0;
//     int n=0;
//     int ret=1;
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//       ret=ret*i;
//     }
//     printf("%d\n",ret);
//     return 0;
// }
// int main()
// {
//     int i=0;
//     int n=0;
//     int sum=0;
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         int j=0;
//         int ret=1;
//         for(j=1;j<=i;j++)
//         {
//           ret=ret*j;
//         }
//     sum=sum+ret;
//     }
//     printf("%d\n",sum);
//     return 0;
// }
// int main()
// {
//     int i=1;
//     int n=0;
//     int ret=1;
//     int sum=0;
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         ret=ret*i;
//         sum=sum+ret;
//     }
//     printf("%d\n",sum);
//     return 0;
// }
// #include <string.h>
// void reverse_string(char *str, int len)
// // {
// //     char tmp=0;
// //     tmp=*str;
// //     *str=*(str+len-1);
// //     *(str+len-1)=tmp;
// //     if(len>=2)
// //     {
// //     reverse_string(str+1, len-2);
// //     }
// // }
// {
//     char tmp=*str;
//      *str=*(str+len-1);
//      *(str+len-1)='\0';
//     if(*(str+1) !='\0')
//     {
//     reverse_string(str+1, len-2);     
//     }
//     *(str+len-1)=tmp;
// }
// int main()
// {
//     char arr[] = "abcdef";
//     int len = strlen(arr);
//     reverse_string(arr, len);
//     printf("%s\n", arr);
//     return 0;
// }
// int DigitSum(int n)
// {
//  if(n/10 !=0)
//  {
//     return DigitSum(n/10)+n%10;
//  }
//  else
//  return n;
// }
// int main()
// {
//     int n=0;
//     scanf("%d",&n);
//     int ret=DigitSum(n);
//     printf("%d\n",ret);
//     return 0;
// }
// double my_pow(int n,int k)
// {
//   if(k>=1)
//   {
//     return n*my_pow(n,k-1);
//   }
//   else if(k==0)
//   return 1;
//   else
//   return 1.0/my_pow(n,-k);
// }
// int main()
// {
//     int n=0;
//     int k=0;
//     scanf("%d %d",&n,&k);
//     double ret=my_pow(n,k);
//     printf("%lf\n",ret);
//     return 0;
// }
// int main()
// {
//     int n=0;
//     scanf("%d",&n);
//     int a=1;
//     int b=1;
//     int c=0;
//     while(n>2)
//     {
//         c=a+b;
//         a=b;
//         b=c;
//         n--;
//     }
//     printf("%d\n",c);
//     return 0;
// }
// int main()
// {
//     int a=0;
//     int b=0;
//     int c=0;
//     scanf("%d %d",&a,&b);
//     while(c=a%b)
//     {
//         a=b;
//         b=c;
//     }
//     printf("%d\n",b);
//     return 0;
// }
