#include <stdio.h>
#include <string.h>
//Compiler version gcc  6.3.0
char s1[50],s2[50],s3[50],s4[50];
int main()
{
  home();
}
void create()
{
  int a;
  printf("   Enter username :  ");
  scanf("%s",&s1);
  printf("   Enter password : ");
  scanf("%s",&s2);
  printf("     .................procced.......................\n");
  printf("     .................thank you for sign in..................\n");
  printf("   press 0 to back home page\n");
  scanf("%d",&a);
  if (a==0)
  home();
}


void login1()
{
  printf("   Enter your username : \n");
  scanf("%s",&s3);
  printf("   Enter your password : \n");
  scanf("%s",&s4);

  if(strcmp(s1,s3)==0)
  {
     if(strcmp(s2,s4)==0)
     {
       printf("    .......................Welcome......................\n");
       entry();
     }
     else
     {
       printf("  wrong password\n ");
     }
  }
  else
   {
    printf("  wrong username\n");
   }
   
  }
  
  
void home()
{
  int b;
  printf(" xxxxxxx.....welcome to invincibles transporting system.....xxxxxxxx\n");
  printf("     1= create profile \n     2= login\n");
  printf("     enter choice\n");
  scanf("%d",&b);
  if (b==1)
  create();
  else if (b==2)
  login1();
  else
  printf("      wrong input\n ");
  home();
}

int akola[10]={0,0,0,0,0,0,0,0,0,0};
int nanded[10]={0,0,0,0,0,0,0,0,0,0};
int aurangabad[10]={0,0,0,0,0,0,0,0,0,0};
int bn,sn,back;


void entry(int a)
    {
        printf(" 1= list \n 2 = book \n 3= cancel \n 4 = status \n 5 = exit \n enter no >");
        scanf("%d",&a);
        if (a==1)
        {
        list();
        }
        else if (a==2)
        {
        book();
        }
        else if (a==3)
        {
        cancel();
        }
        else if (a==4)
        {
        bus_status();
        }
        else if(a==5)
        {
        home();
        }
        else
        printf("no values");
    }
void list()
{
    printf("    xxxxxxxxxxxxxxx here list is given of buses with there timings xxxxxxxxxxxxxxxxxxxxx\n");
    printf("  1 >akola, time =12.00am\n  2> nanded , time= 1.00am \n  3> aurangabad ,time=2.00am\n");
    printf("  press 0 for back\n");
    scanf("%d",&back);
    if (back==0)
    entry(3);
    
}
void book()
{
    printf("     xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
    printf("     ...............welcome to booking system.........................\n");
    printf("  1>akola\n  2> nanded \n  3> aurangabad\n");
    printf("  enter bus no >\n");
    scanf("%d",&bn);
    printf("  there are seats available from 0 to 9 only due to covid\n");
    printf("  enter seat no >\n");
    scanf("%d",&sn);
    if (bn == 1)
        {if (akola[sn]==0&&sn<=10)
           { akola[sn]=1;
            printf("......congratulation your seat is booked......\n");}
        else
            {printf("  seat is already book or you enterd wrong seat no\n  enter seat no till 9 only\n");}}
    else if (bn==2)
        {if (nanded[sn]==0&&sn<=10)
           { nanded[sn]=1;
            printf("  ....congratulation your seat is booked..........\n");}
        else
            {printf("  seat is already book or you enterd wrong seat no\n  enter seat no till 9 only\n");}}
    else if (bn==3)
        {if (aurangabad[sn]==0&&sn<=10)
           { aurangabad[sn]=1;
            printf("  .....congratulation your seat is booked......\n");}
        else
            {printf("  seat is already book or you enterd wrong seat no\n  enter seat no till 9 only\n");}}
    printf("  enter 0 to back");
    scanf("%d",&back);
    if (back==0)
    entry(3);
}
void cancel()
{
    printf("    ........here you can cancel your seat..........\n");
    printf("   1 >akola\n   2> nanded \n   3> aurangabad\n");
    printf("   enter bus no  >\n");
    scanf("%d",&bn);
    printf("   enter seat no >\n");
    scanf("%d",&sn);
    if (bn == 1)
        {if (akola[sn]==1&&sn<=10)
           { akola[sn]=0;
            printf("  yeah! your seat is canceled\n");}
        else
            {printf("   seat is already empty or wrong seat no entered\n");}}
    else if(bn==2)        
        {if (nanded[sn]==1&&sn<=10)
           { nanded[sn]=0;
            printf("  yeah! your seat is canceled\n");}
        else
            {printf("  seat is already empty or wrong seat no entered\n");}}
    else if(bn==3)        
        {if (aurangabad[sn]==1&&sn<=10)
           { aurangabad[sn]=0;
            printf("  yeah! your seat is canceled\n");}
        else
            {printf("  seat is already empty or wrong seat no entered\n");}}
    printf("  enter 0 to back\n");
    scanf("%d",&back);
    if (back==0)
    entry(3);
}
void bus_status()
{
    int i;
    printf("     xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
    printf("     .............see status of bus seat availabilty.................\n");
    printf("  1 >akola\n  2> nanded \n  3> aurangabad\n");
    printf("   enter bus no to see its seat status\n");
    scanf("%d",&bn);
    if(bn==1)
    for (i = 0; i < 10; i++)
    {
    printf("%d ", akola[i]);
    }
    if (bn==2)
    for (i = 0; i < 10; i++) 
    {
    printf("%d ", nanded[i]);
    }
    if (bn==3)
    for (i = 0; i < 10; i++) 
    {
    printf(" %d ", aurangabad[i]);
    }
    printf("\n   enter 0 to back\n");
    scanf("%d",&back);
    if (back==0)
    entry(3);
}