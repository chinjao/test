#include<stdio.h>

int main(){
 
  int money,fh,h,ft,t,o,turi,f;
  printf("1000円に対して商品の値段を入力してください:");
  scanf("%d",&money);
  if(money > 1000){
    printf("1000円を越えています\n");
    return 0;
  }
  turi = 1000 - money;
  
  printf("おつりの額:%d円\n",turi);

  fh = turi / 500;
  printf("500円玉:%d枚\n",fh);
  if(fh >= 1){
    turi -= 500* fh;
  }
  h = turi / 100; 
  printf("100円玉:%d枚\n",h);
  if(h >= 1){
    turi -= 100 * h;
  }
  ft = turi / 50; 
  printf("50円玉:%d枚\n",ft);
  if(ft >= 1){
    turi -= 50 * ft;
  }
  t = turi / 10; 
  printf("10円玉:%d枚\n",t);
  if(t >= 1){
    turi -= 10 * t;
  }
  f = turi / 5;
  printf("5円玉:%d枚\n",f);
  if(f >= 1){
    turi -= 5 * f;
  }
 
  printf("1円玉:%d枚\n",turi);

}
