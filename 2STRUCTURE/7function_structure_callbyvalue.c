#include<stdio.h>

// ye wala part void func() ke uper hona chahiye nahi to error dega
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[20];
    }pokemon;
// nahi to func() ko pata nahi hoga ki pokemon kiya hai
void fun(pokemon p){ 
    printf("%d",p.hp);
    return;
}
void change(pokemon p){   // pass by value
    p.hp=100;
    p.attack=200;
    p.speed=300;
    p.tier='A';
}
int main(){

    pokemon pikachu;
    pikachu.hp=40;
   // fun(pikachu);
    pikachu.attack=50;
    pikachu.speed=60;
    pikachu.tier='a';

    change(pikachu);    // pass by value
               
    printf("%d\n",pikachu.hp);     // 60
    printf("%d\n",pikachu.attack); // 50
    printf("%d\n",pikachu.speed);  // 100
    

return 0;
}