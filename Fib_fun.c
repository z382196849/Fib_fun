#include<stdio.h>
#include<windows.h>

int Fib(int n)
{
    if(n <= 2)
    {
 	return 1;
    }
    else
    {
	return Fib(n - 1) + Fib(n - 2);
    }
}

int main()
{ 
    int n = 0;
    int ret = 0;
    printf("请输入：");
    scanf("%d", &n);
    ret = Fib(n);
    printf("%d\n", ret);
    system("pause");
    return;
}