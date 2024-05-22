#include <stdio.h>
// int main()
// {
//     int i=1;
//     while(i<=100)
//     {
    
//      if(i%2==1)
//      {
//         printf("%d ",i);
//      }
//      i++;
//     }
//     return 0;
// }
// int main()
// {
//     switch(1)
//     {
//         case (6==5):
//         printf("haha\n");
//         break;
//     }
//     return 0;
// }
// int main()
// {
//     int ch=getchar();
//     putchar(ch);
//     printf("\n");
//     return 0;
// }
// int main()
// {
//     int i=1;
//     while(i<10)
//     {
//         while(5==i)
//         {break;}
//         printf("%d ",i);
//         i++;
//     }
//     return 0;
// }
// int main()
// {
//     int ch=getchar();
// while((ch=getchar()) !=EOF)
// {
//    if(ch>'0' && ch<'9')
//    continue ;
//    putchar(ch);
// }
// return 0;
// }
// int main()
// {
//     int ch=0;
//     while((ch=getchar()) !=EOF)
//     {
//         putchar(ch);
//     }
//     return 0;
// }
// int main()
// {
//     char ch[20]={0};
//     //scanf("%s",ch);
//     //printf("%s\n",ch);
//     gets(ch);
//     puts(ch);

//     return 0;
// }
// int main()
// {
//     int password[20]={0};
//     int ch=0;
//     printf("请输入密码:>");
//     scanf("%s",password);
//     while((ch=getchar()) !='\n')
//     {
//         ;
//     }
//     printf("请确认密码(Y/N):>");
//     int ret=getchar();
//     if('Y'==ret)
//     {
//         printf("YES\n");
//     }
//     else
//     {
//         printf("NO\n");
//     }
// return 0;
// }
// int main()
// {
//     int ch=0;
//     while((ch=getchar()) !=EOF)
//     {
//         if(ch<'0' || ch>'9')
//         continue;
//         printf("%c",ch);
//     }
//     return 0;
// }
// int main()
// {
//     int a=0;
//     scanf("%d",&a);
//     printf("%c\n",a);
//     return 0;
// }
// int main()
// {
//     int arr[]={73,32,99,97,110,32,100,111,32,105,116,33};
//     int sz=sizeof(arr)/sizeof(arr[0]);
//     int i=0;
//     for(i=0;i<sz;i++)
//     {
//         printf("%c",arr[i]);
//     }
//     printf("\n");
//     return 0;
// }
// int main()
// {
//     int year=0;
//     int month=0;
//     int date=0;
//     scanf("%4d%2d%2d",&year,&month,&date);
//     printf("year=%d\n",year);
//     printf("month=%02d\n",month);
//     printf("date=%02d\n",date);
//     return 0;
// }
// int main()
// {
//     int a=0;
//     scanf("%d",&a);
//     int year=a/10000;
//     int date=a%100;
//     int month=(a/100)%100;
//     printf("year=%d\n",year);
//     printf("month=%02d\n",month);
//     printf("date=%02d\n",date);
//     return 0;
// }
// int main()
// {
//     int arr[4]={0};
//     int i=0;
//     for(i=0;i<4;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     int max=arr[0];
//     for(i=1;i<4;i++)
//     {
//         if(max<arr[i])
//         {
//             max=arr[i];
//         }
//     }
//     printf("%d\n",max);
//     return 0;
// }
// int main()
// {
//     int i=1;
//     int max=0;
//     int n=0;
//     scanf("%d",&max);
//     while(i<4)
//     {
//         scanf("%d",&n);
//         if(n>max)
//         {
//             max=n;
//         }
//         i++;
//     }
//     printf("%d\n",max);
//     return 0;
// }

// int main()
// {
//     float r=0.0f;
//     double V=0.0;
//     double pai=3.1415926;
//     scanf("%f",&r);
//     V=4/3.0*pai*r*r*r;
//     printf("%.3lf\n",V);
//     return 0;
// }
// #include <math.h>
// int main()
// {
//     float r=pow(2.1,3);
//     printf("%f\n",r);
//     return 0;
// }
int main()
{
    int weight=0;
    int high=0;
    scanf("%d %d",&weight,&high);
    float BMI=0.0f;
    BMI=weight/((high/100.0)*(high/100.0));
    printf("%.2f\n",BMI);
    return 0;
}