#include<stdio.h>
#include<stdlib.h>
void pattern_5(int row)
{  int n=1,k=2;
    int con=64;
	int i,j;
    for(i=1;i<=row;i++)
	{ for(j=1;j<=(2*row-1);j++)
	    { if(j<(2*row-n))
		    printf("   ");
			else 
				printf("%3c",con+j);
		}
		for(j=1;j<=2*(i-1);j++)
			printf("%3c",con+(2*row-j-1));
		n+=2;
		printf("\n");
	}
	for(i=1;i<=row-1;i++)
	{for(j=1;j<=(2*row-1);j++)
	   { if(j<=2*i)
	       printf("   ");
		   else
			   printf("%3c",con+j);
		}
	  for(j=1;j<=2*(row-1);j++)
      {   if(j<=2*(row-1)-k)
		 printf("%3c",con+(2*row-j-1));
	  }
	  k+=2;
	 printf("\n");
	}
}
void pattern_1(int row)
{ int i,j;
 printf("\t\t\t\t");
  for(i=1;i<=row;i++)
	  {for(j=1;j<=i;j++)
	   { 
		printf(" * ");
	   }
		printf("\n\t\t\t\t");
	  }
}
void pattern_2(int row)
{ int i,j;
  printf("\t\t\t\t");
  for(i=1;i<=row;i++)
  {for(j=row;j>=i;j--)
     printf(" * ");
	 printf("\n\t\t\t\t");
  }
}
void pattern_3(int row)
{ int i,j;
  printf("\t\t\t\t");
  for(i=1;i<=row;i++)
  { for(j=1;j<=i;j++)
      printf(" %d ",j);
	  printf("\n\t\t\t\t");
  }
}
void pattern_4(int row)
{ int i,j;
  printf("\t\t\t\t");
  for(i=1;i<=row;i++)
  { for(j=1;j<=i;j++)
      printf(" %d ",row-j+1);
	  printf("\n\t\t\t\t");
  }
}
void pattern_6(int row)
{ int i,j,con=64,k=1;
   printf("\t\t\t\t");
   for(i=1;i<=row;i++)
  {   for(j=1;j<=i;j++,k++)
       { printf(" %c ",con+k);
	   }
	   printf("\n\t\t\t\t");
  }
   
}  
void pattern_7(int row)
{ int i,j,con=64;
  printf("\t\t\t\t");
  for(i=1;i<=row;i++)
  { for(j=1;j<=row-i+1;j++)
      printf(" %c ",con+i+j-1);
	  printf("\n\t\t\t\t");
  }
}
void main()
{ int x,ch;
   do
   {
      printf("\n\t\t 1.Pattern 1 : \n\t\t 2.Pattern 2 : \n\t\t 3.Pattern 3 : \n\t\t 4.Pattern 4 : \n\t\t 5.Pattern 5 : \n\t\t 6.Pattern 6 : \n\t\t 7.Pattern 7 : \n\t\t 8.Exit : ");
	  printf("\n\t\t Enter number of rows : ");
	  scanf("%d",&x);
	  printf("\n\n\t\t Enter your choice : ");
      scanf("%d",&ch);
      switch(ch)
	  { case 1:	pattern_1(x);
				break;
		case 2: pattern_2(x);
		        break;
		case 3:	pattern_3(x);
		        break;
		case 4: pattern_4(x);
		        break;
		case 5: pattern_5(x);
		        break;
		case 6: pattern_6(x);
		        break;
		case 7: pattern_7(x);
		        break;
		case 8: exit(0);
		default: printf("\n\t\t Not a valid option....");
	  }
   
  }while(ch!=0);
}
