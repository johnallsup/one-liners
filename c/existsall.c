#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

/* 
 * Returns 0 (success) if all command line arguments exist.
 * Returns 0 if no arguments specified (vacuous forall).
 * Returns 1 if at least one command line argument fails to stat.
 */
int main(int argc, char* argv[]) {
  struct stat statbuf;
  int i;
  for( i=1; i<argc; i++ ) 
    if( stat(argv[i],&statbuf) != 0 ) 
      return 1;
  return 0;
}
