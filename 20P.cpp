#include <iostream>
#include <windows.h>
#include <sstream>
#include <cmath>

using namespace std;
	
	int a, b, c, d;
	string e, f, g;
	float h, i, j;
	
int pro1(){
	cout<<"-----Suma, resta, mulplicacion y division-----\n\n";
	cout<<"1# Ingresa un numero: ";
	cin>>a;
	cout<<"2# Ingresa un numero: ";
	cin>>b;
	
	cout<<"\n\nSuma: "<<a+b;
	cout<<"\nResta: "<<a-b;
	cout<<"\nMultiplicación: "<<a*b;
	cout<<"\nDivicion: "<<a/b;
};

int pro2(){
	cout<<"--------------Numero impar o par?-------------\n\n";
	cout<<"Ingresa un numero: ";
	cin>>a;
	if(a%2==0){
		cout<<"\n\nEl numero es par";
	}else{
		cout<<"\n\nEl numero es impar";
	}
};

int pro3(){
	char mj;
	cout<<"--------------Conversor de unidades------------\n\n";
	cout<<"'A' a 'B'"<<endl;
	cout<<"Kilometros a millas ----------- 1"<<endl;
	cout<<"Metros a pulgadas ------------- 2"<<endl;
	cout<<"Libras a kilos ---------------- 3"<<endl;
	cout<<"\nIngresa opción: ";
	cin>>a;
	if(a<1 || a>3){
		do{	
			cout<<"Ingresa una opcion valida por favor: ";
			cin>>a;
		}while(a<1 || a>3);
	}
	cout<<"Desea convertir a la inversa 'B' a 'A'(s/n): ";
	cin>>mj;
	cout<<endl;
	switch(a){
		case 1: 
			if(mj=='n' || mj=='N'){
				cout<<"Ingrese Kilometros: ";
				cin>>h;
				cout<<"Millas: "<<h/1.609;
			}else{
				cout<<"Ingrese Millas: ";
				cin>>h;
				cout<<"Kilometros: "<<h*1.609;
			}
		break;
		case 2: 
			if(mj=='n' || mj=='N'){
				cout<<"Ingrese Metros: ";
				cin>>h;
				cout<<"Pulgadas: "<<h*39.37;
			}else{
				cout<<"Ingrese Pulgadas: ";
				cin>>h;
				cout<<"Metros: "<<h/39.37;
			}
		break;
		case 3: 
			if(mj=='n' || mj=='N'){
				cout<<"Ingrese Libras: ";
				cin>>h;
				cout<<"Kilos: "<<h/2.205;
			}else{
				cout<<"Ingrese Kilos: ";
				cin>>h;
				cout<<"Libras: "<<h*2.205;
			}
		break;
	}
	
	
};

int pro4(){
	cout<<"------------------Palindromo?-----------------\n\n";
	cout<<"Ingresa un numero: ";
	cin>>e;
	a = e.length();
	b = a;
	c = 0;
	for(int i = 0; i <a; i++){
		if(e.substr(i,1) == e.substr(b-1,1)){
			c++;
		};
		b--;
	};
	if(c==a){
		cout<<"\n\nEs palindromo";
	}else{
		cout<<"\n\nNo es palindromo";
	}
};

int pro5(){
	cout<<"--------Conversor de arabigos a romanos-------";
};

int pro6(){
	string uni[10], diez[6], dec[10];
	uni[0] = "cero";
	uni[1] = "uno";
	uni[2] = "dos";
	uni[3] = "tres";
	uni[4] = "cuatro";
	uni[5] = "cinco";
	uni[6] = "seis";
	uni[7] = "siete";
	uni[8] = "ocho";
	uni[9] = "nueve";
	diez[0] = "diez";
	diez[1] = "once";
	diez[2] = "doce";
	diez[3] = "trece";
	diez[4] = "catorce";
	diez[5] = "quince";
	dec[2] = "veinte";
	dec[3] = "treinta";
	dec[4] = "cuarenta";
	dec[5] = "cincuenta";
	dec[6] = "sesenta";
	dec[7] = "setenta";
	dec[8] = "ochenta";
	dec[9] = "noventa";
	dec[1] = "diez";
	

	
	
	
	
	
	
	
	
	
	cout<<"---------Conversor de arabigos a letras--------\n\n";
	cout<<"Ingresa un numero: ";
	cin>>a;
	b = a/100;
	c = (a/10)%10;
	d = a%10;
	
	if(b==0 && c==0){
		e = uni[d];
	}
	
	if(c==1 && d>=1 && d<=5){
		e = diez[d];
	};
	
	if(c==1 && d>5){
		e = "diez y "+uni[d];
	}
	
	if(c==2 && d>0){
		e = "veinti"+uni[d];
	}
	
	if(c>0 && d==0){
		e = dec[c];
	}else if(c>0 && c!=1 && c!=2 && d>0){
		e = dec[c] + " y " + uni[d];
	};
	
	f = "";
	if(a==100){
		e = "cien";
	}else if(c==1){
		f = "ciento ";
	};
	
	if(b>1 && c==0 && d==0){
		f = uni[b] + "cientos ";
		e = "";
	}else if(b>1 && c>0 && d>0){
		f = uni[b] + "cientos ";
	}
	
	
	
	
	
	cout<<f<<e;
};

int pro7(){
	cout<<"---Conversor de enteros con decimal a letras--\n\n";
};

int pro8(){
	cout<<"------------Tabla de Multiplicar--------------\n\n";
	cout<<"Ingresa el valor a multiplicar: ";
	cin>>a;
	cout<<"\n\n";
	for(int i=1; i<11;i++){
		cout<<a<<" * "<<i<<" = "<<a*i<<endl;
	}
};

int pro9(){
	cout<<"-------Tablas de multiplicar del 1 al 10-------\n\n";
	for(int i=1; i<11;i++){
		cout<<"\nTabla del "<<i<<endl;
		for(int ii=1; ii<11;ii++){
			cout<<i<<" * "<<ii<<" = "<<i*ii<<endl;
		}
	}
};

int pro10(){
	int num1, num2, *mul, apo1, apo2;
	mul = new int [1];
	
	cout<<"--------Multiplicación de forma grafica--------\n\nIngresa numeros menores a 100..."<<endl;
	system("pause");
	system("cls");
	cout<<"--------Multiplicación de forma grafica--------\n\n";
	cout<<"1# Ingresa un numero: ";
	cin>>num1; 
	if(num1>=100){
		do{
			cout<<"Ingresa un numero valido... ";
			cin>>num1;
		}while(num1>=100);
	}
	cout<<"2# Ingresa un numero: ";
	cin>>num2; 
	if(num2>=100){
		do{
			cout<<"Ingresa un numero valido... ";
			cin>>num2;
		}while(num2>=100);
	}	
	
	system("cls");
	cout<<"--------Multiplicación de forma grafica--------\n\nEl resultado es: "<<endl;;
	if(num1>=10){
		e = "    ";
	}else{
		e = "     ";
	}

	cout<<e<<num1<<endl;
	
	if(num2>=10){
		e = "  ";
	}else{
		e = "   ";
	}
	
	cout<<e<<"x "<<num2<<endl;
	
	if(num1>=10 && num2>=10){
		mul[0] = num2/10;
		mul[1] = num2%10;
		apo1 = mul[1]*num1;
		apo2 = mul[0]*num1;
		cout<<"------------"<<endl;	
		
		if(apo1>=100){
			e = "   ";
		}else if(apo1>=10){
			e = "    ";
		}else{
			e = "     ";
		}
		if(apo2>=100){
			f = "+ ";
		}else if(apo2>=10){
			f = "+  ";
		}else {
			f = "+   ";
		}
		
		cout<<e<<apo1<<endl;
		cout<<f<<apo2<<endl;
	}

	apo1 = num1*num2;
	if(apo1>=1000){
		e = "  ";
	}else if(apo1>=100){
		e = "   ";
	}else if(apo1>=10){
		e = "    ";
	}else{
		e = "     ";
	}
	
	cout<<"------------"<<endl;
	cout<<e<<apo1;
	delete[] mul;
};

int pro11(){
	cout<<"-------Conversor de decimales a binario-------\n\n";
	cout<<"Ingresa un numero entero positivo: ";
	cin>>a; 
	if(a<0){
		do{
			cout<<"Ingresa un numero correcto: ";
			cin>>a;
		}while(a<0);
	}
	
	while(a!=0){
		stringstream ss;	
		b = a%2;
		ss << b;
		ss >> f;   
		a = a/2;
		e = f + e;
	}
	cout<<"Resultado en binario: "<<e;
}

int pro12(){
	string *hex;
	hex = new string [6];
	hex[0] = "A";
	hex[1] = "B";
	hex[2] = "C";
	hex[3] = "D";
	hex[4] = "E";
	hex[5] = "F";
	
	cout<<"------Conversor de decimales a hexadecimal------\n\n";
	cout<<"Ingresa un numero entero positivo: ";
	cin>>a; 
	if(a<0){
		do{
			cout<<"Ingresa un numero correcto: ";
			cin>>a;
		}while(a<0);
	}
	
	while(a!=0){
		stringstream ss;	
		b = a%16;
		ss << b;
		ss >> f;
		if(b>9 && b<16)   {
			f = hex[b-10];
		}
		a = a/16;
		e = f + e;
	}
	cout<<"Resultado en hexadecimal: "<<e;
	delete[] hex;
};

int pro13(){
	e = "----------Figuras geometricas basicas---------\n";
	system("color 2f");
	cout<<e<<endl;
	cout<<"........."<<endl;
	cout<<"........."<<endl;
	cout<<"........."<<endl;
	cout<<"........."<<endl;
	Sleep(2000);
	system("cls");
	system("color 3f");
	cout<<e<<endl;
	cout<<"    ."<<endl;
	cout<<"   ..."<<endl;
	cout<<"  ....."<<endl;
	cout<<" ......."<<endl;
	cout<<"........."<<endl;
	Sleep(2000);
	system("cls");
	system("color 4f");
	cout<<e<<endl;
	cout<<" ........."<<endl;
	cout<<"..........."<<endl;
	cout<<" ........."<<endl;
	Sleep(2000);
	system("cls");
	system("color 5f");
	cout<<e<<endl;
	cout<<"   ."<<endl;
	cout<<"  ..."<<endl;
	cout<<" ....."<<endl;
	cout<<"......."<<endl;
	cout<<" ....."<<endl;
	cout<<"  ..."<<endl;
	cout<<"   ."<<endl;
	system("pause");
	system("color 0f");
};

int pro14(){
	cout<<"----------Punto por toda la pantalla----------\n\n";
	char mj='n', *punt;
	punt = new char [100];
	a = 1;
	b = 5;
	for(int i=0; i<100; i++){
		punt [i] = ' ';
	}
	do{
		
	
		while(a<b){
			a+=2;
			for(int i=1; i<100; i++){
				punt [i] = '>';
				punt [i-1] = ' ';
				for(int ii=0; ii<100; ii++){
					cout<<punt[ii];
				}
				system("cls");
				cout<<"----------Punto por toda la pantalla----------\n\n";
				for(int sal=0; sal<=a;sal++){
					cout<<endl;
				}
				Sleep(10);
			}
			
			for(int i=99; i>0; i--){
				punt [i] = '<';
				punt [i+1] = ' ';
				for(int ii=0; ii<100; ii++){
					cout<<punt[ii];
				}
				system("cls");
				cout<<"----------Punto por toda la pantalla----------\n\n";
				for(int sal=0; sal<=(a+1);sal++){
					cout<<endl;
				}
				Sleep(10);
			}
		}
		
		b+=5;
		cout<<"Deseas continuar? s/n: ";
		cin>>mj;
	}while(mj=='s' || mj=='S');
	delete[] punt;
};

int pro15(){
	b = 1;
	c = 500;
	char tip, mj;
	int tot = 0;
	string caj = "--------Simulador de cajero automatico--------\n\n";
	cout<<caj<<endl;
	cout<<"\nInformacion importante: "<<endl;
	cout<<"Codigo: 1234\n"<<"Tipo de cuenta: Monetaria\n"<<"Monto disponible: Q500\n\n";
	system("pause");
	system("cls");
	cout<<caj<<endl;
	cout<<"Inserte tarjeta (ins): ";
	cin>>e;
	if(e!="ins"){
		do{
			cout<<"Inserte de forma correcta la tarjeta por favor... ";
			cin>>e;
		}while(e!="ins");
	}
	system("cls");
	cout<<caj<<"\nBienvenido"<<endl;
	cout<<"Ingrese codigo: ";
	cin>>a;
	if(a!=1234){
		do{
			cout<<"Codigo incorrecto, ingreselo de nuevo: ";
			cin>>a;
			b++;
		}while(b!=3);
		if(b==3){
			system("cls");
			cout<<caj<<"\nPor la seguridad de su cuenta, la misma se ha desactivado.\nMotivo: intentos maximos excedidos";
			b = 0;
			system("pause");
		}
	}
	if(b!=0){
		do{
		system("cls");
		cout<<caj<<"\nEscoja el tipo de cuenta"<<endl;
		cout<<"Montaria ........... M\nAhorro.............. A\n\nIngrese el tipo de cuenta: ";
		cin>>tip;
		if(tip=='M' || tip=='m'){
			system("cls");
			cout<<caj<<"\nCuenta Monetaria\n\nIngrese el monto a retirar: ";
			cin>>a;
			if(a>c){
				cout<<"Monto a retirar excede el monto en su cuenta";
			}else if(a<1){
				cout<<"Monto a retirar debe ser mayor a 0";
			}else if(a%100!=0){
				cout<<"Monto invalido. Recuerde que unicamente se brindan billetes con valor a Q.100";
			}else{
				cout<<"Tome su dinero";
				tot += a;
				stringstream ss;
				ss << a;
				ss >> f; 
				c -= a;
				g += f;
			}
		}else{
			cout<<"\nNo cuenta con este tipo de cuenta activa";
		}
		cout<<"\nDesea realizar otra transaccion? s/n: ";
		cin>>mj;
		}while(mj=='s' || mj=='S');
		
		
		a = (g.length())/3;
		system("cls");
		cout<<caj<<"\n-------------------Resumen--------------------\n\n";
		
		for(int i=0;i<g.length();i+=3){
			cout<<"Retiro ................................ Q. "<<g.substr(i,3)<<endl;
		}
		cout<<"\nTotal ................................. Q. "<<tot<<endl;
		cout<<"\nHora: ";
		system("time /t");
		cout<<"Fecha: ";
		system("date /t");
		cout<<"\n\nGracias por preferirnos";
	}
	g = "";
};

int pro16(){
	cout<<"------------Calculo de hipotenusa-------------\n\n";
	cout<<"Ingrese el valor del cateto opuesto: ";
	cin>>h;
	cout<<"Ingrese el valor del cateto adyacente: ";
	cin>>i;
	cout<<"\nEl valor de la hipotenusa es: "<<sqrt((h*h)+(i*i));
};

int pro17(){
	cout<<"Hola";
};
int pro18(){
	cout<<"Hola";
};

int pro19(){
	cout<<"Hola";
};

int pro20(){
	cout<<"Hola";
};

int menu(int jul){
	system("cls");
	switch (jul){
		case 1:
			pro1();
		break;
		case 2:
			pro2();
		break;
		case 3:
			pro3();
		break;
		case 4:
			pro4();
		break;
		case 5:
			pro5();
		break;
		case 6:
			pro6();
		break;
		case 7:
			pro7();
		break;
		case 8:
			pro8();
		break;
		case 9:
			pro9();
		break;
		case 10:
			pro10();
		break;
		case 11:
			pro11();
		break;
		case 12:
			pro12();
		break;
		case 13:
			pro13();
		break;
		case 14:
			pro14();
		break;
		case 15:
			pro15();
		break;
		case 16:
			pro16();
		break;
		case 17:
			pro17();
		break;
		case 18:
			pro18();
		break;
		case 19:
			pro19();
		break;
		case 20:
			pro20();
		break;
		default: cout<<"¡Vaya! Ese numero no es correcto...";
	}			
}

int main(){
	char fin;
	int inicio;
	do{
		cout<<"------------------Bienvenido------------------\n\nEscoge una de las siguientes opciones: ";
		
		cout<<"\nSuma, resta, mulplicacion y division ....... 1"<<endl;
		cout<<"Numero impar o par? ........................ 2"<<endl;
		cout<<"Conversor de unidades ...................... 3"<<endl;
		cout<<"Palindromo? ................................ 4"<<endl;
		cout<<"Conversor de arabigos a romanos ............ 5"<<endl;
		cout<<"Conversor de enteros a letras .............. 6"<<endl;
		cout<<"Conversor de enteros con decimal a letras .. 7"<<endl;
		cout<<"Tabla de multiplicar ....................... 8"<<endl;
		cout<<"Tablas de multpliar del 1 al 10 ............ 9"<<endl;
		cout<<"Multiplicación de forma grafica ............ 10"<<endl;
		cout<<"Conversor de decimales a binario ........... 11"<<endl;
		cout<<"Conversor de decimales a hexadecimal ....... 12"<<endl;
		cout<<"Figuras geometricas basicas ................ 13"<<endl;
		cout<<"Punto por toda la pantalla ................. 14"<<endl;
		cout<<"Simulador de cajero automatico ............. 15"<<endl;
		cout<<"Calculo de hipotenusa ...................... 16"<<endl;
		cout<<"? .......................................... 17"<<endl;
		cout<<"? .......................................... 18"<<endl;
		cout<<"? .......................................... 19"<<endl;
		cout<<"? .......................................... 20"<<endl;
		
		cout<<"\nIngresa la opcion escogida (Numero): ";
		cin>>inicio;
		menu(inicio);
		cout<<"\n\n\nDeseas regresar al menu (s/n)? ";
		cin>>fin;
		if(fin=='s' || fin =='S'){
			system("cls");
			a = 0, b = 0, c = 0, d = 0;
			e = "", f = "", g = "";
			h = 0, i = 0, j = 0;
		}
	}while(fin=='s' || fin =='S');
	cout<<"Adios"<<endl;
	system("pause");
	return 0;
};
