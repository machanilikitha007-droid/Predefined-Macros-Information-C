#include <stdio.h>

int main() {
    printf("Predefined Macros Information\n");
    printf("-----------------------------\n");

    printf("Date       : %s\n", __DATE__);
    printf("Time       : %s\n", __TIME__);
    printf("File Name  : %s\n", __FILE__);
    printf("Line Number: %d\n", __LINE__);
    printf("C Standard : %d\n", __STDC__);

    return 0;
}
