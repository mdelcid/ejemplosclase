#include <iostream>
#include "MiClase.h" //esto es para incluir el archivo de miclase.h y asi poder correr el programa
using namespace std;



/*int main()
{
    MiClase mi_clase(10);
    cout<<mi_clase.x<<endl; //cout es para imprimirlo asi como system.out.print
    mi_clase.x=20;//para modificar la variable
    cout<<mi_clase.x<<endl;

    return 0;
}*/

class Padre //la aderencia.. siempre es lo mismo quje en java
{
  public:
      int x;
      Padre()
      {

          cout<<"constructor del padre"<<endl;
      }
      ~Padre()//para crear un destructor
      {
          cout<<"destructor del padre"<<endl;
      }
     /* void miFuncion()//para crear una funcion
      {
          cout<<"funcion del padre"<<endl;
      }*/
      /*int getX()
      {
          return x;
      }
      void setX(int x)
      {
          this->x = x;
      }*/
};

class Hijo : public Padre //en vez de poner extends se pone : public Padre
{
public:
    Hijo()
    {
        cout<<"constructor del hijo"<<endl;
    }
    ~Hijo()
    {
        cout<<"destructor del hijo"<<endl;
    }
    /*void miFuncion()//para crear una funcion
    {
        cout<<"funcion del hijo"<<endl;
         ((Padre*)this)->miFuncion();//usamos this para repteri la info
    }*/
};

  int main()
{   //usamos esta sintaxis para repetir lo mismo

    if(true)//esto tambien es usado para delete
    {
        Hijo h;
        cout<<"--------------"<<endl;
    }
    cout<<"----------------"<<endl;
   /* Hijo *h = new Hijo();
    delete h;//para destruirlo*/

   /* Hijo h;
    h.miFuncion();//llamamos la funcion del hijo
    //((Padre)h).miFuncion(); //llamamos la funcion del padre.. esto es como un "super.miFuncion" de java

    Hijo *h_ptr = new Hijo();
    h_ptr->miFuncion();*/
    //((Padre*)h_ptr)->miFuncion();// tambien usamos esto para repetir la informacion (castearlo algo asi se llama)


    //h.setX(10);
    //cout<<h.getX();

    return 0;


    /*MiClase mi_clase_stack(10);
    cout<<mi_clase_stack.x<<endl;
    mi_clase_stack.x=20;
    cout<<mi_clase_stack.x<<endl;
    mi_clase_stack.miFuncion();// llamams la funcion que tenemos en miclase.cpp

    MiClase *mi_clase_heap = new MiClase(10);
    cout<<mi_clase_heap->x<<endl;//tambien se puede usar la flechita que es lo mismo que poner (*)... es un apuntador
    (*mi_clase_heap).x=20; // se pone * para diferenciar la clase.. osea es el mismo tipo del int de la clase
    cout<<(*mi_clase_heap).x<<endl;
    mi_clase_heap->miFuncion();

    while(1);

    return 0;*/
}
