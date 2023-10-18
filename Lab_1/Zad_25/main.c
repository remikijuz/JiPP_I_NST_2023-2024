#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <tchar.h>

/*
Zadanie 25.
Napisać program, który będzie obliczał pole powierzchni oraz obwód takich figur jak:
trójkąt, kwadrat, prostokąt, koło. Dla trójkąta sprawdzić warunek trójkąta, dla wszystkich figur
wprowadzić zabezpieczenia uniemożliwiające podanie przez użytkownika wartości
niepoprawnych (np. ujemnych).
Obliczenie pola kwadratu, obwodu kwadratu itd. dla wszystkich figur zapisać w osobnych
funkcjach, które kolejno będą wywoływane w main().
*/

double poleTrojkata(double a, double b, double c) {
    double p = (a+b+c)/2.;
    double pole = sqrt(p*(p-a)*(p-b)*(p-c));
    return pole;
}

double obwodTrojkata(double a, double b, double c) {
    return a + b + c;
}


double poleKwadratu(double a) {

    return pow(a,2);
}

double obwodKwadratu(double a) {
    return 4*a;
}


double poleProstokata(double a, double b) {

   return a*b;
}

double obwodProstokata(double a, double b) {
    return 2*a+2*b;
}

double poleKola(double r) {
    double pi = M_PI;
    double pole = pi* pow(r,2);
    return pole;
}

double obwodKola(double r) {
    double pi = M_PI;
    double obwod = 2*pi*r;
    return obwod;
}


int main() {

    printf("Zadanie 25. Po wyborze figury program obliczy i wypisze jej obwod i pole powierzchni.\n");
    printf("Wpisz nazwe figury\n");
    char figura[10];
    scanf("%s", figura);

    if (strcmp(figura, "trojkat") == 0) {
        double a, b, c;

        printf("Podaj dlugosc boku a: ");
        scanf("%lf", &a);

        while (a < 0)
        {
            printf("Dlugosc boku nie moze być ujemna.\n");
            scanf("%lf", &a);
        }

        printf("Podaj dlugosc boku b: ");
        scanf("%lf", &b);

        while (b < 0)
        {
            printf("Dlugosc boku nie moze być ujemna.\n");
            scanf("%lf", &b);
        }

        printf("Podaj dlugosc boku c: ");
        scanf("%lf", &c);

        while (c < 0)
        {
            printf("Dlugosc boku nie moze być ujemna.\n");
            scanf("%lf", &c);
        }

        if (a + b > c && a + c > b && b + c > a) {
            double pole = poleTrojkata(a, b, c);
            double obwod = obwodTrojkata(a, b, c);

            printf("Pole trojkata wynosi: %lf\n", pole);
            printf("Obwod trojkata wynosi: %lf\n", obwod);
        }

        else {
            printf("Podane dlugosci bokow nie tworza trojkata.\n");
        }


    }

    else if (strcmp(figura, "kwadrat") == 0) {

        double a;

        printf("Podaj dlugosc boku kwadratu: ");
        scanf("%lf", &a);

        while (a < 0)
        {
            printf("Dlugosc boku nie moze być ujemna.\n");
            scanf("%lf", &a);
        }

        double pole = poleKwadratu(a);
        double obwod = obwodKwadratu(a);

        printf("Pole kwadratu wynosi: %lf\n", pole);
        printf("Obwod kwadratu wynosi: %lf\n", obwod);


    }

    else if (strcmp(figura, "prostokat") == 0) {

        double a, b;

        printf("Podaj dlugosc boku a: ");
        scanf("%lf", &a);

        while (a < 0)
        {
            printf("Dlugosc boku nie moze być ujemna.\n");
            scanf("%lf", &a);
        }

        printf("Podaj dlugosc boku b: ");
        scanf("%lf", &b);

        while (b < 0)
        {
            printf("Dlugosc boku nie moze być ujemna.\n");
            scanf("%lf", &b);
        }

        double pole = poleProstokata(a, b);
        double obwod = obwodProstokata(a, b);

        printf("Pole prostokata wynosi: %lf\n", pole);
        printf("Obwod prostokata wynosi: %lf\n", obwod);

    }

    else if (strcmp(figura, "kolo") == 0) {

        double r;

        printf("Podaj dlugosc promienia r: ");
        scanf("%lf", &r);

        while (r < 0)
        {
            printf("Dlugosc promienia nie moze być ujemna.\n");
            scanf("%lf", &r);
        }

        double pole = poleKola(r);
        double obwod = obwodKola(r);

        printf("Pole kola wynosi: %lf\n", pole);
        printf("Obwod kola wynosi: %lf\n", obwod);

    }

    else {

        printf("Wybierz jedną z figur: trojkat, kwadrat, prostokat, kolo.\n");
    }

    return 0;
}
