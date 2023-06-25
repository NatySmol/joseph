//
//  main.c
//  joseph
//
//Při dobývání Tróje byla hrstka obránců zahnána řeckými válečníky do polorozbořené budovy chrámu a obklíčena. Aby unikli ponižující porážce, rozhodli se Trójané spáchat sebevraždu. Stoupli si do kruhu, přiřadili si čísla a ob jednoho postupně nalehli na svůj meč. Začali vynecháním vojáka s číslem 1 a pokračovali v kruhu tak dlouho, dokud nebyli všichni mrtví. Jeden z Trójanů, říkejme mu Josef, ale s tímto postupem nesouhlasil a mnohem radši by se vzdal Řekům a zachránil si život. Poraďte Josefovi, na jaké místo v kruhu si má stoupnout, aby při rozpočítávání zůstal jako poslední a nikdo z Trójanů se tak nedozvěděl o jeho potupě.

//Na standardním vstupu dostanete jedno celé číslo N v rozsahu typu longint - počet trójských vojáků. Vypište na standardní výstup celé číslo J(N) - místo v kruhu, na které si má Josef stoupnout. Při nekorektním vstupu vypište pouze řetězec 'ERROR'.

//Pro N = 5 probíhá tedy vyřazování takto:
/*
1 2 3 4 5 => 1 3 4 5 (vypadl voják 2)
1 3 4 5 => 1 3 5 (vypadl voják 4)
1 3 5 => 3 5 (vypadl voják 1)
3 5 => 3 (vypadl voják 5)
J(N) = 3*/

//  Created by Natálie Smolíková on 14.10.2021.
//

#include <stdio.h>

long josef(long n)
{
    int k = 1;
    while (k <= n)
    {
        k *= 2;
    }
    return (2 * n) - k + 1;
}

int main()
{
    long N;
    scanf("%ld", &N);
    
    if (N<=0)
        printf("ERROR \n");
    else
        printf("%ld \n", josef(N));
   
}
