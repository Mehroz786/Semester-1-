#include<stdio.h>
int main(){
int products_names , products_price , products_code , total, code ,products;
 printf("products_names = wheat , rice, milk , eggs, pulses");
printf("\nproducts_code  = wheat(1045), rice(6866), milk(1245), eggs(9876), pulses(6987)");
printf("\nproducts_price = wheat(60), rice(80), milk(110), eggs(60), pulses(58)");
float whQ , riceQ , milkQ,eggQ ,pulseQ , dis, payamount;

printf("\nEnter the code of the product: ");
scanf("%d",&code);
if (code == 1045)
{   printf("your product is wheat now enter quantity: ");
    scanf("%f",&whQ);}
else if (code == 6866)
    {printf("your product is rice now enter quantity: ");
    scanf("%f",&riceQ);}
else if (code == 1245)
{
    printf("your product is milk now enter quantity: ");
    scanf("%f",&milkQ);
}
else if (code == 9876)
{
    printf("your product is egg now enter quantity: ");
    scanf("%f",&eggQ);
}
else if (code == 6987)
{
    printf("your product is pulses now enter quantity: ");
    scanf("%f",&pulseQ);
}

printf("\nEnter the code of  2nd the product: ");
scanf("%d",&code);
if (code == 1045)
{   printf("your product is wheat now enter quantity: ");
    scanf("%f",&whQ);}
else if (code == 6866)
    {printf("your product is rice now enter quantity: ");
    scanf("%f",&riceQ);}
else if (code == 1245)
{
    printf("your product is milk now enter quantity: ");
    scanf("%f",&milkQ);
}
else if (code == 9876)
{
    printf("your product is egg now enter quantity: ");
    scanf("%f",&eggQ);
}
else if (code == 6987)
{
    printf("your product is pulses now enter quantity: ");
    scanf("%f",&pulseQ);
}

printf("\nEnter the code of the 3rd product: ");
scanf("%d",&code);
if (code == 1045)
{   printf("your product is wheat now enter quantity: ");
    scanf("%f",&whQ);}
else if (code == 6866)
    {printf("your product is rice now enter quantity: ");
    scanf("%f",&riceQ);}
else if (code == 1245)
{
    printf("your product is milk now enter quantity: ");
    scanf("%f",&milkQ);
}
else if (code == 9876)
{
    printf("your product is egg now enter quantity: ");
    scanf("%f",&eggQ);
}
else if (code == 6987)
{
    printf("your product is pulses now enter quantity: ");
    scanf("%f",&pulseQ);
}

printf("\nEnter the code of the 4th product: ");
scanf("%d",&code);
if (code == 1045)
{   printf("your product is wheat now enter quantity: ");
    scanf("%f",&whQ);}
else if (code == 6866)
    {printf("your product is rice now enter quantity: ");
    scanf("%f",&riceQ);}
else if (code == 1245)
{
    printf("your product is milk now enter quantity: ");
    scanf("%f",&milkQ);
}
else if (code == 9876)
{
    printf("your product is egg now enter quantity: ");
    scanf("%f",&eggQ);
}
else if (code == 6987)
{
    printf("your product is pulses now enter quantity: ");
    scanf("%f",&pulseQ);
}

printf("\nEnter the code of the 5th product: ");
scanf("%d",&code);
if (code == 1045)
{   printf("your product is wheat now enter quantity: ");
    scanf("%f",&whQ);}
else if (code == 6866)
    {printf("your product is rice now enter quantity: ");
    scanf("%f",&riceQ);}
else if (code == 1245)
{
    printf("your product is milk now enter quantity: ");
    scanf("%f",&milkQ);
}
else if (code == 9876)
{
    printf("your product is egg now enter quantity: ");
    scanf("%f",&eggQ);
}
else if (code == 6987)
{
    printf("your product is pulses now enter quantity: ");
    scanf("%f",&pulseQ);
}
total = (60*whQ) + (80*riceQ) + (110*milkQ) + (60*eggQ) + (58*pulseQ);
printf("your total bill is = %d",total);
if (total>10000)
{
    dis = total*10/100;
    printf("\n your discount is = %.1f", dis );
    payamount = total - dis;
    printf("\nyou have purchased wheat rice milk eggs and pulses ");
    printf("\nthe amount you have to pay is = %f", payamount);
}
else
{
    printf("\nyou got no discount");
    printf("\nyou have purchased wheat rice milk eggs and pulses ");
    printf("\nthe amount you have to pay is = %d", total);
}
return 0;}









