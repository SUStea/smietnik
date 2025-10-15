#include <stdio.h>
#include <math.h>

int main()
{
int c=0;
printf("podaj c: ");
scanf("%d",&c);
//wersja dla slabych
bool sprawdzam = true;
if(c%2==1)
{
    sprawdzam = false;
}
printf("wartosc logiczna stwierdzenia 'c jest parzyste' to = %b\n\n\n\n\n\n",sprawdzam);


//wersja dla prawdziwych czadow
int k=0;
for(int i=6;i>0;i-=2)
{
printf("obliczanie... -- log - %d\n");
k=i;
}
printf("%d",k);
if(k==0)
{
printf("tak twoja liczba jest parzysta");
}
else
{
printf("niestety, nie jest parzysta, ale spokojnie, jest nieparzysta");
}
return 0;
}
