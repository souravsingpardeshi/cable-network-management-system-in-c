#include <stdio.h>
#include<conio.h>
int main()
{ int ch,x,total;
  printf("\n\t########## WELCOME TO SOURAVSING'S DIGITAL##########\n\t");
  printf("\n\t*********OUR OFFERED PACKS********\n\t");
  printf("\n\tFOR SUBRCIPTION YOU NEED TO SUBSCRIBE TO OUR BASE PACK\n\tpress 153 for subscription");
  printf("\n\t1.49Rs.STAR Value pack\n\t");
  printf("\n\t2.69Rs.ZEE Family pack\n\t");
  printf("\n\t3.12Rs.KIDS pack\n\t");
  printf("\n\t4.78Rs.Sony pack\n\t");
printf("\n----------------------------------------------------------------------------\n");
printf("\n\tyou are subscribed for base pack");
do{
  printf("enter your choice:");
  scanf("%d",&ch);
  switch(ch){
    case 1:
    printf("\nyou are subscribed for star pack\n");
    x=x+49;
    break;
    case 2:
    printf("\nyou are subscribed for zee pack\n");
    x=x+69;
    break;
    case 3:
    printf("\nyou have subscribed for kids pack\n");
    x=x+12;
    break;
    case 4:
    printf("\nyou have subscribed for sony pack\n");
    x=x+78;
    break;
  }
}while(ch<5);
  total=x+153;
printf("\n\tTHANKS FOR SUBSCRIBING\n\ttotal amount to be paid:%d.00Rs",total);
printf("\n\tYOUR SERVICE WILL RESUME SHORTLY");
printf("\n\t********************************");
  return 0;}
