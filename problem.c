#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void series1();
void series2();
void series3();
void series4();
void series5();
void series6();
void series7();
void series8();
void series9();
void series10();
void series11();
void series12();
void series13();
void series14();
void series15();
void series16();
void series17();
void series18();
void series19();
void series20();
void series21();
void summation22();
int summation23();
void summation24();
int summation25();
void menu();
void info();

int main()
{
    while(1)
{
    problems();
    menu();
}
    return 0;
}

void menu(){
   int choice,x,y;
   printf("\nenter the value of choice: ");
   scanf("%d",&choice);
switch(choice){
            case 1:
                series1();
                getchar();
                break;
            case 2:
                series2();
                getchar();
                break;
            case 3:
                series3();
                getchar();
                break;
           case 4:
                series4();
                getchar();
                break;
            case 5:
                series5();
                getchar();
                break;
            case 6:
                series6();
                getchar();
                break;
            case 7:
                series7();
                getchar();
                break;
            case 8:
                series8();
                getchar();
                break;
            case 9:
               series9();
               getchar();
               break;
           case 10:
               series10();
               getchar();
               break;
           case 11:
               series11();
               getchar();
               break;
           case 12:
               series12();
               getchar();
               break;
           case 13:
               series13();
               getchar();
               break;
           case 14:
               series14();
               getchar();
               break;
           case 15:
               series15();
               getchar();
               break;
           case 16:
               series16();
               getchar();
               break;
           case 17:
               series17();
               getchar();
               break;
           case 18:
               series18();
               getchar();
               break;
           case 19:
               series19();
               getchar();
               break;
           case 20:
               series20();
               getchar();
               break;
            case 21:
               series21();
               getchar();
               break;
           case 22:
               summation22();
               getchar();
               break;
           case 23:
               printf("Enter value of x & y: ");
               scanf("%d %d",&x,&y);
               summation23(x,y);
               getchar();
               break;
          case 24:
               printf("Enter value of x & y: ");
               scanf("%d %d",&x,&y);
               summation24(x,y);
               getchar();
              break;
          case 25:
              summation25();
              getchar();
              break;
          case 26:
              problems();
              getchar();
              break;
          case 27:
              info();
              getchar();
              break;
}
}
void series1(){
    int i;
    printf("Series1 = ");
    for(i = 1; i <= 100; i++){
        printf("%d,",i);
    }
    printf("\n\nPress ENTER to get menu.");
    getchar();
}
void series2(){
    int i;

    printf("\n\nSeries2 = ");
    for(i = 1; i <= 100; i++){
        i = i+1;
        printf("%d,",i);
    }
    printf("\n\nPress ENTER to get menu.");
    getchar();
}
void series3(){
    int i;

    printf("\n\nSeries3 = ");
    for(i = 1; i <= 100; i++){
    if(i!=100)
        printf("%d,",i);
        i = i+1;
    }
    printf("\n\nPress ENTER to get menu.");
    getchar();
}
void series4(){
    int i,n;
    printf("\n\nEnter a number n : ");
    scanf("%d",&n);
    printf("Series4 = ");
    for(i = 1; i <= n; i++){
        printf("%d,",i);
    }
    printf("\n\nPress ENTER to get menu.");
    getchar();
}
void series5(){
    int i,n;
    printf("\n\nEnter an even number n : ");
    scanf("%d",&n);
    printf("Series5 = ");
    for(i = 1; i <= n; i++){
        i = i+1;
        printf("%d,",i);
    }
    printf("\n\nPress ENTER to get menu.");
    getchar();
}
void series6(){
    int i,n;
    printf("\n\nEnter an odd number n : ");
    scanf("%d",&n);
    printf("Series6 = ");
    for(i = 1; i <= n; i++){
        printf("%d,",i);
       i = i+1;
    }
    printf("\n\nPress ENTER to get menu.");
    getchar();
}
void series7(){
    int i = 1 ;
    printf("\n\nSeries7 = ");
    do{
    printf("%d,",i);
    i = i+3;

    }while(i <= 100);
    printf("\n\nPress ENTER to get menu.");
    getchar();
}
void series8(){
    int i = 5 ;
    printf("\n\nSeries8 = ");
    do{
    printf("%d,",i);
    i = i+5;

    }while(i <= 100);
    printf("\n\nPress ENTER to get menu.");
    getchar();
}
void series9(){
    int i,x;
    printf("\n\nSeries9 = ");
    i = 1;
    do{
        x = i * i;
        printf("%d,",x);
        i++;
      }while(x < 100);
      printf("\n\nPress ENTER to get menu.");
      getchar();
}
void series10(){
    int i,x;
    printf("\n\nSeries10 = ");
      i = 1;
    do{
        x = i * i * i;
        printf("%d,",x);
        i++;
      }while(x < 1000);
      printf("\n\nPress ENTER to get menu.");
      getchar();
}
void series11(){
    int i;
    printf("\n\nSeries11 = ");
    for(i = 1; i <=100; i++)
    printf("%d+", i);
    printf("\n\nPress ENTER to get menu.");
    getchar();
}
void series12(){
    int i,n;
    printf("\n\nEnter the number of n: ");
    scanf("%d",&n);
    printf("\n\nSeries11 = ");
    for(i = 1; i <=n; i++)
    printf("%d+", i);
    printf("\n\nPress ENTER to get menu.");
    getchar();
}
void series13(){
    int a;
    printf("\n\nSeries13 = ");
    for(a = 65; a <= 90; a++)
        printf("%c,",a);
        printf("\n\nPress ENTER to get menu.");
        getchar();
}
void series14(){
        int a;
    printf("\n\nSeries14 = ");
    for(a = 65; a <= 90; a++){
        printf("%c,",a);
        a = a + 1;
    }
    printf("\n\nPress ENTER to get menu.");
    getchar();
}
void series15(){
    int a;
    printf("\n\nSeries15 = ");
    for(a = 65; a <= 90; a++){
        a = a + 1;
        printf("%c,",a);

    }
    printf("\n\nPress ENTER to get menu.");
    getchar();
}
void series16(){
    int a;
    printf("\n\nSeries16 = ");
    for(a = 97; a <= 122; a++)
        printf("%c,",a);
        printf("\n\nPress ENTER to get menu.");
        getchar();
}
void series17(){
        int a;
    printf("\n\nSeries17 = ");
    for(a = 97; a <= 122; a++){
        printf("%c,",a);
        a = a + 1;
    }
    printf("\n\nPress ENTER to get menu.");
    getchar();
}
void series18(){
    int a;
    printf("\n\nSeries18 = ");
    for(a = 97; a <= 122; a++){
        a = a + 1;
        printf("%c,",a);

    }
    printf("\n\nPress ENTER to get menu.");
    getchar();
}
void series19(){
    int i = 100;
    printf("\n\nSeries19 = ");
    do{
        printf("%d,",i);
        i--;
    }while(i >= 1);
    printf("\n\nPress ENTER to get menu.");
    getchar();
}
void series20(){
    int i = 100;
    printf("\n\nSeries20 = ");
    do{
        i = i - 1;
        printf("%d,",i);
        i--;
    }while(i >= 1);
    printf("\n\nPress ENTER to get menu.");
    getchar();
}
void series21(){
    int i = 100;
    printf("\n\nSeries21 = ");
    do{
        printf("%d,",i);
        i--;
        i = i - 1;
    }while(i >= 1);
    printf("\n\nPress ENTER to get menu.");
    getchar();
}

void summation22()
{
   int x,y,z;
   printf("\nSummation22 : ");
   printf("\nenter the value of x&y : ");
   scanf("%d %d",&x,&y);
   printf("%d+%d=%d",x,y,z=x+y);
   printf("\n\nPress ENTER to get menu.");
   getchar();
}
int summation23(int x,int y)
{
   int r;
   r=x+y;
   printf("\nSummation23 : ");
   printf("r = %d value returned.",r);
   return r;
   printf("\n\nPress ENTER to get menu.");
   getchar();
}
void summation24(int x,int y)
{
   int z;
    z = x + y ;
    printf("\nSummation24 : ");
    printf("%d+%d=%d",x,y,z);
    printf("\n\nPress ENTER to get menu.");
    getchar();
}
int summation25()
{
    int x,y;
    printf("\nSummation25 :");
    printf("\nenter the value of x&y: ");
    scanf("%d %d",&x,&y);
    printf("x,y = %d,%d value returned.",x,y);
    return(x,y);
    printf("\n\nPress ENTER to get menu.");
    getchar();
}
void problems()
{
   printf("\n\n1= 1,2,3,4,5..100\n");
   printf("2= 2,4,6,8,10..100\n");
   printf("3= 1,3,5,7...99\n");
   printf("4= 1,2,3,4,5....n\n");
   printf("5= 2,4,6,8....n\n");
   printf("6= 1,3,5,7,9.....n\n");
   printf("7= 1,4,7,10....100\n");
   printf("8= 5,10,15,20, 25....100\n");
   printf("9= 1,4,9,16......100\n");
   printf("10= 1,8,27,64......1000\n");
   printf("11= 1+2+3+4+5+6......+100\n");
   printf("12= 1+2+3+4+5+6+.......+n\n");
   printf("13= A,B,C,D,E,...........W,X,Y,Z\n");
   printf("14= A,C,E,G...........W,Y\n");
   printf("15= B,D,F,H.............X,Z\n");
   printf("16= a,b,c,d,e,f,..........,y,z\n");
   printf("17= a,c,e,g............x,y\n");
   printf("18= b,d,f,h,.........,x,y\n");
   printf("19= 100,99,98,97,96....3,2,1\n");
   printf("20= 99,97,95,93.........5,3,1\n");
   printf("21= 100,98,96,94.......6,4,2\n");
   printf("22= c function without arguments and without return value\n");
   printf("23= c function with arguments and with return value\n");
   printf("24= c function with arguments and without return value\n");
   printf("25= c function without arguments and with return value\n");
   printf("26= Info\n");

}
void info(){
    printf("\nName: ");
    printf("\nId: ");
    printf("\nBatch: ");
    printf("\nSection: ");
}
