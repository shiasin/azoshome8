#include <pthread.h>
#include <stdio.h>

void *printx (void * th_param)
{
 while(1)
  printf("x");
 return NULL;
}

void *printy (void * th_param)
{
 while(1)
  printf("y");
 return NULL;
}

int main ()
{
 int i=100000;
 pthread_t th_id;
 pthread_create(&th_id, NULL, &printx, NULL);
 
 pthread_t th_id2;
 pthread_create(&th_id2, NULL, &printy, NULL);

 while(i>0)
 {
   printf("0");
   i--;
 }
 return 0;
}
