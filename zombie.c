#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
 
// This script creates a zombie process which will be
// declared as defunct in a UNIX system
// Compile: gcc -o zombie zombie.c
 
int main ()
{
  pid_t child_pid;
 
  child_pid = fork ();
  if (child_pid > 0) {
    sleep (60);
  }
  else {
    exit (0);
  }
  return 0;
}
