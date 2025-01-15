#include<stdio.h>
unsigned long fibo(int num)
{
    if(num == 0)
    {
       return 0;
    }
    else if(num ==1)
    {
        return 1;
    }
    else
    {
        return fibo(num-1) + fibo(num-2);
    }
}
int main()
{
    int num;
    unsigned long long fibonacii;
    printf("Enter the position of the number in the Fibonacci sequence: ");
    scanf("%d", &num);
    fibonacii = fibo(num);
    printf("The %dth term in the Fibonacci series is %llu\n", num, fibonacii); 
    return 0;
}