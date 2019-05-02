#include <pthread.h>
#include <stdio.h>

void *print_char (void * th_param)
{
 char * ch = (char *) th_param;
 while(1)
  printf("%c", *ch);
 return NULL;
}

int main ()
{
 
 pthread_t th_id;
 char th_arg1 = 'a';
 pthread_create(&th_id, NULL, &print_char, &th_arg1);
 
 char th_arg2 = 'b';
 pthread_create(&th_id, NULL, &print_char, &th_arg2);
 
 while(1)
 {
 }
 return 0;
}
