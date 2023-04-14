
//FINDING GCD using EA with absolute minimal remainder
#include<stdio.h>

int EA(int a,int b);
int find_minimal(int a,int b);
int main()
{
    while(1)
    {
    int x,y;
    scanf("%d %d",&x,&y);
    int a = (x>y)?EA(x,y):EA(y,x);
    printf("%d\n",a);
    }
    return 0;
}
int EA(int a,int b)
{
    if(b==0)
        return a;
    return EA(b,find_minimal(a,b));
}

int find_minimal(int a,int b)
{
    return (a%b<b/2 && a%b>0)?b-a%b:a%b;

}
