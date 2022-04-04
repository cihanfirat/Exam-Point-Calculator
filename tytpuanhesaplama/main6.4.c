#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	//TYT PUAN HESAPLAMA
	//tr 3.33
	//mat 3.33
	//fen 3.40
	//sosyal 3.40
	
	printf("TYT PUAN HESAPLAYICI");
	printf("\n\n");
	
	float turkce,matematik,fen,sosyal,taban,puan;
	taban=100.160;
	
	printf("Turkce Netinizi Giriniz: ");
	scanf("%f",&turkce);
	printf("\n");
	
	printf("Matematik Netinizi Giriniz: ");
	scanf("%f",&matematik);
	printf("\n");
	
	printf("Sosyal Bilgiler Netinizi Giriniz: ");
	scanf("%f",&sosyal);
	printf("\n");
	
	printf("Fen Bilgisi Netinizi Giriniz: ");
	scanf("%f",&fen);
	printf("\n");
	
	puan=turkce*3.33+matematik*3.33+sosyal*3.40+fen*3.40;
	
	printf("TYT PUANINIZ: %f",puan);

	return 0;
}
