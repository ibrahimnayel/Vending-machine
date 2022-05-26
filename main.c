#include <stdio.h>
#include <stdlib.h>
#include"h_vending.h"
extern int intrface1,intrface;

int main()
{
    while(1)
    {
    printf("Enter 0 for Manager interface \t Enter 1 for user interface\n  ");
    scanf("%d",&intrface);

    switch (intrface)
    {	case 0:
        	Password();
            show_products();
			Manager_dission();
		switch (intrface1)
		{
        case 0:
			Price_Changing();
    break;

		case 1:
		   Increment_Products();
		   break;

        case 2:
            change_password();
        break;
    }
    break;

    case 1:

        menu();
		Customer_Action();
    break;
    }

    }
    return 0;
}
