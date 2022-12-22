#include<unistd.h>
#include<sys/types.h>
#include<stdio.h>
#include<sys/wait.h>
int main()
{ pid_t p;
printf("Before Fork\n");
p=fork();
if(p==0)
{
printf("I am the Child process having id %d\n",getpid());
printf("My Parent id is %d \n",getppid());
}
else
{
wait(NULL);
printf("My Child process id is %d \n", p);
printf("I am Parent Having id %d\n",getpid());
}
printf("Common\n");
}
