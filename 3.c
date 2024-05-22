#include <stdio.h>
// int main()
// {
//     int x,y;
//     for(x=0,y=0;x<2 &&y<5;++x,y++)
//     {
//         printf("hehe\n");
//     }
//     return 0;
// }
// int main()
// {
//     int i=0;
//     int k=0;
//     for(i=0,k=0;k=0;i++,k++)
//     {
//         k++;
//  printf("hehe\n");
//     }
   
//     return 0;
// }
// int main()
// {
//     int n=0;
//     int i=0;
//     int sum=1;
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         sum=sum*i;
//     }
//     printf("%d\n",sum);
//     return 0;
// }
// int main()
// {
//     int i=0;
//     int j=0;
//     int n=3;
//     int sum=0;

//     for(i=1;i<=n;i++)
//     {
//         int ret=1;
//         for(j=1;j<=i;j++)
//         {
//             ret=ret*j;
//         }
//         sum=sum+ret;
//     }
//     printf("%d\n",sum);
//     return 0;
// }
// int main()
// {
//     int i=1;
//     int j=0;
//     int ret=1;
//     int n=4;
//     int sum=0;
//     while(i<=n)
//     {
//         ret=ret*i;
//         sum=sum+ret;
//         i++;
//     }
//     printf("%d\n",sum);
//     return 0;
// }
// int main()
// {
//     int arr[]={1,2,3,4,5,6,7,8,9,10};
//     int sz=sizeof(arr)/sizeof(arr[0]);
//     int n=5;
//     int left=0;
//     int right=sz-1;
//     int mid=0;
//     while(left<=right)
//     {
//         mid=left+(right-left)/2;
//         if(arr[mid]>n)
//         {
//             right=mid-1;
//         }
//         else if(arr[mid]<n)
//         {
//             left=mid+1;
//         }
//         else
//         {
//             printf("xiabiaowei %d\n",mid);
//             break;
//         }
//     }
//     // if(left==right)
//     // {
//     //     printf("xiabiaowei %d\n",left);
//     // }
//     return 0;
// }
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
// int main()
// {
//     char arr1[]="welcome to bit!!!!";
//     char arr2[]="##################";
//     int len=strlen(arr1);
//     int left=0;
//     int right=len-1;
//     int i=0;
//     for(i=0;i<(len+1)/2;i++)
//     {
//         arr2[left]=arr1[left];
//         arr2[right]=arr1[right];
//         left++;
//         right--;
//         printf("%s\n",arr2);
//     }
//     return 0;
// }
// #include <string.h>
// int main()
// {
//     char password[20]={0};
//     int i=0;
    
//     for(i=0;i<3;i++)
//     {
//       printf("请输入密码:>");
//       scanf("%s",password);
//       if(strcmp(password,"abcdef") ==0)
//       {
//         printf("登录成功\n");
//         break;
//       }
//       else
//       {
//         printf("密码错误！请重新输入！\n");
//       }
//     }
//     if(3==i)
//     {
//         printf("三次密码均输入错误，退出程序！\n");
//     }
//     return 0;
// }
#include <stdlib.h>
#include <time.h>
void menu()
{
    printf("**************************\n");
    printf("*******  1.  play  *******\n");
    printf("*******  0.  exit  *******\n");
    printf("**************************\n");
}
void game()
{
int ret=rand()%100+1;
int guess=0;
while(1)
{
    printf("请猜数字:>");
    scanf("%d",&guess);
    if(ret>guess)
    {
        printf("猜小了！\n");
    }
    else if(ret<guess)
    {
        printf("猜大了！\n");
    }
    else
    {
        printf("猜对了！\n");
        break;
    }
}
}
int main()
{
    srand((unsigned int)time(NULL));
   int input=0;
    do
    {
         menu();
         printf("请选择:>");
         scanf("%d",&input);
         switch(input)
         {
            case 1:
            game();
            break;
            case 0:
            printf("退出游戏！\n");
            break;
            default:
            printf("选择错误！\n");
            break;
         }
        
    } while (input);
    return 0;
}