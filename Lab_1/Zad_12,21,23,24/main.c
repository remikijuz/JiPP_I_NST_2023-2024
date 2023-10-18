#include <stdio.h>
#include <math.h>

/*
Zapoznaj się z informacjami i wykonaj zadania zawarte w konspekcie.
Rozwiązania zadań 12, 21, 22, 23, 24, 25 załącz na platformie Delta.

Zadanie 12.
Utwórz nowy projekt i napisz program, który będzie wczytywał rok urodzenia, na
podstawie którego obliczy wiek i wypisze go na ekran.

Zadanie 21.
Napisz program, który dla danych rzeczywistych x, y, z i całkowitych k, m policzy wartości
następujących wyrażeń arytmetycznych:
...
Po poprawnym skompilowaniu tego programu przetestuj jego poprawność merytoryczną.
Wyniki wydrukować w formacie long (%.8lf).
Wykonaj obliczenia dla: x = 3.14 y = 12.56 z = 7 k = 2 m = 4.

Zadanie 23.
Dane są a, b, c długości boków trójkąta. Sprawdzić warunek istnienia trójkąta:
Obliczyć pole trójkąta i promień koła wpisanego w trójkąt.
Wykorzystać wzory Herona:
p=(a+b+c)/2
pole: S = sqrt(p(p-a)(p-b)(p-c))
promień: R = S/p

Zadanie 24.
Dane są cztery liczby całkowite a,b,c,d. Znaleźć wśród nich liczbę największą i wydrukować
jej wartość i pozycję przyjmując, że dla a(pozycja=1), b(pozycja=2) itd. (nie wprowadzać
zmiennej indeksowanej).

*/


int main() {

    int zadanie;
    printf("Wybierz zadanie które chcesz sprawdzić: 12, 21, 23, 24.\n");
    scanf ("%d", &zadanie);

    while (zadanie != 12 && zadanie != 21 && zadanie != 23 && zadanie != 24 ) {
        printf("Proszę wybrać zadanie wpisując jedną z liczb: 12, 21, 23, 24.\n");
        scanf ("%d", &zadanie);
    }

    switch (zadanie) {
        // Zadanie 12
        case 12:

            printf("Zadanie 12. Program wczytuje rok urodzenia, na podstawie którego obliczy wiek i wypisze go na ekran.\n");

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

            printf("Zadanie 21. Program obliczy wartości w1, w2, w3, w4, w5 i wypisze je na ekranie.\n");

            double w1, w2, w3, w4, w5, x, y, z;
            int k, m;

            x = 3.14;
            y = 12.56;
            z = 7;
            k = 2;
            m = 4;

            w1 = pow(x/(z*y),1./3.) * log(pow(x,2) + pow(y,2));
            //w1 = 1.68664873

            w2 = sin(k*(x/2)) * cos(m*y)+y * exp(2*x-1);
            //w2 = 2466.40722655

            w3 = fabs(x/(2*pow(y,2)+1)) + sqrt(y/(pow(z, 2) + 3)) + 5* pow(y+z, 3);
            //w3 = 37418.15546641

            w4 = x/(y*z) * pow(z+1, 1./3.) + pow(pow(x,2)+ pow(z,2) + 1, 1./k) - fabs(y);
            //w4 = -4.75167283

            w5 = 1 /(sqrt(pow(x, 2)+ pow(y, 2) + pow(k, 2))) + 1/x* sin(k*y);
            //w5 = 0.07227756

            printf("w1 jest równe %.8lf. \n", w1);
            printf("w2 jest równe %.8lf. \n", w2);
            printf("w3 jest równe %.8lf. \n", w3);
            printf("w4 jest równe %.8lf. \n", w4);
            printf("w5 jest równe %.8lf. \n", w5);

        break;

        // Zadanie 23
        case 23:

            printf("Zadanie 23. Program sprawdzi czy zachodzi warunek istnienia trójkąta i obliczy pole tego trójkąta i promień koła wpisanego w ten trójkąt.\n");
            double a, b, c;


            printf("Podaj długość boku a:\n");
            scanf("%lf", &a);

            while (a < 0)
            {
                printf("Długość boku nie może być ujemna.\n");
                scanf("%lf", &a);
            }

            printf("Podaj długość boku b:\n");
            scanf("%lf", &b);

            while (b < 0)
            {
                printf("Długość boku nie może być ujemna.\n");
                scanf("%lf", &b);
            }

            printf("Podaj długość boku c:\n");
            scanf("%lf", &c);

            while (c < 0)
            {
                printf("Długość boku nie może być ujemna.\n");
                scanf("%lf", &c);
            }

            printf("Bok a = %.2lf, b = %.2lf, c = %.2lf. \n", a, b, c);

                if (a < b+c && b < a +c && c < a+b) {
                    printf("Istnieje trójkąt o bokach a = %.2lf, b = %.2lf, c = %.2lf. \n", a, b, c);

                    double s, r, p;
                    p = (a+b+c)/2.;
                    s = sqrt(p*(p-a)*(p-b)*(p-c));
                    r = s/p;

                    printf("Pole tego trójkąta to S = %.2lf. \n", s);
                    printf("Promień koła wpisanego w ten trójkąt to R = %.2lf. \n", r);

                }
                else {
                    printf("Nie istnieje trójkąt o bokach a = %.2lf, b = %.2lf, c = %.2lf. \n", a, b, c);
                }

        break;

        // Zadanie 24
        case 24:

            printf("Zadanie 24. Wczytane zostaną cztery liczby całkowite a1, b2, c3, d4. Program znajdzie największą z nich i wypiszę jej wartość i pozycje.\n");
            int a1, b2, c3, d4;


            printf("Podaj cztery liczby calkowite: ");
            scanf("%d %d %d %d", &a1, &b2, &c3, &d4);

            int najwieksza = a1;
            int pozycja = 1;

            if (b2 > najwieksza) {
                najwieksza = b2;
                pozycja = 2;
            }
            if (c3 > najwieksza) {
                najwieksza = c3;
                pozycja = 3;
            }
            if (d4 > najwieksza) {
                najwieksza = d4;
                pozycja = 4;
            }

            printf("Największą liczbą jest %d i znajduje się na pozycji %d.\n", najwieksza, pozycja);

            break;
        }

    return 0;
}
