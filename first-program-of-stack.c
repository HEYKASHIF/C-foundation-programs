#include <stdio.h>
int top = -1 ;
int stack[50] ;
void push(int item)
{
    if(top == 50-1)
    {
        printf("Stack is overflow") ;
    }
    else
    {
        stack[++top] = item ;   
    }
}
void pop()
{
    if(top == -1)
    {
        printf("Stack is underflow") ;
    }
    else
    {
        --top ;
    }
}
int main()
{
    push(9) ;
    push(3) ;
    push(1) ;
    push(0) ;
    push(3) ;
    push(5) ;
    push(7) ;
    push(7) ;
    push(4) ;
    push(7) ;
    pop();
    pop();
    pop();
    push(8);
    
    for(int i=0 ; i<=top ; i++)
    {
        printf("%d ",stack[i]) ;
    }
    return 0;
}
