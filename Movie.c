# include<stdio.h>

int main() {
    int a,b,c,d,e;
    printf("Movies Codes: \n Avengers Infinity War   : 1 \n Superman                : 2 \n Spider Man Now Way Home : 3 \n Iron Heart              : 4 \n End Game                : 5\n");
    printf("Enter the movie code you want to watch\n");
    scanf("%d",&a);
    printf("Enter the no of Tickets\n");
    scanf("%d",&b);
    printf("|10$ For Snacks|\n\n");
    // printf("Enter\n1 for COKE\n2 for FANTA\n3 for PEPSI\n1 for SPRITE\n");
    printf("No of Scanks\n");
    scanf("%d",&d);
    printf("|20$ For Drink|\n\n");
    printf("No of Drinks\n");
    scanf("%d",&e);
    printf("\n");
if(a==1){
    printf("Tickets will be %d$\n",b*100+(d*10)+(e*20));
}
else if(a==2){
    printf("Tickets will be %d$\n",b* 150+(d*10)+(e*20));
}
else if(a==3){
    printf("Tickets will be %d$\n",b*160+(d*10)+(e*20));
}
else if(a==4){
    printf("Tickets will be %d$\n",b*190+(d*10)+(e*20));
}
else if(a==5){
    printf("Total %d$\n",b*1000+(d*10)+(e*20));
}
else {
    printf("Please enter a valid value");
}
return 0;
}
