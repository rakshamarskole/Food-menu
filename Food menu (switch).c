#include<stdio.h>
int main()
{
int x;
printf("Pick an item:(entr no.)\n1.Chicken chilly\n2.Paneer roll\n3.Samosa\n4.chowmin\n5.Chicken biryani\n ");
scanf("%d",&x);
switch(x)
      {
      	case 1:
      		printf("Food item - chicken chilly\n Price -Rs150");
      		break;
      		
      	case 2:
      		printf("Food item - Paneer roll\n Price -Rs60");
      		break;	
      		
      	case 3:
      		printf("Food item - Samosa\n Price -Rs10");
      		break;
			  
		case 4:
      		printf("Food item - Chowmin\n Price -Rs40");
      		break;	
			  
		case 5:
      		printf("Food item - Chicken biryani\n Price -Rs200");
      		break;	
			  
		default:
		    printf("Not Available!\a\n Re-enter no. from 1 to 5");
				      		
	  }
	return 0;  
}
