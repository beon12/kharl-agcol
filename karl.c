#include <stdio.h>

void display_banner();
int calculate_fare(int distance);

int main() {
    int distance;
    display_banner();
    printf("Enter travel distance (in km): ");
    scanf("%d", &distance);
    printf("Total Fare: %d pesos\n", calculate_fare(distance));
    return 0;
}

void display_banner() {
    
    printf("=== BUTUAN JEEPNEY FARE CALCULATOR ===\n");
}

int calculate_fare(int distance) {
    return distance <= 4 ? 13 : 13 + (distance - 4) * 2;
}
