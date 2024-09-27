#include <stdio.h>


int foo(int i){
	int a = 2; 
	int b = 5; 
	int result = a + b;
	return result;
}

int main() {
    int day;
    int week;

    printf("Enter a number (1-7) for the day of the week: ");
    scanf("%d", &day);

    switch (day) {
        case 1:
            printf("Monday\n");
            week = 0;
           
        case 2:
            printf("Tuesday\n");
            int year = 0;
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 7.\n");
            break;
        day = 12;
        printf("this is the end of the main function");
    }

    return 0;
}

