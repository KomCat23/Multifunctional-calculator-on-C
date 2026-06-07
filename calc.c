#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>



int calc()
{
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
    scanf("%s", c);
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
    	if(b!=0)
		{
    		double f = (double)a/(double)b;
        	printf("%lf\n", f);
		}
		else
		{
			printf("err\n");
        	return 1;
		}
    }
    else if(strcmp(c, "%") == 0 || strcmp(c, "mod") == 0)
    {
        if(b!=0)
		{
    		long f = a%b;
        	printf("%ld\n", f);
		}
		else
		{
			printf("err\n");
        	return 1;
		}
    }
    else if(strcmp(c, "log") == 0)
    {
        double f = log(a);
        double g = log(b);
        printf("%lf and %lf\n", f,g);
    }
    else if(strcmp(c, "log+sum") == 0 || strcmp(c, "log+plus") == 0)
    {
        double f = log(a)+log(b);
        printf("%lf\n", f);
    }
    else if(strcmp(c, "log+min") == 0 || strcmp(c, "log+minus") == 0)
    {
        double f = log(a)-log(b);
        printf("%lf\n", f);
    }
    else if(strcmp(c, "log+mul") == 0 || strcmp(c, "log+multiple") == 0)
    {
        double f = log(a)*log(b);
        printf("%lf\n", f);
    }
    else if(strcmp(c, "log+div") == 0 || strcmp(c, "log+division") == 0)
    {
        double f = log(a)/log(b);
        printf("%lf\n", f);
    }
    else if(strcmp(c, "log+pow") == 0)
    {
        double f = pow(log(a),log(b));
        printf("%lf\n", f);
    }
    else if(strcmp(c, "log+exp") == 0)
	{
    	double f = exp(log(a));
    	double d = exp(log(b));
		printf("%lf and %lf", f,d);	
	}
    else if(strcmp(c, "log10") == 0)
    {
        double f = log10(a);
        double g = log10(b);
        printf("%lf and %lf\n", f,g);
    }
    else if(strcmp(c, "log10+sum") == 0 || (strcmp(c, "log10+plus") == 0))
    {
        double f = log10(a)+log10(b);
        printf("%lf\n", f);
    }
    else if(strcmp(c, "log10+min") == 0 || (strcmp(c, "log10+minus") == 0))
    {
        double f = log10(a)-log10(b);
        printf("%lf\n", f);
    }
    else if(strcmp(c, "log+mul") == 0 || strcmp(c, "log+multiple") == 0)
    {
        double f = log10(a)*log10(b);
        printf("%lf\n", f);
    }
    else if(strcmp(c, "log10+div") == 0 || (strcmp(c, "log10+division") == 0))
    {
        double f = log10(a)/log10(b);
        printf("%lf\n", f);
    }
    else if(strcmp(c, "log10+pow") == 0)
    {
        double f = pow(log10(a),log10(b));
        printf("%lf\n", f);
    }
    else if(strcmp(c, "log10+exp") == 0)
	{
    	double f = exp(log10(a));
    	double d = exp(log10(b));
		printf("%lf and %lf", f,d);	
	}
    else if(strcmp(c, "sqrt") == 0)        
    {
        double f = sqrt(a);
        double g = sqrt(b);
        printf("%lf and %lf\n", f,g);
    }
    else if(strcmp(c, "sqrt+sum") == 0 || strcmp(c, "sqrt+plus") == 0)
    {
        double f = sqrt(a)+sqrt(b);
        printf("%lf\n", f);
    }
    else if(strcmp(c, "sqrt+min") == 0 || strcmp(c, "sqrt+minus") == 0)
    {
    	double f = sqrt(a)-sqrt(b);
        printf("%lf\n", f);
    }
    else if(strcmp(c, "sqrt+mul") == 0 || strcmp(c, "sqrt+multiple") == 0)
    {
    	double f = sqrt(a)*sqrt(b);
        printf("%lf\n", f);
    }
    else if(strcmp(c, "sqrt+div") == 0 || (strcmp(c, "sqrt+division") == 0))
    {
    	double f = sqrt(a)/sqrt(b);
        printf("%lf\n", f);
    }
    else if(strcmp(c, "sqrt+pow") == 0)
    {
    	double f = pow(sqrt(a),sqrt(b));
        printf("%lf\n", f);
    }
    else if(strcmp(c, "sqrt+exp") == 0)
	{
    	double f = exp(sqrt(a));
    	double d = exp(sqrt(b));
		printf("%lf and %lf", f,d);	
	}
    else if(strcmp(c, "cbrt") == 0)             
    {                                           
        double f = cbrt(a);
        double g = cbrt(b);
        printf("%lf and %lf\n", f,g);
    }
    else if(strcmp(c, "cbrt+sum") == 0 || strcmp(c, "cbrt+plus") == 0)
    {
        double f = cbrt(a)+cbrt(b);
        printf("%lf\n", f);
    }
    else if(strcmp(c, "cbrt+min") == 0 || strcmp(c, "cbrt+minus") == 0)
    {
        double f = cbrt(a)-cbrt(b);
        printf("%lf\n", f);
    }
    else if(strcmp(c, "cbrt+mul") == 0 || strcmp(c, "cbrt+multiple") == 0)
    {
        double f = cbrt(a)*cbrt(b);
        printf("%lf\n", f);
    }
    else if(strcmp(c, "cbrt+div") == 0 || strcmp(c, "cbrt+division") == 0)
    {
        double f = cbrt(a)/cbrt(b);
        printf("%lf\n", f);
    }
    else if(strcmp(c, "cbrt+pow") == 0)
    {
        double f = pow(cbrt(a),cbrt(b));
        printf("%lf\n", f);
    }
    else if(strcmp(c, "cbrt+exp") == 0)
	{
    	double f = exp(cbrt(a));
    	double d = exp(cbrt(b));
		printf("%lf and %lf", f,d);	
	}
    else
    {
        printf("err\n");
        return 1;
    }
    return 0;
}

int calcf()
{
	printf("*=======================================*\n");
    printf("Instruction:\n");
    printf("1. Write first number\n");
    printf("2. Write second number\n");
    printf("3. Choice the calculation method\n");
    printf("*=======================================*\n");
    double a;
    scanf("%lf", &a);
    double b;
    scanf("%lf", &b);
    char c[99];
    scanf("%s", c);
    if(strcmp(c, "round") == 0)
    {
        int f = round(a);
        int g = round(b);
        printf("%f ", f);
        printf("and %f\n", g);

    }
    else if(strcmp(c, "+") == 0 || (strcmp(c, "sum") == 0) || (strcmp(c, "plus") == 0))
    {
        double f = a+b;
        printf("%lf\n", f);
    }
    else if(strcmp(c, "-") == 0 || (strcmp(c, "min") == 0) || (strcmp(c, "minus") == 0))
    {
        double f = a-b;
        printf("%lf\n", f);
    }
    else if(strcmp(c, "*") == 0 || (strcmp(c, "mul") == 0) || (strcmp(c, "multiple") == 0))
    {
        double f = a*b;
        printf("%lf\n", f);
    }
    else if(strcmp(c, "**") == 0 || (strcmp(c, "exp") == 0) || (strcmp(c, "pow") == 0))
    {
        double f = pow(a,b);
        printf("%lf\n", f);
    }
    else if(strcmp(c, "/") == 0 || (strcmp(c, "div") == 0) || (strcmp(c, "division") == 0))
    {
        if(b!=0)
		{
    		double f = a/b;
        	printf("%lf\n", f);
		}
		else
		{
			printf("err\n");
        	return 1;
		}
    }
    else if(strcmp(c, "log") == 0)
    {
        double f = log(a);
        double g = log(b);
        printf("%lf and %lf\n", f,g);
    }
    else if(strcmp(c, "log+sum") == 0 || (strcmp(c, "log+plus") == 0))
    {
        double f = log(a)+log(b);
        printf("%lf\n", f);
    }
    else if(strcmp(c, "log+min") == 0 || (strcmp(c, "log+minus") == 0))
    {
        double f = log(a)-log(b);
        printf("%lf\n", f);
    }
    else if(strcmp(c, "log+mul") == 0 || strcmp(c, "log+multiple") == 0)
    {
        double f = log(a)*log(b);
        printf("%lf\n", f);
    }
    else if(strcmp(c, "log+div") == 0 || strcmp(c, "log+division") == 0)
    {
        double f = log(a)/log(b);
        printf("%lf\n", f);
    }
    else if(strcmp(c, "log+pow") == 0)
    {
        double f = pow(log(a),log(b));
        printf("%lf\n", f);
    }
    else if(strcmp(c, "log+exp") == 0)
	{
    	double f = exp(log(a));
    	double d = exp(log(b));
		printf("%lf and %lf", f,d);	
	}
    else if(strcmp(c, "log10") == 0)
    {
        double f = log10(a);
        double g = log10(b);
        printf("%lf and %lf\n", f,g);
    }
    else if(strcmp(c, "log10+sum") == 0 || (strcmp(c, "log10+plus") == 0))
    {
        double f = log10(a)+log10(b);
        printf("%lf\n", f);
    }
    else if(strcmp(c, "log10+min") == 0 || (strcmp(c, "log10+minus") == 0))
    {
        double f = log10(a)-log10(b);
        printf("%lf\n", f);
    }
    else if(strcmp(c, "log10+mul") == 0 || (strcmp(c, "log10+multiple") == 0))
    {
        double f = log10(a)*log10(b);
        printf("%lf\n", f);
    }
    else if(strcmp(c, "log10+div") == 0 || (strcmp(c, "log10+division") == 0))
    {
        double f = log10(a)/log10(b);
        printf("%lf\n", f);
    }
    else if(strcmp(c, "log10+pow") == 0)
    {
        double f = pow(log10(a),log10(b));
        printf("%lf\n", f);
    }
    else if(strcmp(c, "log10+exp") == 0)
	{
    	double f = exp(log10(a));
    	double d = exp(log10(b));
		printf("%lf and %lf", f,d);	
	}
    else if(strcmp(c, "sqrt") == 0)
    {
        double f = sqrt(a);
        double g = sqrt(b);
        printf("%lf and %lf\n", f,g);
    }
    else if(strcmp(c, "sqrt+sum") == 0 || strcmp(c, "sqrt+plus") == 0)
    {
        double f = sqrt(a)+sqrt(b);
        printf("%lf\n", f);
    }
    else if(strcmp(c, "sqrt+min") == 0 || strcmp(c, "sqrt+minus") == 0)
    {
        double f = sqrt(a)-sqrt(b);
        printf("%lf\n", f);
    }
    else if(strcmp(c, "sqrt+mul") == 0 || strcmp(c, "sqrt+multiple") == 0)
    {
        double f = sqrt(a)*sqrt(b);
        printf("%lf\n", f);
    }
    else if(strcmp(c, "sqrt+div") == 0 || (strcmp(c, "sqrt+division") == 0))
    {
    	double f = sqrt(a)/sqrt(b);
        printf("%lf\n", f);
    }
    else if(strcmp(c, "sqrt+pow") == 0)
    {
    	double f = pow(sqrt(a),sqrt(b));
        printf("%lf\n", f);
    }
    else if(strcmp(c, "sqrt+exp") == 0)
	{
    	double f = exp(sqrt(a));
    	double d = exp(sqrt(b));
		printf("%lf and %lf", f,d);	
	}
    else if(strcmp(c, "cbrt") == 0)
    {
        double f = cbrt(a);
        double g = cbrt(b);
        printf("%lf and %lf\n", f,g);
    }
    else if(strcmp(c, "cbrt+sum") == 0 || strcmp(c, "cbrt+plus") == 0)
    {
        double f = cbrt(a)+cbrt(b);
        printf("%lf\n", f);
    
	}
	else if(strcmp(c, "cbrt+min") == 0 || strcmp(c, "cbrt+minus") == 0)
    {
        double f = cbrt(a)-cbrt(b);
        printf("%lf\n", f);
    }
    else if(strcmp(c, "cbrt+mul") == 0 || strcmp(c, "cbrt+multiple") == 0)
    {
        double f = cbrt(a)*cbrt(b);
        printf("%lf\n", f);
    }
    else if(strcmp(c, "cbrt+div") == 0 || strcmp(c, "cbrt+division") == 0)
    {
        double f = cbrt(a)/cbrt(b);
        printf("%lf\n", f);
    }
    else if(strcmp(c, "cbrt+pow") == 0)
    {
        double f = pow(cbrt(a),cbrt(b));
        printf("%lf\n", f);
    }
    else if(strcmp(c, "cbrt+exp") == 0)
	{
    	double f = exp(cbrt(a));
    	double d = exp(cbrt(b));
		printf("%lf and %lf", f,d);	
	}
    else
    {
        printf("err\n");
        return 1;
    }
    return 0;
}

int pi()
{
	printf("*======================================*\n");
    printf("Instruction:\n");
    printf("Write the lenth from 0 to 15 decimal points\n");
    printf("*======================================*\n");
    int a;
    scanf("%d", &a);
    printf("%.*lf\n", a, M_PI);
}

int clear()
{
	system("cls");
	printf("+-----------------------+--------------------------------------------------+\n");
    printf("| Instruments           | Description                                      |\n");
    printf("+-----------------------+--------------------------------------------------+\n");
    printf("| calc                  | Calculator for integers numbers                  |\n");
    printf("| calcf                 | Calculator for float numbers                     |\n");
    printf("| pi                    | Shows pi number from 0 to 15 decimal points      |\n");
    printf("| circle_calc           | Circle calculator                                |\n");
    printf("| exit                  | The command for turn off the programm            |\n");
    printf("| clear                 | Clears the entire console screen                 |\n");
    printf("+-----------------------+--------------------------------------------------+\n");
	
	return 0;
}

int circle_calc()
{
	printf("*========================================================================================================*\n");
    printf("Instruction:\n");
    printf("1. Write what you want to search: the entire circle(circle) or its sector(sector)\n");
    printf("2. If you want to search for a circle, just write the radius(cm) of the circle\n");
    printf("3. If you want to search for sector, just write the radius of the circle(cm) and the angle of the sector\n");
    printf("*========================================================================================================*\n");		
    char a[99];
    scanf("%s", a);
    if(strcmp(a,"circle") == 0)
	{
		int R;
		double pi = M_PI;
		scanf("%d", &R);
		double C = 2*pi*R;
		double S = pi*R*R;
		printf("C = %lf cm\n", C);
		printf("S = %lf cm2\n", S);
		
	}
	else if(strcmp(a,"sector") == 0)
	{
		int R;
		int n;
		double pi = M_PI;
		printf("type the angle of sector: ");
		scanf("%d", &n);
		printf("type the radius: ");
		scanf("%d", &R);
		double C = 2*pi*R;
		double S = pi*R*R;
		double l = C*n/360;
		double Sl = S*n/360;
		printf("l = %lf cm\n", l);
		printf("Sl = %lf cm2\n", Sl);
	}
	return 0;
}

int main()
{
	printf("+-----------------------+--------------------------------------------------+\n");
    printf("| Instruments           | Description                                      |\n");
    printf("+-----------------------+--------------------------------------------------+\n");
    printf("| calc                  | Calculator for integers numbers                  |\n");
    printf("| calcf                 | Calculator for float numbers                     |\n");
    printf("| pi                    | Shows pi number from 0 to 15 decimal points      |\n");
    printf("| circle_calc           | Circle calculator                                |\n");
    printf("| exit                  | The command for turn off the programm            |\n");
    printf("| clear                 | Clears the entire console screen                 |\n");
    printf("+-----------------------+--------------------------------------------------+\n");
	char a[99];
	while(1)
	{
		printf("> ");
		scanf("%s", a);
		if(strcmp(a, "calc") == 0)
		{
			calc();
		}
		else if(strcmp(a, "calcf") == 0)
		{
			calcf();
		}
		else if(strcmp(a, "pi") == 0)
		{
			pi();
		}
		else if(strcmp(a, "clear") == 0)
		{
			clear();
		}
		else if(strcmp(a, "exit") == 0)
		{
			break;
		}	
		else if(strcmp(a, "circle_calc") == 0)
		{
			circle_calc();
		}
		else
		{
			printf("unknown command\n");
		}
	}
    return 0;
}