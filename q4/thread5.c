#include <pthread.h>
#include <stdio.h>

struct th_param
{
 char ch;
 int count;
};

void *print_char (void * th_p)
{
 struct th_param * prm = (struct th_param *) th_p;
 int count = prm->count;
 char ch = prm->ch; 
 while(count>0)
 {
  printf("%c", ch);
  count --;
 }
 return NULL;
}

int main ()
{
 pthread_t th_id;
 struct th_param th_arg1, th_arg2;
 th_arg1.ch = 'a';
 th_arg1.count = 100000;
 pthread_create(&th_id, NULL, &print_char, &th_arg1);
 
 th_arg2.ch = 'b';
 th_arg2.count = 300000;
 pthread_create(&th_id, NULL, &print_char, &th_arg2);
 
 while(1)
 {
 }
 return 0;
}

