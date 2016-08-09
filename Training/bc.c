#include <stdio.h>
#include <string.h>

// enum colors {BLACK,BLUE,GREEN}
 
            // int i=-1,j=-1,k=0,l=2,m;
            // m=i++&&j++&&k++||l++;
            // printf("%d %d %d %d %d",i,j,k,l,m);
 // 
// char str1[20] = "Hello", str2[20] = " World";
//     printf("%s\n", strcpy(str2, strcat(str1, str2)));
// int i=10;
// main(){
// 	extern int i;
// int i=20;

// const volatile unsigned i=30;
// printf("%d\n",i);

// printf("%d\n",i);

// printf("%d\n",i);
// }

//  void main()
// {
// struct bitfield
// {
// unsigned a:5;
// unsigned c:5;
// unsigned b:6;

// }bit;
// char *p;
// struct bitfield *ptr,bit1={1,3,3};
// p=&bit1;
// p++;
// // clrscr();
// printf("%d",*p);
// // getch();
// int main{int sum=0;int i,j;for(i=0;i<=1000;i*=2){for(j=1;j<i;j++){sum++;}printf(“%d”,sum);}}
// enum switch{off,on};
 void f(char**);
int main()
{
    char *argv[] = { "ab", "cd", "ef", "gh", "ij", "kl" };
    f(argv);
    return 0;
}
void f(char **p)
{
    char *t;
    t = (p += sizeof(int))[-1];
    printf("%s\n", t);
}


