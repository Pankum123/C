#include<stdio.h>
#include<string.h>
int main(){

    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char yier;
        char name[20];
    }pokemon;

    typedef struct legendarypokemon{
        pokemon normal;
        char ability[100];
    }legendarypokemon;

    typedef struct godpokemon{
       legendarypokemon legend;
       int specialattack; 
    } godpokemon;

   
    legendarypokemon mewtwo;
    strcpy(mewtwo.ability,"pressure");
    mewtwo.normal.hp=150;
    mewtwo.normal.attack=180;
    strcpy(mewtwo.normal.name,"Mewtwo");

    godpokemon arceus;
    arceus.specialattack=300;
    strcpy(arceus.legend.ability,"turn an power");
    arceus.legend.normal.attack=500;

    printf("%d",arceus.specialattack);

return 0;
}