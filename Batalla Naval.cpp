#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>

// Juego de Batalla naval//

char MatrizJugador[10][10], MatrizPc[10][10],MatrizPc2[10][10],MatrizJugador2[10][10];
int X,Y,i,j,n,m,Barco=1,Disparo;
int coordX, coordY;
int acumulador=0;



int main(int argc, char *argv[]) {

printf("\n\t Hola Mundo, Bienvenidos a Batalla Naval: \n");
	
	
// Campo de juego enemigo -------------------------------------------------------------------------	
{
		
{
	
	system("color 3");
	
	
	printf("\n\n\n");
	
	printf("\t A  B  C  D  E  F  G  H  I  J\n\n"); 	
}

     for (X=0; X<10; X++){
		for (Y=0; Y<10; Y++){
			MatrizPc[X][Y]='_';
		}
	}
 
    for ( X=0; X<10; X++){
		for ( Y=0;Y<10;Y++){
			MatrizJugador[X][Y]='_';
		}
	}
	
do{
	for (i=0; i<10; i++){
		printf("\t");
		for (j=0; j<10; j++){
			printf(" %c ", MatrizPc[i][j]);
		}
		printf("\n");
	}
	
	// Muralla para el juego___________________________________________________________________________
	
    printf("\t_______________________________\n");
 
 	printf("\n");
 
    //CAompo de juego del Jugador_______________________________________________________________________
 
     {
      printf("\t A  B  C  D  E  F  G  H  I  J\n\n");
     }
     
    for ( X=0; X<10; X++){
    	printf("\t");
		for ( Y=0;Y<10;Y++){
			printf (" %c " ,MatrizJugador[X][Y]);
		}
		printf("\n");
	}
	    printf("\n\n");
	
	
	
	
		
	
// Para la ubicacion de los barcos del jugador: ------------------------------------------------------------


int repetir=0;
	do{

// para ubicacion de los barcos del computador__________________________________________________________
	
	
		srand(time(NULL));
        i=(0+rand()%(9));
		j=(0+rand()%(9));
		MatrizPc[i][j]='#';    
        
        
       
		
repetir=0;
           printf("introduce las coordenadas para la posicion de tus barcos: \n");
           printf("Las coordenadas deben ser desde (1 hasta 10)\n");   
	       printf("Barco %d\n", Barco);
	       printf("Coordenada X: ", Barco);
           scanf("%d",&coordX);
           printf("Coordenada Y: ", Barco);
           scanf("%d",&coordY);        
           	if(coordX<=10 && coordY<=10){
			MatrizJugador[coordX-1][coordY-1]='#';	

	
		}
		if(coordX>10 || coordY>10){
			printf("Error, La coordenada debe ser desde (1 hasta 10)\n\n");
			system("PAUSE");
			repetir=1;
		}


		
// para que me indique que ya la posicion ha sido usada---------------------------------------		
		
			
		} while(repetir==1);	
			     	     	     
	system("cls");
	Barco++;
}while(Barco<10);
}



//Para el disparo de los barco---------------------------------------------------------------------





  {
	 

{
printf("\n\n\n");
	
	printf("\t A  B  C  D  E  F  G  H  I  J\n\n"); 	
}

{

     system("color 3");
     
     
     for (X=0; X<10; X++){
		for (Y=0; Y<10; Y++){
			MatrizPc2[X][Y]='_';
		}
	}
 
    for ( X=0; X<10; X++){
		for ( Y=0;Y<10;Y++){
			MatrizJugador2[X][Y]='_';
		}
	}
	
do{
	    for (X=0; X<10; X++){
		printf("\t");
		for (Y=0; Y<10; Y++){
			printf(" %c ", MatrizPc2[X][Y]);
		}
		printf("\n");
	    }
	
    	// Muralla para el juego___________________________________________________________________________
	
     printf("\t_______________________________\n");
 
 	 printf("\n");
     
     //CAompo de juego del Jugador_______________________________________________________________________
 
     {
      printf("\t A  B  C  D  E  F  G  H  I  J\n\n");
     }
      
     for ( X=0; X<10; X++){
    	printf("\t");
		for ( Y=0;Y<10;Y++){
			printf (" %c " ,MatrizJugador2[X][Y]);
		}
		printf("\n");
	 }
	    printf("\n\n");
     

     int repetir=0;
	 do{

           // para ubicacion de los barcos del computador_____________________________________________
	
	     {
		 
		 srand(time(NULL));
         X=(0+rand()%(9));
		 Y=(0+rand()%(9));
		 
		 if (MatrizJugador2[coordX][coordY]=MatrizJugador[coordX][coordY]){
		 	printf("%c ",MatrizJugador2[coordX][coordY]='X');
		 } 
         else {
         	MatrizJugador2[coordX][coordY]='_';
		 }
         }
       
		
         repetir=0;
           printf("introduce las coordenadas para Disparar: \n");
           printf("Las coordenadas deben ser desde (1 hasta 10)\n");   
	       printf("Disparo %d\n", Disparo);
	       printf("Coordenada X: ", Disparo);
           scanf("%d",&coordX);
           printf("Coordenada Y: ", Disparo);
           scanf("%d",&coordY);        
           	if(MatrizPc2[coordX][coordY]=MatrizPc[coordX][coordY]){
			printf("%c ",MatrizPc2[coordX-1][coordY-1]='X');
			 }	
			else
			{
				MatrizPc2[coordX-1][coordY-1]='_';
			}

	
		
		 if(coordX>10 || coordY>10){
			printf("Error, La coordenada debe ser desde (1 hasta 10)\n\n");
			system("PAUSE");
			repetir=1;
		 }


         
         // para que me indique que ya la posicion ha sido usada---------------------------------------		
		
			
		 } while(repetir==1);	
			     	     	     
    system("cls");
    Disparo++;
    
    }while(Disparo<100);
			     	     	     


}
}






		
    printf("pause");
	return 0;
}


