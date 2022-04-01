#include <stdio.h>
#include <stdlib.h>
#define PI 3.1416

int fact(int n);
void factCalc();
void poem();
void isLeap();

int main(void) {
    // cmd shift 3 -> screenshot
    factCalc();
    return 0;
}

void poem(){
    char color[50];
    char flower[15];
    char celebName[50];

    printf("Enter color: ");
    fgets(color, 50, stdin);
    printf("Enter flower: ");
    fgets(flower, 50, stdin);
    printf("Enter celeb: ");
    fgets(celebName, 50, stdin);

    printf("Roses are %s", color);
    printf("%s are blue\n", flower);
    printf("I love you %s\n", celebName);

}

void isLeap(){
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
        printf("It is a leap yaer\n");
    }else{
        printf("Not leap year\n");
    }
}

void transaction(){
    // under 2500 commission 30 + 1.7%
    // 2500 - 6250 56 + 0.66%
    // over 6250 76 + 0.34%

    double transaction;
    double fee;
    printf("Enter transaction: ");
    scanf("%lf", &transaction);

    if (transaction < 2500){
        fee = 30 + (transaction * 0.017);
        printf("Commission for %.1f dollars is %.1f\n", transaction, fee);
    }else if(transaction > 2500 && transaction < 6250){
        fee = 56 + (transaction * 0.0066);
        printf("Commission for %.1f dollars is %.1f\n", transaction, fee);
    }else if(transaction > 6250){
        fee = 76 + (transaction * 0.0034);
        printf("Commission for %.1f dollars is %.1f\n", transaction, fee);
    }else{
        printf("Something went wrong..\n");
    }

}

void switchCase(){
    int Number;

    printf("Enter a number: ");
    scanf("%d", &Number);

    switch(Number % 2){
        case 0:
            printf("%d is even\n", Number);
            break;

        case 1:
            printf("%d is odd\n", Number);
            break;
        default:
            printf("Something went wrong");
    }
}


void calculator(double sum, double differ){
    double num1 = (sum + differ) / 2;
    double num2 = sum - num1;

    printf("num1 is %.2f and num2 is %.2f\n", num1, num2);
}


void circle(){
    double radius, yellowArea, redArea, boxArea;

    printf("Give a radius value: ");
    scanf("%lf", &radius);

    boxArea = (radius * 2) * (radius * 2);
    redArea = radius * radius * PI;
    yellowArea = boxArea - redArea;

    printf("Area of the box is %.2lf cm2 Red Area is %.2lf cm2 Yellow Area is %.2lf cm2\n", boxArea, redArea, yellowArea);

}

void sumAll(){
    int firstNum, lastNum;
    int sum = 0;

    printf("First number: ");
    scanf("%d", &firstNum);

    printf("Last number: ");
    scanf("%d", &lastNum);

    while (firstNum <= lastNum){
        sum += firstNum;
        firstNum += 1;
    }

    printf("Sum between %d to %d is %d\n", firstNum, lastNum, sum);

}

void waitUntilNegative(){
    int sum;
    int number;

    while(1){
        printf("Enter a number: ");
        scanf("%d", &number);

        if (number < 0)
            break;
        else
            sum += number;
    }

    printf("Sum of your non negative inputs is %d\n", sum);
}

void divbythree(){
    int lastNum;
    int sum = 0;

    printf("Last Number: ");
    scanf("%d", &lastNum);

    for (int i = 0; i <= lastNum; i++){
        if (i%3==0)
            sum += i;
    }

    printf("Sum of divisible by three is %d\n", sum);
}


void divByFive(){
    int n;
    int sum = 0;


    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++){
        if (i % 5 == 0)
            continue;
        sum += i;
    }

    printf("Sum between numbers between 1 and %d is %d\n", n, sum);
}

// comma operator -> used to combine expressions into one negated expression

void commaOp(){
    int a, b, c, res;
    res = (a= 10, b=20, c=30, a + b + c);
    printf("res = %d\n", res);
}


int fact(int n){
    int res = 1;
    if (n == 0)
        return res;
    for (int i = 1; i <= n; i++){
        res *= i;
    }
    return res;
}

void factCalc(){
    int n, m, k;
    printf("Enter n, m, k: ");
    scanf("%d%d%d", &n, &m, &k);


    if (n < 0 || m  < 0 || k < 0){
        printf("Invalid Value..\n");
        exit(0);
    }

    double res = (fact(n) * fact(m)) / fact(n);

    printf("Result is %.2lf\n", res);
}
