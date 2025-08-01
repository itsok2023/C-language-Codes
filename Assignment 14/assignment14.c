// Program to calculate total price with 10% discount for quantity >= 50

# include <stdio.h>

int main()
{
    
    float price, totalprice, discount, quantity;

    printf("Enter Quantity of Product : ");
    scanf("%f",&quantity);

    printf("Enter Price per Product : ");
    scanf("%f",&price);

    totalprice = quantity * price;

    if(quantity >= 50){
        discount = (totalprice * 10) / 100;
        totalprice = totalprice - discount;
    }

    printf("\nPlease Pay ₹%.2f", totalprice);
    
    return 0;
}