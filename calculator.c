#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#define KEY "Press key to operate:"
#define PI 3.14159265
void addition();
void subtraction();
void multiplication();
void division();
void modulus();
void power();
void welcome();
int factorial();
void calculator_operations();
void sine();
void cosine();
void tangent();
void sineh();
void cosineh();
void tangenth();
void logten();
void squareroot();
void exponent();
void general();
void welgen();
void trigo();
void weltrigo();
void all();
void polynomial();
void pol_eq1();
void pol_eq2();
void pol_wel();
int main()
{
all();

}
void all()
{
   int x=1;
    char opersin;
    welcome();
    while(x)
    {
        printf("\n");
        printf("%s", KEY);
        opersin=getch();
        switch(opersin)
        {
            case '1': general();
            break;
            case '2': trigo();
            break;
            case '3': polynomial();
            break;
            case 'H':
            case 'h': welcome();
                      break;

            case 'Q':
            case 'q': exit(0);
                      break;
            case 'c':
            case 'C': system("cls");
                      welcome();
                      break;

            default : system("cls");

    printf("\n Sorry You have entered unavailable option");
    printf("\n");
    printf("\nPlease Enter any one of below available ");
    printf("options\n");
            welcome();
        }
    }
}

void welcome()
{
        printf("\n Welcome to calculator \n\n");

    printf("Press 'Q' or 'q' to quit ");
    printf("the program\n");
    printf("Press 'H' or 'h' to display ");
    printf("below options\n\n");
    printf("Enter 'C' or 'c' to clear the screen and");
    printf(" display available option \n\n");

    printf("Enter 1 for General calculation \n");
    printf("Enter 2 for Trigonometric calculation \n");
    printf("Enter 3 for Calculating polynomial\n ");
}
void welgen()
{
        printf("\n Welcome to General calculation part \n\n");

    printf("******* Press 'Q' or 'q' to quit ");
    printf("the program ********\n");
    printf("***** Press 'H' or 'h' to display ");
    printf("below options *****\n\n");
    printf("Enter 'C' or 'c' to clear the screen and");
    printf(" display available option \n\n");
    printf("Press 'A' or 'a' to Back Home option\n\n");

    printf("Enter + symbol for Addition \n");
    printf("Enter - symbol for Subtraction \n");
    printf("Enter * symbol for Multiplication \n");
    printf("Enter / symbol for Division \n");
    printf("Enter ? symbol for Modulus\n");
    printf("Enter ^ symbol for Power \n");
    printf("Enter ! symbol for Factorial \n\n");
}
void weltrigo()
{
    printf("Welcome to Trigonometry part\n");

    printf("******* Press 'Q' or 'q' to quit ");
    printf("the program ********\n");
    printf("***** Press 'H' or 'h' to display ");
    printf("below options *****\n\n");
    printf("Enter 'C' or 'c' to clear the screen and");
    printf(" display available option \n\n");
    printf("Press 'A' or 'a' to Back Home option\n\n");
    printf("Enter what you want to do\n");
    printf("1.sin 2.cos 3.tan\n 4.sinh 5.cosh 6.tanh\n 7.1og10 8.square root. 9.exponent\n");
}
void pol_wel()
{
        printf("Welcome to Polynomial part\n");

    printf("******* Press 'Q' or 'q' to quit ");
    printf("the program ********\n");
    printf("***** Press 'H' or 'h' to display ");
    printf("below options *****\n\n");
    printf("Enter 'C' or 'c' to clear the screen and");
    printf(" display available option \n\n");
    printf("Press 'A' or 'a' to Back Home option\n\n");
    printf("Enter what you want to do\n");
    printf("Press 1 for calculate polynomial with one equation\n");
    printf("Press 2 for calculate polynomial with two equation\n\n");
}
void general()
{
    int X=1;
    char Calc_oprn;
    welgen();
    while(X)
    {
        printf("\n");
        printf("%s : ",KEY );

        Calc_oprn=getche();

        switch(Calc_oprn)
        {
            case '+': addition();
                      break;

            case '-': subtraction();
                      break;

            case '*': multiplication();
                      break;

            case '/': division();
                      break;

            case '?': modulus();
                      break;

            case '!': factorial();
                      break;

            case '^': power();
                      break;

            case 'H':
            case 'h': welcome();
                      break;

            case 'Q':
            case 'q': exit(0);
                      break;
            case 'c':
            case 'C': system("cls");
                      welcome();
                      break;
            case 'A':
            case 'a': all();
            break;

            default : system("cls");

    printf("\n**********You have entered unavailable option");
    printf("***********\n");
    printf("\n*****Please Enter any one of below available ");
    printf("options****\n");
    welgen();
        }
    }
}
void trigo()
{
    int Y=1;
    char trisin;
    float y,answer;
    weltrigo();
    while(Y){
    printf("\n %s", KEY);
     trisin=getche();

        switch (trisin)
        {
            case '1': sine();
            break;
            case '2': cosine(y);     break;
            case '3': tangent(y);    break;
            case '4': sineh(y);      break;
            case '5': cosineh(y);    break;
            case '6': tangenth(y);   break;
            case '7': logten(y);     break;
            case '8': squareroot(y); break;
            case '9': exponent(y);   break;
            case 'A':
            case 'a': all(); break;
            default : system("cls");

    {printf("\n**********You have entered unavailable option");
    printf("***********\n");
    printf("\n*****Please Enter any one of below available ");
    printf("options****\n");
    weltrigo();}
        }
}
}
void polynomial()
{
    int z=1;
    char psin;
    pol_wel();
    while(z)
    {
        printf("\n%s",KEY);
        psin=getch();
        switch (psin)
        {
            case '1': pol_eq1();
            break;
            case '2': pol_eq2();
            break;
             case 'H':
            case 'h': welcome();
                      break;

            case 'Q':
            case 'q': exit(0);
                      break;
            case 'c':
            case 'C': system("cls");
                      welcome();
                      break;
            case 'A':
            case 'a': all();
            break;

            default : system("cls");

    printf("\n**********You have entered unavailable option");
    printf("***********\n");
    printf("\n*****Please Enter any one of below available ");
    printf("options****\n");
    pol_wel();    }
    }
}
void addition()
{
    int n, total=0, k=0, number;
    printf("\nEnter the number of elements you want to add:");
    scanf("%d",&n);
    printf("Please enter %d numbers one by one: \n",n);
    while(k<n)
    {
        scanf("%d",&number);
        total=total+number;
        k=k+1;
    }
    printf("Sum of %d numbers = %d \n",n,total);
}

void subtraction()
{
    int a, b, c = 0;
    printf("\nPlease enter first number  : ");
    scanf("%d", &a);
    printf("Please enter second number : ");
    scanf("%d", &b);
    c = a - b;
    printf("\n%d - %d = %d\n", a, b, c);
}

void multiplication()
{
    int a, b, mul=0;
    printf("\nPlease enter first numb   : ");
    scanf("%d", &a);
    printf("Please enter second number: ");
    scanf("%d", &b);
    mul=a*b;
    printf("\nMultiplication of entered numbers = %d\n",mul);
}

void division()
{
    int a, b, d=0;
    printf("\nPlease enter first number  : ");
    scanf("%d", &a);
    printf("Please enter second number : ");
    scanf("%d", &b);
    d=a/b;
    printf("\nDivision of entered numbers=%d\n",d);
}

void modulus()
{
    int a, b, d=0;
    printf("\nPlease enter first number   : ");
    scanf("%d", &a);
    printf("Please enter second number  : ");
    scanf("%d", &b);
    d=a%b;
    printf("\nModulus of entered numbers = %d\n",d);
}

void power()
{
    double a,num, p;
    printf("\nEnter two numbers to find the power \n");
    printf("number: ");
    scanf("%lf",&a);

    printf("power : ");
    scanf("%lf",&num);

    p=pow(a,num);

    printf("\n%lf to the power %lf = %lf \n",a,num,p);
}

int factorial()
{
    int i,fact=1,num;

    printf("\nEnter a number to find factorial : ");
    scanf("%d",&num);

    if (num<0)
    {
        printf("\nPlease enter a positive number to");
        printf(" find factorial and try again. \n");
        printf("\nFactorial can't be found for negative");
        printf(" values. It can be only positive or 0  \n");
        return 1;
    }

    for(i=1;i<=num;i++)
    fact=fact*i;
    printf("\n");
    printf("Factorial of entered number %d is:%d\n",num,fact);
    return 0;
}
void sine()
{
    float y;
    printf("\n What is x? ");
    scanf("%f",&y);
    printf("The answer of sin(%.2f) = %f\n",y,(sin (y*PI/180)));
}
void cosine()
{
      float y;
    printf("\n What is x? ");
    scanf("%f",&y);
    printf("The answer of cos(%.2f) = %f\n",y,(cos (y*PI/180)));
}
void tangent()
{
        float y;
    printf("\n What is x? ");
    scanf("%f",&y);
    printf("The answer of tan(%.2f) = %f\n",y,(tan(y*PI/180)));
}
void sineh()
{
          float y;
    printf("\n What is x? ");
    scanf("%f",&y);
    printf("The answer of sinh(%.2f)= %f\n",y,(sinh(y)));
}
void cosineh()
{
          float y;
    printf("\n What is x? ");
    scanf("%f",&y);
    printf("The answer of cosh(%.2f) = %f\n",y,(cosh(y)));
}
void tangenth()
{
          float y;
    printf("\n What is x? ");
    scanf("%f",&y);
    printf("The answer of tanh(%.2f) = %f\n",y,(tanh(y)));
}
void logten()
{
          float y;
    printf("\n What is x? ");
    scanf("%f",&y);
    printf("The answer of log(%.2f) = %f\n",y,(log10(y)));
}
void squareroot()
{
          float y;
    printf("\n What is x? ");
    scanf("%f",&y);
    printf("The answer is %f\n",(sqrt(y)));
}
void exponent()
{
          float y;
    printf("\n What is x? ");
    scanf("%f",&y);
    printf("The answer is %f\n",(exp(y)));
}
void pol_eq1()
{
        int i,j,y,sum1,q;
    printf("\n\nEnter first polynomial: \n");
    printf("Enter term of polynomial: ");

    scanf("%d",&i);
    int a[i],b[i];
    for(j=0;j<i;j++)
    {
        printf("\nEnter coefficient: ");
        scanf("%d",&a[j]);
        printf("\nEnter Exponent: ");
        scanf("%d",&b[j]);
    }
printf("\n\nFirst polynomial is: ");
     printf("%dx^%d",a[0],b[0]);
      for(j=1;j<i;j++)
    {
        if (a[j]>=0){
            printf("+%dx^%d",a[j],b[j]);}
        else
            {printf("%dx^%d",a[j],b[j]);}
    }
printf("\n\n");
printf("Enter the value of X: ");
scanf("%d",&y);
sum1=0;
for(j=0;j<i;j++)
{
    q=pow(y,b[j]);
sum1=sum1+(a[j]*q);

}
printf("\n\nThe sum is: %d",sum1);
}
void pol_eq2()
{
    int i,j,k,y,sum1,sum2,sum,sub1,sub2,sub,p,q;
    printf("\n\nEnter first polynomial: \n");
    printf("Enter term of 1st polynomial: ");

    scanf("%d",&i);
    int a[i],b[i];
    for(j=0;j<i;j++)
    {
        printf("\nEnter coefficient: ");
        scanf("%d",&a[j]);
        printf("\nEnter Exponent: ");
        scanf("%d",&b[j]);
    }

    printf("\n\nEnter second polynomial: \n");
    printf("Enter term of 2nd polynomial: ");

    scanf("%d",&k);
    int c[k],d[k];
    for(j=0;j<k;j++)
    {
        printf("\nEnter coefficient: ");
        scanf("%d",&c[j]);
        printf("\nEnter Exponent: ");
        scanf("%d",&d[j]);
    }
    printf("\n\nFirst polynomial is: ");
     printf("%dx^%d",a[0],b[0]);
      for(j=1;j<i;j++)
    {
        if (a[j]>=0){
            printf("+%dx^%d",a[j],b[j]);}
        else
            {printf("%dx^%d",a[j],b[j]);}
    }
printf("\n\nThe 2nd polynomial is: ");
     printf("%dx^%d",c[0],d[0]);
      for(j=1;j<k;j++)
    {
        if (a[j]>=0){
            printf("+%dx^%d",c[j],d[j]);}
        else
            {printf("%dx^%d",c[j],d[j]);}
    }
printf("\n\nAdding those polynomial: ");
printf("%dx^%d",a[0]+c[0],d[0]);
for(j=1;j<k;j++)
{
        if (a[j]+c[j]>=0){
            printf("+%dx^%d",a[j]+c[j],d[j]);}
        else
            {printf("%dx^%d",a[j]+c[j],d[j]);}
}
printf("\n\n");

printf("Substracting those polynomial: ");
printf("%dx^%d",a[0]-c[0],d[0]);
for(j=1;j<k;j++)
{
        if (a[j]-c[j]>=0){
            printf("+%dx^%d",a[j]-c[j],d[j]);}
        else
            {printf("%dx^%d",a[j]-c[j],d[j]);}
}
printf("\n\n");

printf("Enter the value of X: ");
scanf("%d",&y);
sum1=0;
sum2=0;

for(j=0;j<i;j++)
{
    q=pow(y,b[j]);
sum1=sum1+(a[j]*q);

}
for(j=0;j<i;j++)
{
    q=pow(y,d[j]);
sum2=sum2+(c[j]*q);
}
sum=sum1+sum2;
sub1=0;
sub2=0;
for(j=0;j<k;j++)
{
    q=pow(y,b[j]);
    sub1=sub1+a[j]*q;
}
for(j=0;j<k;j++)
{
    q=pow(y,d[j]);
    sub2=sub2+c[j]*q;
}
sub=sub1-sub2;
printf("\n\nValue of First polynomial is: %d",sum1);
printf("\n\nValue of Second polynomial is: %d",sum2);
printf("\n\nThe sum is: %d",sum);
printf("\n\nThe sub is: %d",sub);

}



