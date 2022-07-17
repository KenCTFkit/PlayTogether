#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 1000000

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

  int i, drop, win, try;
  //int gem; //宝石残量調べる時のやつ(コメントアウトしたやつ外せば動きます)
  double ans, c, gemsans;
  int savegems = 0;
  double d = 0;
  
  srand((unsigned)time(NULL));

  for(i = 0; i < N; i++) {
    
    try = 0;
	
    while(1) {
      
      //gem = 240;
      win = 0;  
      try++;
    
      //printf("try数: %d\n", try);
	
      while(1) {
	
	//gem -= 30;
	//printf("gemの数: %d\n", gem);
	
	drop = randbox();
      
	if(drop == 1) {
	  win = 1;
	  break;
	
	} else if(gem == 0) {
	  break;
	}
      }
    
      if(win == 1) {
	c = 1.0 / try;
	d += c;
	//savegems += gem;
	break;
      }

    }
    
  }
  
  ans = d / (double)N;
  
  printf("手持ち240gemでホッピング獲得にチャレンジするとき\n爆死しない割合: %lf \n", ans);
  //gemsans = savegems / N;
  //printf("爆死しなかったときに残ったgemの数の平均: %lf \n", gemsans);

}
    
