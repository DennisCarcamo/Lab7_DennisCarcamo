#include <iostream>
#include <vector>
#include <ctime>
#include "Racional.h"
#include <sstream>
#include <string>
#include <cstring>

//using std::namespaced;
using std::stringstream;
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

using namespace std;

int simplificar(int numerador, int denominador);

int main(int argc, char*argv[]){
	int opcion=0;;
	int nume, denom;
	vector<Racional> Racionales;
	vector<string> historial;

	while(opcion!=7){

		cout<<"******************************MENU*************************************"<<endl;
		cout<<"1-crear racionales"<<endl
			<<"2-suma de racionales"<<endl
			<<"3-resta de racionales"<<endl
			<<"4-multiplicacion de racionales"<<endl
			<<"5-Division de racionales"<<endl
			<<"6-ver Historial de racionales"<<endl
			<<"cualquier tecla para salir"<<endl;
			cout<<""<<endl;
		
			cin>>opcion;



			if (opcion==1){
				cout<<"***************************** CREAR RACIONAL *************************************"<<endl;
				cout<<"ingrese su numerador"<<endl;
				cin>>nume;
				cout<<"1-ingrese su denominador"<<endl;
				cin>>denom;
				if (denom==0){
					Racional rac(nume);
					Racionales.push_back(rac);
				}else{
					int b=2;

					while(b<=denom){
						if(denom%b==0 && nume%b==0){
							denom=denom/b;
							nume=nume/b;
						}else{
							b++;
						}
					}
					
					Racional rac(nume,denom);
					Racionales.push_back(rac);
				}




			}else if (opcion==2){
				cout<<"***************************** SUMAR RACIONAL *************************************"<<endl;
				int indice1, indice2;
				Racional total;
				for (int i = 0; i<Racionales.size(); i++){
					 cout<<i<<" "<<Racionales.at(i)<<endl;
				}

				cout<<"elija su primer valor"<<endl;
				cin>>indice1;
				cout<<"Elija su segundo valor"<<endl;
				cin>>indice2;

				total=Racionales.at(indice1) + Racionales.at(indice2);
				
				int b=2;

				while(b<=total.numer){
					if(total.numer%b==0 && total.denom%b==0){
						total.denom=total.denom/b;
						total.numer=total.numer/b;
					}else{
						b++;
					}
				}

				stringstream ss;
				ss << Racionales.at(indice1) << " + " << Racionales.at(indice2) << " = " << total;
				string cadena = ss.str();
				historial.push_back(cadena);





				
			}else if (opcion==3){
				cout<<"***************************** RESTA RACIONAL *************************************"<<endl;

				int indice1, indice2;
				


				Racional total;
				for (int i = 0; i < Racionales.size(); i++){
					 cout<<i<<" "<<Racionales.at(i)<<endl;
				}
				
				cout<<"elija su primer valor"<<endl;
				cin>>indice1;
				cout<<"Elija su segundo valor"<<endl;
				cin>>indice2;
				total=Racionales.at(indice1) - Racionales.at(indice2);
				
				int b=2;

				while(b<=total.numer){
					if(total.numer%b==0 && total.denom%b==0){
						total.denom=total.denom/b;
						total.numer=total.numer/b;
					}else{
						b++;
					}
				}

				stringstream ss;
				ss << Racionales.at(indice1) << " - " << Racionales.at(indice2) << " = " << total;
				string cadena = ss.str();
				historial.push_back(cadena);

			

			}else if (opcion==4){
				cout<<"***************************** MULTIPLICAR RACIONAL *************************************"<<endl;

				int indice1, indice2;


				Racional total;
				for (int i = 0; i <Racionales.size(); i++){
					 cout<<i<<" "<<Racionales.at(i)<<endl;
				}

				cout<<"elija su primer valor"<<endl;
				cin>>indice1;
				cout<<"Elija su segundo valor"<<endl;
				cin>>indice2;

				total=Racionales.at(indice1) * Racionales.at(indice2);
				int b=2;

				while(b<=total.numer){
					if(total.numer%b==0 && total.denom%b==0){
						total.denom=total.denom/b;
						total.numer=total.numer/b;
					}else{
						b++;
					}
				}

				stringstream ss;
				ss << Racionales.at(indice1) << " * " << Racionales.at(indice2) << " = " << total;
				string cadena = ss.str();
				historial.push_back(cadena);


			



			}else if (opcion==5){
				cout<<"***************************** DIVIDIR RACIONAL *************************************"<<endl;
				int indice1, indice2;
				Racional total;
				for (int i = 0; i <Racionales.size(); i++){
					 cout<<i<<" "<<Racionales.at(i)<<endl;
				}

				cout<<"elija su primer valor"<<endl;
				cin>>indice1;
				cout<<"Elija su segundo valor"<<endl;
				cin>>indice2;

				total=Racionales.at(indice1) / Racionales.at(indice2);
				int b=2;

				while(b<=total.numer){
					if(total.numer%b==0 && total.denom%b==0){
						total.denom=total.denom/b;
						total.numer=total.numer/b;
					}else{
						b++;
					}
				}

				stringstream ss;
				ss << Racionales.at(indice1) << " / " << Racionales.at(indice2) << " = " << total;
				string cadena = ss.str();
				historial.push_back(cadena);

			






			}else if (opcion==6){
				cout<<"***************************** HISTORRIAL *************************************"<<endl;
			 	for (int i = 0; i < historial.size(); i++){
			 		cout<<i+1<<" "<<historial.at(i)<<endl;
			 	}
			}

		


	}


	return 0;
}


