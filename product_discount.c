#include <stdio.h>

int main() {
    char product_name[100];
    int quantity;
    float price_per_unit, total_price, discount, net_price;

    // Input product details
    printf("Enter product name: ");
    fgets(product_name, sizeof(product_name), stdin); // Read string with spaces

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    printf("Enter price per unit: ");
    scanf("%f", &price_per_unit);

    // Calculate total price
    total_price = quantity * price_per_unit;

    // Calculate discount if applicable
    if (total_price > 10000) {
        discount = total_price * 0.10; // 10% discount
    } else {
        discount = 0; // No discount
    }

    // Calculate net price
    net_price = total_price - discount;

    // Output the results
    printf("\nProduct Name: %s", product_name);
    printf("Total Price: $%.2f\n", total_price);
    printf("Discount: $%.2f\n", discount);
    printf("Net Price: $%.2f\n", net_price);

    return 0;
}
