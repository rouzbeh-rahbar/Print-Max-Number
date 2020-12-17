#include <stdio.h>

int main(void) 
{
  int n, max=0;
  printf("Dieses Programm liest positive Zahlen ein und gibt die größte Zahl aus\n\n");
  do{
    printf("Bitte Zahl eingeben (Abbruch mit 0): ");
    scanf("%d",&n);
    if(n>max){
      max=n;
    }
  }while(n!=0);
  printf("\nDie größte Zahl war: %d",max);
  return 0;
}