#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int x;
int a;

void foo(int i) {
        i = 89;
	x = 0;
	x = i;
	
}

void func1(){
	x = 14;
}

int main( void ){
	a = 12;
	foo(a);
	a = 45;
	func1();
	return 0;
}
