#include <stdio.h>


    int chokPrice=8 , candyPrice=3 , potatoPrice=6 , colaPrice=5 , dry_frutPrice=2;
	int chklt=5 , cndy=5 , potato=5 , cola=5 , dry_frut=5; // Variables for vending machine products
    int intrface, intrface1, pass=000000 , password , counter , counter_1=1 , selction , amount ; // Variables for organize user and manager interfaces
    int price,totalprice; // var for scan the price
    char ch;   // var for makes decisions in repeat action of manager



void change_password()
{
    int pin;
    int newPin;
    printf("\nEnter new pin: ");
    scanf("%d", &newPin);
    pin = newPin;
    printf("\nThe new pin is: %d\n", pin);

   password();
}

void menu ()
{
			printf("\t Menu \n ");
			printf("\t------------------------------\n ");
			printf("\t1-chocolate");   printf("\t\t price %d pounds\n " , chokPrice);
			printf("\t2-Candy  ");  printf("\t\t price %d pounds\n ", candyPrice);
			printf("\t3-Potato "); printf("\t\t price %d pounds\n ", potatoPrice);
			printf("\t4-Cola ");  printf("       \t\t price %d pounds\n " , colaPrice);
			printf("\t5-Dry fruits   ");    printf("\t\t price %d pounds\n ", dry_frutPrice);
			printf("----------------------------------\n ");
}

void Password()
{
	printf("kindly, Press your password : ");
        scanf("%d" , &password);
        for (counter=1 ; counter>=0 ; counter--)
       {
           if  (pass!=password)
         {
            printf("Wrong password! \nTry again : \n");
            scanf("%d" , &password);
            if (pass==password)
            {
                counter_1++;
            }
            while (counter==0 && counter_1==3)
            {
            printf("Unfortunately, You type the paeeword incorrectly three consecutive times.");
            printf(" Please, Try again after 30 seconds.");
            return 0;
            }
         }
       }
}

void Manager_dission()
{
	printf("                                   Welcome Manager                            \n\n");
			printf("For changing products prices press 0\n");
			printf("For increment products press 1\n ");
			printf("for changing passowrd 2\n ");
			scanf("%d" , &intrface1);
			scanf("%d",&intefacel2);
}

void show_products()
{

                    printf("\nnumber of chocolates is %d",chklt);
                    printf("\nnumber of candies is %d",cndy);
                    printf("\nnumber of potatoes is %d",potato);
                    printf("\nnumber of cola is %d",cola);
                    printf("\nnumber of dry fruit is %d",dry_frut);
                    if(chklt==0){printf("\nwarning!,chocolate isn't available");}
                    if(cndy==0){printf("\nwarning!,candies isn't available");}
                    if(potato==0){printf("\nwarning!,potatoes isn't available");}
                    if(cola==0){printf("\nwarning!,cola isn't available");}
                    if(dry_frut==0){printf("\nwarning!,dry fruit isn't available");}



}
void Price_Changing()
{
	do {
             printf("Enter the type you want to change its price.\n");
             printf("Note, type 1 for chocolate...2 for candy...3 for potato...4 for cola...5 for dry fruits\n");
             scanf("%d" , &selction);
             switch (selction)
               {
                 case 1:
				 printf("Enter the new price of Chocolate.\n");
				 scanf("%d" , &chokPrice);
                 printf("Price of chocolate now is %d.\n", chokPrice );
                 break;
                 case 2:
                 printf("Enter the new price of Candy.\n");
				 scanf("%d" , &candyPrice);
                 printf("Price of candy now is %d.\n" , candyPrice);
                 break;
                 case 3:
                 printf("Enter the new price of Potato.\n");
				 scanf("%d" , &potatoPrice);
                 printf("Price of potato now is %d.\n" , potatoPrice);
                 break;
                 case 4:
                 printf("Enter the new price of Cola.\n");
				 scanf("%d" , &colaPrice);
                 printf("Price of cola now is %d.\n" , colaPrice);
                 break;
                 case 5:
                 printf("Enter the new price of Dry fruits.\n");
				 scanf("%d" , &dry_frutPrice);
                 printf("Price of dry fruits now is %d.\n" , dry_frutPrice);
                 break;
                 default:
                 printf("Undefind number...try again.\n");
                 break;
                }
                 printf("Do you want to make another operation? (y or n)\n\n\n");
                 scanf(" %c" , &ch);
            }while (ch !='n');
}

void Increment_Products()
{

           do{
             printf("Enter the type you want to increase.\n");
             printf("Note, type 1 for chocolate...2 for candy...3 for potato...4 for cola...5 for dry fruits\n");
             scanf("%d" , &selction);
             printf("Enter the amount.\n");
             scanf("%d" , &amount);
             switch (selction)
               {
                 case 1:
                 chklt+=amount;
                 printf("Amount of chocolate now is %d.\n", chklt );
                 break;
                 case 2:
                 cndy+=amount;
                 printf("Amount of candy now is %d.\n" , cndy);
                 break;
                 case 3:
                 potato+=amount;
                 printf("Amount of potato now is %d.\n" , potato);
                 break;
                 case 4:
                 cola+=amount;
                 printf("Amount of cola now is %d.\n" , cola);
                 break;
                 case 5:
                 dry_frut+=amount;
                 printf("Amount of dry fruits now is %d.\n" , dry_frut);
                 break;
                 default:
                 printf("Undefind number...try again.\n");
                 break;
                }
                 printf("Do you want to make another operation? (y or n)\n");
                 scanf(" %c" , &ch);
            }while(ch!='n');
}

void Customer_Action()
{
            totalprice=0;

			 printf("                                   Welcome our customer                            \n\n");
             printf("Enter the type you want.\n");
             printf("Note, type 1 for chocolate...2 for candy...3 for potato...4 for cola...5 for dry fruits\n");
             scanf("%d" , &selction);
             switch (selction)
               {
                 case 1:

                      if (chklt==0)     printf("Chocolate is over.");
                                        printf("The prise of one cube of Chocolate is 8$ .\n");
                                         while (totalprice<chokPrice){scanf("%d",&price);totalprice+=price ;}
                                        printf("Here your order thanks for joining us.\n\n\n");
                                        chklt-=1;
                 break;

                 case 2:

                      if (cndy==0)      printf("Candy is over.");
                                        printf("The prise of onebag of Candy is 3$ .\n");
                                        while (totalprice<candyPrice){scanf("%d",&price);totalprice+=price ;}
                                        printf("Here your order thanks for joining us.\n\n\n");
                                        cndy-=1;
                 break;

                 case 3:

                     if (potato==0)     printf("Potato is over.");
                                        printf("The prise of one bag of Potato is 6$ .\n");
                                        while (totalprice<potatoPrice){scanf("%d",&price);totalprice+=price ;}
                                        printf("Here your order thanks for joining us.\n\n\n");
                                        potato-=1;
                 break;

                  case 4:

                     if (cola==0)       printf("Cola is over.");
                                        printf("The prise of one Can of Cola is 5$ .\n");
                                        while (totalprice<colaPrice){scanf("%d",&price);totalprice+=price ;}
                                        printf("Here your order thanks for joining us.\n\n\n");
                                        cola-=1;
                 break;

                 case 5:

                     if (dry_frut==0)   printf("Dry fruits are over.");
                                        printf("The prise of one Dry fruits is 2$ .\n");
                                        while (totalprice<dry_frutPrice){scanf("%d",&price);totalprice+=price ;}
                                        printf("Here your order thanks for joining us.\n\n\n");
                                        dry_frut-=1;
                 break;

                 default:
                 printf("Undefind number...try again.\n");
                 break;
                }
}



