#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

/* 
 * Returns 0 (success) if stat succeeds for at least one argument
 * Returns 1 otherwise
 */
int main(int argc, char* argv[]) {
  struct stat statbuf;
  int i;
  for( i=1; i<argc; i++ ) 
    if( stat(argv[i],&statbuf) == 0 ) 
      return 0;
  return 1;
}
