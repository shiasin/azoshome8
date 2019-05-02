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
 int i;
 pthread_t th_id;
 pthread_create(&th_id, NULL, &printx, NULL);
 
 pthread_t th_id2;
 pthread_create(&th_id, NULL, &printy, NULL);

 while(1)
  printf("0");
 return 0;
}
