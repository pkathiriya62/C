#include<stdio.h>

int main()
{
	float std[5],sub[3],i,total,per;
	for(i=0; i<5; i++)
	{


	printf("\nenter mark of subject :\n ");
	scanf("%f",&sub[0]);
	scanf("%f",&sub[1]);
	scanf("%f",&sub[2]);

	total= sub[0]+sub[1]+sub[2];
	printf("total = %.2f\n",total);

	per=(total*100)/300;
	printf("per = %.2f\n",per);

	if(per >= 90){	

		printf("student is pass grade = A");
	}
	else if(per>= 60){
		
		printf("student is pass grade = b");
	}

	else if(per >= 33){

		printf("student is pass grade = c");
	}

	else
	{	
		printf("student is fail try again\n");
	}
		
	}
	
	
	
	return 0;
}