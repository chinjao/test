#include<stdio.h>


int main(){
 
  int money,fh,h,ft,t,o,turi,f;
  printf("1000åE«å¯¾ãã¦åEã®å¤æ®µãåEåãã¦ãã ãã:");
  scanf("%d",&money);
  if(money > 1000){
    printf("1000åEè¶ãã¦ãE¾ã\n");
    return 0;
  }
  turi = 1000 - money;
  
  printf("ãã¤ããEé¡E%dåEn",turi);

  fh = turi / 500;
  printf("500åE:%dæ\n",fh);
  if(fh >= 1){
    turi -= 500* fh;
  }
  h = turi / 100; 
  printf("100åE:%dæ\n",h);
  if(h >= 1){
    turi -= 100 * h;
  }
  ft = turi / 50; 
  printf("50åE:%dæ\n",ft);
  if(ft >= 1){
    turi -= 50 * ft;
  }
  t = turi / 10; 
  printf("10åE:%dæ\n",t);
  if(t >= 1){
    turi -= 10 * t;
  }
  f = turi / 5;
  printf("5åE:%dæ\n",f);
  if(f >= 1){
    turi -= 5 * f;
  }
 
  printf("1åE:%dæ\n",turi);

}
