#include <stdio.h>

int main() {
    int productCode, quantity;
    double totalAmount = 0;

    // Read the number of purchased products
    int numProducts;
    scanf("%d", &numProducts);

    // Process each product
    for (int i = 0; i < numProducts; i++) {
        // Read the product code and quantity
        scanf("%d %d", &productCode, &quantity);

        // Calculate the total amount for the current product
        switch (productCode) {
            case 1001:
                totalAmount += 1.5 * quantity;
                break;
            case 1002:
                totalAmount += 2.5 * quantity;
                break;
            case 1003:
                totalAmount += 3.5 * quantity;
                break;
            case 1004:
                totalAmount += 4.5 * quantity;
                break;
            case 1005:
                totalAmount += 5.5 * quantity;
                break;
            default:
                printf("Invalid product code\n");
                return 1; // Exit with an error code
        }
    }

    // Print the total purchase amount with two decimal places
    printf("%.2f\n", totalAmount);

    return 0;
}
