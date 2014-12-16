/* @ Author: Adnan Mahmud 
   @ Institut: FH Technikum Wien
   @ Personalkennzeichen: ic12b087
   @ Gruppe: 1B1 */


#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

typedef struct t_Stack {
   int count; 
   int capacity; 
   int *data; 
} Stack;

Stack create_stack(int initialcapacity);
void push(int value, Stack * stack);
int pop(Stack * stack);
void increase_stackdata(Stack *stack);

int main(int argc, char* argv[])
{
   int i;

   
   Stack stack=create_stack(20);
   if(stack.capacity <= 0)
   {
	   return 1;
   }
   
   for (i=0;i<41;i++)
   {
	   push(i, &stack);
   }

   
   while (stack.count > 0) printf("%d\n", pop(&stack));

   free(stack.data);
   stack.data=NULL;

   return 0;
}

Stack create_stack(int initialcapacity)
{
   Stack result;
   result.count=0;
   result.capacity=initialcapacity;
   if(!(result.data=(int *)malloc(sizeof(int)*initialcapacity)))
   
   {
      printf("\nNot enough memory n\n");
      result.data = NULL;
	}
   return result;
}

void push(int value, Stack *stack)
{
   if(stack->count==stack->capacity)
   {
      increase_stackdata(stack);
   }

   stack->data[stack->count++] = value;
}

int pop(Stack * stack)
{
   return stack->data[--stack->count];
}

void increase_stackdata(Stack *stack)
{
   int i;
   int *a;

   printf("\nIncreasing Stackdata... ");

   a=(int *)malloc(sizeof(int)*stack->capacity * 2);

   stack->capacity*=2;

   for (i=0;i<stack->count;i++)
   {
      a[i] = stack->data[i];
   }

   free(stack->data);

   stack->data = a;
   
}