#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <time.h>
struct alfabet{
    char litery;
    int wystepowanie;
};
struct alfabet lit[26];
int slowa(){
    int r;
    srand(time(NULL));
    r=rand();
    return r%570858;
}
int czy_slowo_ma_odpowiednia_dlugosc( char * slowo){
    int a=0;
    while(slowo[a]!='\0'){
        a++;
    }
    return a;
}
int literki_w_strukturze(){
    char a='a';
    for (int r=0; r<26; r++){
        lit[r].litery=a;
        a++;
    }
return 0;
}
int czy_ta_litera_sie_powtarza(char * zgad, char * haslo, int dlu){
    int j=0;
    char w;
    for( int y=0; y<dlu; y++){
        j=zgad[y];
        j=j-97;
        w=lit[j].litery;
        if(lit[j].wystepowanie==0){
            for(int e=0; e<dlu; e++){
                if(haslo[e]==w){
                    lit[j].wystepowanie++;
                }
            }
            if(lit[j].wystepowanie!=0){
                printf("\n\n%c %i razy\n",w, lit[j].wystepowanie);
            }
        }
    }
    for (int s=0; s<26; s++){
        lit[s].wystepowanie=0;
    }
    return 0;
}
int bez_znakow_polskich(char * haslo){
    char * a="ęóąśłżźćń";
    int b=0;
    while(haslo[b]!='/0'){
        for(int r=0; r<9;r++){
            if(haslo[b]==a[r]){
                 return 1;
            }
        }
        b++;
    }
    return 0;
}
