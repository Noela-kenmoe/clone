#include<iostream>
 int echange(int *a, int *b);

int main(){
    
    int y, c ,d;
    std::cout<<"entrer deux nombres enregistrés :";
    std::cin>> c >> d;
    std::cout<<"avant l'appel:"<< c << d;
    y =echange(&c,&d);
     std::cout<<"apres l'appel :"<< c << y ;
     return 0;
     
}
int echange (int *a, int *b)
     { 
      
        int x;
        *a = x;
        *a = *b;
        *b = x;
        return 0;
     }