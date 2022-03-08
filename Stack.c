#include<stdio.h>
#define N 5
int stack[N];
int top = -1;
void push ();
void pop ();
void peek ();
void display ();
int
main ()
{
  int choice;
  do
    {
      printf ("Enter your choice:\n1 PUSH:\n2 POP:\n3 PEEK:\n4 DISPLAY:\n");
      scanf ("%d", &choice);

      switch (choice)
    {
    case 1:
      push ();
      break;
    case 2:
      pop ();
      break;
    case 3:
      peek ();
      break;
    case 4:
      display ();
      break;
    default:
      printf ("Your choice is Wrong\n");
    }
    }
  while (choice !=0);

}

void push ()
{
  int num1;
  printf ("Enter element:\n");
  scanf ("%d", &num1);

  if (top == N - 1)
    {
      printf ("Overflow Condition\n");
    }
  else
    {
      top++;
      stack[top] = num1;
    }
}

void pop ()
{
  int num2;
  if (top == -1)
    {
      printf ("Underflow Condition\n");
    }
  else
    {
      num2 = stack[top];
      top--;
      printf ("Poped item is %d\n", num2);
    }
}

void peek ()
{
  if (top == -1)
    {
      printf ("Underflow condition");
    }
  else
    {
      printf ("Peek element is %d\n", stack[top]);
    }
}

void display ()
{
  for (int i = top; i >= 0; i--)
    {
      printf ("%d\n", stack[i]);
    }
}
