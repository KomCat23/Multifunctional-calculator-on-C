#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	printf("*========================================*\n");
    printf("Instruction:\n");
    printf("1. Write first number\n");
    printf("2. Write second number\n");
    printf("3. Choice the calculation method\n");
    printf("*========================================*\n");
    long a;
    long b;
    scanf("%ld", &a);
    scanf("%ld", &b);
    char c[99];
    scanf("%s", &c);
    if(strcmp(c, "+") == 0 || (strcmp(c, "sum") == 0) || (strcmp(c, "plus") == 0))
    {
        long f = a+b;
        printf("%ld\n", f);
    }
    else if(strcmp(c, "-") == 0 || (strcmp(c, "min") == 0) || (strcmp(c, "minus") == 0))
    {
        long f = a-b;
        printf("%ld\n", f);
    }
    else if(strcmp(c, "*") == 0 || (strcmp(c, "mul") == 0) || (strcmp(c, "multiple") == 0))
    {
        long f = a*b;
        printf("%ld\n", f);
    }
    else if(strcmp(c, "**") == 0 || (strcmp(c, "exp") == 0) || (strcmp(c, "pow") == 0))
    {
        long f = pow(a,b);
        printf("%ld\n", f);
    }
    else if(strcmp(c, "/") == 0 || (strcmp(c, "div") == 0) || (strcmp(c, "division") == 0))
    {
        double f = a/b;
        printf("%lf\n", f);
    }
    else if(strcmp(c, "%") == 0)
    {
        long f = a%b;
        printf("%ld\n", f);
    }
    else if(strcmp(c, "log") == 0)
    {
        double f = log(a);
        double g = log(b);
        printf("%lf and %lf\n", f,g);
    }
    else if(strcmp(c, "log+sum") == 0)
    {
        double f = log(a)+log(b);
        printf("%lf\n", f);
    }
    else if(strcmp(c, "log+min") == 0)
    {
        double f = log(a)-log(b);
        printf("%lf\n", f);
    }
    else if(strcmp(c, "log+mul") == 0)
    {
        double f = log(a)*log(b);
        printf("%lf\n", f);
    }
    else if(strcmp(c, "log+div") == 0)
    {
        double f = log(a)/log(b);
        printf("%lf\n", f);
    }
    else if(strcmp(c, "log+pow") == 0)
    {
        double f = pow(log(a),log(b));
        printf("%lf\n", f);
    }
    else if(strcmp(c, "sqrt") == 0)        
    {
        double f = sqrt(a);
        double g = sqrt(b);
        printf("%lf and %lf\n", f,g);
    }
    else if(strcmp(c, "sqrt+sum") == 0)
    {
        double f = sqrt(a)+sqrt(b);
        printf("%lf\n", f);
    }
    else if(strcmp(c, "sqrt+min") == 0)
    {
    	double f = sqrt(a)-sqrt(b);
        printf("%lf\n", f);
    }
    else if(strcmp(c, "sqrt+mul") == 0)
    {
    	double f = sqrt(a)*sqrt(b);
        printf("%lf\n", f);
    }
    else if(strcmp(c, "sqrt+div") == 0)
    {
    	double f = sqrt(a)/sqrt(b);
        printf("%lf\n", f);
    }
    else if(strcmp(c, "sqrt+pow") == 0)
    {
    	double f = pow(sqrt(a),sqrt(b));
        printf("%lf\n", f);
    }
    else if(strcmp(c, "cbrt") == 0)             
    {                                           
        double f = cbrt(a);
        double g = cbrt(b);
        printf("%lf and %lf\n", f,g);
    }
    else if(strcmp(c, "cbrt+sum") == 0)
    {
        double f = cbrt(a)+cbrt(b);
        printf("%lf\n", f);
    }
    else if(strcmp(c, "cbrt+min") == 0)
    {
        double f = cbrt(a)-cbrt(b);
        printf("%lf\n", f);
    }
    else if(strcmp(c, "cbrt+mul") == 0)
    {
        double f = cbrt(a)*cbrt(b);
        printf("%lf\n", f);
    }
    else if(strcmp(c, "cbrt+div") == 0)
    {
        double f = cbrt(a)/cbrt(b);
        printf("%lf\n", f);
    }
    else if(strcmp(c, "cbrt+pow") == 0)
    {
        double f = pow(cbrt(a),cbrt(b));
        printf("%lf\n", f);
    }
    else
    {
        printf("err\n");
        return 1;
    }
    return 0;
}