#include<stdio.h>
#include<math.h>
	float main()
{
	float a,b,d,e,f,g,N,R,Z,Q;
	float c;
    printf("Enter 1st num.");
    scanf("%f",&a);
    printf("Enter 2nd no.");
    scanf("%f",&b);
    printf("FOR N'th ROOT OF A NUMBER ");
    printf("\nENTER NUMBER ");
    scanf("%f",&N);
    printf("\nENTER VALUE OF N ");
    scanf("%f",&R);
    c=a+b;
    Z=1/R;
    if(a>b)
	{
    d=a-b;
	}
	else{
	d=b-a;
	}
	e=a*b;
	f=a/b;
	g=pow(a,b);
	Q=pow(N,Z);
    printf("\nAddition is:%f",c);
    printf("\nSubtraction is:%f",d);
    printf("\nMultiplication is:%f",e);
    printf("\nDivision is:%f",f);
    printf("\na^b:%f",g);
    printf("\nTHE Nth ROOT FOR NUMBER IS :%f",Q);
	return 0;
}
