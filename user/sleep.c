#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  //int i;
  //char

  if(argc < 2){
  fprintf(2, "failed\n");
  exit(0);
    }
int cnt;
 cnt = atoi(argv[1]);
  sleep(cnt);
  exit(0);
}
