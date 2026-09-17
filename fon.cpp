#include<iostream>
 int echange(int *a, int *b);

int main(){
    
    int y, c ,d;
<<<<<<< HEAD
    std::cout<<"entrer deux premiers nombres :";
=======
    std::cout<<"entrer deux nombres enregistrés :";
>>>>>>> ca8e81589ccd4e0fbd1957fee107bd28411d27e1
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