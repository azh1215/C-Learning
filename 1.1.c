#include <stdio.h>

int main()
{   int a,b;
    double c=0,d=0;
    double e,f;
	scanf("%d",&a);
	scanf("%d",&b);
	switch(b){
		case 1:
			e=0.031;
	        f=0.25;
	        break; 
	    case 2:
	    	e=0.033;
	        f=0.5;
	        break;
	    case 3:
	    	e=0.035;
	        f=1;
	        break;
	    case 4:
	    	e=0.044;
	        f=2;
	        break;
	    case 5:
	    	e=0.05;
	        f=3;
	        break;
	    case 6:
	    	e=0.055;
	        f=5;
	        break;
	    default:
	    	printf(" ‰»Î¥ÌŒÛ\n");
	    	break;
	}
	c=a*e*f;
	d=a+c;
	
	printf("%.2f\n",c);
	printf("%.2f\n",d);
    return 0;
 } 
