#include<stdio.h>
#include<string.h>

    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[20];
    }pokemon;

void change(pokemon* p){   // pass by reference
  // (*p).hp=100;  // (*p).something = x->something
   p->hp=100;
   (*p).attack=200;
   (*p).speed=300;
   (*p).tier='S';
   strcpy((*p).name,"himanshu");
   return;
}
int main(){

   //pokemon pikachu = {40,50,60,'A',"pankaj"};
//    pokemon pikachu = {pik,50,60,'A',60}; //error
    pokemon pikachu = {40,50,60};
    // pikachu.hp=40;
    // pikachu.attack=50;
    // pikachu.speed=60;
    pikachu.tier='A';
    strcpy(pikachu.name,"pankaj");

    printf("%d\n",pikachu.hp);     
    printf("%d\n",pikachu.attack); 
    printf("%d\n",pikachu.speed); 
    printf("%c\n",pikachu.tier); 
    printf("%s\n",pikachu.name);

    change(&pikachu);   //call by reference
              
    printf("%d\n",pikachu.hp);     
    printf("%d\n",pikachu.attack); 
    printf("%d\n",pikachu.speed); 
    printf("%c\n",pikachu.tier); 
    printf("%s\n",pikachu.name); 
    

return 0;
}