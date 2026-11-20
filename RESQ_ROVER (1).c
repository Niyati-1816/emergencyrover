#include <stdio.h>

int main(void)
{
    float temperature;
    float latitude, longitude;
    int personDetected;

    printf("\n====================================\n");
    printf("          RESQ-ROVER SYSTEM\n");
    printf("     Emergency Rescue Assistance\n");
    printf("====================================\n");

    /* Enter simulated sensor readings */
    printf("\nEnter temperature (Celsius): ");
    if (scanf("%f", &temperature) != 1) {
        printf("Invalid temperature input.\n");
        return 1;
    }

    printf("Enter latitude: ");
    if (scanf("%f", &latitude) != 1) {
        printf("Invalid latitude input.\n");
        return 1;
    }

    printf("Enter longitude: ");
    if (scanf("%f", &longitude) != 1) {
        printf("Invalid longitude input.\n");
        return 1;
    }

    printf("Is a person detected? (1 = Yes, 0 = No): ");
    if (scanf("%d", &personDetected) != 1 ||
        (personDetected != 0 && personDetected != 1)) {
        printf("Invalid person-detection input. Enter 1 or 0.\n");
        return 1;
    }

    printf("\n========== ROVER REPORT ==========\n");
    printf("Temperature: %.2f C\n", temperature);
    printf("Location: %.4f, %.4f\n", latitude, longitude);

    if (temperature > 50.0f) {
        printf("\nWARNING: High temperature detected!\n");
    } else {
        printf("\nTemperature condition: Normal\n");
    }

    if (personDetected == 1) {
        printf("Person detected in the area!\n");
        printf("Rescue team assessment required.\n");
    } else {
        printf("No person detected by the simulated input.\n");
    }

    if (temperature > 50.0f || personDetected == 1) {
        printf("\nROVER STATUS: ATTENTION REQUIRED\n");
    } else {
        printf("\nROVER STATUS: CONTINUE MONITORING\n");
    }

    printf("\nNote: This is a software simulation using manual inputs.\n");
    printf("It does not connect to real sensors, GPS, or rescue services.\n");
    printf("\n========== REPORT COMPLETE ==========\n");

    return 0;
}
