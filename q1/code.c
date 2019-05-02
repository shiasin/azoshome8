#include <pthread.h>
#include <stdio.h>

void *printx (void * th_param)
{
	while(1)
  		printf("x");
 	return NULL;
}

int main ()
{
 	pthread_t th_id;
 	pthread_create(&th_id, NULL, &printx, NULL);
 	while(1)
  		printf("0");
 	return 0;
}
