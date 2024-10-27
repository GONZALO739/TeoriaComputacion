#include <stdio.h>

void encenderluz();

void apagarluz();

int main(){
	int i=0;
	encenderluz(i);
	
	return 0;
}

void encenderluz(int l){
	while(l!=0){
		printf("La luz se encendio\n");
	}
	l++;
	apagarluz(l);
}

void apagarluz(int j){
	while(j!=1){
		printf("La luz se apago\n");
	}
	j--;
	encenderluz(j);
}

