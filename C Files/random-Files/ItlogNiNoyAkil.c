#include <stdio.h>

void menu();
int getType();
int getOrder();
int getAmount();
float total(int egg_orders, int egg_type);
float off(int egg_orders, float total_cost);
float discounted(float total_cost, float discount);
float sukli(int amount, float discounted_price, float total_cost);

int main(void)
{
    int egg_type, egg_orders, amount;
    float total_cost, discount, discounted_price, change;
    menu();

    egg_type = getType();
    egg_orders = getOrder();
    amount = getAmount();

    printf("\n\nSUMMARY\n");
    total_cost = total(egg_orders, egg_type);
    discount = off(egg_orders, total_cost);
    discounted_price = discounted(total_cost, discount);
    change = sukli(amount, discounted_price, total_cost);
}

float sukli(int amount, float discounted_price, float total_cost)
{
    float change;
    if (discounted_price == 0)
    {
        change = amount - total_cost;
    }
    else
    {
        change = amount - discounted_price;
    }

    if (change < 0)
    {
        printf("Change: (Php %0.2f)", change * -1);
    }
    else
    {
        printf("Change: Php %0.2f", change);
    }

    return change;
}

float discounted(float total_cost, float discount)
{
    float discounted_price = total_cost - discount;
    if (discount != 0)
    {
        printf("Discounted Price: Php %0.2f\n", discounted_price);
        return discounted_price;
    }
    else
    {
        return 0;
    }
}

float off(int egg_orders, float total_cost)
{
    float discount = 0;
    if (egg_orders >= 300)
    {
        discount = total_cost * 0.1;
        printf("Discount: Php %0.2f\n", discount);
        return discount;
    }
    else if (egg_orders >= 150)
    {
        discount = total_cost * 0.05;
        printf("Discount: Php %0.2f\n", discount);
        return discount;
    }
    else
    {
        printf("Discount: Php %0.2f\n", discount);
        return discount;
    }
}

float total(int egg_orders, int egg_type)
{
    float total;

    switch (egg_type)
    {
    case 1:
        total = egg_orders * 15;
        break;
    case 2:
        total = egg_orders * 22.50;
        break;
    case 3:
        total = egg_orders * 13;
        break;
    }
    printf("Total Cost: Php %0.2f\n", total);
    return total;
}

int getAmount()
{
    int amount;
    printf("Enter amount: ");
    scanf("%d", &amount);
    return amount;
}

int getOrder()
{
    int egg_orders;
    printf("Enter total egg orders: ");
    scanf("%d", &egg_orders);
    return egg_orders;
}

int getType()
{
    int egg_type;
    do
    {
        printf("Enter your egg type: ");
        scanf("%d", &egg_type);
    } while (egg_type > 3);
    return egg_type;
}

void menu()
{
    printf("Itlog ni Noy AKIL!\n");
    printf("[1] #16 @ Php 15.00\n");
    printf("[2] #18 @ Php 22.50\n");
    printf("[3] penoy @ Php 13.00\n");
}