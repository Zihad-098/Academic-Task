#include<stdio.h>
#define CAPACITY 5
int stack [CAPACITY];
int top = -1 ;
void push (int x )
{
    if (top < CAPACITY -1)
    {
        top ++ ;
        stack [top] = x ;
        printf ("Succesfull added item : %d\n",x);
    }
    else 
    {
        printf ("Exception! No space.\n");
    }

}
int pop () 
{
    if (top >= 0)
    {
        int val = stack [top] ;
        top -- ;
        return val ;
    }
    printf ("Exception from pop ! Empty stack \n");
    return -1 ;
}
int peek ()
{
    if (top >= 0)
    {
        return stack [top] ;
    }
    printf ("Exception from peek ! Empty stack\n");
    return -1 ;
}
int main ()
{
    printf ("Implementing my satck in c.\n");
    peek () ;
    push(40);
    push (10) ;
    push (20);
    push (40);
    push (50);
    push (3);
    printf ("pop item : %d\n",pop ());
    push (5);
    printf ("Top of stack : %d\n",peek ());
    return 0 ;
}