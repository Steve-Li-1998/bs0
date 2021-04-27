#include<stdio.h>

//global initialisierte Variablen
int x = 3;
bool x1 = true;

//global uninitialisierte Variablen
int y;
double y1;

int fak(int n){
	if(n < 0){
		return 0;
	}
    if(n==0){
        return 1;
    }
    else{
        return fak(n-1) * n;
    }
}

int main()
{   
    //lokale Variablen
    int z = 3;
	char z1;

    printf("Die Adresse von global initialisierte Variablen x ist %p\n", &x);
	printf("Die Adresse von global initialisierte Variablen x1 ist %p\n", &x1);
    printf("Die Adresse von global uninitialisierte Variablen y ist %p\n", &y);
	printf("Die Adresse von global uninitialisierte Variablen y1 ist %p\n", &y1);
    printf("Die Adresse von global lokale Variablen z ist %p\n", &z);
	printf("Die Adresse von global lokale Variablen z1 ist %p\n", &z1);

    printf("Die fakultaet von 7 lautet: %d\n", fak(7));

    return 0;
}



