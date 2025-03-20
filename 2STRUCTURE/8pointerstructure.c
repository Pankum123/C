#include<stdio.h>
int main(){

    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[20];
    }pokemon;

    pokemon pikachu;
    pokemon* x=&pikachu;

    // printf("%p\n",&pikachu.hp);
    // printf("%p\n",&pikachu.attack);
    // printf("%p\n",&pikachu.speed);
    // printf("%p\n",&pikachu.tier);
    // printf("%p\n",&pikachu.name);
    // //continuous memory location
    // printf("%p\n",x);

    (*x).hp=70;    // pikachu.hp=70
    x->speed=100;   //pikachu.speed=100
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.speed);
   

return 0;
}