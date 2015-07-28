#include<stdio.h>


int main(){
 
  int money,fh,h,ft,t,o,turi,f;
  printf("1000蜀・↓蟇ｾ縺励※蝠・刀縺ｮ蛟､谿ｵ繧貞・蜉帙＠縺ｦ縺上□縺輔＞:");
  scanf("%d",&money);
  if(money > 1000){
    printf("1000蜀・ｒ雜翫∴縺ｦ縺・∪縺兔n");
    return 0;
  }
  turi = 1000 - money;
  
  printf("縺翫▽繧翫・鬘・%d蜀・n",turi);

  fh = turi / 500;
  printf("500蜀・脂:%d譫喀n",fh);
  if(fh >= 1){
    turi -= 500* fh;
  }
  h = turi / 100; 
  printf("100蜀・脂:%d譫喀n",h);
  if(h >= 1){
    turi -= 100 * h;
  }
  ft = turi / 50; 
  printf("50蜀・脂:%d譫喀n",ft);
  if(ft >= 1){
    turi -= 50 * ft;
  }
  t = turi / 10; 
  printf("10蜀・脂:%d譫喀n",t);
  if(t >= 1){
    turi -= 10 * t;
  }
  f = turi / 5;
  printf("5蜀・脂:%d譫喀n",f);
  if(f >= 1){
    turi -= 5 * f;
  }
 
  printf("1蜀・脂:%d譫喀n",turi);

}
