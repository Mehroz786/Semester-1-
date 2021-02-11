//Assignement No 3
#include<stdio.h>
#include<string.h>
//#include<unistd.h>
// Making a structure
struct book_count
{
    int ID;
    char Book_Name[100];
    char Aurthor [100];
    char PDate[100];
    int code;
    int Price;
    int copies_p;
    int copies_s;
}books;

// Making Functions
//Function to search book by its ID
void search(struct book_count books[])
{
    int i, id,flag;
    printf("\033[1;34m");
    printf("Enter Book Id to search book::     ");
    scanf("%d",&id);
    printf("\033[0m;");
    for(i=0;i<100;i++)
    {
        flag = 0;
        if  (id == books[i].ID)
        {
            flag = 1;
        break;
        }
    }
    if(flag == 1)
    {
        printf("\033[1;31m");
        printf("The ID of BOOk is: %d \nThe name of books is: %s\nThe author of books is: %s\nBook was published atDD/MM/YYYY: %s\n Code of Books is: %d\n Prices is: Rs%d\nNumber of copies : %d\nSold : %d",books[i].ID,books[i].Book_Name,books[i].Aurthor,books[i].PDate,books[i].code,books[i].Price,books[i].copies_p,books[i].copies_s);
        printf("\033[0m;");
    }
    else
        printf("Not Found");
    }
// End Search Function

// Function to Delete Book
void delete_record(struct book_count books[])
{
    int i , key , flag=0;
    printf("\033[1;31m");
    printf("\n Enter the ID of Book you want to delete :              ");
    printf("\033[0m");
    scanf("%d",&key);
               for(i=0;i<100;i++)
               {

                   if( key == books[i].ID)
                   {
                       flag = 1;
                       break;
                   }
               }
    if(flag == 1 )
    {
        books[i].ID = 0;
        strcpy(books[i].Book_Name , " ");
        strcpy(books[i].Aurthor , " ");
        strcpy(books[i].PDate , " ");
        books[i].code = 0;
        books[i].Price  = 0;
        books[i].copies_p = 0;
        books[i].copies_s = 0;
        printf("\n \t\t\t The Record of the book is deleted");
    }
else
    printf("\n\5tID Number is Invalid");
}
//End Deleted Function

// Display Function
void disp(struct book_count books[])
{
    printf("-----------------------------------------------------------------------------------------------------------------------------------\n");
    printf("\033[0;34m");
    printf("ID\tName\t\t\tAuthor\t\t\tDate\t\tCode\t\tPrice (RS)\t\tStore\t\tSold\n");
    printf("\033[0m");
    printf("-----------------------------------------------------------------------------------------------------------------------------------\n");
    int i,flag;
    for(i=0;i<100;i++)
    {flag=0;
    if(books[i].ID == 0)
    {
        flag = 1;
        continue;
    }
    else
printf("\n%d\t%s\t\t\t%s\t\t\t%s\t%d\t\t%d\t\t%d\t\t%d\n",books[i].ID,books[i].Book_Name,books[i].Aurthor,books[i].PDate,books[i].code,books[i].Price,books[i].copies_p,books[i].copies_s);

    }


}

// End Display Function

// Function to ADD Book
void add(struct book_count books[])
{
    printf(" \t\t\t\t\tAdd Book Function \n");
    int i , flag=0;
    for(i=0;i<100;i++)
    {

        if (books[i].ID == 0)
        {
            flag = 1;
            break;
        }
    }
if (flag == 1)
{
    printf("Enter the Book ID:      ");
    scanf("%d",&books[i].ID);
    printf("Enter the Book Name:     ");
    scanf("%s",&books[i].Book_Name);
    printf("Enter the Aurthor Name:     ");
    scanf("%s",&books[i].Aurthor);
    printf("Enter the Publish Date:       ");
    scanf("%s",&books[i].PDate);
    printf("Enter the Book Code:        ");
    scanf("%d",&books[i].code);
    printf("Enter Book Price in Rs: ");
    scanf("%d",&books[i].Price);
    printf("Enter the Number of Copies In Store:     ");
    scanf("%d",&books[i].copies_p);
    printf("Enter the Number of Copies Sold:     ");
    scanf("%d",&books[i].copies_s);
}
else
    printf("Space is Full ");
}
// End Add Function

// Sale Function
void salebooks(struct book_count books[])
{
    int i , key, flag ,copies,Nflag = 0;
    printf("\n \tEnter the ID of Book:   ");
    scanf("%d",&key);
    for(i=0;i<100;i++)
    {
        flag = 0;
        if(key == books[i].ID)
        {
            flag = 1;
            break;
        }
    }
if (flag == 1)
{
    printf("\n\t\tBook is Found");
    printf("\033[0;34m");
    printf("\nName of Book is: %s \n Number of copies in Store are:  %d",books[i].Book_Name,books[i].copies_p);
     printf("\033[0m");
     printf("\n\n \t\t Now Enter how many Copies do you want:    ");
     scanf("%d",&copies);


}
else
    {printf("\033[1;31m");
    printf("\t\tBook is not Found");
printf("\033[0m");}
// Loop for Number of Copies count

    if(books[i].copies_p < copies)
    {       printf("\033[1;31m");
            printf("\nNumber of Copies are not Enough");
            printf("\033[0m");
    }

else
    {
      books[i].copies_p -=copies;
     books[i].copies_s +=copies;
     printf("\033[1;31m");
     printf("\nYou have Sale the Book Transaction Completed ");
     printf("\033[0m");
    }
}
// End Sale function

// Main Function
int main()
{
    printf("\033[0;31m"); // This is for color change to Red
printf("----------------Program to Manage Books Records--------------- ");
        printf("\033[0m");
    int menue;
    // Initializing Array with 10 Books
    struct book_count books[100] = {{1,"Zavia","Ishfaq","1/2/2002",123,800,10,2},{2,"CAG","Munem","5/2/2002",456,1600,5,1},{3,"Urdu","Carvan","5/2/2020",865,120,150,0},{4,"English","Wren","5/6/1998",156,8970,3,0},{5,"Python","Mark","1/2/2013",698,550,36,4},{6,"JAVA","Mark","5/0/2013",325,550,30,1},{7,"ECA","Austin","9/2/2003",368,330,50,0},{8,"Zavia2","Ishfaq","2/2/2002",894,800,30,5},{9,"Ash","Malinda","2/2/2009",654,900,50,6},{10,"Zavia3","Ishfaq","8/6/2006",895,800,50,0}};
// Do while for loop
do{
    printf("\033[0;34m"); // this change color to Blue
    printf("\n---> Press 1 to Add Book Record \n---> Press 2 to Display Books Record \n---> Press 3 to Delete Book Record \n---> Press 4 to Search Book BY ID \n---> Press 5 to SALE BOOK \n---> Press 6 to EXIT ");
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
        add(books);
    break;
case 2:      // Case for Displaying Recordes
        printf("\033[0;34m");
        printf("\t\t\t\t\tUsing Display Function\n");
        printf("\033[0m");

        disp(books);
        break;
case 3:          // Case for Delete Book
        printf("\033[0;34m");
        printf("\t\t\t\t\tUsing Delete Function");
        printf("\033[0m");

        delete_record(books);
    break;
case 4:             // Case for Search Book
        printf("\033[0;34m");
        printf("\n\t\t\t\tUsing Search Function\n");
        printf("\033[0m");

        search(books);
        break;

case 5:             // For Sale
        printf("\033[0;34m");
        printf("\t\t\t\t\tUsing Sale Function");
        printf("\033[0m");
        salebooks(books);
    break;
 default:
        printf("the command is not in the switch");}
}
}while("True");
}
