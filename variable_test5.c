#include <stdio.h>
int result;

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if(age < 100){
    	result = 0;
    }else
    {
    	result = 1;
    }
    
    
    return 0;
}

