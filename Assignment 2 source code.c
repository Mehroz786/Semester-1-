// Assignment 2
// Muhammad Mehroz
// FA20-BSE-071
#include<stdio.h>
// Global Array
int books[20] = {1001,1002,1003,1004,1005,1006,1007,1008,1009,1010,1011,1012,1013,1014,1015};
// ADD BOOK CODE FUNCTION
void add(int a)
{
int i , flag;
for(i=0 ; i < 20 ;i++ )
{
   flag = 0;
   if ( books[i] == 0)
   {
   flag = 1;
   break;
   }

}
if (flag == 1)

{books[i] = a;
printf("\033[1;31m");
printf("\t\t\tThe code is added in array");
printf("\033[0m;");
}

else if (flag == 0)
{   printf("\033[1;31m");
    printf("\t\t\tThe array is full");
    printf("\033[0m");}
} // End ADD BOOK CODE Function.

// Function to displaycodes
void printbook()
{
    printf("\nSR \t\tCode \t\tIndex");
int i ;
for (i=0;i<20;i++)
{printf("\n%d    \t\t%d  \t\t%d",i+1,books[i],i);}
} // End print book

// Function to delete code
void deletebookcode(int code)
{
int i , flag;
for(i=0 ; i < 20 ;i++ )
{
   flag = 0;
   if (books[i] == code)
   {
   flag = 1;
   break;
   }

}
if (flag == 1)
{printf("The Book Code is Found at %d",i+1);
books[i] = 0;
printf("\033[1;31m");
printf(" \n\t The code is deleted");
printf("\033[0m");}

else
{printf("\033[1;31m");
printf("\tThe Book Code is not Found");
printf("\033[0m");
}
}// End Delete code

// Function for Search book code
void searchbook(int num)
{
int i , flag;
for(i=0 ; i < 20 ;i++ )
{
   flag = 0;
   if (books[i] == num)
   {
   flag = 1;
   break;
   }

}
if (flag == 1)
{
printf("\033[1;31m");
printf("The Book is Found");
printf("\033[0m");
}
else
{printf("\033[1;31m");
    printf("The book is not found");
    printf("\033[0m");
}}// End searchbook

// Sort book Function
void sortbooks()
{
int m , i , max;
for (i = 0 ; i<=20 ; i++)
{
    for (m = i+1 ; m<20 ; m++)
    {
        if (books[i]< books[m])
        {
            max = books[m];
            books[m] = books[i];
            books[i] =  max;
        }
    }
}
printf("\033[0;34m");
printf("\n--------------The array in descending order is follows---------");
printf("\033[0m");
for (i= 0 ; i<20 ;i++)
{
    printf("%d\n",books[i]);
}
}

// Main body
int main()
{
 int menue, a ,key , num ,m ,b ;
        printf("\033[0;31m"); // This is for color change to Red
printf("----------------Assignment to Manage Books Codes--------------- ");
        printf("\033[0m");
// Do while for loop
do{
    printf("\033[0;34m"); // this change color to Blue
    printf("\n---> Press 1 to add book \n---> Press 2 to Display Books \n---> Press 3 to Delete Book code \n---> Press 4 to Search Book Code \n---> Press 5 to Sort Books Code \n---> Press 6 to EXIT ");
    printf("\033[0m");
    printf("\033[1;31m");
    printf("\n\n\t\t\t\t Please Select the Command");
        printf("\033[0m");
    printf("\nEnter command here:    ");
    scanf("%d",&menue);
   if (menue== 6){
   break;}
   else {
    switch(menue)
    {
    case 1:           // Case for add function
        printf("\033[0;34m");
        printf("\t\t\t\t\tUsing ADD Function");
        printf("\033[0m");
        printf("\n\t\t\tAdd New Code");
        printf("\n Enter the code of book you want to enter:      ");
        scanf("%d",&b);
        add(b);
    break;
    case 2:      // Case for Deleting values
        printf("\033[0;34m");
        printf("\t\t\t\t\tUsing Display Function");
        printf("\033[0m");

        printbook();
        break;
    case 3:          // Case for
        printf("\033[0;34m");
        printf("\t\t\t\t\tUsing Delete Function");
        printf("\033[0m");
        printf("\nEnter the code you want to delete:   ");
        scanf("%d",&key);
        deletebookcode(key);
    break;
    case 4:
        printf("\033[0;34m");
        printf("\n\t\t\t\tUsing Search Function");
        printf("\033[0m");
        printf("\nEnter the book code you want to search:   ");
        scanf("%d",&num);
        searchbook(num);
        break;
    case 5:
        printf("\033[0;34m");
        printf("\t\t\t\t\tUsing Sort Function");
        printf("\033[0m");
        sortbooks();
    break;
    default:
        printf("the command is not in the switch");}
}
}while("True");
}

