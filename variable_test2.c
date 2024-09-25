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

int main( void ){
	a = 12;
	foo(a);
	return 0;
}
