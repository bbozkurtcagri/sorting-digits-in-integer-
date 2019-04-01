#include <stdio.h>


int main(void)
{	
	int x[10], i=0, holder,j,k;
	int sayi, rakam, toplam = 0,gecici,sonuc=0,kalan;
	printf("\nBir Sayi Giriniz : ");
	scanf("%d", &sayi);
	gecici = sayi;
	while(sayi > 0) {
		rakam = sayi % 10;
		toplam = toplam + rakam;
		sayi = sayi / 10;
	}
	printf("\nSayidaki rakamlarin toplami : %d\n", toplam);
	
/*	while(gecici > 0){
		kalan = gecici % 10;
		gecici /= 10;
		printf("%d\n",kalan);
	} */
	
	while(gecici > 0)

{
   x[i++] = gecici % 10;

   gecici /=10;
}

for(j = 0; j < i; j++){


    for(k = 0; k < i-j-1; k++){
      if(x[k] < x[k+1]) {
        holder = x[k+1];

        x[k+1] = x[k];

        x[k] = holder;
      }
  }
}
for(j = 0; j < i ; j++){

  printf("%d", x[j]);
}
	
	return 0;
	
}
