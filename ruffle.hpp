

#ifndef ruffle_hpp
#define ruffle_hpp

#include <stdio.h>
class giocatore
{
public:
    
    //variabili
    char nome_giocatore[50];
    int tabella_giocatore[3][5];
    int control_tabella[3][5];
    int vincitore_tabella;
    
    //funzioni
    void tabella(void);
    void controllo_tabella(void);
    void premi_tabella(void);
    
    
};


class grafica
{
public:
    //funzioni
    void banner_vincitore(void);
    void banner_nomi(void);
    void banner_freccia(void);
    void banner_init(void);
    void cancella(void);
    void colore_banner(void);
    
};

class tombola
{
public:
    //variabili
    int modalita;
    int scelta;
    //funzioni
    void menu(void);
    void azzera_matrice(void);
    void modalita_(void);
    void nomi_giocatori(void);
    void cancella(void);
    void tabelle(void);
    void estrazione(void);
    void vincita(void);
    
};




#endif /* ruffle_hpp */
