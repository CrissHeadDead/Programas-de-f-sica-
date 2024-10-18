#include <iostream>
using namespace std;
int main(){
    int op,op1,op2,op3;
    double o,ko,mo,go,a,ma,mma,na,v,mv,mmv,nv;
    do {
        cout<<"Eliga del menu de Conversiones la converision que quiera hacer"<<endl;
        cout<<"Menu de Conversiones"<<endl;
        cout<<"1. Convertir Resistencia"<<endl;
        cout<<"2. Convertir Corriente"<<endl;
        cout<<"3. Convertir Voltaje"<<endl;
        cout<<"0. Salir"<<endl;
        cout<<"La opcion de conversion que eligio es (Elija 0 para salir): "<<endl;
        cin>>op;
     
                switch(op){
                    case 1:
                    do{
                    cout<<"Menu de Conversiones"<<endl;
                    cout<<"1. Converitir ohmios a Kohmios"<<endl;
                    cout<<"2. Converitir ohmios a Mohmios"<<endl;
                    cout<<"3. Converitir ohmios a Gohmios"<<endl;
                    cout<<"0. Salir"<<endl;
                    cout<<"La conversion que eligio es (Eliga 0 para salir): "<<endl;
                    cin>>op1;
                       switch(op1){
                            case 1:
                              cout<<"Ingrese la cantidad de ohmios a converitir"<<endl;
                              cin>>o;
                              ko=o/1000;
                              cout<<"La conversion de "<<o<<" ohmios a Kohmios es de "<<ko<<endl;
                              break;
                            case 2:
                              cout<<"Ingrese la cantidad de ohmios a converitir"<<endl;
                              cin>>o;
                              mo=o/1000000;
                              cout<<"La conversion de "<<o<<" ohmios a Mohmios es de "<<ko<<endl;
                              break;
                             case 3:
                              cout<<"Ingrese la cantidad de ohmios a converitir"<<endl;
                              cin>>o;
                              go=o/1000000000;
                              cout<<"La conversion de "<<o<<" ohmios a Kohmios es de "<<ko<<endl;
                              break;
                             case 0:
                              cout<<"Saliendo........."<<endl;
                              break;
                       
                         }
                    }while(op1!=0);
                    return 0;
                    case 2:
                    do{
                    cout<<"Menu de Conversiones"<<endl;
                    cout<<"1. Convertir amperios a miliamperios"<<endl;
                    cout<<"2. Convertir amperios a microamperios"<<endl;
                    cout<<"3. Convertir amperios a nanoamperios"<<endl;
                    cout<<"0. Salir"<<endl;
                    cout<<"La conversion que eligio es (Elija 0 para salir): "<<endl;
                    cin>>op2;
                       switch(op2){
                            case 1:
                              cout<<"Ingrese la cantidad de amperios a converitir"<<endl;
                              cin>>a;
                              ma=a*1000;
                              cout<<"La conversion de "<<a<<" amperios a miliamperios "<<ma<<endl;
                              break;
                            case 2:
                              cout<<"Ingrese la cantidad de amperios a converitir"<<endl;
                              cin>>a;
                              mma=a*1000000;
                              cout<<"La conversion de "<<a<<" amperios a microamperios es de "<<mma<<endl;
                              break;
                             case 3:
                              cout<<"Ingrese la cantidad de amperios a converitir"<<endl;
                              cin>>a;
                              na=a*1000000000;
                              cout<<"La conversion de "<<a<<" amperios a nanoamperios es de "<<na<<endl;
                              break;
                             case 0:
                              cout<<"Saliendo........."<<endl;
                              break; 
                             
                         }
                    }while(op2!=0);
                    return 0;
                    case 3:
                    do{
                    cout<<"Menu de Conversiones"<<endl;
                    cout<<"1. Convertir voltios a milivoltios"<<endl;
                    cout<<"2. Convertir voltios a microvoltios"<<endl;
                    cout<<"3. Convertir voltios a nanovoltios"<<endl;
                    cout<<"0. Salir"<<endl;
                    cout<<"La conversion que eligio es (Elija 0 para salir): "<<endl;
                    cin>>op3;
                       switch(op3){
                            case 1:
                              cout<<"Ingrese la cantidad de voltios a converitir"<<endl;
                              cin>>v;
                              mv=v*1000;
                              cout<<"La conversion de "<<v<<" voltios a milivoltios es de "<<mv<<endl;
                              break;
                            case 2:
                              cout<<"Ingrese la cantidad de voltios a converitir"<<endl;
                              cin>>v;
                              mmv=v*1000000;
                              cout<<"La conversion de "<<v<<" voltios microvoltios es de "<<mmv<<endl;
                              break;
                             case 3:
                              cout<<"Ingrese la cantidad de voltios a converitir"<<endl;
                              cin>>v;
                              nv=v*1000000000;
                              cout<<"La conversion de "<<v<<" voltios a nanovoltios es de "<<nv<<endl;
                              break;
                             case 0:
                              cout<<"Saliendo........."<<endl;
                              break;
                            
                         }
                    }while(op3!=0);
                    return 0;
                     case 0:
                              cout<<"Saliendo........."<<endl;
                
                        
                  }            
               }while(op!=0);
          return 0;
   }          
                               
                              
                            