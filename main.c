#include <stdio.h>
// macro type as a object like variable
#define sum 10
#define village "aralaganwila"

int newCal(){
    int a;
    int b;
    printf("\nEnter first number : ");
    scanf("%d",&a);
    printf("Enter second value : ");
    scanf("%d",&b);
    int total = a + b;
    printf("Total is %d",total);
    printf("this is the print method in C");
    return 0;
}

// Global Variable
int p = 20;

// main method
int main() {
    //newCal();
    printf("%d\n",sum); // give variable using define - preprocessor
    printf("%s\n",village); // give variable using define - preprocessor
    printf("Today is %s\n",__DATE__); // pre defined macro
    //printf("%s",name23);
    signed va2 = 40;
    signed qw = 40;
    unsigned var = 0;
    unsigned er = -23;
    signed test = 0;
    unsigned test2 = 0.1; // only can access numerical values
    long int tes = 234;
    long double pp = 23.4567234862534;

    printf("%d\n %d \n %d \n %d \n %d \n %d \n %d \n %lf \n",va2,qw,var,er,test,test2,tes,pp);

    // type casting
        // 01. Explicit Casting - Called Manual Casting
    printf("Explicit Casting : ");
    float abc = 10.23; // 8
    int cba = (int)abc; // 4
    printf("%d \n", cba);

        // 02. Implicit Casting - Called Automatic casting
    printf("Implicit Casting : ");
    int num1 = 20;
    int num2 = 30;
    float average = (float) num1 / num2;
    int ert = num2;
    printf("%f",average);
    printf("\n %d",ert);

    printf("\nhexadecimal value of hexadecimal 10 : %d",(0X10)); // print hexadecimal value
    printf("\ndecimal value of octal 10 : %d\n",(010));  // print octal value

    const char name[10] = "sanchitha"; // print string in C
    printf("%s\n",name);

    printf("%d",p);

    //int tur;
    //printf("\nEnter tur : ");
    //scanf("%d",&tur);
    //printf("%d",tur);

    // free defined macros
    printf("%s\n",__DATE__);
    printf("%s\n",__TIME__);

    int d = 234;
    float D = 12.345;
    printf("%.2f\n%.4d%4d",D,d,d);

    // only get one character using getChar() and print it using putChar()
    printf("\nEnter Character : ");
    int character = getchar();
    putchar(character);



    return 0;
}


