// C program to implement stack using array

#include <stdio.h>

void push(int stack[], int top, int max, int item)
{
    if (top == max)
    {
        printf("\nStack if full");
    }
    else
    {
        top++;
        stack[top] = item;
    }
}

void pop(int stack[], int top)
{
    int item;
    if (stack[top] == -1)
    {
        printf("\nStack is empty");
    }
    else
    {
        item = stack[top];
        top--;
    }
}

void peak(int stack[], int top)
{
    if (top == -1)
    {
        printf("\nStack is empty");
    }
    else
    {
        printf("%d", stack[top]);
    }
}

void display(int stack[], int top)
{
    for (int i = top; i >= 0; i--)
    {
        printf("%d\n", stack[top]);
    }
}
int main()
{
    int n, top = -1;

    printf("Enter size of stack : ");
    scanf("%d", &n);

    int stack[n], choice, item;
    char d;
    printf("1 . Push\n2 . Pop\n3 . Peak\n4 . Display\n");
    printf("Enter choice from above : ");
    scanf("%d", &choice);

    do
    {
        switch (choice)
        {
        case 1:
            printf("\nEnter element : ");
            scanf("%d", &item);
            push(stack, top, n - 1, item);
            break;
        case 2:
            pop(stack, top);
            break;
        case 3:
            peak(stack, top);
            break;
        case 4:
            display(stack, top);
            break;
        default:
            printf("Please enter valid entry");
        }
        printf("Enter 'Y' if you want to exit ");
        scanf("%c", &d);
    } while (d != 'Y');
    return 0;
}