#include<stdio.h>
#define boyut 10
int top=-1;
int dizi[boyut];
int Dolumu(){
if(top==boyut-1){
return 1;

}
else{
return 0;
}
}
int Bosmu(){
if(top==-1){
return 1;
}
else{
return 0;
}
}
void ekle(int a){
if(Dolumu()==1){
printf("dizi doludur:\n");
}
else{
top++;
dizi[top]=a;
}

}
void cikar(){
if(Bosmu()==1){
printf("dizi bostur:\n");
}
else{
dizi[top--];
}

}
void yazdir(){
for(int i=0;i<=top;i++){
printf("%d ",dizi[i]);
}


}

main(){
int kontrol=1,tekrar=0,b;
int secim;
printf("--------   YIGIT ISLEMLERI   ------\n");
printf("\n\n");

printf("islem seciniz:\n");
printf("1.Ekle\n");
printf("2.Cikar\n");
printf("3.Listele\n");
printf("4.Cikis\n");
while(kontrol==1){
if(tekrar==1){
printf("islem seciniz:\n");
printf("1.Ekle\n");
printf("2.Cikar\n");
printf("3.Listele\n");
printf("4.Cikis\n");
}
scanf("%d",&secim);
switch(secim){
case 1:
printf("sayi giriniz:\n");
scanf("%d",&b);
ekle(b);
break;
case 2:
cikar();
break;
case 3:
yazdir();
break;
case 4:
printf("cikis yapildi:");
default:
printf("boyle bir secim yok");

}
printf("menuye tekrar girmek istiyorsaniz 1 e basin");
scanf("%d",&kontrol);

tekrar=1;
}



}

