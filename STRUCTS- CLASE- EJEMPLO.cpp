/*Programa que registre las notas de un alumno,
donde el periodo consta de tres notas (30% - 30% - 40%)
y la mínima aprobatoria es con 10ptos de 20, se debe mostrar
 el informe de resultados*/
 
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<iomanip>
#include<windows.h>
#include<stdio.h>
using namespace std;
void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 }  
 void recuadro(int Col1, int Col2, int Fil1, int Fil2)
{
	 for(int Cols=Col1;Cols<=Col2;Cols++)
     {
        for(int Fils=Fil1;Fils<=Fil2;Fils++)
          {
          	    gotoxy(Cols,Fils);
          	    if((Cols==Col1||Cols==Col2)&&(Fils!=Fil2&&Fils!=Fil2))
          	        cout<<(char)186;
          	    else if((Fils==Fil1||Fils==Fil2)&&(Cols!=Col1&&Cols!=Col2))
          	        cout<<(char)205;
		  }
     }

     gotoxy(Col1,Fil1);
     cout<<(char)201;
     gotoxy(Col1,Fil2);
     cout<<(char)200;
     gotoxy(Col2,Fil1);
     cout<<(char)187;
     gotoxy(Col2,Fil2);
     cout<<(char)188;
}
 
 
struct ALUMNO{
	char nom [20];
	char ape [20];
	char carnet [5];
	float nota1, nota2, nota3, notaCurso;
	
	   void cal_nota_final(){
	   	     notaCurso=(nota1*0.3)+(nota2*0.3)+(nota3*0.4);
	   }
};

main(void){
    float const minAprob=9.5;
    ALUMNO alu1; //Declaración de la struct//
    
    gotoxy(15,3);cout<<"Ingrese los datos del estudiante"<<endl;
    gotoxy(23,5);cout<<"¿Nombre?";gotoxy(35,5);gets(alu1.nom);
    gotoxy(23,7);cout<<"¿Apellido?";gotoxy(35,7);gets(alu1.ape);
    gotoxy(23,9);cout<<"¿Carnet?";gotoxy(35,9);gets(alu1.carnet);
    gotoxy(15,13);cout<<"Por favor ingrese cada nota de los tres cortes"<<endl;
    
        do{
        	gotoxy(25,15);cin>>alu1.nota1;
        	gotoxy(25,16);cin>>alu1.nota2;
        	gotoxy(25,17);cin>>alu1.nota3;
    	} while ((alu1.nota1>20||alu1.nota1<0)||(alu1.nota2>20||alu1.nota2<0)||(alu1.nota3>20||alu1.nota3<0));
    	
    alu1.cal_nota_final();
    system("cls");
    recuadro(10,61,3,5);
    gotoxy(24,4);cout<<"Informe de los resultados"<<endl;
    recuadro(10,61,6,12);
	gotoxy(24,8);cout<<"Nombre del estudiante: "<<alu1.nom<<" "<<alu1.ape;
    gotoxy(24,9);cout<<"Carnet:  "<<alu1.carnet;
    gotoxy(24,10);cout<<"Nota obtenida en el curso;  "<<alu1.notaCurso;
        recuadro(10,61,13,15);
        if(alu1.notaCurso>=minAprob){
        	gotoxy(24,14);cout<<"A P R O B A D O";
		}
		else{
			gotoxy(24,14);cout<<"R E P R O B A D O";
		}
		
	getch();
    
}
