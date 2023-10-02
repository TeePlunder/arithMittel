#include <stdio.h>
#include <stdlib.h>

int Noten[]={2,3,4,0};

int main(){
	int Akku = 0, Count = 0;
	while(Noten[Count]!=0){
		Akku = Akku + Noten[Count];
		Count = Count + 1;
	}
	if(Count > 0){
		double erg;
		erg = (double)Akku / Count;
		printf("Durschschnitt: %lf\n", erg);
	}else printf("Fehler Division durch 0");
	return 0;
}
