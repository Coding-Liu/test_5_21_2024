#include <stdio.h>
// #include <string.h>
// int main()
// {
//     char ch[]={'a','b',0};
//     printf("%d\n",strlen(ch));
//     return 0;
// }

// int main()
// {
//     int arr[10]={12,12};
//     for(int i=0;i<10;i++)
//     {
// printf("%d ",arr[i]);
//     }
//     printf("\n");
//     printf("%d\n",'0');
//     return 0;
// }

// int main()
// {
//     double a=7.0f/2;
//     printf("%.2lf\n",a);
//     return 0;
// }
// int main()
// {
//     int x=1;
//     int y=2;
//     int z=3;
//     z=x=y+1;
//     printf("%d %d\n",x,z);
//     return 0;
// }
// int main()
// {
//     int flag=0;
//     if(!flag)
//     {
//         printf("hehe\n");
//     }
//     else
//     printf("haha\n");
//     return 0;
// }
// #include <string.h>
// int main()
// {
//     int arr[10]={0,3,3,3,3};
// printf("%lu\n",strlen(arr));
// return 0;
// }
// int main()
// {
//     printf("%lu\n",sizeof(1));
//     printf("%lu\n",sizeof('a'));
//     return 0;
// }
// int main()
// {
//     int i=0;
//     i++,i++,i++;
//     int x=0;
//     int y=0;
//     x=4,y=3;
//     printf("%d\n",i);
//     printf("%d %d\n",x,y);

//     return 0;
// }
// typedef struct Stu
// {
// char name[10];
// int age;
// float weight;
// }haha;
// int main()
// {
//     haha c={"zhang",18,68.5};
//     printf("%s %d %.1f\n",c.name,c.age,c.weight);
//     return 0;
// }
// int test(int x)
// {
//     static int j=0;
//     j=j+x;
//     return j;
// }
// int main()
// {
//     int r=test(3);
//     int q=test(4);
//     printf("%d %d\n",r,q);
//     return 0;
// }
// void test()
// {
//     int a=1;
//     a++;
//     printf("%d ",a);
//     printf("%p\n",&a);
// }
// int main()
// {
//     int i=0;
//     while(i<10)
//     {
//         test();
//         i++;
//     }
//     printf("\n");
//     return 0;
// }
// int main()
// {
//     char arr[3]={0};
//     printf("%p\n",arr+1);
//     printf("%p\n",arr);
//     return 0;
// }
// int main()
// {
//     int a=10;
//     int *p=&a;
//     printf("%p\n",p);
//     int b=1;
//     p=&b;
//     printf("%p\n",p);
//     char ch='w';
//     p=&ch;
//     printf("%p\n",p);
//     return 0;
// }
// int main()
// {
//     printf("%d\n",sizeof(int*));
//     printf("%d\n",sizeof(char*));
//     printf("%d\n",sizeof(float*));
//     printf("%d\n",sizeof(double*));
//     printf("%d\n",sizeof(short*));
//     printf("%d\n",sizeof(long*));
//     printf("%d\n",sizeof(long long*));
//     return 0;
// }
// int main()
// {
//     int a=10;
//     *&a=20;
//     printf("%d\n",a);
//     return 0;
// }
struct Stu
{
    char name[20];
    int age;
    char sex[10];
};
void print(struct Stu *p)
{
    printf("%s %d %s\n",(*p).name,(*p).age,(*p).sex);
    printf("%s %d %s\n",p->name,p->age,p->sex);
}
int main()
{
    //struct Stu p1={"zhang",18,"man"};
     struct Stu p2={"wang",19,"woman"};
    // printf("%s %d %s\n",p1.name,p1.age,p1.sex);
    //printf("%s %d %s\n",p2.name,p2.age,p2.sex);
print(&p2);
    return 0;
}