#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// void game()
// {
//     int r=rand()%100+1;
//     int guess=0;
//     while(1)
//     {
//         printf("请猜数字：>");
//         scanf("%d",&guess);
//         if(guess>r)
//         {
//             printf("猜大了！\n");
//         }
//         else if(guess<r)
//         {
//             printf("猜小了！\n");
//         }
//         else
//         {
//             printf("恭喜你，猜对了！\n");
//             break;
//         }
//     }
// }
// int main()
// {
//     srand((unsigned int)time(NULL));
//     game();
//     return 0;
// }
// int main()
// {
//     int n=0;
//     scanf("%d",&n);
//     int arr[n];
//     int i=0;
//     for(i=0;i<n;i++)
//     {
//      scanf("%d",&arr[i]);
//     }
//     int del=0;
//     scanf("%d",&del);
//     for(i=0;i<n;i++)
//     {
//         if(arr[i]==del)
//         continue;
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
//     return 0;
// }
// int main()
// {
//     int n=0;
//     scanf("%d",&n);
//     int arr[n];
//     int i=0;
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     int del=0;
//     scanf("%d",&del);
//     int j=0;
//     for(i=0;i<n;i++)
//     {
//         if(arr[i] !=del)
//         {
//             arr[j]=arr[i];
//             j++;
//         }
//     }
//     for(i=0;i<j;i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
//     return 0;
// }
// int Max(int arr[],int n)
// {
//    int max=arr[0];
//    int i=0;
//    for(i=1;i<n;i++)
//    {
//     if(arr[i]>max)
//     {
//         max=arr[i];
//     }
//    }
//    return max;
// }
// int Min(int arr[],int n)
// {
//     int min=arr[0];
//     int i=0;
//     for(i=1;i<n;i++)
//     {
//         if(arr[i]<min)
//         {
//             min=arr[i];
//         }
//     }
//     return min;
// }
// int main()
// {
//     int n=0;
//     scanf("%d",&n);
//     int arr[n];
//     int i=0;
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     int ret=Max(arr,n)-Min(arr,n);
//     printf("%d\n",ret);
//     return 0;
// }
// int main()
// {
//     int n=0;
//     scanf("%d",&n);
//     int arr[n];
//     int i=0;
//     int max=0;
//     int min=100;
//     for(i=0;i<n;i++)
//     {
//       scanf("%d",&arr[i]);
//       if(arr[i]>max)
//       max=arr[i];
//       if(arr[i]<min)
//       min=arr[i];
//     }
//     printf("%d\n",max-min);
//     return 0;
// }
// int main()
// {
//     char arr[10]={0};
//     int i=0;
//     for(i=0;i<3;i++)
//     {
//         if(i<2)
//         {
//             scanf("%c\n",&arr[i]);
//         }
//         else
//         scanf("%c",&arr[i]);
//     }
//     for(i=0;i<3;i++)
//     {
//         if(arr[i]>='a'&&arr[i]<='z')
//         {
//             printf("%c\n",arr[i]-32);
//         }
//         if(arr[i]>='A'&&arr[i]<='Z')
//         {
//             printf("%c\n",arr[i]+32);
//         }
//     }
//     return 0;
// }
// int main()
// {
//     char ch=0;
//     int i=0;
//     while(scanf("%c",&ch)==1)
//     {
//         if(ch>='a'&&ch<='z')
//         printf("%c\n",ch-32);
//         else if(ch>='A'&&ch<='Z')
//         printf("%c\n",ch+32);
//     }
//     return 0;
// }
// int main()
// {
//     char ch=0;
//     while(1)
//     {
//         scanf("%c",&ch);
//         if(ch>='a'&&ch<='z')
//         printf("%c\n",ch-32);
//        else if(ch>='A'&&ch<='Z')
//         printf("%c\n",ch+32);
//         getchar();
//     }
//     return 0;
// }
// #include <ctype.h>
// int main()
// {
//     char ch=0;
//     while(scanf("%c",&ch) !=EOF)
//     {
//         if(isupper(ch))
//         {
//             printf("%c\n",tolower(ch));
//         }
//         else if(islower(ch))
//         {
//             printf("%c\n",toupper(ch));
//         }
//     }
//     return 0;
// }
// int main()
// {
//     char ch = 0;
//     while (1)
//     {
        
//            scanf(" %c",&ch);
           
//             if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
//             {
//                 printf("%c is an Alphabet.\n", ch);
//             }

//             else
//             {
//                 printf("%c is not an Alphabet.\n", ch);
//             }
//     }

//     return 0;
// }
// int main()
// {
//     int i=0;
//     for(i=10000;i<=99999;i++)
//     {
//         int sum=(i/10000)*(i%10000)+(i/1000)*(i%1000)+(i/100)*(i%100)+(i/10)*(i%10);
//         if(sum==i)
//         {
//             printf("%d ",i);
//         }
//     }
//     printf("\n");
//     return 0;
// }
// #include <math.h>
// int main()
// {
//     int i=0;
//     for(i=10000;i<99999;i++)
//     {
//         int j=0;
//         int sum=0;
//         for(j=1;j<=4;j++)
//         {
//          sum=sum+(i/(int)pow(10,j))*(i%(int)pow(10,j));
//         }
//         if(sum==i)
//         {
//             printf("%d ",i);
//         }
//     }
//     printf("\n");
//     return 0;
// }
int main()
{
    char a=0;
    char*p=&a;
    char**pp=&p;
    printf("%p\n",pp);
    printf("%p\n",pp+1);
    return 0;
}