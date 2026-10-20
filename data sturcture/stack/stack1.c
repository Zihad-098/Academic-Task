#include <stdio.h>
#define size 10
int top = -1;
int stack[size];
int isfull()
{
    if (top == size - 1)
        return 1;
    return 0;
}
void push()
{
    if (isfull)
    {
        printf("stack is overflow");
        return;
    }
    else
    {
        int value;
        scanf("%d", &value);
        top++;
        stack[top] = value;
    }
}
int isEmpty()
{
    if (top == -1)
        return 1;
    return 0;
}
void pop()
{
    if (isEmpty())
    {
        printf("Stack is underflow");
        return;
    }
    else
    {
        top--;
    }
}
int peek()
{
    if (isEmpty())
    {
        printf("Steck underflow");
    }
    else
        return stack[top];
}
void display()
{
    for (int i = 0; i <= top; i++)
    {
        printf("%d ", stack[i]);
    }
    printf("\n");
}
int main()
{
    int choice = -1;
    printf("\nOption 1: Push");
    printf("\nOption 2: Pop");
    printf("\nOption 3: Peek");
    printf("\nOption 4: Isfull");
    printf("\nOption 5: IsEmpty");
    printf("\nOption 6: Display");
    while (choice <= 6)
    {
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            printf("Peeked value :%d\n", peek());
            break;
        case 4:
            isfull();
            break;
        case 5:
            isEmpty();
            break;
        case 6:
            display();
            break;
        default:
            printf("Wrong option");
            break;
        }
    }
}