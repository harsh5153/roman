#include <stdio.h>
#include <conio.h>
void oned(int);
void twod(int);
void threed(int);
void fourd(int);
void five();
void fifty();
void test(int);
void fiveh();
void fourd(int);
char i , x;
main(int argc, char const *argv[])
{
	int n;
	printf("ENTER THE NO. OF WHICH ROMAN IS TO BE FIND\n");
	scanf("%d" , &n);
	test(n);
   	getch();
}
void test(int n){
	if(n%10 != 0 && n/10 == 0)
		oned(n);
	else if(n/10 != 0 && n/100 == 0)
		twod(n);
	else if (n/100 != 0 && n/1000 == 0)
		threed(n);
	else if(n>999 && n<5001)
		fourd(n);
   }
void oned(int n){
	if(n<4)
		for (int j = 0; j < n; j++){
			printf( "i");
		}	
	if(n ==5 || n == 4){
		for (int j = 0; j < 5-n; j++)
			printf("i");	
		five();
	}
	if(n >5 && n<9){
		five();
		oned(n-5);
	}
	if(n == 9)
		printf("ix");
}
void five(){
	printf("v");
}
void twod(int n){
	if(n/10<4){
		for (int j = 0; j < n/10; j++)
			printf("x");
		test(n%10);
	}
	if(/*n/10 ==5 && n%10 ==0*/ n == 50 || n/10 == 4){
		for (int j = 0; j < (5-n/10); j++)
			printf("x");	
		fifty();
		test(n%10);
	}
	if(n >50 && n<90){ 
		fifty();
		test(n-50);
	}
	if(n/10 == 9){
		printf("xc");
	    test(n%10);
	}
}
void fifty(){
	printf("l");
}
void threed(int n){
	if(n/100<4){
		for (int j = 0; j < n/100; j++)
			printf("c");
		test(n%100);
	}
	if(n/100 ==5 && n%100 ==0 || n/100== 4){
		for (int j = 0; j < (5-n/100); j++)
			printf("c");	
		fiveh();
		test(n%100);
	}
	if(n >500 && n<900){ 
		fiveh();
		test(n-500);
	}
	if(n/100 == 9){
		printf("cm");
	    test(n%100);
	 }
}
void fiveh(){
	printf("d");
}
void fourd(int n){
	if(n/1000<5){
		for (int j = 0; j < n/1000; j++)
			printf("m");
	}
	if(n == 5000)
		printf("V");
	test(n%1000);
}