#include <stdio.h>
void enqueue();
void dequeue();
void display();
int A[50],front=-1,rear=-1,size,i;
int main()
{    
     int choice=0;
     printf("Enter the size of queue: ");
     scanf("%d",&size);   
     while(choice!=4)
     {
     	printf("Enter Operation to perform on Queue: \t1. Enqueue\t 2. Dequeue\t 3. Display\t 4. Exit \n");
     	scanf("%d",&choice);
     	switch(choice)
     	       {
     		case 1: enqueue();
     			break;
		case 2: dequeue();
			break;
		case 3: display();
			break;
		case 4: printf("Exited from program\n");
		        break;
		}
      }
 }
 void enqueue()
{
     if((rear+1)%size == front)
     {
       printf("Overflow Error\n");
     }
     else if(front==-1&&rear==-1)
     { 
   	rear++;
   	front++;
   	printf("Enter element to be inserted:");
   	scanf("%d",&A[rear]);
     }
     else
     {
   	rear=(rear+1)%size;
   	printf("Enter element to be inserted:");
   	scanf("%d",&A[rear]);
     }
}
void dequeue()
 {
    if(front==-1&&rear==-1)
    {
        printf("Underflow error\n");
    } 
    else if (front == rear)
    {
        printf("Deleted element is:%d\n",A[front]);
  	front=-1;
  	rear=-1;
    }
    else front = (front+1)%size;
}
void display()
{
       if(front==-1&&rear==-1)
       {
       	  printf("Queue Empty \n");
       }
       else
       {
          printf("The Queue is:");
          i=front;
          while (i!=rear)
          {
              printf("%d	",A[i]);
              i=(i+1)%size;
          }
          printf("%d\t",A[rear]);
          printf("\n");
       }
}
