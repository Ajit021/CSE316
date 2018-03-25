#include<stdio.h>

#define time=4;
void display(int,struct process);
struct process 
{
	int pid;
	int burst;
	int arrival;
	int priority;
	int wait;
	int start;
	int remain;
	
};
void display(int n,struct process l[])
{
  	printf("\n PROCESS\tPRIORITY\tBURST-TIME\tARRIVALTIME\n");
	for(int i=0;i<n;i++)
	{
	  printf(" %d\t\t",l[i].pid);
	  printf("%d\t\t",l[i].priority);
	  printf("%d\t\t",l[i].burst);
	  printf("%d\t\t",l[i].arrival);
	  printf("\n");
	  
		
	}
}
int main()
{
	int n;
	printf("Enter the number of process:=");
	scanf("%d",&n);
	struct process l[n];
    printf("\n PROCESS\tPRIORITY\tBURST-TIME\tARRIVALTIME\n");
	for(int i=0;i<n;i++)
	{
	  scanf("%d",&l[i].pid);
	  scanf("%d",&l[i].priority);
	  scanf("%d",&l[i].burst);
	  scanf("%d",&l[i].arrival);
	  printf("\n");
		
	}
	display(n,l);
	
}
