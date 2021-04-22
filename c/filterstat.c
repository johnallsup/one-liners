#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

int main(int argc, char* argv[]) {
  struct stat statbuf;
  int i;
  for( i=1; i<argc; i++ ) 
    if( stat(argv[i],&statbuf) == 0 ) 
      printf("%s\n",argv[i]);
}
