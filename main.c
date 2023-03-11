#include <stdio.h>

int newCal(){
    int a;
    int b;
    printf("\nEnter first number : ");
    scanf("%d",&a);
    printf("Enter second value : ");
    scanf("%d",&b);
    int total = a + b;
    printf("Total is %d",total);
    return 0;
}

// main method
int main() {
    //newCal();
    signed va2 = -40;
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






    return 0;
}


