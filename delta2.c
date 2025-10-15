#include <stdio.h>
#include <math.h>
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
    printf("jak nie to chuj, odpal program jeszcze raz ale dealuj z tym, ze zle wpisales\n");

    //teraz realnie liczymy delte
    double delta =(b*b)-(4*a*c);
    double pierwiastek = sqrt(delta);
    float x1=0;
    float x2=0;
    if(delta<0)
    {
        printf("bardzo mi smutno ale niema rozwiazan w zbiorze liczb rzeczywistych :(\n");
    }
    if(delta==0)
    {
        printf("mamy 1 rozwiazanie! juz licze slodziaku\n");
        x1=((-1*b)/(2*a));
        printf("oto twoje x0 panie :)\nx0 = %f",x1);
    }
    if(delta>0)
    {
        printf("chyba mamy jackpot, sa az 2 rozwiazania!!!");
        x1 = (((-b)-pierwiastek)/(2*a));
        x2 = (((-b)+pierwiastek)/(2*a));
    }


    return 0; //<- to oznacza koniec programu, tak dla formalnosci
}

