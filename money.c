#include<stdio.h>


int main(){
 
  int money,fh,h,ft,t,o,turi,f;
  printf("1000冁E��対して啁E��の値段を�E力してください:");
  scanf("%d",&money);
  if(money > 1000){
    printf("1000冁E��越えてぁE��す\n");
    return 0;
  }
  turi = 1000 - money;
  
  printf("おつり�E顁E%d冁En",turi);

  fh = turi / 500;
  printf("500冁E��:%d枚\n",fh);
  if(fh >= 1){
    turi -= 500* fh;
  }
  h = turi / 100; 
  printf("100冁E��:%d枚\n",h);
  if(h >= 1){
    turi -= 100 * h;
  }
  ft = turi / 50; 
  printf("50冁E��:%d枚\n",ft);
  if(ft >= 1){
    turi -= 50 * ft;
  }
  t = turi / 10; 
  printf("10冁E��:%d枚\n",t);
  if(t >= 1){
    turi -= 10 * t;
  }
  f = turi / 5;
  printf("5冁E��:%d枚\n",f);
  if(f >= 1){
    turi -= 5 * f;
  }
 
  printf("1冁E��:%d枚\n",turi);

}
