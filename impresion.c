#include <stdio.h>
void G();
void O();
void N();
void Z();
void A();
void L();
void O2();

int main(){
	char n[8];
	G(n);
	return 0;
}

void G(char n[]){
	n[0]='G';
	O(n);
}

void O(char n[]){
	n[1]='O';
	N(n);
}
void N(char n[]){
	n[2]='N';
	Z(n);
}
void Z(char n[]){
	n[3]='Z';
	A(n);
}
void A(char n[]){
	n[4]='A';
	L(n);
}
void L(char n[]){
	n[5]='L';
	O2(n);
}
void O2(char n[]){
	n[6]='O';
	int i=0;
	for(i=0;i<7;i++){
		printf("%c",n[i]);
	}
}
