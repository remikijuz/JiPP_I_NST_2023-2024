#include <stdio.h>

/*
Zapoznaj się z informacjami i wykonaj zadania zawarte w konspekcie.
Rozwiązania zadań 12, 21, 22, 23, 24, 25 załącz na platformie Delta.

Zadanie 12.
Utwórz nowy projekt i napisz program, który będzie wczytywał rok urodzenia, na
podstawie którego obliczy wiek i wypisze go na ekran.
 */


int main() {

    int zadanie;
    printf("Wybierz zadanie które chcesz sprawdzić: 12, 21, 22, 23, 24, 25\n");
    scanf ("%d", &zadanie);

    while (zadanie != 12 && zadanie != 21 && zadanie != 22 && zadanie != 23 && zadanie != 24 && zadanie != 25 ) {
        printf("Proszę wybrać zadanie wpisując jedną z liczb: 12, 21, 22, 23, 24, 25\n");
        scanf ("%d", &zadanie);
    }

    switch (zadanie) {
        // Zadanie 12
        case 12:

            printf("Zadanie 12. Napisz program, który będzie wczytywał rok urodzenia, na podstawie którego obliczy wiek i wypisze go na ekran:\n");

            int rokUrodzenia = 0;
            int rokObecny = 2023;

            printf("Podaj swój rok urodzenia:\n");
            scanf("%d", &rokUrodzenia);

            while (rokUrodzenia < 1900 || rokUrodzenia > 2023)
                {
                printf("Podaj poprawny rok urodzenia.\n");
                scanf("%d", &rokUrodzenia);
            }

            printf("Wybrałeś rok: %d.\n", rokUrodzenia);
            int wiek = rokObecny - rokUrodzenia;
            printf("Masz: %d lat.\n", wiek);

        break;

        // Zadanie 21
        case 21:
            // code block
        break;

        // Zadanie 22
        case 22:
            // code block
        break;

        case 23:
            // code block
        break;

        case 24:
            // code block
        break;

        case 25:
            // code block
        break;
        }

    return 0;
}
