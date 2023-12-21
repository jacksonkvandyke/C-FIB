#include <stdio.h>

int main() {
    int numberofFib;
    double fibSequence[2] = { 0 };
    //Ask the user to enter the number of fibonacci numbers they would like to see
    printf("%s", "Please enter the number of fibonacci numbers you would like to see, please enter a value greater than 1(Large values will break computations): ");
    scanf("%d", &numberofFib);

    //Ensure value is within reasonable means
    while (numberofFib < 1){
        printf("%s", "That value is not within the range, please enter a value greater than 1(Large values will break computations): ");
        scanf("%d", &numberofFib);

    }

    //Generate the fib
    if (numberofFib == 1){
        printf("%s", "[1]");
        return 0;

    }

    printf("%s", "[");
    for (int i = 0; i < numberofFib; i++){
        if ((i == 0) || (i == 1)){  
            if (i + 1 < numberofFib){
                fibSequence[i % 2] = 1;
                printf("%d%s", fibSequence[i % 2], ", ");
                continue;
            }else {
                fibSequence[i % 2] = 1;
                printf("%d%s", fibSequence[i % 2], "]");
                continue;

            }

        }

        if (i + 1 < numberofFib){
            if (i % 2 == 0){
                int newFib = fibSequence[(i % 2) + 1] + fibSequence[i % 2];
                fibSequence[i % 2] = newFib;
                printf("%d%s", newFib, ", ");

            }else {
                int newFib = fibSequence[(i % 2) - 1] + fibSequence[i % 2];
                fibSequence[i % 2] = newFib;
                printf("%d%s", newFib, ", ");

        }

        }else {
            if (i % 2 == 0){
                int newFib = fibSequence[(i % 2) + 1] + fibSequence[i % 2];
                fibSequence[i % 2] = newFib;
                printf("%d%s", newFib, "]");

            }else {
                int newFib = fibSequence[(i % 2) - 1] + fibSequence[i % 2];
                fibSequence[i % 2] = newFib;
                printf("%d%s", newFib, "]");

        }

        }

    }

    return 0;

}