#include <stdio.h>

int main(void)
{
    double revenue = 0.0;
    double expenses = 0.0;
    double balance = 0.0;

    int departments = 0;
    double payroll = 0.0;
    double procurement = 0.0;
    double assets = 0.0;

    printf("MUNICIPAL BUDGET CALCULATOR\n");
    printf("----------------------------\n");

    printf("Enter total revenue: ");
    scanf("%lf", &revenue);

    printf("Enter total expenses: ");
    scanf("%lf", &expenses);

    balance = revenue - expenses;

    printf("\nMUNICIPAL BUDGET SUMMARY\n");
    printf("------------------------\n");
    printf("Revenue: %.2f\n", revenue);
    printf("Expenses: %.2f\n", expenses);
    printf("Balance: %.2f\n", balance);

    printf("\nEXTENSION: BASIC MUNICIPAL FINANCIAL SUMMARY\n");
    printf("--------------------------------------------\n");

    printf("Enter number of departments: ");
    scanf("%d", &departments);

    printf("Enter total payroll: ");
    scanf("%lf", &payroll);

    printf("Enter total procurement: ");
    scanf("%lf", &procurement);

    printf("Enter total assets: ");
    scanf("%lf", &assets);

    printf("\nMUNICIPAL FINANCIAL SUMMARY\n");
    printf("---------------------------\n");
    printf("Departments: %d\n", departments);
    printf("Payroll: %.2f\n", payroll);
    printf("Procurement: %.2f\n", procurement);
    printf("Assets: %.2f\n", assets);
    printf("Revenue: %.2f\n", revenue);
    printf("Expenses: %.2f\n", expenses);
    printf("Balance: %.2f\n", balance);

    return 0;
}