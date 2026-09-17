#include <stdio.h>

int main()
{   int a,b;
    double c=0,d=0;
	scanf("%d",&a);
	scanf("%d",&b);
	switch(b){
		case 1:
			printf("%.2f\n",c=a*0.031*0.25);
	        printf("%.2f",d=a+c);
	        break; 
	    case 2:
	    	printf("%.2f\n",c=a*0.033*0.5);
	        printf("%.2f",d=a+c);
	        break;
	    case 3:
	    	printf("%.2f\n",c=a*0.035*1);
	        printf("%.2f",d=a+c);
	        break;
	    case 4:
	    	printf("%.2f\n",c=a*0.044*2);
	        printf("%.2f",d=a+c);
	        break;
	    case 5:
	    	printf("%.2f\n",c=a*0.05*3);
	        printf("%.2f",d=a+c);
	        break;
	    case 6:
	    	printf("%.2f\n",c=a*0.055*5);
	        printf("%.2f",d=a+c);
	        break;
	}
    return 0;
 } 
