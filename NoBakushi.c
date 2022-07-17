#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 1000000

int randbox() {
  int r;

  r = rand() % 1000;

  if(r < 15) {
    return 0;
  } else if(r < 35) {
    return 1;
  } else if(r < 55) {
    return 2;
  } else if(r < 90) {
    return 3;
  } else if(r < 125) {
    return 4;
  } else if(r < 165) {
    return 5;
  } else if(r < 230) {
    return 6;
  } else if(r < 355) {
    return 7;
  } else if(r < 485) {
    return 8;
  } else if(r < 635) {
    return 9;
  } else if(r < 800) {
    return 10;
  } else {
    return 11;
  }
 
  
}

int main(void)    
{
  int i, win, try, j, drop;
  double ans;
  double c = 0;
  srand((unsigned)time(NULL));

  for(i = 0; i < N; i++) {

    try = 0;
    win = 0;
    
  while(1) {

    try++;

  for(j = 0; j < 10; j++) {

    drop = randbox();

    if(drop < 7) {
      win++;
    }

  }

    if(win > 0) {
      c += 1.0 / try;
      break;
    }
      
  }

  }

   ans = c / (double)N;
  
  printf("10連で家具のみ爆死をしなかった割合: %lf \n", ans);
  
}
    
