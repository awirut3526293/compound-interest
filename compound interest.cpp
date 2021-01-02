#include <stdio.h>
#include <conio.h>
#include <math.h>


 double p, r, k, n, base, h, i, s, a, base1;

findS ()
{
  
 
base = (k + r) / k;
  
base1 = (k + r) / k;
  
a = k * n;
  
for (i = 1; i < a; i++)
    {
      base = base * base1;
    }
  
s = p * base;
  
printf ("S = ");
  
printf ("%.4f\n\n", s);

 
 
}


 
 
findP ()
{
  
base = (k + r) / k;
  
base1 = (k + r) / k;
  
a = k * n;
  
for (i = 1; i < a; i++)
    {
      base = base * base1;
    }
  
p = s / (base);
  
printf ("P = ");
  
printf ("%.4f\n\n", p);

}


 
findN ()
{
  
double up, dn;
  
base = (k + r) / k;
  
up = log10 (s / p);
  
dn = log10 (base);
  
n = (up) / (k * dn);
  
printf ("n = ");
  
printf ("%.4f\n\n", n);

} 
 
 
main ()
{
  
int a;

st:
printf ("******************  //MENU//\n");
  
printf ("*         r\t * Find S(1)\n");
  
printf ("*S = P(1+ - )^kn * Find P(2)\n");
  
printf
    ("*         k\t * Find n(3) \n****************** New(4)Exit(5+)\n--Input(1-4)--\n");
  
 
scanf ("%d", &a);
  
switch (a)
    {
    
case 1:
      {
	
printf ("**** S calculator****\n");
	
printf ("Input P: ");
	
scanf ("%lf", &p);
	
 printf ("Input r: ");
	
scanf ("%lf", &r);
	
printf ("Input k: ");
	
scanf ("%lf", &k);
	
printf ("Input n: ");
	
scanf ("%lf", &n);
	
findS ();
	
break;
      
}
    
case 2:
      {
	
printf ("**** P calculator****\n");
printf ("Input S: ");
	
scanf ("%lf", &s);
	
printf ("Input r: ");
	
scanf ("%lf", &r);
	
printf ("Input k: ");
	
scanf ("%lf", &k);
	
printf ("Input n: ");
	
scanf ("%lf", &n);
	
findP ();
	
 
break;
      
}
    
case 3:
      {
	
printf ("**** n calculator****\n");
	
printf ("Input P: ");
	
scanf ("%lf", &p);
	
printf ("Input S: ");
	
scanf ("%lf", &s);
	
printf ("Input r: ");
	
scanf ("%lf", &r);
	
printf ("Input k: ");
	
scanf ("%lf", &k);
	
/*	printf("Input n: ");
		scanf("%lf",&n);*/ 
	  findN ();
	
 
break;
      
}
    
case 4:
      {
	
goto st;
	
break;
      
}
    
case 5:
      {
	
goto end;
	
break;
      
}
    
default:
      goto end;
    
 
}
  
goto st;

end:;

 
}


