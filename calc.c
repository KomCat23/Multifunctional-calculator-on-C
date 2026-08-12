#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<windows.h>
#include<winnls.h>
#include<locale.h>



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
    char c[39];
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
    else if(strcmp(c, "**") == 0 || (strcmp(c, "pow") == 0))
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
    else if(strcmp(c, "exp") == 0)
	{
    	double f = exp(a);
    	double d = exp(b);
		printf("%lf and %lf\n", f,d);	
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
		printf("%lf and %lf\n", f,d);	
	}
	else if(strcmp(c, "log+sqrt") == 0)
	{
    	double f = sqrt(log(a));
    	double d = sqrt(log(b));
		printf("%lf and %lf\n", f,d);	
	}
	else if(strcmp(c, "log+cbrt") == 0)
	{
    	double f = cbrt(log(a));
    	double d = cbrt(log(b));
		printf("%lf and %lf\n", f,d);	
	}
	else if(strcmp(c, "log+qdrt") == 0)
    {
        double f = sqrt(sqrt(log(a)));
        double g = sqrt(sqrt(log(b)));
        printf("%lf and %lf\n", f,g);
    }
	else if(strcmp(c, "log2") == 0)
    {
        double f = log2(a);
        double g = log2(b);
        printf("%lf and %lf\n", f,g);
    }
    else if(strcmp(c, "log2+sum") == 0 || strcmp(c, "log2+plus") == 0)
    {
        double f = log2(a)+log2(b);
        printf("%lf\n", f);
    }
    else if(strcmp(c, "log2+min") == 0 || strcmp(c, "log2+minus") == 0)
    {
        double f = log2(a)-log2(b);
        printf("%lf\n", f);
    }
    else if(strcmp(c, "log2+mul") == 0 || strcmp(c, "log2+multiple") == 0)
    {
        double f = log2(a)*log2(b);
        printf("%lf\n", f);
    }
    else if(strcmp(c, "log2+div") == 0 || strcmp(c, "log2+division") == 0)
    {
        double f = log2(a)/log2(b);
        printf("%lf\n", f);
    }
    else if(strcmp(c, "log2+pow") == 0)
    {
        double f = pow(log2(a),log2(b));
        printf("%lf\n", f);
    }
    else if(strcmp(c, "log2+exp") == 0)
	{
    	double f = exp(log2(a));
    	double d = exp(log2(b));
		printf("%lf and %lf\n", f,d);	
	}
	else if(strcmp(c, "log2+sqrt") == 0)
    {
        double f = sqrt(log2(a));
        double g = sqrt(log2(b));
        printf("%lf and %lf\n", f,g);
    }
    else if(strcmp(c, "log2+cbrt") == 0)
    {
        double f = cbrt(log2(a));
        double g = cbrt(log2(b));
        printf("%lf and %lf\n", f,g);
    }
    else if(strcmp(c, "log2+qdrt") == 0)
    {
        double f = sqrt(sqrt(log2(a)));
        double g = sqrt(sqrt(log2(b)));
        printf("%lf and %lf\n", f,g);
    }
	else if(strcmp(c, "log4") == 0)
	{
		double f =  log2(a)/2;
		double d =  log2(b)/2;
		printf("%lf and %lf\n", f,d);	
	}
	else if(strcmp(c, "log4+sum") == 0 || strcmp(c, "log4+plus") == 0)
    {
        double f = log2(a)/2+log2(b)/2;
        printf("%lf\n", f);
    }
    else if(strcmp(c, "log4+min") == 0 || strcmp(c, "log4+minus") == 0)
    {
        double f = log2(a)/2-log2(b)/2;
        printf("%lf\n", f);
    }
    else if(strcmp(c, "log4+mul") == 0 || strcmp(c, "log4+multiple") == 0)
    {
        double f = log2(a)/2*log2(b)/2;
        printf("%lf\n", f);
    }
    else if(strcmp(c, "log4+div") == 0 || strcmp(c, "log4+division") == 0)
    {
    	double d = log2(b)/2;
        double f = log2(a)/2/d;
        printf("%lf\n", f);
    }
    else if(strcmp(c, "log4+pow") == 0)
    {
        double f = pow(log2(a)/2,log2(b)/2);
        printf("%lf\n", f);
    }
    else if(strcmp(c, "log4+exp") == 0)
	{
    	double f = exp(log2(a)/2);
    	double d = exp(log2(b)/2);
		printf("%lf and %lf\n", f,d);	
	}
	else if(strcmp(c, "log4+sqrt") == 0)
	{
		double f =  sqrt(log2(a)/2);
		double d =  sqrt(log2(b)/2);
		printf("%lf and %lf\n", f,d);	
	}
	else if(strcmp(c, "log4+cbrt") == 0)
	{
		double f =  cbrt(log2(a)/2);
		double d =  cbrt(log2(b)/2);
		printf("%lf and %lf\n", f,d);	
	}
	else if(strcmp(c, "log4+qdrt") == 0)        
    {
        double f = sqrt(sqrt(log2(a)/2));
        double g = sqrt(sqrt(log2(b)/2));
        printf("%lf and %lf\n", f,g);
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
    else if(strcmp(c, "log10+mul") == 0 || strcmp(c, "log10+multiple") == 0)
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
		printf("%lf and %lf\n", f,d);	
	}
	else if(strcmp(c, "log10+sqrt") == 0)        
    {
        double f = sqrt(log10(a));
        double g = sqrt(log10(b));
        printf("%lf and %lf\n", f,g);
    }
    else if(strcmp(c, "log10+cbrt") == 0)
    {
        double f = cbrt(log10(a));
        double g = cbrt(log10(b));
        printf("%lf and %lf\n", f,g);
    }
	else if(strcmp(c, "log10+qdrt") == 0)        
    {
        double f = sqrt(sqrt(log10(a)));
        double g = sqrt(sqrt(log10(b)));
        printf("%lf and %lf\n", f,g);
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
		printf("%lf and %lf\n", f,d);	
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
		printf("%lf and %lf\n", f,d);	
	}
	else if(strcmp(c, "qdrt") == 0)        
    {
        double f = sqrt(sqrt(a));
        double g = sqrt(sqrt(b));
        printf("%lf and %lf\n", f,g);
    }
    else if(strcmp(c, "qdrt+sum") == 0 || strcmp(c, "qdrt+plus") == 0)
    {
        double f = sqrt(sqrt(a))+sqrt(sqrt(b));
        printf("%lf\n", f);
    }
    else if(strcmp(c, "qdrt+min") == 0 || strcmp(c, "qdrt+minus") == 0)
    {
    	double f = sqrt(sqrt(a))-sqrt(sqrt(b));
        printf("%lf\n", f);
    }
    else if(strcmp(c, "qdrt+mul") == 0 || strcmp(c, "qdrt+multiple") == 0)
    {
    	double f = sqrt(sqrt(a))*sqrt(sqrt(b));
        printf("%lf\n", f);
    }
    else if(strcmp(c, "qdrt+div") == 0 || (strcmp(c, "qdrt+division") == 0))
    {
    	double f = sqrt(sqrt(a))/sqrt(sqrt(b));
        printf("%lf\n", f);
    }
    else if(strcmp(c, "qdrt+pow") == 0)
    {
    	double f = pow(sqrt(sqrt(a)),sqrt(sqrt(b)));
        printf("%lf\n", f);
    }
    else if(strcmp(c, "qdrt+exp") == 0)
	{
    	double f = exp(sqrt(sqrt(a)));
    	double d = exp(sqrt(sqrt(b)));
		printf("%lf and %lf\n", f,d);	
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
        printf("%d and %d\n", f, g);

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
    else if(strcmp(c, "**") == 0 || (strcmp(c, "pow") == 0))
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
    else if(strcmp(c, "exp") == 0)
	{
    	double f = exp(a);
    	double d = exp(b);
		printf("%lf and %lf\n", f,d);	
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
		printf("%lf and %lf\n", f,d);	
	}
	else if(strcmp(c, "log+sqrt") == 0)
	{
    	double f = sqrt(log(a));
    	double d = sqrt(log(b));
		printf("%lf and %lf\n", f,d);	
	}
	else if(strcmp(c, "log+cbrt") == 0)
	{
    	double f = cbrt(log(a));
    	double d = cbrt(log(b));
		printf("%lf and %lf\n", f,d);	
	}
	else if(strcmp(c, "log+qdrt") == 0)
    {
        double f = sqrt(sqrt(log(a)));
        double g = sqrt(sqrt(log(b)));
        printf("%lf and %lf\n", f,g);
    }
	else if(strcmp(c, "log2") == 0)
    {
        double f = log2(a);
        double g = log2(b);
        printf("%lf and %lf\n", f,g);
    }
    else if(strcmp(c, "log2+sum") == 0 || strcmp(c, "log2+plus") == 0)
    {
        double f = log2(a)+log2(b);
        printf("%lf\n", f);
    }
    else if(strcmp(c, "log2+min") == 0 || strcmp(c, "log2+minus") == 0)
    {
        double f = log2(a)-log2(b);
        printf("%lf\n", f);
    }
    else if(strcmp(c, "log2+mul") == 0 || strcmp(c, "log2+multiple") == 0)
    {
        double f = log2(a)*log2(b);
        printf("%lf\n", f);
    }
    else if(strcmp(c, "log2+div") == 0 || strcmp(c, "log2+division") == 0)
    {
        double f = log2(a)/log2(b);
        printf("%lf\n", f);
    }
    else if(strcmp(c, "log2+pow") == 0)
    {
        double f = pow(log2(a),log2(b));
        printf("%lf\n", f);
    }
    else if(strcmp(c, "log2+exp") == 0)
	{
    	double f = exp(log2(a));
    	double d = exp(log2(b));
		printf("%lf and %lf\n", f,d);	
	}
	else if(strcmp(c, "log2+sqrt") == 0)
    {
        double f = sqrt(log2(a));
        double g = sqrt(log2(b));
        printf("%lf and %lf\n", f,g);
    }
    else if(strcmp(c, "log2+cbrt") == 0)
    {
        double f = cbrt(log2(a));
        double g = cbrt(log2(b));
        printf("%lf and %lf\n", f,g);
    }
    else if(strcmp(c, "log2+qdrt") == 0)
    {
        double f = sqrt(sqrt(log2(a)));
        double g = sqrt(sqrt(log2(b)));
        printf("%lf and %lf\n", f,g);
    }
	else if(strcmp(c, "log4") == 0)
	{
		double f =  log2(a)/2;
		double d =  log2(b)/2;
		printf("%lf and %lf\n", f,d);	
	}
	else if(strcmp(c, "log4+sum") == 0 || strcmp(c, "log4+plus") == 0)
    {
        double f = log2(a)/2+log2(b)/2;
        printf("%lf\n", f);
    }
    else if(strcmp(c, "log4+min") == 0 || strcmp(c, "log4+minus") == 0)
    {
        double f = log2(a)/2-log2(b)/2;
        printf("%lf\n", f);
    }
    else if(strcmp(c, "log4+mul") == 0 || strcmp(c, "log4+multiple") == 0)
    {
        double f = log2(a)/2*log2(b)/2;
        printf("%lf\n", f);
    }
    else if(strcmp(c, "log4+div") == 0 || strcmp(c, "log4+division") == 0)
    {
    	double d = log2(b)/2;
        double f = log2(a)/2/d;
        printf("%lf\n", f);
    }
    else if(strcmp(c, "log4+pow") == 0)
    {
        double f = pow(log2(a)/2,log2(b)/2);
        printf("%lf\n", f);
    }
    else if(strcmp(c, "log4+exp") == 0)
	{
    	double f = exp(log2(a)/2);
    	double d = exp(log2(b)/2);
		printf("%lf and %lf\n", f,d);	
	}
	else if(strcmp(c, "log4+sqrt") == 0)
	{
		double f =  sqrt(log2(a)/2);
		double d =  sqrt(log2(b)/2);
		printf("%lf and %lf\n", f,d);	
	}
	else if(strcmp(c, "log4+cbrt") == 0)
	{
		double f =  cbrt(log2(a)/2);
		double d =  cbrt(log2(b)/2);
		printf("%lf and %lf\n", f,d);	
	}
	else if(strcmp(c, "log4+qdrt") == 0)        
    {
        double f = sqrt(sqrt(log2(a)/2));
        double g = sqrt(sqrt(log2(b)/2));
        printf("%lf and %lf\n", f,g);
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
		printf("%lf and %lf\n", f,d);	
	}
	else if(strcmp(c, "log10+sqrt") == 0)        
    {
        double f = sqrt(log10(a));
        double g = sqrt(log10(a));
        printf("%lf and %lf\n", f,g);
    }
    else if(strcmp(c, "log10+cbrt") == 0)
    {
        double f = cbrt(log10(a));
        double g = cbrt(log10(a));
        printf("%lf and %lf\n", f,g);
    }
	else if(strcmp(c, "log10+qdrt") == 0)        
    {
        double f = sqrt(sqrt(log10(a)));
        double g = sqrt(sqrt(log10(a)));
        printf("%lf and %lf\n", f,g);
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
		printf("%lf and %lf\n", f,d);	
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
		printf("%lf and %lf\n", f,d);	
	}
	else if(strcmp(c, "qdrt") == 0)        
    {
        double f = sqrt(sqrt(a));
        double g = sqrt(sqrt(b));
        printf("%lf and %lf\n", f,g);
    }
    else if(strcmp(c, "qdrt+sum") == 0 || strcmp(c, "qdrt+plus") == 0)
    {
        double f = sqrt(sqrt(a))+sqrt(sqrt(b));
        printf("%lf\n", f);
    }
    else if(strcmp(c, "qdrt+min") == 0 || strcmp(c, "qdrt+minus") == 0)
    {
    	double f = sqrt(sqrt(a))-sqrt(sqrt(b));
        printf("%lf\n", f);
    }
    else if(strcmp(c, "qdrt+mul") == 0 || strcmp(c, "qdrt+multiple") == 0)
    {
    	double f = sqrt(sqrt(a))*sqrt(sqrt(b));
        printf("%lf\n", f);
    }
    else if(strcmp(c, "qdrt+div") == 0 || (strcmp(c, "qdrt+division") == 0))
    {
    	double f = sqrt(sqrt(a))/sqrt(sqrt(b));
        printf("%lf\n", f);
    }
    else if(strcmp(c, "qdrt+pow") == 0)
    {
    	double f = pow(sqrt(sqrt(a)),sqrt(sqrt(b)));
        printf("%lf\n", f);
    }
    else if(strcmp(c, "qdrt+exp") == 0)
	{
    	double f = exp(sqrt(sqrt(a)));
    	double d = exp(sqrt(sqrt(b)));
		printf("%lf and %lf\n", f,d);	
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
    return 0;
}

int circle_calc()
{
	printf("*==============================================================================================================================*\n");
  printf("Instruction:\n");
  printf("1. Write what you want to search: the entire circle(circle) or its sector(sector)\n");
  printf("2. If you want to search for a circle, just write the radius(cm) of the circle\n");
  printf("3. If you want to search for sector, just write the radius of the circle(cm) and the angle of the sector(in gradus of celcium)\n");
  printf("*=============================================================================================================================*\n");		
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
		printf("Type the angle of sector: ");
		scanf("%d", &n);
		printf("Type the radius: ");
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

int sphere_calc()
{
	printf("*====================================================================================================*\n");
    printf("Instruction:\n");
    printf("Write the radius of sphere\n");
    printf("*====================================================================================================*\n");		
	int R;
	double pi = M_PI;
	scanf("%d", &R);
	double S = 4*pi*R*R;
	double V = 4.0/3.0*pi*R*R*R;
	printf("S = %lf cm2\n", S);
	printf("V = %lf cm3\n", V);
	
	return 0;
}

int clear()
{
	system("cls");
	LANGID langId = GetSystemDefaultUILanguage();
	
	if(langId == 0x0419){
    printf("+-----------------------+--------------------------------------------------+\n");
    printf("| Команда               | Описание                                         |\n");
    printf("+-----------------------+--------------------------------------------------+\n");
    printf("| calc                  | Калькулятор для целочисленных чисел              |\n");
    printf("| calcf                 | Калькулятор для дробных чисел                    |\n");
    printf("| pi                    | Показывает число пи от 0 до 15 после запятой цифр|\n");
    printf("| circle_calc           | Калькулятор круга                                |\n");
    printf("| sphere_calc           | Калькулятор шара                                 |\n");
    printf("| exit                  | Отключает программу                              |\n");
    printf("| clear                 | Очищает экран консоли                            |\n");
    printf("| radian_calc           | Калькулятор для считывания радиана угла          |\n");
    printf("+-----------------------+--------------------------------------------------+\n");		
	}
	else{
		printf("+-----------------------+--------------------------------------------------+\n");
    printf("| Instruments           | Description                                      |\n");
    printf("+-----------------------+--------------------------------------------------+\n");
    printf("| calc                  | Calculator for integers numbers                  |\n");
    printf("| calcf                 | Calculator for float numbers                     |\n");
    printf("| pi                    | Shows pi number from 0 to 15 decimal points      |\n");
    printf("| circle_calc           | Circle calculator                                |\n");
    printf("| sphere_calc           | Sphere calculator                                |\n");
    printf("| exit                  | The command for turn off the programm            |\n");
    printf("| clear                 | Clears the entire console screen                 |\n");
    printf("| radian_calc           | Calculator for radian                            |\n");
    printf("+-----------------------+--------------------------------------------------+\n");
	}
	
	return 0;
}

int radian_calc()
{
	double gradus;
	printf("Write the gradus of celcium: ");
	scanf("%lf", gradus);
	double radian = gradus * M_PI / 180.0;
	printf("%lf Gradus = %.4lf radiands\n", gradus, radian);
	return 0;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	LANGID langId = GetSystemDefaultUILanguage();
	
	if(langId == 0x0419){
    printf("+-----------------------+--------------------------------------------------+\n");
    printf("| Команда               | Описание                                         |\n");
    printf("+-----------------------+--------------------------------------------------+\n");
    printf("| calc                  | Калькулятор для целочисленных чисел              |\n");
    printf("| calcf                 | Калькулятор для дробных чисел                    |\n");
    printf("| pi                    | Показывает число пи от 0 до 15 после запятой цифр|\n");
    printf("| circle_calc           | Калькулятор круга                                |\n");
    printf("| sphere_calc           | Калькулятор шара                                 |\n");
    printf("| exit                  | Отключает программу                              |\n");
    printf("| clear                 | Очищает экран консоли                            |\n");
    printf("| radian_calc           | Калькулятор для считывания радиана угла          |\n");
    printf("+-----------------------+--------------------------------------------------+\n");		
	}
	else{
		printf("+-----------------------+--------------------------------------------------+\n");
    printf("| Instruments           | Description                                      |\n");
    printf("+-----------------------+--------------------------------------------------+\n");
    printf("| calc                  | Calculator for integers numbers                  |\n");
    printf("| calcf                 | Calculator for float numbers                     |\n");
    printf("| pi                    | Shows pi number from 0 to 15 decimal points      |\n");
    printf("| circle_calc           | Circle calculator                                |\n");
    printf("| sphere_calc           | Sphere calculator                                |\n");
    printf("| exit                  | The command for turn off the programm            |\n");
    printf("| clear                 | Clears the entire console screen                 |\n");
    printf("| radian_calc           | Calculator for radian                            |\n");
    printf("+-----------------------+--------------------------------------------------+\n");
	}
	
	char a[99];
	while(1)
	{
		printf(">>> ");
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
		else if(strcmp(a, "circle_calc") == 0)
		{
			circle_calc();
		}
		else if(strcmp(a, "sphere_calc") == 0)
		{
			sphere_calc();	
		}
		else if(strcmp(a, "clear") == 0)
		{
			clear();
		}
		else if(strcmp(a, "radian_calc") == 0)
		{
			radian_calc();
		}
		else if(strcmp(a, "exit") == 0)
		{
			break;
		}
		else
		{
			printf("Unknown command\n");
		}
	}
    return 0;
}
