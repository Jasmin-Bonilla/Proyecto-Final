
#include <iostream>
#include <stdlib.h>
#include <locale.h>



using std::cout;
using std::cin;
using std::endl;
using namespace std;

int main ()
{
	setlocale(LC_ALL,"");
		
	
        

int Opc=0 ;//sera la opcion para seleccionar
int Salir;//indica el momento para salir del programa
char respuesta;
char nombre[20];


int total;
int conteo_buenas = 0, conteo_malas = 0;
int total_buenas = 0, total_malas = 0;

system ("COLOR A0");
cout<<"	J U E G O  D E  T R I V I A S"<<endl<<endl;
cout<<"Nombre del jugador\n\n\n";
cin>>nombre;
cout<<"---------------------";
cout<<"\n\n � ES HORA DE JUGAR...MUCHA SUERTE !\n\n"<<" "<<nombre<<endl;
cout<<"---------------------" <<endl;


for (int i=0; i<6; i++)
{
 
 for(int i=0; i < 6; i++)
{
	

	
cout<< "CATEGORIAS"<<endl;
cout<<"****"<<endl;
cout<< "1- Geograf�a" <<endl;
cout<< "2- Historia" <<endl;
cout<< "3- Ciencia"<<endl;
cout<< "4- Arte"<<endl;
cout<< "5- Deporte"<<endl;
cout<< "6- Salir"<<endl;
cout<<"Dame otra opcion(rango 1-6)"<<endl;
cin>>Opc;
 
switch (Opc) 
{
  case 1: // Modulo a
  {
system ("COLOR E8");  
cout<<"Geograf�a"<<endl;
cout<<"---------"<<endl<<endl;
 
cout<<"1-�Cual es el oc�ano mas grande del mundo?"<<endl;
cout<<"a) Oc�ano Pac�fico"<<endl;
cout<<"b) Oc�ano  �ndico"<<endl;
cout<<"c) Oc�ano Atl�ntico"<<endl;
cin>>respuesta;
 
      if(respuesta=='a')
      {
      	cout<<"la respuesta es correcta"<<endl;
      	conteo_buenas++;
	  }
else{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
cout<<"2-�Cual es el pa�s m�s grande del mundo?"<<endl;
cout<<"a) China"<<endl;
cout<<"b) Rusia"<<endl;
cout<<"c) India"<<endl;
cin>>respuesta;
       if(respuesta=='b')
{
	          
cout<<"la respuesta es correcta"<<endl;
 conteo_buenas++;
 }
else
{
cout<<"La respuesta es incorrecta"<<endl;
conteo_malas++;	
} 
cout<<"3-�Cu�l es la capital de Australia?"<<endl;
cout<<"a) Adelaide"<<endl;
cout<<"b) Canberra "<<endl;
cout<<"c) Sydney"<<endl;
cout<<"d) Melbourne"<<endl;
cin>>respuesta;
       if(respuesta=='b')
       {
       	cout<<"la respuesta es correcta"<<endl;
 		conteo_buenas++;
	   }

else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
cout<<"4-�Cu�l es la naci�n  m�s peque�a del mundo?"<<endl;
cout<<"a) Andorra"<<endl;
cout<<"b) Monaco"<<endl;
cout<<"c) El Vaticano"<<endl;
cout<<"d) Ninguna"<<endl;
cin>>respuesta;
       if(respuesta=='c')
{

cout<<"la respuesta es correcta"<<endl;
conteo_buenas++;
 }
else
{
cout<<"La respuesta es incorrecta"<<endl;
conteo_malas++;
} 
cout<<"5-�Cu�l es la �nica ciudad que est� en dos continentes distintos?"<<endl;
cout<<"a) Moscu"<<endl;
cout<<"b) Estambul "<<endl;
cout<<"c) Berlin"<<endl;
cout<<"d) Ninguna"<<endl;
cin>>respuesta;
       if(respuesta=='b')
       {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   }
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
} 
cout<<"6-�Cu�l es el  pa�s m�s propenso a terremotos del mundo?"<<endl;
cout<<"a) Malasia"<<endl;
cout<<"b) Corea"<<endl;
cout<<"c) Japon "<<endl;
cout<<"d) Taiwan "<<endl;
cin>>respuesta;
       if(respuesta=='c')
       {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   }
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
cout<<"7-�Como se llama el oc�ano mas peque�o?"<<endl;
cout<<"a) Oc�ano Artico"<<endl;
cout<<"b) Oc�ano Indio"<<endl;
cout<<"c) Oc�ano Pac�fico"<<endl;
cout<<"d) Oc�ano Atl�ntico"<<endl;
cin>>respuesta;
       if(respuesta=='a')
{

cout<<"la respuesta es correcta"<<endl;
conteo_buenas++;
 }
else{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
cout<<"8-�El monte Everest tiene 29,029 pies de altura. Pero, �sabes que pa�s reclama este monumento de fama mundial?"<<endl;
cout<<"a) Columbia"<<endl;
cout<<"b) Nepal"<<endl;
cout<<"c) Suiza"<<endl;
cout<<"d) Ninguna"<<endl;
cin>>respuesta;
       if(respuesta=='b')
       {
        cout<<"la respuesta es correcta"<<endl;
        conteo_buenas++;
    }
else
{
cout<<"La respuesta es incorrecta"<<endl;
conteo_malas++;
}

cout<<"9-�Donde encontrarias la �Plaza de Espa�a�?"<<endl;
cout<<"a) Espa�a"<<endl;
cout<<"b) Italia"<<endl;
cout<<"c)Brasil"<<endl;
cout<<"d)Austria "<<endl;
cin>>respuesta;
       if(respuesta=='b')
      {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
 
cout<<"10-�Cu�l  es el nombre del r�o m�s largo del mundo?"<<endl;
cout<<"a) R�o Nilo"<<endl;
cout<<"b) R�o Amazonas"<<endl;
cout<<"c) R�o Danubio"<<endl;
cout<<"d) Ninguna de las anteriores"<<endl;
cin>>respuesta;
       if(respuesta=='b')
       {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
cout<<"11-�Cu�l es el pa�s m�s poblado de la tierra?"<<endl;
cout<<"a) Espa�a"<<endl;
cout<<"b) China"<<endl;
cout<<"c) Rusia"<<endl;
cout<<"d)Estados Unidos"<<endl;
cin>>respuesta;
       if(respuesta=='b')
       {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   }
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
cout<<"12-�Qu� pa�s tiene la abreviatura �CH�?"<<endl;
cout<<"a) Chile"<<endl;
cout<<"b) Porcelana"<<endl;
cout<<"c) Cuba"<<endl;  
cout<<"d) Suiza"<<endl;
cin>>respuesta;
       if(respuesta=='d')
       {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   }
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
cout<<"13-�Cu�l es la isla m�s grande del mundo?"<<endl;
cout<<"a) Groenlandia"<<endl;
cout<<"b) Islandia"<<endl;
cout<<"c) Finlandia"<<endl;
cout<<"d) Irlanda"<<endl;
cin>>respuesta;
       if(respuesta=='a')
       {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   }
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
cout<<"14-�Cu�l es la capital de Nicaragua?"<<endl;
cout<<"a) Brasil"<<endl;
cout<<"b) Ninguna"<<endl;
cout<<"c) Managua"<<endl;
cout<<"d) San tiago "<<endl;
cin>>respuesta;
       if(respuesta=='c')
       {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   }
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
cout<<"15-�Cu�l es la segunda monta�a m�s alta del mundo?"<<endl;
cout<<"a) K2"<<endl;
cout<<"b) K1"<<endl;
cout<<"c) K3"<<endl;
cout<<"d) K5"<<endl;
cin>>respuesta;
       if(respuesta=='a')
       {
	   cout<<"la respuesta es correcta"<<endl;
	   conteo_buenas++;
       }
 
else
{
    cout<<"La respuesta es incorrecta"<<endl;
    conteo_malas++;
}
cout<<"Total de buenas: "<<conteo_buenas<<endl;
cout<<"Total de malas: "<<conteo_malas<<endl;

system("pause");
system("cls");

        break;
}
case 2: // Modulo b
{
	system ("COLOR F1");  
	cout<<"Historia"<<endl;
	cout<<"--------"<<endl<<endl;
	
	cout<<"1-�Cu�ndo termino la II Guerra Mundial?"<<endl;
	cout<<"a) 1945"<<endl;
	cout<<"b) 1947"<<endl;
	cout<<"c) 1943"<<endl;
	cout<<"d) 1955"<<endl;
	cin>>respuesta;
	     if(respuesta=='a')
    {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	  cout<<"2-�En que a�o lleg� Cristobal Colon a Am�rica?"<<endl;
      cout<<"a) 1429"<<endl;
      cout<<"b) 1492"<<endl;
      cout<<"c) 1592"<<endl;
      cout<<"d) 1548"<<endl;
      cin>>respuesta;
       if(respuesta=='b')
      {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
      
      cout<<"3-� A que edad ascendio la reina Isabel al trono?"<<endl;
      cout<<"a) 27 a�os"<<endl;
      cout<<"b) 18 a�os"<<endl;
      cout<<"c) 22 a�os"<<endl;
      cout<<"d)30 a�os"<<endl;
      cin>>respuesta;
       if(respuesta=='a')
      {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
      
       cout<<"4-�Cuando termino la Prehistoria?"<<endl;
      cout<<"a) 1000 A.C."<<endl;
      cout<<"b)3000 A.C."<<endl;
      cout<<"c)2000 A.C."<<endl;
      cout<<"d) 4000 A.C."<<endl;
      cin>>respuesta;
       if(respuesta=='b')
       {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
      
        cout<<"5-�Como se llama la epoca del Paleolitico?"<<endl;
      cout<<"a) Edad de oro"<<endl;
      cout<<"b) Edad de Plata"<<endl;
      cout<<"c) Antigua Edad de Piedra"<<endl;
      cout<<"d) Nueva edad de Piedra"<<endl;
      cin>>respuesta;
       if(respuesta=='c')
       {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
      
       cout<<"6-�En que pa�s se us� la primera bomba at�mica?"<<endl;
      cout<<"a) Rusia"<<endl;
      cout<<"b) Estados Unidos"<<endl;
      cout<<"c) Jap�n"<<endl;
      cout<<"d) Ucrania"<<endl;
      cin>>respuesta;
       if(respuesta=='c')
       {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
      
    cout<<"7-�Cual fue el primer animal domesticado por el hombre?"<<endl;
      cout<<"a) Perros"<<endl;
      cout<<"b) Leones"<<endl;
      cout<<"c) Osos"<<endl;
      cout<<"d) Gatos"<<endl;
      cin>>respuesta;
       if(respuesta=='a')
       {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
      
      cout<<"8-�C�mo se llama la primera mujer que viaj� al espacio?"<<endl;
      cout<<"a) Valentina Tereshkova"<<endl;
      cout<<"b) Alexandra Tereshkova"<<endl;
      cout<<"c) Amanda Tereshkova"<<endl;
      cout<<"d) Marie Tereshkova"<<endl;
      cin>>respuesta;
       if(respuesta=='a')
       {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
      
      cout<<"9-�Cu�l fue el primer hombre en ir a la luna?"<<endl;
      cout<<"a) Louis Armstrong"<<endl;
      cout<<"b) Neil Armstrong"<<endl;
      cout<<"c) Michael Armstrong"<<endl;
      cout<<"d) Alfred Armstrong"<<endl;
      cin>>respuesta;
       if(respuesta=='b')
       {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
      
      cout<<"10-� Cu�l fue el primer metal encontrado por el hombre?"<<endl;
      cout<<"a) Oro"<<endl;
      cout<<"b) Cobre"<<endl;
      cout<<"c) Plata"<<endl;
      cout<<"d) Acero"<<endl;
      cin>>respuesta;
       if(respuesta=='b')
       {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
      
      cout<<"11-�Cuando reclamo EEUU su independencia?"<<endl;
      cout<<"a) 4 de julio de 1976"<<endl;
      cout<<"b) 12 de junio de 1776"<<endl;
      cout<<"c) 12 de junio de 1976"<<endl;
      cout<<"d) 4 de julio de 1976"<<endl;
      cin>>respuesta;
       if(respuesta=='a')
       {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
      
      cout<<"12-�Qui�n fue el primer emperador romano?"<<endl;
      cout<<"a) C?sar Augusto"<<endl;
      cout<<"b) Julio Cesar"<<endl;
      cout<<"c) Marco Aurelia"<<endl;
      cout<<"d) Mario Tulio"<<endl;
      cin>>respuesta;
       if(respuesta=='a')
      {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
      
      cout<<"13-�En que isla muri� Napole�n?"<<endl;
      cout<<"a) Sicilia"<<endl;
      cout<<"b) Santa Elena"<<endl;
      cout<<"c) Creta"<<endl;
      cout<<"d) Ninguno"<<endl;
      cin>>respuesta;
       if(respuesta=='b')
       {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
      
      cout<<"14-�Qu� a�o solo tuvo 355 d�as?"<<endl;
      cout<<"a) 1582"<<endl;
      cout<<"b) 1615"<<endl;
      cout<<"c) 1823"<<endl;
      cout<<"d) Ninguno"<<endl;
      cin>>respuesta;
       if(respuesta=='a')
      {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
      
      cout<<"15-�Qu� Libro es el mas leido?"<<endl;
      cout<<"a) El Diccionario"<<endl;
      cout<<"b) La Enciclopedia"<<endl;
      cout<<"c) La biblia"<<endl;
      cout<<"d) Ninguno"<<endl;
      cin>>respuesta;
       if(respuesta=='c')
      {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
cout<<"Total de buenas: "<<conteo_buenas<<endl;
cout<<"Total de malas: "<<conteo_malas<<endl;

      system("pause");
      system("cls");

        break;
}
case 3: // Modulo c
{
	
		system ("COLOR F9");
	cout<<"Ciencia"<<endl;
	cout<<"-------"<<endl<<endl;
	
	cout<<"1-�Cu�l es el elemento qu�mico m�s abundante en la corteza terrestre?"<<endl;
	cout<<"a) Ox�geno"<<endl;
	cout<<"b) Nitr�geno "<<endl;
	cout<<"c) Carbono"<<endl;
	cout<<"d) Helio"<<endl;
	cin>>respuesta;
	     if(respuesta=='a')
        {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"2-�En que mes el Sol esta mas cerca de la Tierra?"<<endl;
	cout<<"a) Agosto"<<endl;
	cout<<"b) Mayo"<<endl;
	cout<<"c) Diciembre"<<endl;
	cout<<"d) Febrero"<<endl;
	cin>>respuesta;
	     if(respuesta=='c')
       {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"3-�Cuantos elementos tiene la tabla periodica?"<<endl;
	cout<<"a) 200"<<endl;
	cout<<"b) 118"<<endl;
	cout<<"c) 150"<<endl;
	cout<<"d) 178"<<endl;
	cin>>respuesta;
	     if(respuesta=='b')
     {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"4-�De los cinco sentidos, �cual es el que se desarrolla primero??"<<endl;
	cout<<"a) Oido"<<endl;
	cout<<"b) Vista"<<endl;
	cout<<"c) Olfato"<<endl;
	cout<<"d) Tacto"<<endl;
	cin>>respuesta;
	     if(respuesta=='c')
     {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"5-�Cu�l es el animal m�s venenoso del mundo?"<<endl;
	cout<<"a) Serpeiente"<<endl;
	cout<<"b) Pez piedra"<<endl;
	cout<<"c) La medusa avispa de mar"<<endl;
	cout<<"d) Mamba negra"<<endl;
	cin>>respuesta;
	     if(respuesta=='c')
     {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	  cout<<"6-�C�mo se denomina al tipo de tri�ngulo que tiene sus tres lados iguales?"<<endl;
	cout<<"a) Is�sceles"<<endl;
	cout<<"b) Equil�tero"<<endl;
	cout<<"c) Recto"<<endl;
	cout<<"d) Ninguno"<<endl;
	cin>>respuesta;
	     if(respuesta=='b')
    {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"7-�Cu�l  es el primer elemento de la Tabla peri�dica ?"<<endl;
	cout<<"a) Helio"<<endl;
	cout<<"b) Arg�n"<<endl;
	cout<<"c) Hidr�geno"<<endl;
	cout<<"d) Ox�geno"<<endl;
	cin>>respuesta;
	     if(respuesta=='c')
     {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	  cout<<"8-�C�mo se le denomina al centro de un �tomo?"<<endl;
	cout<<"a) Electr�n"<<endl;
	cout<<"b) N�cleo"<<endl;
	cout<<"c) Prot�n"<<endl;
	cout<<"d) Centro"<<endl;
	cin>>respuesta;
	     if(respuesta=='b')
     {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
    cout<<"9-�Cu�l es el gas que se encuentra en mayor cantidad en el aire que respiramos?"<<endl;
	cout<<"a) Nitr�geno"<<endl;
	cout<<"b) Ox�geno"<<endl;
	cout<<"c) Carbono"<<endl;
	cout<<"d) Helio"<<endl;
	cin>>respuesta;
	     if(respuesta=='a')
        {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	   cout<<"10-�Cu�l es el s�mbolo qu�mico del oro?"<<endl;
	cout<<"a) Or"<<endl;
	cout<<"b) Au"<<endl;
	cout<<"c) Ao"<<endl;
	cout<<"d) Ae"<<endl;
	cin>>respuesta;
	     if(respuesta=='b')
        {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"11-�Qu� es el cobalto?"<<endl;
	cout<<"a) Un mineral"<<endl;
	cout<<"b) Un vegetal"<<endl;
	cout<<"c) Un Animal"<<endl;
	cout<<"d) Un producto"<<endl;
	cin>>respuesta;
	     if(respuesta=='a')
   {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"12-�Qu� se le agrega al hierro para hacer acero?"<<endl;
	cout<<"a) Ox?geno"<<endl;
	cout<<"b) Carbono"<<endl;
	cout<<"c) Nitr?geno"<<endl;
	cout<<"d) Ninguno"<<endl;
	cin>>respuesta;
	     if(respuesta=='b')
        {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"13-�En que parte del cuerpo se produce la insulina?"<<endl;
	cout<<"a) H�gado"<<endl;
	cout<<"b) Pulmones"<<endl;
	cout<<"c) P�ncreas"<<endl;
	cout<<"d) Ninguno"<<endl;
	cin>>respuesta;
	     if(respuesta=='c')
 {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"14-�Qu� rama de la  biolog�a estudia a los animales?"<<endl;
	cout<<"a) Fauna"<<endl;
	cout<<"b) Medicina"<<endl;
	cout<<"c) Teologia"<<endl;
	cout<<"d) Ninguno"<<endl;
	cin>>respuesta;
	     if(respuesta=='d')
 {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"15-�C�mo se llama el proceso por medio del cual las plantas obtienen su alimento?"<<endl;
	cout<<"a) Bios�ntesis"<<endl;
	cout<<"b) Fotos�ntesis"<<endl;
	cout<<"c) Luminoso tesis"<<endl;
	cout<<"d) Ninguno"<<endl;
	cin>>respuesta;
	     if(respuesta=='b')
        {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
cout<<"Total de buenas: "<<conteo_buenas<<endl;
cout<<"Total de malas: "<<conteo_malas<<endl;
	  
	  system("pause");

        break;
        
}
case 4: // Modulo d
{
	
	
	cout<<"Arte"<<endl;
	cout<<"-----"<<endl<<endl;
	cout<<"1-�Qui�n escribi�  La Odisea?"<<endl;
	cout<<"a) Homero"<<endl;
	cout<<"b) Virgilio"<<endl;
	cout<<"c) Cervantes"<<endl;
	cout<<"d) Amaya"<<endl;
	cin>>respuesta;
	     if(respuesta=='a')
         {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"2-�Cu�l es la obra mas importante de la literatura en espa�ol?"<<endl;
	cout<<"a) El Principito"<<endl;
	cout<<"b) Don Quijote de la Mancha"<<endl;
	cout<<"c) Cien a�os de soledad"<<endl;
	cout<<"d) Amor en tiempos de colera"<<endl;
	cin>>respuesta;
	     if(respuesta=='b')
    {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"3-�Qui�n pint� el famoso cuadro La �ltima cena?"<<endl;
	cout<<"a) Rembrandt"<<endl;
	cout<<"b) Velazquez"<<endl;
	cout<<"c) Leonardo da Vinci"<<endl;
	cout<<"d) Miguel Angelo"<<endl;
	cin>>respuesta;
	     if(respuesta=='c')
   {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"4-�C�mo se llama el Himno Nacional de Francia?"<<endl;
	cout<<"a) La Internaciona"<<endl;
	cout<<"b) La Marsellesa"<<endl;
	cout<<"c) La solitaria"<<endl;
	cout<<"d) La incondicional"<<endl;
	cin>>respuesta;
	     if(respuesta=='b')
     {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"5-�A que se denomina s�ptimo arte?"<<endl;
	cout<<"a) Pintura"<<endl;
	cout<<"b) Escultura"<<endl;
	cout<<"c) Cine"<<endl;
	cout<<"d) M�sica "<<endl;
	cin>>respuesta;
	     if(respuesta=='c')
     {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"6-�Qu� es un mel�mano?"<<endl;
	cout<<"a) Un amante de la m�sica"<<endl;
	cout<<"b) Un amante del cine"<<endl;
	cout<<"c) Un amante de los c�mic "<<endl;
	cout<<"d) Ninguno"<<endl;
	cin>>respuesta;
	     if(respuesta=='a')
     {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"7-�En que museo se encuentra la Mona Lisa?"<<endl;
	cout<<"a) Louvre"<<endl;
	cout<<"b) Museo del Prado"<<endl;
	cout<<"c) British Museum"<<endl;
	cout<<"d) Galeria Uffizi"<<endl;
	cin>>respuesta;
	     if(respuesta=='a')
    {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"8-�Cu�les son las notas musicales?"<<endl;
	cout<<"a) Do, Re, Mi"<<endl;
	cout<<"b) Do, Re, Mi, Sol, La, Si, Do"<<endl;
	cout<<"c) Do, Re, Mi, Fa, Sol, La, Si"<<endl;
	cout<<"d) Do, Re, Sol, La, Si"<<endl;
	cin>>respuesta;
	     if(respuesta=='c')
     {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"9-�Qui�n escribi�  Cien a�os de soledad?"<<endl;
	cout<<"a) Gabriel Garc�a M�rquez"<<endl;
	cout<<"b) Mario Vargas Llosa"<<endl;
	cout<<"c) Camilo Jos� Cela"<<endl;
	cout<<"d) Rafael Amador"<<endl;
	cin>>respuesta;
	     if(respuesta=='a')
     {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"10-� Qui�n  pint� La noche estrellada?"<<endl;
	cout<<"a) Rembrandt"<<endl;
	cout<<"b) Vincent van Gogh"<<endl;
	cout<<"c) Velazquez"<<endl;
	cout<<"d) Miguel Angelo"<<endl;
	cin>>respuesta;
	     if(respuesta=='b')
     {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"11-�Qui�n es denominado el Rey del Rock and Roll en Estados Unidos?"<<endl;
	cout<<"a) Bruce Springsteen"<<endl;
	cout<<"b) Michael Jackson"<<endl;
	cout<<"c) Elvis Presley"<<endl;
	cout<<"d) Camilo"<<endl;
	cin>>respuesta;
	     if(respuesta=='c')
     {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"12-�Cu�l es el nombre de la artista mexicana conocida como la Do�a ?"<<endl;
	cout<<"a) Mar�a F�lix"<<endl;
	cout<<"b) Paulina Rubio"<<endl;
	cout<<"c) Frida Kahlo"<<endl;
	cout<<"d) Marie Mendez"<<endl;
	cin>>respuesta;
	     if(respuesta=='a')
    {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"13-�En que a�o muri� Kurt Cobain?"<<endl;
	cout<<"a) 1996"<<endl;
	cout<<"b) 1994"<<endl;
	cout<<"c) 1998"<<endl;
	cout<<"d) 1995"<<endl;
	cin>>respuesta;
	     if(respuesta=='b')
  {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"14-�Qui�n compuso Los Conciertos de Brandeburgo?"<<endl;
	cout<<"a) Mozart"<<endl;
	cout<<"b) Beethoven"<<endl;
	cout<<"c) Bach"<<endl;
	cout<<"d) Ninguno"<<endl;
	cin>>respuesta;
	     if(respuesta=='c')
 {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"15-�Qui�n pinto la noche estrellada?"<<endl;
	cout<<"a) Miguel Angel"<<endl;
	cout<<"b) Claude Monet"<<endl;
	cout<<"c) Pablo Picasso"<<endl;
	cout<<"d) Vincent van Gogh"<<endl;
	cin>>respuesta;
	     if(respuesta=='d')
     {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
cout<<"Total de buenas: "<<conteo_buenas<<endl;
cout<<"Total de malas: "<<conteo_malas<<endl;
	  
	  	  system("pause");

        break;
        
}
case 5: // Modulo e


{

	cout<<"Deporte"<<endl;
	cout<<"-------"<<endl<<endl;

	cout<<"1-�Cu�nto dura un partido de  f�tbol?"<<endl;
	cout<<"a) 90 minutos repartidos en dos partes de 45 minutos cada una"<<endl;
	cout<<"b) 90 minutos repartidos en tres partes de 30 minutos cada una"<<endl;
	cout<<"c) 90 minutos"<<endl;
	cout<<"d) 95 minutos"<<endl;
	cin>>respuesta;
	     if(respuesta=='a')
     {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"2-�Cu�l es el deporte nacional de Canada?"<<endl;
	cout<<"a) Bolos"<<endl;
	cout<<"b) Baloncesto"<<endl;
	cout<<"c) Lacrosse"<<endl;
	cout<<"d) F�tbol"<<endl;
	cin>>respuesta;
	     if(respuesta=='c')
    {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"3-�Qu� selecci�n de f�tbol ha ganado m�s Mundiales??"<<endl;
	cout<<"a) Brasil"<<endl;
	cout<<"b) Uruguay"<<endl;
	cout<<"c) Panama"<<endl;
	cout<<"d) Ninguno"<<endl;
	cin>>respuesta;
	     if(respuesta=='a')
 {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"4-�Cu�ntos jugadores tiene un equipo de f�tbo en el campo de juego?"<<endl;
	cout<<"a) 12"<<endl;
	cout<<"b) 11"<<endl;
	cout<<"c) 10"<<endl;
	cout<<"d) 15"<<endl;
	cin>>respuesta;
	     if(respuesta=='b')
 {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"4-�Cu�ndo se celebr� el primer mundial de f�tbo?"<<endl;
	cout<<"a) 13 de julio de 1930 en Uruguay"<<endl;
	cout<<"b) 8 de agosto en Espa�a"<<endl;
	cout<<"c) 30 de enero en Mexico"<<endl;
	cout<<"d) 3 abril en Polonia "<<endl;
	cin>>respuesta;
	     if(respuesta=='a')
 {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"5-�Qui�n gan� el mundial de f�tbol de 2010?"<<endl;
	cout<<"a)La selecci�n de f�tbol de Mexico"<<endl;
	cout<<"b)La selecci�n de f�tbol de Estados Unidos"<<endl;
	cout<<"c) La selecci�n de f�tbol Espa�ola"<<endl;
	cout<<"d) La selecci�n de f�tbol de Croacia "<<endl;
	cin>>respuesta;
	     if(respuesta=='c')
 {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"6-�Cada cuantos a�os se llevan a cabo los Juegos Ol�mpicos?"<<endl;
	cout<<"a) 6 a�os"<<endl;
	cout<<"b) 8 a�os"<<endl;
	cout<<"c) Ninguna es correcta"<<endl;
	cout<<"d) 4 a�os "<<endl;
	cin>>respuesta;
	     if(respuesta=='d')
    {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"7-�Cu�ntos jugadores hay en un equipo de beisbol?"<<endl;
	cout<<"a) 8 jugadores"<<endl;
	cout<<"b) 9 jugadores "<<endl;
	cout<<"c) 10 jugadores"<<endl;
	cout<<"d) 11 jugadores "<<endl;
	cin>>respuesta;
	     if(respuesta=='b')
 {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"8-�Cu�l es el deporte m�s popular en la India?"<<endl;
	cout<<"a) Futbol"<<endl;
	cout<<"b) Basquetball"<<endl;
	cout<<"c) Voleibol"<<endl;
	cout<<"d) El Cr�quet "<<endl;
	cin>>respuesta;
	     if(respuesta=='d')
     {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"9-�Cu�ntos cubos coloreados hay en el Cubo de Rubik?"<<endl;
	cout<<"a) Cuenta con seis colores uniformes"<<endl;
	cout<<"b) Cuenta con seis colores Iguales"<<endl;
	cout<<"c) Cuenta con nueve colores uniformes"<<endl;
	cout<<"d) Cuenta con seis colores"<<endl;
	cin>>respuesta;
	     if(respuesta=='a')
 {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"10-�Cu�l es el deporte nacional en Jap�n ?"<<endl;
	cout<<"a) Karate"<<endl;
	cout<<"b) Artes Marciales"<<endl;
	cout<<"c) El sumo"<<endl;
	cout<<"d)El Cr�quet "<<endl;
	cin>>respuesta;
	     if(respuesta=='c')
 {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"11-� Qu� boxeador fue conocido como �El m�s grande� y �El campe�n del pueblo�?"<<endl;
	cout<<"a) Muhammad Ali"<<endl;
	cout<<"b) Mike Tyson"<<endl;
	cout<<"c) Floyd Mayweather"<<endl;
	cout<<"d) Oscar de la Hoya  "<<endl;
	cin>>respuesta;
	     if(respuesta=='a')
 {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"12-� Cu�l es la lesi�n  m�s frecuente entre los corredores?"<<endl;
	cout<<"a) El tobillo del corredor"<<endl;
	cout<<"b) La rodilla del corredor"<<endl;
	cout<<"c) El brazo del corredor"<<endl;
	cout<<"d) Ninguno"<<endl;
	cin>>respuesta;
	     if(respuesta=='b')
 {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"13-�Cu�l es el deporte m�s practicado en el mundo?"<<endl;
	cout<<"a) Natacion"<<endl;
	cout<<"b) Futbol"<<endl;
	cout<<"c) Tenis"<<endl;
	cout<<"d) Baloncesto"<<endl;
	cin>>respuesta;
	     if(respuesta=='a')
 {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"14-�En qu� olimpiadas gan� la tenista Serena Williams su primer oro ol�mpico en individuales?"<<endl;
	cout<<"a) Tokio 2021"<<endl;
	cout<<"b) Londres 2012"<<endl;
	cout<<"c) Rio de Janeiro 2016"<<endl;
	cout<<"d) "<<endl;
	cin>>respuesta;
	     if(respuesta=='b')
 {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"15-�Cuales son los cinco colores del anillo de los Juegos Ol�mpicos?"<<endl;
	cout<<"a) Azul, rojo, amarillo, verde y negro"<<endl;
	cout<<"b) Azul, rojo, amarillo, verde y violeta"<<endl;
	cout<<"c) ?ndigo, rojo, morado, verde y negro"<<endl;
	cout<<"d) Azul, rojo, amarillo, naranja y verde"<<endl;
	cin>>respuesta;
	     if(respuesta=='a')
 {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
cout<<"Total de buenas: "<<conteo_buenas<<endl;
cout<<"Total de malas: "<<conteo_malas<<endl;	  
	   system("pause");

        break;
        
}
case 6: // Modulo f
{
	cout<<"Salir del programa"<<endl;
      system("pause");  
system("cls");
            
    
	break;  
}

}
}
}
}






