#include <stdio.h>
#include <stdlib.h>


int decimalToGray(int num) {

    return num ^ (num >> 1);
}

void printBinary(int n) {
    if (n > 1) {
        printBinary(n >> 1);
    }
    printf("%d", n & 1);
}

int grayToDecimal(int gray) {
    int num = gray;
    while (gray >>= 1) {
        num ^= gray;
    }

    return num;
}


int main() {
    int num, gray;

    printf("Podaj liczbe dziesietna: ");
    if (scanf("%d", &num) != 1) {
        printf("B³¹d: Wprowadzono nieprawid³owe dane.\n");
        return 1;
    }

    gray = decimalToGray(num);

    printf("\n--- Wyniki dziesiêtne ---\n");
    printf("Liczba wejœciowa: %d\n", num);
    printf("Kod Graya:        %d\n", gray);

    printf("\n--- Wyniki binarne ---\n");
    printf("Liczba binarnie:  ");
    if (num == 0) printf("0"); else printBinary(num);
    printf("\n");

    printf("Kod Graya:        ");
    if (gray == 0) printf("0"); else printBinary(gray);
    printf("\n");



    int gray1, num1;

    printf("Podaj wartosc w kodzie Graya (dziesietnie): ");
    if (scanf("%d", &gray1) != 1) {
        printf("B³ad: Wprowadzono nieprawid³owe dane.\n");
        return 1;
    }

    num1 = grayToDecimal(gray1);


    printf("\n--- Wyniki dziesiêtne ---\n");
    printf("Wprowadzony kod Graya: %d\n", gray1);
    printf("Odzyskana liczba:      %d\n", num1);


    printf("\n--- Wyniki binarne ---\n");
    printf("Kod Graya binarnie:    ");
    if (gray1 == 0) printf("0"); else printBinary(gray1);
    printf("\n");

    printf("Liczba binarnie:       ");
    if (num1 == 0) printf("0"); else printBinary(num1);
    printf("\n");
    return 0;
}
