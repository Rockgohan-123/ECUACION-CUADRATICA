#include <iostream>
#include <cmath>

using namespace std;

//DECLARACION DE FUNCIONES
void FunctionInput();
void FunctionCalc(double [4]);
void FunctionPrint(double [2]);

//INICIO DE LA FUNCION OUTPUT
void FunctionInput(){
	//VARIABLE DE LAS INCOGNITAS
	double a, b, c;
	
	cout<<" Introduce el valor de la incognita 'A' = "; cin>>a;
	cout<<"\n Introduce el valor de la incognita 'B' = "; cin>>b;
	cout<<"\n Introduce el valor de la incognita 'C' = "; cin>>c;
	
	//PASAR DATOS A OTRA FUNCION
	double pasar[4] = {a, b, c};

	FunctionCalc(pasar);

}

//INICIO DE LA FUNCION CALC
void FunctionCalc(double pasar[4]){
	
	//VARIABLE DE LAS OPERACIONES 
	double mult, raiz, div, neg, x1, x2;
	double a, b, c;

	a = pasar[0];
	b = pasar[1];
	c = pasar[2];
	
	mult = pow(b, 2) - 4 * a * c;

	raiz = sqrt(mult);
	
	div = 2 * a;
	neg = -1 * b;

	x1 = (neg + raiz) / div;
	x2 = (neg - raiz) / div;

	double para[2] = {x1, x2};
	FunctionPrint(para);

}

void FunctionPrint(double para[2]){
	
	double result, result2;

	cout<<"\n	El valor final es {"<<endl;
	
	//COMPROBASION DE X1

	if(para[0] < 0){
		//Signo positivo
		result = -1 * para[0];
		cout<<"		(x + "<<result<<")";

	}else{
		//Signo positivo
		result = -1 * para[0];
		cout<<"		(x "<<result<<")";

	}
	
	//COMPROBASION DE X2
	
	if(para[1] < 0 ){
		//Signo positivo
		result2 = -1 * para[1];
		cout<<"(x + "<<result2<<")";

	}else{
		//Signo negativo
		result2 = -1 * para[1];
		cout<<"(x "<<result2<<")";
	}

	cout<<"\n }"<<endl;
	
}

//INICIO DE LA FUNCION MAIN
int main(){
	FunctionInput();	
	return 0;	
}
