#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
	
	time_t baslangic;
	time_t bitis;

printf("                          ****KRONOMETRE****");
printf("\n\n\n");



printf("kronometreyi baslatmak icin bir tusa basiniz (press any key for start)");
getch();
time(&baslangic);
printf("\n\n");

printf("kronometreyi durdurmak icin bir tusa basiniz (press any key for stop)");
getch();
time(&bitis);
printf("\n\n");

printf("Gecen sure= %.3f saniye",difftime(bitis,baslangic));

	
	
	
	

	getch();
	return 0;
}
