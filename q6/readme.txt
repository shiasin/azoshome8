DESCRIPTION
       The  usleep() function suspends execution of the calling thread for (at
       least) usec microseconds.  The sleep may be lengthened slightly by  any
       system  activity  or  by  the  time spent processing the call or by the
       granularity of system timers.

RETURN VALUE
       The usleep() function returns 0 on success.  On error, -1 is  returned,
       with errno set to indicate the cause of the error.

