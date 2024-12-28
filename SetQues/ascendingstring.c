// WAP to enter 5 cities name and sort them in ascending order acc to their names.

#include <stdio.h>
#include <string.h>

int main() {
    char names[5][20], temp[20];

    // Input 5 city names
    for (int i = 0; i < 5; i++) {
        scanf("%s", names[i]);
    }

    // Bubble Sort to sort city names in ascending order
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                // Swap the names if they are out of order
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    // Print the sorted city names
    for (int i = 0; i < 5; i++) {
        printf("%s ", names[i]);
    }

    return 0;
}
