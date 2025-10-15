#include <stdio.h>

int main()
{
    float a = 0; //to jest komentarz, wszystko co tu pisze zostanie pominiete przez komputer
    float b = 0; //<-- w tym miejscu deklartuje zmiennie, "float" oznacza, że beda to ulamki
    float c = 0; // moglbym zamiast "float" zastosowac int ale wtedy a,b i c moglyby byc tylko calkowite

    printf("Witam drogiego uzytkownika!\nprosze cie drogi panie\npodaj mi swoje a,b i c z ktorych bedziemy liczyc delte\n\n\n");
    //generalnie troche dluga ta linijka na gorze, elegancko bylo by to zapisac za pomoca dwoch komend ale mi sie nie chce
    //printf sluzy do wyswietlania tekstu "\n" oznacza "enter" bedzie to ladnie widoczne jak wam to pokaze

    //scanf sluzy do pobierania wartosci od uzytkownika, ale nie dziala jak printf - nie mozna pisac tekstu w srodku
    //dlatego najpierw robie printf z pytaniem, a potem scanf do samej liczby

    printf("zacznijmy od a: ");
    scanf("%f", &a);

    printf("teraz b: ");
    scanf("%f", &b);

    printf("i na koniec c: ");
    scanf("%f", &c);

    //tutaj wyswietlam wartosci, zeby sprawdzic czy wszystko poszlo ok
    printf("czy wszsytko sie zgadza?\n");
    printf("a = %f\n", a);
    printf("b = %f\n", b);
    printf("c = %f\n", c);

    return 0; //<- to oznacza koniec programu, tak dla formalnosci
}
