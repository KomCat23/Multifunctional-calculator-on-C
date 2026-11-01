#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

#ifndef M_PI
#define M_PI 3.1415926535
#endif


int calc()
{ 
  printf("*========================================*\n");
  printf("Instruction:\n");
  printf("1. Write first number\n");
  printf("2. Write second number\n");
  printf("3. Choice the calculation method\n");
  printf("*========================================*\n");
  double a;
  scanf("%lf", &a);
  double b;
  scanf("%lf", &b);
  char c[39];
  scanf("%38s", c);
  if(strcmp(c, "round") == 0)
  {
    if(a >= 0 && b >= 0)
    {
      unsigned long f = round(a);
      unsigned long g = round(b);
      printf("%lu and %lu\n", f, g);
    }
    else
    {
      long f = round(a);
      long g = round(b);
      printf("%ld and %ld\n", f, g);
    }
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
			printf("Error type help() for solve the proplem\n");
  	  return 1;
		}
  }
  else if(strcmp(c, "exp") == 0)
	{
	  double f = exp(a);
	  double d = exp(b);
		printf("%lf and %lf\n", f,d);	
	}
  else
  {
    printf("Error type help() for solve the proplem\n");
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
  char a[39];
  scanf("%38s", a);
  if(strcmp(a,"circle") == 0)
	{
    printf("*===================*\n");
    printf("Type the radius\n");
    printf("*===================*\n");
		int R;
		double pi = M_PI;
		scanf("%d", &R);
		if(R > 0)
	  {
		  double C = 2*pi*R;
		  double S = pi*R*R;
		  printf("C = %lf cm\n", C);
		  printf("S = %lf cm2\n", S);
  	}
		else
	  {
      printf("Error type help() for solve the proplem\n");
  	} 
	}
	else if(strcmp(a,"sector") == 0)
	{
		int R;
		int n;
		double pi = M_PI;
		printf("*===========================*\n");
		printf("Type the angle of sector\n");
		printf("*===========================*\n");
		scanf("%d", &n);
		printf("*===================*\n");
		printf("Type the radius\n");
		printf("*===================*\n");
		scanf("%d", &R);
		if(R > 0 && n > 0)
	  {
		  double C = 2*pi*R;
		  double S = pi*R*R;
		  double l = C*n/360;
		  double Sl = S*n/360;
	   	printf("l = %lf cm\n", l);
		  printf("Sl = %lf cm2\n", Sl);
	  }
		else
    {
	    printf("Error type help() for solve the proplem\n");
	  }
	}
	return 0;
}



int sphere_calc()
{
	printf("*=============================================*\n");
  printf("Instruction:\n");
  printf("Write the radius(cm) of sphere\n");
  printf("*=============================================*\n");
  printf(">>> ");
	int R;
	double pi = M_PI;
	scanf("%d", &R);
	if(R > 0)
	{
		double S = 4*pi*R*R;
	  double V = 4.0/3.0*pi*R*R*R;
	  printf("S = %lf cm2\n", S);
	  printf("V = %lf cm3\n", V);
	}
	else
	{
	  printf("Error type help() for solve the proplem\n");
	}
	return 0;
}



int clear()
{
	system("cls");
  printf("+-----------------------+--------------------------------------------------+\n");
  printf("| Instruments           | Description                                      |\n");
  printf("+-----------------------+--------------------------------------------------+\n");
  printf("| calc                  | Calculator for simple actions                    |\n"); 
  printf("| pi                    | Shows pi number from 0 to 15 decimal points      |\n");
  printf("| circle_calc           | Circle calculator                                |\n");
  printf("| sphere_calc           | Sphere calculator                                |\n");
  printf("| exit                  | The command for turn off the programm            |\n");
  printf("| clear                 | Clears the entire console screen                 |\n");
  printf("| radian_calc           | Calculator for radian                            |\n");
  printf("| factorial             | Shows factorial from 1 to 100 numbers            |\n");
  printf("| root_calc             | Calculator for nth root of a number              |\n");
  printf("| log_calc              | Calculator for nth log of a number               |\n");
  printf("| help                  | Command Reference                                |\n");
  printf("+-----------------------+--------------------------------------------------+\n");
	return 0;
}



int radian_calc()
{
	printf("Write the angle in gradus of celcium: ");
	int gradus;
	double pi = M_PI;
	scanf("%d", &gradus);
  if(gradus<0)
  {
    double radian = fabs(gradus * (M_PI/180.0));
    double b = sin(radian);
    double c = cos(radian);
    double d = tan(radian);
    double e = 1/tan(radian);  
    printf("%d Gradus = %lf radiands\n", gradus, radian);
    printf("%lf\n", b);
    printf("%lf\n", c);
    printf("%lf\n", d);
    printf("%lf\n", e);
  }
  else
  {
    double radian = gradus * (M_PI/180.0);
    double b = sin(radian);
    double c = cos(radian);
    double d = tan(radian);
    double e = 1/tan(radian);
    printf("%d Gradus = %lf radiands\n", gradus, radian);
    printf("%lf\n", b);
    printf("%lf\n", c);
    printf("%lf\n", d);
    printf("%lf\n", e);
  }
	return 0;
}


int factorial()
{
  printf("Write the number from 1 to 100\n");
  int a;
  scanf("%d", &a);
  if (a == 1) printf("1! = 1");
  else if (a == 2) printf("2! = 2");
  else if (a == 3) printf("3! = 6");
  else if (a == 4) printf("4! = 24");
  else if (a == 5) printf("5! = 120");
  else if (a == 6) printf("6! = 720");
  else if (a == 7) printf("7! = 5040");
  else if (a == 8) printf("8! = 40320");
  else if (a == 9) printf("9! = 362880");
  else if (a == 10) printf("10! = 3628800");
  else if (a == 11) printf("11! = 39916800");
  else if (a == 12) printf("12! = 479001600");
  else if (a == 13) printf("13! = 6227020800");
  else if (a == 14) printf("14! = 87178291200");
  else if (a == 15) printf("15! = 1307674368000");
  else if (a == 16) printf("16! = 20922789888000");
  else if (a == 17) printf("17! = 355687428096000");
  else if (a == 18) printf("18! = 6402373705728000");
  else if (a == 19) printf("19! = 121645100408832000");
  else if (a == 20) printf("20! = 2432902008176640000");
  else if (a == 21) printf("21! = 51090942171709440000");
  else if (a == 22) printf("22! = 1124000727777607680000");
  else if (a == 23) printf("23! = 25852016738884976640000");
  else if (a == 24) printf("24! = 620448401733239439360000");
  else if (a == 25) printf("25! = 15511210043330985984000000");
  else if (a == 26) printf("26! = 403291461126605635584000000");
  else if (a == 27) printf("27! = 10888869450418352160768000000");
  else if (a == 28) printf("28! = 304888344611713860501504000000");
  else if (a == 29) printf("29! = 8841761993739701954543616000000");
  else if (a == 30) printf("30! = 265252859812191058636308480000000");
  else if (a == 31) printf("31! = 8222838654177922817725562880000000");
  else if (a == 32) printf("32! = 263130836933693530167218012160000000");
  else if (a == 33) printf("33! = 8683317618811886495518194401280000000");
  else if (a == 34) printf("34! = 295232799039604140847618609643520000000");
  else if (a == 35) printf("35! = 10333147966386144929666651337523200000000");
  else if (a == 36) printf("36! = 371993326789901217467999448150835200000000");
  else if (a == 37) printf("37! = 13763753091226345046315979581580902400000000");
  else if (a == 38) printf("38! = 523022617466601111760007224100074291200000000");
  else if (a == 39) printf("39! = 20397882081197443358640281739902897356800000000");
  else if (a == 40) printf("40! = 815915283247897734345611269596115894272000000000");
  else if (a == 41) printf("41! = 33452526613163807108170062053440751665152000000000");
  else if (a == 42) printf("42! = 1405006117752879898543142606244511569936384000000000");
  else if (a == 43) printf("43! = 60415263063373835637355132068513997507264512000000000");
  else if (a == 44) printf("44! = 2658271574788448768043625811014615890319638528000000000");
  else if (a == 45) printf("45! = 119622220865480194561963161495657715064383733760000000000");
  else if (a == 46) printf("46! = 5502622159812088949850305428800254892961651752960000000000");
  else if (a == 47) printf("47! = 258623241511168180642964355153611979969197632389120000000000");
  else if (a == 48) printf("48! = 12413915592536072670862289047373375038521486354677760000000000");
  else if (a == 49) printf("49! = 608281864034267560872252163321295376887552831379210240000000000");
  else if (a == 50) printf("50! = 30414093201713378043612608166064768844377641568960512000000000000");
  else if (a == 51) printf("51! = 1551118753287382280224243016469303211063259720016986112000000000000");
  else if (a == 52) printf("52! = 80658175170943878571660636856403766975289505440883277824000000000000");
  else if (a == 53) printf("53! = 4274883284060025564298013753389399649690343788366813724672000000000000");
  else if (a == 54) printf("54! = 230843697339241380472092742683027581083278564571807941132288000000000000");
  else if (a == 55) printf("55! = 12696403353658275925965100847566516959580321051449436762275840000000000000");
  else if (a == 56) printf("56! = 710998587804863451854045647463724949736497978881168458687447040000000000000");
  else if (a == 57) printf("57! = 40526919504877216755680601905432322134980384796226602145184481280000000000000");
  else if (a == 58) printf("58! = 2350561331282878571829474910515074683828862318181142924420699914240000000000000");
  else if (a == 59) printf("59! = 138683118545689835737939019720389406345902876772687432540821294940160000000000000");
  else if (a == 60) printf("60! = 8320987112741390144276341183223364380754172606361245952449277696409600000000000000");
  else if (a == 61) printf("61! = 507580213877224798800856812176625227226004528988036003099405939480985600000000000000");
  else if (a == 62) printf("62! = 31469973260387937525653122354950764088012280797258232192163168247821107200000000000000");
  else if (a == 63) printf("63! = 1982608315404440064116146708361898137544773690227268628106279599612729753600000000000000");
  else if (a == 64) printf("64! = 126886932185884164103433389335161480802865516174545192198801894375214704230400000000000000");
  else if (a == 65) printf("65! = 8247650592082470666723170306785496252186258551345437492922123134388955774976000000000000000");
  else if (a == 66) printf("66! = 544344939077443064003729240247842752644293064388798874532860126869671081148416000000000000000");
  else if (a == 67) printf("67! = 36471110918188685288249859096605464427167635314049524593701628500267962436943872000000000000000");
  else if (a == 68) printf("68! = 2480035542436830599600990418569171581047399201355367672371710738018221445712183296000000000000000");
  else if (a == 69) printf("69! = 171122452428141311372468338881272839092270544893520369393648040923257279754140647424000000000000000");
  else if (a == 70) printf("70! = 11978571669969891796072783721689098736458938142546425857555362864628009582789845319680000000000000000");
  else if (a == 71) printf("71! = 850478588567862317521167644239926010288584608120796235886430763388588680378079017697280000000000000000");
  else if (a == 72) printf("72! = 61234458376886086861524070385274672740778091784697328983823014963978384987221689202490368000000000000000");
  else if (a == 73) printf("73! = 4470115461512684340891257138125051110076800700282905015819080092370422104067183317016903680000000000000000");
  else if (a == 74) printf("74! = 330788804431050222347905011978756017045680537045774411264486806595880938007216857252388564992000000000000000");
  else if (a == 75) printf("75! = 24809140811395398091946477116594033660926243850492304849181920746568807841475386293687173266432000000000000000");
  else if (a == 76) printf("76! = 1885494701666050254987932260861146558230394535038415168535166227083261395952129358320225168250122240000000000000");
  else if (a == 77) printf("77! = 145183092028285869634070784086308284983740379224182682993769799385411927488322080159037067553381908480000000000000");
  else if (a == 78) printf("78! = 11324281178190557854007521158726046228731949539461969362503193093669764744949931116407690911481698882176000000000000");
  else if (a == 79) printf("79! = 894618213078192793116594171539357851069824013617336777756520215040052575079448581828506117006505457751347200000000000");
  else if (a == 80) printf("80! = 71569457046263802294811533723186532165584657342365752577109445058227039255480148842668944867280814080000000000000000000");
  else if (a == 81) printf("81! = 5797126020747367985879734231578109105412357244731625958745865049716390179693892056256184534249745940480000000000000000000");
  else if (a == 82) printf("82! = 475364333701284174842138206989404946643813294067993328617160934076743994734899148613007131808479167119360000000000000000000");
  else if (a == 83) printf("83! = 39455239697206586511897471180120610571436503489642320798137371149108911775607649334877421940091669643930880000000000000000000");
  else if (a == 84) printf("84! = 3314240134565353266999387579130131288000666286242048540945321176054987668933815344129703442967692250090193920000000000000000000");
  else if (a == 85) printf("85! = 281710411438055027694947944226061159480056634330574206006672996484849518593736304251024926522538411257684813312000000000000000000");
  else if (a == 86) printf("86! = 24227095383672732381765523203441259715284870552429381798643147749689058597061318635588178680538303387964888161280000000000000000000");
  else if (a == 87) printf("87! = 2107757298379527717213600518699389500631781738061356216704195385222948097994331721276171545261832403892943261932800000000000000000000");
  else if (a == 88) printf("88! = 185482642257398439114796845645546680556779192949466447031272443899624132623500191472302962683968290542579080045056000000000000000000000");
  else if (a == 89) printf("89! = 16507955160908461081216919262453619309840728031402477857583287507066647798923717036034963678873225857306975962823705600000000000000000000");
  else if (a == 90) printf("90! = 1485715964481761497309522733620825737885569924826848198846249587563899830083134533387430673093792163927247837665430115840000000000000000000");
  else if (a == 91) printf("91! = 135200152767840296255166568759495142147586866476906677883778347744474896572624562343625618933335590348554122554153762463744000000000000000000");
  else if (a == 92) printf("92! = 12438414054641307255475324325873553077577991715875414372365139993349747668571233717813523945306374312640290801658424539873280000000000000000000");
  else if (a == 93) printf("93! = 1156772507081641574759205162306240434213780747397181745138046912896990079435900827773502211051950714018507404462148115653670400000000000000000000");
  else if (a == 94) printf("94! = 108736615665674311152470883578608001015586739343013591027953356581809927347802481730330837103313890710671691602745086328748206080000000000000000000");
  else if (a == 95) printf("95! = 10329978488239059262559730312917326200379616916963033847039359496846029578478019522558178625148386004701960253736856740856037965824000000000000000000");
  else if (a == 96) printf("96! = 991677934870949689209978693242305335584149290187441639730915861304438035860431928546264593702562419233726138912862166023710941871104000000000000000000");
  else if (a == 97) printf("97! = 96192759682482119853328425949563698712343813919172976158104477319333745612481875498805879175589072651261284189679678142931395349746176000000000000000000");
  else if (a == 98) printf("98! = 9426890448883247745626185743057242473809693764078951663494238777294707070022604988181297617751289720458901800658698054794006784630889676800000000000000000");
  else if (a == 99) printf("99! = 933262154439441526816992388562667004907159682643816214685929638952175999932299156089414639761565182862536979208272237582511852109168623426304000000000000000");
  else if (a == 100) printf("100! = 93326215443944152681699238856266700490715968264381621468592963895217599993229915608941463976156518286253697920827223758251185210916864000000000000000000000000");
  printf("\n");
  return 0;
}



int root_calc()
{
  double x, n;
  printf("Write the number under root: \n");
  scanf("%lf", &x);
  if(x < 0)
  {
    printf("Error type help() for solve the proplem\n");
    return 1;
  }
  printf("Write the root index number: \n");
  scanf("%lf", &n);
  if(n < 0 || n == 0)
  {
    printf("Error type help() for solve the proplem\n");
    return 1;
  }
  double result = pow(x, 1.0/n);
  printf("result: %g\n", result);

  return 0;
}




int log_calc()
{
  double x, n;
  printf("Write the number: \n");
  scanf("%lf", &x);
  if(x < 0)
  {
    printf("Error type help() for solve the proplem\n");
    return 1;
  }
  printf("Write the log index number: \n");
  scanf("%lf", &n);
  if(n < 0 || n == 1)
  {
    printf("Error type help() for solve the proplem\n");
    return 1;
  }
  double result = log(x)/log(n);
  printf("result: %g\n", result);

  return 0;
}



int help()
{
	printf("Write the command which you need a help: ");
	char a[39];
	scanf("%38s", a);
	if(strcmp(a, "calc") == 0)
	{
    printf("*==========================================*\n");
    printf("calc() - the calculator for simple actions\n");
    printf("The most important rule: when you dividing do not put 0 as the second number(there will be an error)\n");
    printf("*==========================================*\n");
	}
	else if(strcmp(a, "pi") == 0)
	{
  	printf("*==========================================*\n");
  	printf("pi() - the command to print the numper pi from 1 to 15 decimal places\n");
  	printf("The most important rule: dont try to output a longer value(compiler will return 0 or incorrect numbers)\n");
  	printf("*==========================================*\n");
	}
	else if(strcmp(a, "circle_calc") == 0)
	{
  	printf("*==========================================*\n");
  	printf("circle_calc() - the calculator for calculating the area/circumreference of a circle or just its sector\n");
  	printf("1. Do not try to enter negative radius values or 0(there will be an error)\n");
  	printf("2. Do not try to enter negative angle values or 0(there will be an error)\n");
  	printf("*==========================================*\n");
	}
	else if(strcmp(a, "sphere_calc") == 0)
	{
  	printf("*==========================================*\n");
  	printf("sphere_calc() - the calculator for calculating sphere\n");
  	printf("The most important rule: do not try to enter negative radius values or write 0(there will be an error)\n");
  	printf("*==========================================*\n");
	}
	else if(strcmp(a, "clear") == 0)
	{
  	printf("*==========================================*\n");
  	printf("clear() - with this command you clear the entire console screen\n");
  	printf("*==========================================*\n");
	}
	else if(strcmp(a, "radian_calc") == 0)
	{
  	printf("*==========================================*\n");
  	printf("radian_calc() - the calculator for to calculate the radian of an angle\n");
  	printf("The most important rule: do not try to enter negative angle values(there will be an error)\n");
  	printf("*==========================================*\n");
	}
  else if(strcmp(a, "factorial") == 0)
  {
    printf("*==========================================*\n");
    printf("factorial() - the command to print the factorial number from 1 to 100\n");
    printf("*==========================================*\n");
  }
  else if(strcmp(a, "root_calc") == 0)
  {
    printf("*==========================================*\n");
    printf("root_calc() - Calculator for calculating the nth root\n");
    printf("The most important rule: do not try to enter negative angle values(there will be an error)\n");
    printf("*==========================================*\n");
  }
  else if(strcmp(a, "log_calc") == 0)
  {
    printf("*==========================================*\n");
    printf("log_calc() - the calculator for computing the logarithm of a number to a given base\n");
    printf("The most important rule: do not try to enter negative angle values or 0(there will be an error)\n");
    printf("*==========================================*\n");
  }
	else if(strcmp(a, "exit") == 0)
	{
  	printf("*==========================================*\n");
  	printf("exit() - with this command you close the program\n");
  	printf("*==========================================*\n");
	}
	else
	{
  	printf("*==========================================*\n");
  	printf("Unknow command try again\n");
  	printf("*==========================================*\n");
	}
  return 0;
}



int main()
{
  printf("+-----------------------+--------------------------------------------------+\n");
  printf("| Instruments           | Description                                      |\n");
  printf("+-----------------------+--------------------------------------------------+\n");
  printf("| calc                  | Calculator for simple actions                    |\n");
  printf("| pi                    | Shows pi number from 0 to 15 decimal points      |\n");
  printf("| circle_calc           | Circle calculator                                |\n");
  printf("| sphere_calc           | Sphere calculator                                |\n");
  printf("| exit                  | The command for turn off the programm            |\n");
  printf("| clear                 | Clears the entire console screen                 |\n");
  printf("| radian_calc           | Calculator for radian                            |\n");
  printf("| factorial             | Shows factorial from 1 to 100 numbers            |\n");
  printf("| root_calc             | Calculator for nth root of a number              |\n");
  printf("| log_calc              | Calculator for nth log of a number               |\n");
  printf("| help                  | Command Reference                                |\n");
  printf("+-----------------------+--------------------------------------------------+\n");
	
	char a[39];
	while(1)
	{
		printf(">>> ");
		scanf("%38s", a);
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
    else if(strcmp(a, "factorial") == 0)
    {
      factorial();
    }
    else if(strcmp(a, "root_calc") == 0)
    {
      root_calc();
    }
    else if(strcmp(a, "log_calc") == 0)
    {
      log_calc();
    }
		else if(strcmp(a, "help") == 0)
		{
			help();
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