/*
MD MORTUZA MINHAZ -55270
ABU SAYED - 59395.
ELVIANNEY MARIUS -58573.
ERRICKSON BIN EFFIN GUTA -55894.
BELERINE AQUILINE COSMAS -58507.   */

//Header files
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<conio.h>
#include<ctype.h>

//function prototype declaration
void submenu();
void combo();       //display combo
void ala_carte();   //display ala-carte
void receipt();     //display receipt
void mainmenu();
void Terminate();   // exit program



//Structure Type Declaration
struct data
{
    // variables for structure

    char  student[20];
    char ComboID[10];
    char FoodID[10];
    char DrinksID[10];
    char ItemName[30];

    char combofood1[30];
    char combofood2[30];
    char combodrinks[30];
    char combofry[30];
    double price[20];
    int Quantity;
    double pricecombo[20];
    char cusType[10];
};   //Structure Tag
struct data info;

//file pointers
FILE *fptr;
FILE *file;
FILE *fp;

//global variable
double Total=0;
char cust[30];
int receiptID=0;
int i;


//combo function
void combo()
{
//static variables for combo function
   char itemID[10];
   char itemname[30];
   int item;
   int a;
   int Food1;
   int Food2;
   int drinks1;

    system("CLS"); //print new screen

    printf("\t\t          Unimas Kiosk\n");

    printf("\t\t----------------------------------\n");
    printf("\t\t----------------------------------\n\n");
    printf("\t\t----------------------------------\n\n");


  printf("\t\t----------COMBO PACKAGES----------\n\n");
  printf("item ID     Item Name    Price\n");
   file = fopen("combo.txt", "a+");  // Open combo.txt file
  for(i=1;i<=3;i++)
{
    fscanf(file,"%s %s %lf",itemID,itemname,&info.pricecombo[i]); //assigning file contents to structure variables from combo.txt file
    printf(" %s        %s       %.2lf RM\n",itemID,itemname,info.pricecombo[i]);//Print combo packages from combo.txt file

}
    fclose(file); //close file


input: // start of a goto statement named input

printf("Input Item Code: ");
scanf("%d",&item);


if(item==001)
{
    system("cls");
    printf("\t\t          Unimas Kiosk\n");
    printf("\t\t----------------------------------\n");
    printf("\t\t----------------------------------\n\n");
    printf("\t\t----------------------------------\n");
    printf("\n\t\tFor Combo 1 Package:\n\t\t2 Main Food\n\t\t1 Fries\n\t\t1 Drink\n\n");
    printf("Available Food Items:\n011\tNasiLemak\n012\tCharKuayTeow\n013\tLambChop\n014\tFries\n");

        printf("Input Your Food Code 1:  ");
        scanf ("%d",&Food1);  //get input for food 1 for combo 1 package
        if(Food1==11) //if user input food code 011
        {
        strcpy(info.combofood1,"Nasi Lemak"); //copy the string name to structure variable
        }
        else if(Food1==12)   //if user input food code 012
        {
        strcpy(info.combofood1,"Char Kuay Teow"); //copy the string name to structure variable
        }
        else if(Food1==13)  //if user input food code 013
        {
        strcpy(info.combofood1,"Lamb Chop");
        }
        else if(Food1==14)  //if user input food code 014
        {
        strcpy(info.combofood1,"Fries");
        }

        printf("Input Your Food Code 2:  ");
        scanf ("%d",&Food2);  //get input for food 2 for combo 1 package
        if(Food2==11)
        {
        strcpy(info.combofood2,"Nasi Lemak");
        }
        else if(Food2==12)
        {
        strcpy(info.combofood2,"Char Kuay Teow");
        }
        else if(Food2==13)
        {
        strcpy(info.combofood2,"Lamb Chop");
        }
        else if(Food2==14)
        {
        strcpy(info.combofood2,"Fries");
        }



    printf("\nAvailable Drinks Item:\n\t101\tSoft Drinks\n\t102\tMilk Shake\n");
    printf("Input Your Drinks Code: ");
    scanf ("%d",&drinks1);  //get input for drink for combo 1 package
    if(drinks1==101)
        {
        strcpy(info.combodrinks,"Soft Drinks");
        }
        else if(drinks1==102)
        {
        strcpy(info.combodrinks,"Milk Shake");
        }

       strcpy(info.ComboID,"001");

        Total=Total+info.pricecombo[1]; //calculate Total billing price after buying a combo 1 package
       system("cls");
    printf("\t\t          Unimas Kiosk\n");
    printf("\t\t----------------------------------\n");
    printf("\t\t----------------------------------\n\n");
    printf("\t\t----------------------------------\n");

     printf("\nYour selected Food Items: 1.%s  2.%s\n\n",info.combofood1,info.combofood2); //print selected food for combo 1
     printf("Your selected Drinks Item: %s\n\n",info.combodrinks);  //print selected drink for combo 1
     printf("Your Combo 1 :\n");
     printf("\t\t1.%s\n\t\t2.%s\n\t\t3.%s\n",info.combofood1,info.combofood2,info.combodrinks);
     printf("\t\t4.Fries\n\n");

      file = fopen("receipt.txt", "a"); //open receipt.txt file to write information of combo 1 receipt info
      fprintf(file,"%5s\t",info.ComboID);
      fprintf(file,"\t  Combo 1");
      fprintf(file,"\t\t1");
      fprintf(file,"\t\t%.2lf\n",info.pricecombo[1]);      /*write combo 1 information to receipt.txt file*/
      fprintf(file,"%25s\n",info.combofood1);
      fprintf(file,"%25s\n",info.combofood2);
      fprintf(file,"%25s\n",info.combodrinks);
      fclose(file);
       //cloce receipt.txt file


}
else if(item==002)     // My work start
{
     system("cls");
    printf("\t\t          Unimas Kiosk\n");
    printf("\t\t----------------------------------\n");
    printf("\t\t----------------------------------\n\n");
    printf("\t\t----------------------------------\n");
     printf("\n\t\tFor Combo 2 Package:\n\t\t1 Main Food\n\t\t1 Fries\n\t\t1 Drink\n\n");
     printf("Available Food Items:\n011\tNasiLemak\n012\tCharKuayTeow\n013\tLambChop\n014\tFries\n");

        printf("Input Your Food Code :  ");
        scanf ("%d",&Food1);  //get input for food for combo 2 package
        if(Food1==11)
        {
        strcpy(info.combofood1,"Nasi Lemak");
        }
        else if(Food1==12)
        {
        strcpy(info.combofood1,"Char Kuay Teow");       /*copy the string name to structure variable*/
        }
        else if(Food1==13)
        {
        strcpy(info.combofood1,"Lamb Chop");
        }
        else if(Food1==14)
        {
        strcpy(info.combofood1,"Fries");
        }



    printf("\nAvailable Drinks Item:\n\t101\tSoft Drinks\n\t102\tMilk Shake\n");
    printf("Input Your Drinks Code: ");
    scanf ("%d",&drinks1);  //get input for drink for combo 2 package
    if(drinks1==101)
        {
        strcpy(info.combodrinks,"Soft Drinks");
        }
        else if(drinks1==102)
        {
        strcpy(info.combodrinks,"Milk Shake");
        }


     strcpy(info.ComboID,"002");

     Total=Total+info.pricecombo[2];  //calculate Total billing price after buying combo 2 package
     system("cls");
    printf("\t\t          Unimas Kiosk\n");
    printf("\t\t----------------------------------\n");
    printf("\t\t----------------------------------\n\n");
    printf("\t\t----------------------------------\n");

     printf("\nYour selected Food Item: %s\n\n",info.combofood1);
     printf("Your selected Drinks Item: %s\n\n",info.combodrinks);
     printf("Your Combo 2 :\n");
     printf("\t\t1.%s\n\t\t2.%s\n",info.combofood1,info.combodrinks);
     printf("\t\t3.Fries\n\n");

       file = fopen("receipt.txt", "a");  //open receipt.txt file to write information of combo 2 receipt info
      fprintf(file,"%5s\t",info.ComboID);
      fprintf(file,"\t  Combo 2");
      fprintf(file,"\t\t1");
      fprintf(file,"\t\t%.2lf\n",info.pricecombo[2]);      /*write combo 2 information to receipt.txt file*/
      fprintf(file,"%25s\n",info.combofood1);
      fprintf(file,"%25s\n",info.combodrinks);
      fclose(file);
      //close receipt.txt file

}
else if(item==003)
{
      system("cls");
    printf("\t\t          Unimas Kiosk\n");
    printf("\t\t----------------------------------\n");
    printf("\t\t----------------------------------\n\n");
    printf("\t\t----------------------------------\n");
      printf("\n\t\tFor Combo 3 Package:\n\t\t1 Main Food\n\t\t1 Drink\n\n");
      printf("Available Food Items:\n011\tNasiLemak\n012\tCharKuayTeow\n013\tLambChop\n014\tFries\n");

        printf("Input Your Food Code :  ");
        scanf ("%d",&Food1); //get input for food for combo 3 package
        if(Food1==11)
        {
        strcpy(info.combofood1,"Nasi Lemak");
        }
        else if(Food1==12)
        {
        strcpy(info.combofood1,"Char Kuay Teow");
        }
        else if(Food1==13)
        {
        strcpy(info.combofood1,"Lamb Chop");
        }
        else if(Food1==14)
        {
        strcpy(info.combofood1,"Fries");
        }

    printf("\nAvailable Drinks Item:\n\t101\tSoft Drinks\n\t102\tMilk Shake\n");
    printf("Input Your Drinks Code: ");
    scanf ("%d",&drinks1);  //get input for drink for combo
    if(drinks1==101)
        {
        strcpy(info.combodrinks,"Soft Drinks");
        }
        else if(drinks1==102)
        {
        strcpy(info.combodrinks,"Milk Shake");
        }


    strcpy(info.ComboID,"003");

    Total=Total+info.pricecombo[3];    //calculate Total billing price after buying combo 3 package

    system("cls");
    printf("\t\t          Unimas Kiosk\n");
    printf("\t\t----------------------------------\n");
    printf("\t\t----------------------------------\n\n");
    printf("\t\t----------------------------------\n");

     printf("\nYour selected Food Item: %s\n\n",info.combofood1);
     printf("Your selected Drinks Item: %s\n\n",info.combodrinks);
     printf("Your Combo 3 :\n");
     printf("\t\t1.%s\n\t\t2.%s\n\n",info.combofood1,info.combodrinks);

       file = fopen("receipt.txt", "a");    //open receipt.txt file to write information of combo 3 receipt info
      fprintf(file,"%5s\t",info.ComboID);
      fprintf(file,"\t  Combo 3");
      fprintf(file,"\t\t1");
      fprintf(file,"\t\t%.2lf\n",info.pricecombo[3]);    /*write combo 3 information to receipt.txt file*/
      fprintf(file,"%25s\n",info.combofood1);
      fprintf(file,"%25s\n",info.combodrinks);
      fclose(file);

}
else
{
    printf("Wrong Input! Input your Item Code again......\n");
    goto input;
}

printf("Do you want To Buy More FOODS?\n1.Yes\n2.No\n");

//start of do while loop to get user input
do
{
printf("Input : ");
scanf("%d",&a);
switch(a)
{
case 1:
    submenu(); //function call
    break;
case 2:
   receipt();
    break;
default:
    printf("Wrong Input! Input Again........\n");
    break;
}
}while(a!=2); //end of loop and condition for catching a wrong input
}



void ala_carte()
{
    //static variable
int a,b,c,d,e;
int quantity;
double total=0;
char *menu[] = {"Food","Drinks"};  //pointer variable
char input[5000];
system("cls");

    printf("\t\t          Unimas Kiosk\n");
    printf("\t\t----------------------------------\n");
    printf("\t\t----------------------------------\n\n");
    printf("\t\t----------------------------------\n");

    printf("\t");

ala:

    for(i=0;i<2;i++)
	{
		printf("\t\t  %d. %s\n\t",i+1,menu[i]); //display menu
	}
    printf("Input Choice: ");
    scanf("%d",&b);  //get input for food/drinks
    printf("\n");

if(b==1)  //for food
{
    system("cls");
    printf("\t\t          Unimas Kiosk\n");
    printf("\t\t----------------------------------\n");
    printf("\t\t----------------------------------\n\n");
    printf("\t\t----------------------------------\n");

      file = fopen("food.txt", "r");  //open food.txt to read from file

      while(fgets(input,5000,file))  //to get full content of file
     {
        printf("%s",input);  //print the full information of file to display
     }

while(1)  //loop for unlimited selection
    {
    printf("\n\nEnter 0 For Finishing Input!\n\n");
food:
printf("\nInput Your Item ID: ");
scanf("%d",&c); //get input for id

if(c==11)
{

    printf("\nHow Many Nasi Lemak Do You Want To Buy? : ");
    scanf("%d",&quantity);  //get for quantity of food
    total=5*quantity;
    Total=Total+total;      /*total for food 011 */
    strcpy(info.FoodID,"011");
    printf("\nYour selected Food Item:\nItem Name\tquantity\tPrice(RM)\n");
    printf("Nasi Lemak\t  %d\t\t %.2lf\n",quantity,total);

     file = fopen("receipt.txt", "a");  //open receipt.txt file to write information of  food 011
      fprintf(file,"%5s\t",info.FoodID);
      fprintf(file,"\tNasi Lemak");
      fprintf(file,"\t\t%d",quantity);       /*write food 011 information to receipt.txt file*/
      fprintf(file,"\t\t%.2lf\n",total);
      fclose(file);
}
else if(c==12)
{
     printf("\nHow Many Char Kuay Teow Do You Want To Buy? : ");
    scanf("%d",&quantity); //get for quantity of food
        total=6.5*quantity;
        Total=Total+total;    /*total for food 012 */

    strcpy(info.FoodID,"012");
    printf("\nYour selected Food Item:\nItem Name\t   quantity\tPrice(RM)\n");
    printf("Char Kuay Teow\t     %d\t\t  %.2lf\n",quantity,total);

     file = fopen("receipt.txt", "a");  //open receipt.txt file to write information of  food 012
      fprintf(file,"%5s\t",info.FoodID);
      fprintf(file,"   Char Kuay Teow");
      fprintf(file,"\t\t%d",quantity);      /*write food 012 information to receipt.txt file*/
      fprintf(file,"\t\t%.2lf\n",total);
      fclose(file);
}
else if(c==13)
{
    printf("\nHow Many Lamb Chop Do You Want To Buy? : ");
    scanf("%d",&quantity); //get for quantity of food
    total=9.5*quantity;
        Total=Total+total;  /*total for food 013 */

    strcpy(info.FoodID,"013");
    printf("\nYour selected Food Item:\nItem Name\tquantity\tPrice(RM)\n");
    printf("Lamb Chop\t  %d\t\t %.2lf\n",quantity,total);

     file = fopen("receipt.txt", "a");  //open receipt.txt file to write information of  food 013
      fprintf(file,"%5s\t",info.FoodID);
      fprintf(file,"\tLamb Chop");
      fprintf(file,"\t\t%d",quantity);          /*write food 013 information to receipt.txt file*/
      fprintf(file,"\t\t%.2lf\n",total);
      fclose(file);
}
else if(c==14)
{
   printf("\nHow Many Fries Do You Want To Buy? : ");
    scanf("%d",&quantity);  //get for quantity of food
      total=3*quantity;
        Total=Total+total;    /*total for food 014 */

    strcpy(info.FoodID,"014");
    printf("\nYour selected Food Item:\nItem Name\tquantity\tPrice(RM)\n");
    printf("Fries\t\t %d\t\t  %.2lf\n",quantity,total);

     file = fopen("receipt.txt", "a");    //open receipt.txt file to write information of  food 014
      fprintf(file,"%5s\t",info.FoodID);
      fprintf(file,"\t    Fries");
      fprintf(file,"\t\t%d",quantity);    /*write food 014 information to receipt.txt file*/
      fprintf(file,"\t\t%.2lf\n",total);
      fclose(file);
}
else if(c==0)
{
    system("cls");
    printf("\t\t          Unimas Kiosk\n");
    printf("\t\t----------------------------------\n");
    printf("\t\t----------------------------------\n\n");
    printf("\t\t----------------------------------\n");


    printf("\nYou finished Your Input For Food Items!!!!\n\n");
   printf("What Do you want to Perform Now?\n\n\t\t1.Buy More Ala-Carte\n\t\t2.Buy Combo Item\n\t\t3.Bill Option\n");
do
{
printf("Input : ");
scanf("%d",&a);
switch(a)
{
case 1:
    ala_carte();  //call function
    break;
case 2:
    combo();    //function call
    break;
case 3:
     receipt();   //function call
default:
    printf("Wrong Input! Input Again........\n");
    break;
}
}while(a!=2);
}
else
{
    printf("Wrong Input! Input Your Food ID Again.........\n");
    goto food;
}
    }
}
else if(b==2)   //for drink
    {
system("cls");
printf("\t\t          Unimas Kiosk\n");
    printf("\t\t----------------------------------\n");
    printf("\t\t----------------------------------\n\n");
    printf("\t\t----------------------------------\n");

         file = fopen("drinks.txt", "r");   //open food.txt to read from file

      while(fgets(input,5000,file))     //to get full content of file
     {
        printf("%s",input);      //print the full information of file to display
     }

while(1)   //loop for unlimited selection
    {
    printf("\n\nEnter 0 For Finishing Input!\n\n");
Drinks:
printf("\nInput Your Item ID: ");
scanf("%d",&d);  //get for drinks item

if(d==101)
{
    printf("\nHow Many Soft Drinks Do You Want To Buy? : ");
    scanf("%d",&quantity);  //get input for quantity
    total=2*quantity;
        Total=Total+total;  //total for drink 101

    strcpy(info.DrinksID,"101");
     printf("\nYour selected Drinks Item:\nItem Name\tquantity\tPrice(RM)\n");
     printf("Soft Drinks\t  %d\t\t  %.2lf\n\n",quantity,total);

      file = fopen("receipt.txt", "a");   //open receipt.txt file to write information of  drink 101
      fprintf(file,"%5s\t",info.DrinksID);
      fprintf(file,"      Soft Drinks");
      fprintf(file,"\t\t%d",quantity);       /*write drink 101 information to receipt.txt file*/
      fprintf(file,"\t\t%.2lf\n",total);
      fclose(file);
}
else if(d==102)
{
    printf("\nHow Many Milk Shake Do You Want To Buy? : ");
    scanf("%d",&quantity);
    total=5*quantity;
        Total=Total+total;  //total for drink 102
    strcpy(info.DrinksID,"102");
    printf("\nYour selected Drinks Item:\nItem Name\tquantity\tPrice(RM)\n");
    printf("Milk Shake\t  %d\t\t  %.2lf\n\n",quantity,total);

      file = fopen("receipt.txt", "a");   /*write drink 102 information to receipt.txt file*/
      fprintf(file,"%5s\t",info.DrinksID);
      fprintf(file,"       Milk Shake");
      fprintf(file,"\t\t%d",quantity);      /*write drink 102 information to receipt.txt file*/
      fprintf(file,"\t\t%.2lf\n",total);
      fclose(file);
}
else if(d==0)

{
    system("cls");
    printf("\t\t          Unimas Kiosk\n");
    printf("\t\t----------------------------------\n");
    printf("\t\t----------------------------------\n\n");
    printf("\t\t----------------------------------\n");


printf("\nYou Finished Your Input For Drinks Item!!!\n\n");
printf("What Do you want to Perform Now?\n\n\t\t1.Buy More Ala-Carte\n\t\t2.Buy Combo Item\n\t\t3.Bill Option\n");
do
{
printf("Input : ");
scanf("%d",&e);
switch(e)
{
case 1:
    ala_carte();  //function call
    break;
case 2:
    combo();     //function call
    break;
case 3:
     receipt();   //function call
default:
    printf("Wrong Input! Input Again........\n");
    break;
}
}while(e!=2);

}


else
{
    printf("Wrong Input! Input Your Drinks ID again.........\n");
    goto Drinks;
}
    }
}
else
{
    printf("Wrong Input! Input Again...........\n\t");
goto ala;
}

}


void receipt()

{
   //static variable
   int answer;
   int choice;
   double Discount;
   double subtotal;
   double gst;
   double grandtotal;
   double cash;
   double change;
   char input[10000];
   //time.h function to read pc time and date
   time_t t;
   time(&t);

   system("cls");
   printf("Are you a Student?\n\t\t1.Yes\n\t\t2.No\n");

   printf("Input Answer: ");
   scanf("%d",&answer);  //get input for student/not student
if(answer==1){

    system("cls");


    printf("\t\t          Unimas Kiosk\n");
    printf("\t\t        Purchase Receipt\n\n\n");
    printf("Receipt ID     : %05d\n",receiptID);
    printf("Customer Type  : Student\n");
    printf("Date and Time  : %s\n",ctime(&t));

    fp=fopen("ReceiptDatabase.txt","a+"); //open ReceiptDatabase file to write current receipt at the end of file
    fprintf(fp,"\t\t          Unimas Kiosk\n");
    fprintf(fp,"\t\t        Purchase Receipt\n\n\n");
    fprintf(fp,"Receipt ID     : %05d\n",receiptID);
    fprintf(fp,"Customer Type  : Student\n");
    fprintf(fp,"Date and Time  : %s",ctime(&t));
    fprintf(fp,"-----------------------------------------------------------------------------\n");
    fprintf(fp,"Item Code\tItem Type\t    Quantity\t     Price(RM) \n");
    fprintf(fp,"-----------------------------------------------------------------------------\n");
    fclose(fp); //close file

    fptr=fopen("LastReceipt.txt","a+"); //open LastReceipt file to write current generated receipt
    fprintf(fptr,"\t\t          Unimas Kiosk\n");
    fprintf(fptr,"\t\t        Purchase Receipt\n\n\n");
    fprintf(fptr,"Receipt ID     : %05d\n",receiptID);
    fprintf(fptr,"Customer Type  : Student\n");
    fprintf(fptr,"Date and Time  : %s",ctime(&t));
    fprintf(fptr,"-----------------------------------------------------------------------------\n");
    fprintf(fptr,"Item Code\tItem Type\t    Quantity\t     Price(RM) \n");
    fprintf(fptr,"-----------------------------------------------------------------------------\n");
    fclose(fptr);//close file


    printf("-----------------------------------------------------------------------------\n");
    printf("Item Code\tItem Type\t    Quantity\t    Price(RM) \n");
    printf("-----------------------------------------------------------------------------\n");
     file = fopen("receipt.txt", "r"); //open receipt.txt file to print all current purchase info in display


      while(fgets(input,10000,file))
     {
        printf("%s",input);

         fp=fopen("ReceiptDatabase.txt","a+");//file open to write current receipt info at ReceiptDatabase file at the end of file
         fprintf(fp,"%s",input);
         fclose(fp);//file close
         fptr=fopen("LastReceipt.txt","a+");//file open to write current receipt info at LastReceipt file
         fprintf(fptr,"%s",input);
         fclose(fptr);//file close
}
    printf("\n-----------------------------------------------------------------------------\n");
    printf("\t\t\t\t\t    Total :   %.2lf\n",Total);


    Discount=(Total*10)/100;
    if(Discount>5)
    {
        Discount=5; //Defining the maximum discount as 5
    }
    printf("\t\t\t\t\t Discount :   %.2lf\n",Discount);


    subtotal=Total-Discount;
    printf("\t\t\t\t Total Before GST :   %.2lf\n",subtotal);


    gst=(subtotal*6)/100;
    printf("\t\t\t\t\t      GST :   %.2lf\n",gst);


    grandtotal=subtotal+gst;
    printf("\t\t\t\t     Total to Pay :   %.2lf\n",grandtotal);


    printf("\n\t\t             Please Pay your Bill :   ");
    scanf("%lf",&cash);

    change=cash-grandtotal;
    printf("\n\t\t\t\t\t   Change :   %.2lf\n\n",change);


    fp=fopen("ReceiptDatabase.txt","a+");//file open to write current receipt info at ReceiptDatabase file at the end of file
    fprintf(fp,"\n-----------------------------------------------------------------------------\n");
    fprintf(fp,"\t\t\t\t\t    Total :   %.2lf\n",Total);
    fprintf(fp,"\t\t\t\t\t Discount :   %.2lf\n",Discount);
    fprintf(fp,"\t\t\t\t Total Before GST :   %.2lf\n",subtotal);
    fprintf(fp,"\t\t\t\t\t      GST :   %.2lf\n",gst);
    fprintf(fp,"\t\t\t\t     Total to Pay :   %.2lf\n",grandtotal);
    fprintf(fp,"\t\t\t\t      Paid Amount :   %.2lf",cash);
    fprintf(fp,"\n\t\t\t\t\t   Change :   %.2lf\n\n",change);
    fclose(fp); //file close

    fptr=fopen("LastReceipt.txt","a+");//file open to write current receipt info at LastReceict file at the end of file
    fprintf(fptr,"\n-----------------------------------------------------------------------------\n");
    fprintf(fptr,"\t\t\t\t\t    Total :   %.2lf\n",Total);
    fprintf(fptr,"\t\t\t\t\t Discount :   %.2lf\n",Discount);
    fprintf(fptr,"\t\t\t\t Total Before GST :   %.2lf\n",subtotal);
    fprintf(fptr,"\t\t\t\t\t      GST :   %.2lf\n",gst);
    fprintf(fptr,"\t\t\t\t     Total to Pay :   %.2lf\n",grandtotal);
    fprintf(fptr,"\t\t\t\t      Paid Amount :   %.2lf",cash);
    fprintf(fptr,"\n\t\t\t\t\t   Change :   %.2lf\n\n",change);
    fclose(fptr);//file close

    Total=0;
    file=fopen("ReceiptID.txt","w");//open file to write Last receipt ID to file by discarding current ID
    fprintf(file,"%d",receiptID);
    fclose(file);//file close


   system("PAUSE");
   system("cls");



    printf("\nWant To Perform Another Purchase?\n\t\t1.Yes\n\t\t2.No\n");
    printf("Your Choice: ");
    scanf("%d",&choice);
    if(choice==1)
    {
        submenu();
    }
   else

   {
       Terminate();
   }

}
else if(answer==2)
{

    system("cls");
    printf("\t\t          Unimas Kiosk\n");
    printf("\t\t        Purchase Receipt\n\n\n");
    printf("Receipt ID     : %05d\n",receiptID);
    printf("Customer Type  : Not Student\n");
    printf("Date and Time  : %s\n",ctime(&t));


    fp=fopen("ReceiptDatabase.txt","a+"); //open ReceiptDatabase file to write current receipt at the end of file
    fprintf(fp,"\t\t          Unimas Kiosk\n");
    fprintf(fp,"\t\t        Purchase Receipt\n\n\n");
    fprintf(fp,"Receipt ID     : %05d\n",receiptID);
    fprintf(fp,"Customer Type  : Not Student\n");
    fprintf(fp,"Date and Time  : %s",ctime(&t));
    fprintf(fp,"-----------------------------------------------------------------------------\n");
    fprintf(fp,"Item Code\tItem Type\t    Quantity\t     Price(RM) \n");
    fprintf(fp,"-----------------------------------------------------------------------------\n");
    fclose(fp);

    fptr=fopen("LastReceipt.txt","a+");//open LastReceipt file to write current generated receipt
    fprintf(fptr,"\t\t          Unimas Kiosk\n");
    fprintf(fptr,"\t\t        Purchase Receipt\n\n\n");
    fprintf(fptr,"Receipt ID     : %05d\n",receiptID);
    fprintf(fptr,"Customer Type  : Not Student\n");
    fprintf(fptr,"Date and Time  : %s",ctime(&t));
    fprintf(fptr,"-----------------------------------------------------------------------------\n");
    fprintf(fptr,"Item Code\tItem Type\t    Quantity\t     Price(RM) \n");
    fprintf(fptr,"-----------------------------------------------------------------------------\n");
    fclose(fptr);


    printf("-----------------------------------------------------------------------------\n");
    printf("Item Code\tItem Type\t    Quantity\t     Price(RM) \n");
    printf("-----------------------------------------------------------------------------\n");
     file = fopen("receipt.txt", "r");


      while(fgets(input,10000,file))
     {
        printf("%s",input);
        fp=fopen("ReceiptDatabase.txt","a+");//file open to write current receipt info at ReceiptDatabase file at the end of file
        fprintf(fp,"%s",input);
         fclose(fp);

         fptr=fopen("LastReceipt.txt","a+"); //file open to write current receipt info at LastReceipt file
         fprintf(fptr,"%s",input);
         fclose(fptr);

     }



    printf("\n-----------------------------------------------------------------------------\n");
    printf("\t\t\t\t\t    Total :   %.2lf\n",Total);


    Discount= 0.00;

    printf("\t\t\t\t\t Discount :   %.2lf\n",Discount);


    subtotal=Total-Discount;
    printf("\t\t\t\t Total Before GST :   %.2lf\n",subtotal);


    gst=(subtotal*6)/100;
    printf("\t\t\t\t\t      GST :   %.2lf\n",gst);


    grandtotal=subtotal+gst;
    printf("\t\t\t\t     Total to Pay :   %.2lf\n",grandtotal);


    printf("\n\t\t             Please Pay your Bill :   ");
    scanf("%lf",&cash);


    change=cash-grandtotal;
    printf("\n\t\t\t\t\t   Change :   %.2lf\n\n",change);



    fp=fopen("ReceiptDatabase.txt","a+"); //file open to write current receipt info at ReceiptDatabase file at the end of file
    fprintf(fp,"\n-----------------------------------------------------------------------------\n");
    fprintf(fp,"\t\t\t\t\t    Total :   %.2lf\n",Total);
    fprintf(fp,"\t\t\t\t\t Discount :   %.2lf\n",Discount);
    fprintf(fp,"\t\t\t\t Total Before GST :   %.2lf\n",subtotal);
    fprintf(fp,"\t\t\t\t\t      GST :   %.2lf\n",gst);
    fprintf(fp,"\t\t\t\t     Total to Pay :   %.2lf\n",grandtotal);
    fprintf(fp,"\t\t\t\t      Paid Amount :   %.2lf",cash);
    fprintf(fp,"\n\t\t\t\t\t   Change :   %.2lf\n\n",change);
    fclose(fp);

    fptr=fopen("LastReceipt.txt","a+");//file open to write current receipt info at LastReceipt file at the end of file
    fprintf(fptr,"\n-----------------------------------------------------------------------------\n");
    fprintf(fptr,"\t\t\t\t\t    Total :   %.2lf\n",Total);
    fprintf(fptr,"\t\t\t\t\t Discount :   %.2lf\n",Discount);
    fprintf(fptr,"\t\t\t\t Total Before GST :   %.2lf\n",subtotal);
    fprintf(fptr,"\t\t\t\t\t      GST :   %.2lf\n",gst);
    fprintf(fptr,"\t\t\t\t     Total to Pay :   %.2lf\n",grandtotal);
    fprintf(fptr,"\t\t\t\t      Paid Amount :   %.2lf",cash);
    fprintf(fptr,"\n\t\t\t\t\t   Change :   %.2lf\n\n",change);
    fclose(fptr);


    Total=0;

    file=fopen("ReceiptID.txt","w"); //open file to write Last receipt ID to file by discarding current ID
    fprintf(file,"%d",receiptID);
    fclose(file);
    system("PAUSE");
    system("cls");
    printf("\t\t          Unimas Kiosk\n");
    printf("\t\t----------------------------------\n");
    printf("\t\t----------------------------------\n\n");
    printf("\t\t----------------------------------\n");


    printf("\nWant To Perform Another Purchase?\n\t\t1.Yes\n\t\t2.No\n");
    printf("Your Choice : ");
    scanf("%d",&choice);
    if(choice==1)
    {
        submenu();  //call Function
    }
   else

   {
      Terminate();   //call Function
   }
}
else
{
    printf("Invalid Choice!\n");
    receipt();  //call Function
}


}
void Terminate()
{
    system("cls");  //print new screen

    printf("\n\n\t\t\tThank You For Using Our System.\n\n");
    printf("\n\t\t\t\t Have a Nice Day!\n\n\n");
    printf("\t\t\t..........Welcome Again.............\n\n");
    exit(0);  //Program Exit here
}

void submenu()
{
    int i;
    char *menu2[] = {"Gadha","Ala_carte","Exit"};
    system("cls");
    printf("\t\t     Welcome To Unimas Kiosk\n");
    printf("\t\t----------------------------------\n");
    printf("\t\t----------------------------------\n\n");
    printf("\t\t----------------------------------\n");
    printf("\t\t----------------------------------\n\t");
    printf("\t\t   Main Menu: \n");
    printf("\t\t\t   ----------\n\t");

  do{
         for(i=0;i<3;i++)
	{
		printf("\t\t  %d. %s\t\n\t",i+1,menu2[i]); //display menu
	}
    printf("Choose Option: ");
    scanf("%d",&i);
    if(i==1)
    {
    combo();
    break;
    }

    else if(i==2)
    {
        ala_carte();
       break;
    }
    else if(i==3)
    {
    Terminate();
    break;
    }
    else
    {
        printf("Invalid Choice...........\n\t");
    }
}while(i!=3);


}

void mainmenu()
{
    file = fopen("receipt.txt", "w");//open receipt.txt file in write mode to discard current content
    fclose(file);//file close
    fptr=fopen("LastReceipt.txt","w");//open LastReceipt.txt file in write mode to discard current content
    fclose(fptr);//file close

    file = fopen("ReceiptID.txt", "r");//open ReceiptID.txt file to read current receipt ID
    fscanf(file,"%d",&receiptID);//assigning receiptID to program from file
    receiptID++; //Increment of receiptID value for next  receipt
    fclose(file);//file close

    submenu();
}

int main()

{
system("COLOR F4");
mainmenu();

}
