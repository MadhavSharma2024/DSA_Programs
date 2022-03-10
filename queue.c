#include<stdio.h>
#define N 5
int queue[N];
int rear=-1,front=-1;

void enqueue()
{
    int num1;
    printf("Enter the number\n");
    scanf("%d",&num1);
   if(rear==N-1)
   {
       printf("Overflow condition\n");
   }
    else if(front==-1&&rear==-1)
    {
        rear=0;
        front=0;
        queue[rear]=num1;
    }
   else
   {
       rear++;
       queue[rear]=num1;
   }
}

void dequeue()
{
    if(rear==-1&&front==-1)
    {
        printf("Underflow condition\n");
    }
    else if (rear==front)
    {
        front=-1;
        rear=-1;
    }
    else
    {
        printf("The deleted element is %d\n",queue[front]);
        front++;
    }
}

void display()
{
    if(rear==-1&&front==-1)
    {
        printf("Underflow condition");
    }
    else
    {
        for(int i=rear;i>=0;i--)
        {
            printf("elements are: %d\n",queue[i]);
        }
    }
}

void peek()
{
    if(rear==-1&&front==-1)
    {
        printf("Underflow condition\n");
    }
    else
    {
        printf("peek element is %d",queue[front]);
    }
}


int main()
{
    
    int choice;
      do
        {
printf ("Enter your choice:\n1 Enqueue:\n2 Dequeue:\n3 DISPLAY:\n4 PEEK:\n");
          scanf ("%d", &choice);

          switch (choice)
        {
        case 1:
                enqueue();
          break;
        case 2:
                dequeue();
          break;
        case 3:
                display();
          break;
    
        case 4:
                    peek();
              break;
        default:
          printf ("Your choice is Wrong\n");
        }
        }
      while (choice !=0);

    }
