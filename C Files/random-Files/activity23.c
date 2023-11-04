#include <stdio.h>

int main(void)
{
    float hours_worked;
    float hourly_payrate;
    float FWT_rate;
    float FICA_taxrate;
    float SI_taxrate;

    printf("Enter hours worked: ");
    scanf("%f", &hours_worked);

    if (hours_worked > 40)
    {
        printf("Hours worked must never over 40.\nEnter hours worked: ");
        scanf("%f", &hours_worked);
    }

    printf("Enter Hourly Payrate: ");
    scanf("%f", &hourly_payrate);
    printf("Enter FTW rate: ");
    scanf("%f",&FWT_rate);
    printf("Enter FICA rate: ");
    scanf("%f",&FICA_taxrate);
    printf("Enter State Income Tax rate: ");
    scanf("%f", &SI_taxrate);

    float gross_pay = hours_worked * hourly_payrate;
    float FWT = gross_pay * FWT_rate;
    float FICA = gross_pay * FICA_taxrate;
    float ST = gross_pay * SI_taxrate;
    float net_pay = gross_pay - FWT - FICA - ST;

    printf("--NOSAKI EMPOLYEE PAYROLL DATA--\n");
    printf("Gross Pay: %0.2f\n", gross_pay);
    printf("FWT: %0.2f\n", FWT);
    printf("FICA: %0.2f\n", FICA);
    printf("State Tax: %0.2f\n", ST);
    printf("Net Pay: %0.2f", net_pay);
}
