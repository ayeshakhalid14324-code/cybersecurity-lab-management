#include <stdio.h>

int main()
{
    // Variables
    char labName[100];
    int numberOfComputers;
    int numberOfNetworkDevices;
    int numberOfSecurityTools;

    float costPerComputer;
    float costPerNetworkDevice;
    float annualSecuritySoftwareCost;

    float computerCost;
    float networkCost;
    float totalLabInvestment;

    // Input
    printf("Enter lab name: ");
    scanf(" %[^\n]", labName);

    printf("Enter number of computers: ");
    scanf("%d", &numberOfComputers);

    printf("Enter number of network devices: ");
    scanf("%d", &numberOfNetworkDevices);

    printf("Enter number of security tools: ");
    scanf("%d", &numberOfSecurityTools);

    printf("Enter cost per computer: ");
    scanf("%f", &costPerComputer);

    printf("Enter cost per network device: ");
    scanf("%f", &costPerNetworkDevice);

    printf("Enter annual security software cost: ");
    scanf("%f", &annualSecuritySoftwareCost);

    // Processing
    computerCost = numberOfComputers * costPerComputer;

    networkCost = numberOfNetworkDevices * costPerNetworkDevice;

    totalLabInvestment = computerCost
                       + networkCost
                       + annualSecuritySoftwareCost;

    // Output
    printf("\n========================================\n");
    printf("       CYBERSECURITY LAB REPORT\n");
    printf("========================================\n");

    printf("Lab Name             : %s\n", labName);
    printf("Computers            : %d\n", numberOfComputers);
    printf("Network Devices      : %d\n", numberOfNetworkDevices);
    printf("Security Tools       : %d\n", numberOfSecurityTools);
    printf("Computer Cost        : %.2f\n", computerCost);
    printf("Network Device Cost  : %.2f\n", networkCost);
    printf("Software Cost        : %.2f\n", annualSecuritySoftwareCost);

    printf("----------------------------------------\n");

    printf("Total Lab Investment : %.2f\n", totalLabInvestment);

    printf("----------------------------------------\n");
    printf("========================================\n");

    return 0;
}
