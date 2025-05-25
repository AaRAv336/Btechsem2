#include <stdio.h>

int main() {
    float principal, rate, simple_interest, compound_interest;
    int time;

    // Input values
    printf("Enter Principal (₹): ");
    scanf("%f", &principal);
    printf("Enter Rate of Interest (%% p.a.): ");
    scanf("%f", &rate);
    printf("Enter Time (whole years): ");
    scanf("%d", &time);

    // Calculate Simple Interest
    simple_interest = (principal * rate * time) / 100;

    // Calculate Compound Interest (assuming annual compounding)
    float amount = principal;
    for (int i = 1; i <= time; i++) {
        amount = amount * (1 + rate / 100); // Update amount yearly
    }
    compound_interest = amount - principal;

    // Display results
    printf("\nSimple Interest = ₹%.2f\n", simple_interest);
    printf("Compound Interest = ₹%.2f\n", compound_interest);

    return 0;
}