#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 100000000

int randbox() {
  
  int r;

  r = rand() % 1000;

  if(r < 15) {
    return 1;
  } else {
    return 0;
  }
  
}

int main(void)    
{
  
  int i, drop;
  int win = 0;
  double ans;
  
  srand((unsigned)time(NULL));

  for(i = 0; i < N; i++) {
    drop = randbox();
    if(drop == 1) {
      win++;
    }
  }

    printf("%d連ガチャで出たホッピングの数: %d個\n", N, win);
    ans = (double)win / (double)N;
    printf("今回ホッピングが排出された割合: %.10f \n", ans);

  }
    
