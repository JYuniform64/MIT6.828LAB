#include "types.h"
#include "user.h"
#include "date.h"

int
main(int argc, char *argv[])
{
  struct rtcdate r;

  if (date(&r)) {
    printf(2, "date failed\n");
    exit();
  }

  // your code to print the time in any format you like...
  //printf(1, "%d-%2d-%2d  %2d:%2d:%2d UCT", r.year, r.month, r.day, r.hour, r.minute, r.second);
  printf(1, "%d-%d-%d  %d:%d:%d UCT\n", r.year, r.month, r.day, r.hour, r.minute, r.second);

  exit();
}
