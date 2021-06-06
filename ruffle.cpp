#include <iostream>
#include <unistd.h>
#include <stdlib.h>
#include "ruffle.hpp"
#define timer 1
using namespace std;

// Tombola
void tombola::cancella(void)
{
    system("cls");
};

void tombola::modalita_(void)
{
   
    cancella();

    system("color 03");

    cout <<"\n\t __________________________________________________________";
    cout <<"\n\t|                                                          |";
    cout <<"\n\t|  DIGITARE IL NUMERO ASSOCIATO ALLA MODALITA' DESIDERATA  |";
    cout <<"\n\t|__________________________________________________________|\n\n\n";

    system("color 03");

    cout <<"\n\t\t           :::                        :::::::: ";
    cout <<"\n\t\t         :+:+:                       :+:    :+:";
    cout <<"\n\t\t           +:+                             +:+ ";
    cout <<"\n\t\t           +#+                           +#+   ";
    cout <<"\n\t\t           +#+                         +#+     ";
    cout <<"\n\t\t           #+#                        #+#      ";
    cout <<"\n\t\t         #######                     ##########";
    cout <<"\n\t\t    _________________             ________________ ";
    cout <<"\n\t\t   |                 |           |                |";
    cout <<"\n\t\t   |  SINGLE PLAYER  |           |  MULTI PLAYER  |";
    cout <<"\n\t\t   |_________________|           |________________|";

    system("color 03");

    cout <<"\n\n\nScelta:";

    cin>>modalita;

    fflush(stdin);
    
};

void tombola::menu(void)
{
    system("color 03");

    cout <<"\n\t __________________________________________________________";
    cout <<"\n\t|                                                          |";
    cout <<"\n\t|  DIGITARE IL NUMERO ASSOCIATO ALLA MODALITA' DESIDERATA  |";
    cout <<"\n\t|__________________________________________________________|\n\n\n";

    system("color 03");

    cout<<"\n\t\t       :::                :::::::: ";
    cout<<"\n\t\t     :+:+:               :+:    :+:";
    cout<<"\n\t\t       +:+                     +:+ ";
    cout<<"\n\t\t       +#+                   +#+   ";
    cout<<"\n\t\t       +#+                 +#+     ";
    cout<<"\n\t\t       #+#                #+#      ";
    cout<<"\n\t\t     #######             ##########";
    cout<<"\n\t\t    _________             ________ ";
    cout<<"\n\t\t   |         |           |        |";
    cout<<"\n\t\t   |  GIOCA  |           |  ESCI  |";
    cout<<"\n\t\t   |_________|           |________|";

    system("color 03");

    cout<<"\n\n\nScelta:";

    cin>>scelta;

    fflush(stdin);
    
};

void tombola::nomi_giocatori(void)
{
 giocatore1.nome_giocatore[50];
 extern int num_giocatori;

if(modalita==1)
{

    printf("\n\n\tInserisci il nome del primo giocatore :");
    gets(nome_giocatore1);

    printf("\n\n");

    fflush(stdin);
}
else
{

    numero_giocatori();

    banner_nomi();

    switch(num_giocatori)
    {
        case 2:

            fflush(stdin);

            printf("\n\n\n\tInserisci il nome del primo giocatore :");
            gets(nome_giocatore1);

            fflush(stdin);

            printf("\n\n\tInserisci il nome del secondo giocatore :");
            gets(nome_giocatore2);

            fflush(stdin);

            printf("\n\n");

            break;

        case 3:

            fflush(stdin);

            printf("\n\n\n\n\tInserisci il nome del primo giocatore :");
            gets(nome_giocatore1);

            fflush(stdin);

            printf("\n\n\tInserisci il nome del secondo giocatore :");
            gets(nome_giocatore2);

            fflush(stdin);

            printf("\n\n\tInserisci il nome del terzo giocatore :");
            gets(nome_giocatore3);

            fflush(stdin);

            printf("\n\n");

            break;

        case 4:

            fflush(stdin);

            printf("\n\n\n\tInserisci il nome del primo giocatore :");
            gets(nome_giocatore1);

            fflush(stdin);

            printf("\n\n\tInserisci il nome del secondo giocatore :");
            gets(nome_giocatore2);

            fflush(stdin);

            printf("\n\n\tInserisci il nome del terzo giocatore :");
            gets(nome_giocatore3);

            fflush(stdin);

            printf("\n\n\tInserisci il nome del quarto giocatore :");
            gets(nome_giocatore4);

            fflush(stdin);

            printf("\n\n");

            break;
    }

    system("pause");

    cancella();
}


}
// Grafica
void grafica::banner_init(void)
{
        cout<<"\t                                         .         .                                                                                  \n";
        cout<<"\t8888888 8888888888 ,o888888o.           ,8.       ,8.          8 888888888o       ,o888888o.     8 8888                  .8.          \n";
        cout<<"\t      8 8888    . 8888     `88.        ,888.     ,888.         8 8888    `88.  . 8888     `88.   8 8888                 .888.         \n";
        cout<<"\t      8 8888   ,8 8888       `8b      .`8888.   .`8888.        8 8888     `88 ,8 8888       `8b  8 8888                :88888.        \n";
        cout<<"\t      8 8888   88 8888        `8b    ,8.`8888. ,8.`8888.       8 8888     ,88 88 8888        `8b 8 8888               . `88888.       \n";
        cout<<"\t      8 8888   88 8888         88   ,8'8.`8888,8^8.`8888.      8 8888.   ,88' 88 8888         88 8 8888              .8. `88888.      \n";
        cout<<"\t      8 8888   88 8888         88  ,8' `8.`8888' `8.`8888.     8 8888888888   88 8888         88 8 8888             .8`8. `88888.     \n";
        cout<<"\t      8 8888   88 8888        ,8P ,8'   `8.`88'   `8.`8888.    8 8888    `88. 88 8888        ,8P 8 8888            .8' `8. `88888.    \n";
        cout<<"\t      8 8888   `8 8888       ,8P ,8'     `8.`'     `8.`8888.   8 8888      88 `8 8888       ,8P  8 8888           .8'   `8. `88888.   \n";
        cout<<"\t      8 8888    ` 8888     ,88' ,8'       `8        `8.`8888.  8 8888    ,88'  ` 8888     ,88'   8 8888          .888888888. `88888.  \n";
        cout<<"\t      8 8888       `8888888P'  ,8'         `         `8.`8888. 8 888888888P       `8888888P'     8 888888888888 .8'       `8. `88888. \n\n\n\n";
};

void grafica::colore_banner(void)
{
    system("color 03");
    banner_init();

    sleep(timer);

    cancella();
    system("color 03");
    banner_init();

    sleep(timer);

    cancella();
    system("color 03");
    banner_init();

    sleep(timer);

    cancella();
    system("color 03");
    banner_init();

    sleep(timer);

    cancella();
    system("color 03");
    banner_init();

    sleep(timer);

    cancella();
    system("color 03");
    banner_init();

    sleep(timer);

};


