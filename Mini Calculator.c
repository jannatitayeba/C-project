#include <stdio.h>
main()
{
 int a, b;
 typedef char String; /* renaming our char datatype to String */
	String operator; /* here operator is '+' , '-' , '*' , '/' that we will use in calculations */
	typedef int bool; /* renaming our int data type to boolean */
	bool condition = 1; /* condition = 1 means while condition = true */
	/* beginning of the program */
	while(condition) /* while(condition = true) */
	{
		printf("Enter first number: ");
		scanf("%d",&a);
		printf("\n");
		printf("Enter second number: ");
		scanf("%d",&b);
		printf("Now enter commands to use on these numbers. \n");
		printf("You can use '+' , '-' , '*', '/' \n");
		printf("You can use Q or N to quit \n");
		do /* an inner loop */
		{
			printf(">>"); /* prompt use for the command */
		 scanf("%c", &operator);
		 switch(operator)
		 {
		 	case '*' : printf("%d * %d = %d \n",a,b, a*b);
		 	 break;
		 	case '+' : printf("%d + %d = %d \n",a,b, a+b);
		 	 break;
		 	case '-' : printf("%d - %d = %d \n",a,b, a-b);
		 	 break;
		 	case '/' : if(b == 0)
		 	 printf("cannot divide by 0\n");
		 	 else
				 printf("%d / %d = %d \n",a,b, a/b);
		 	 break;
				case 'Q' : condition = 0; break; /*now condition = false */
			}
			if(operator == 'Q' || operator == 'N') /*come out of the do loop */
			 break;
		}while(1);
	}
	printf("Finished....");
}
