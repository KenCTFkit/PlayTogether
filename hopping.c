#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 10

void randbox() {
  int r;

  r = rand() % 1000;

  if(r < 15) {
    printf("\x1b[46m");
    printf("ユニコーンのホッピング");
  } else if(r < 35) {
    printf("\x1b[45m");
    printf("レインボーロングヘア");
  } else if(r < 55) {
    printf("\x1b[45m");
    printf("レインボーショットヘア");
  } else if(r < 90) {
    printf("\x1b[45m");
    printf("ユニコーンのオーバーオール");
  } else if(r < 125) {
    printf("\x1b[45m");
    printf("ユニコーンのワンピース");
  } else if(r < 165) {
    printf("\x1b[45m");
    printf("ユニコーンの翼");
  } else if(r < 230) {
    printf("\x1b[45m");
    printf("ユニコーンのスリッパ");
  } else if(r < 355) {
    printf("\x1b[44m");
    printf("ユニコーンの窓(M)");
  } else if(r < 485) {
    printf("\x1b[45m");
    printf("ユニコーンのダイニングチェア");
  } else if(r < 635) {
    printf("\x1b[44m");
    printf("レインボーテーブル");
  } else if(r < 800) {
    printf("\x1b[44m");
    printf("ユニコーンの調理台");
  } else {
    printf("\x1b[44m");
    printf("レインボーパーティション");
  }
 
  
}

int main(void)    
{
  int i;
  srand((unsigned)time(NULL));

  printf("\n\n*****10連ホッピングガチャ 結果*****\n\n\n");

  for(i = 0; i < N; i++) {

    randbox();
    printf("\x1b[m");
    printf("\n\n");
  }
  

  printf("\n\n***********************\n\n");
}
    
