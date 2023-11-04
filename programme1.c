/*       programe N�1
   
    Nom :  
    Prenom : 
    Matricule : 
    Groupe :                   
	section              
	                                                  home work 2          */
    
#include <stdio.h>
#include <stdlib.h>


int main() {
	
	// cree un fichier questionnaire 
		FILE *fp;
	fp = fopen ("quiz.txt","w");
	
	//tester l'existence d'un fichier
	if(fp == NULL){
		puts("there has been an error");
		exit(1);
	}
		printf("\nun nouveau fichier nomme quiz.txt a ete cree avec succes.\n");
	
	//remplir le fichier 
	
	fputs(" Tout programme est un algorithme? ,oui-non,*;\n",fp);
	fputs(" Toute boucle POUR peut etre remplacee par une boucle TANT QUE equivalente? ,oui-non,*;\n",fp);
	fputs(" Quel est le principal inconvenient des fonctions recursives ? , choix-unique, elles sont trop simples, elles peuvent saturer la memoire centrale, elles necessitent trop de calculs ;\n",fp);
	fputs(" Parmi les notions suivantes, quelles sont celles qui decrivent de actions parametrees ?, choix-multiple, Procedures, Boucles, Fonctions ;",fp);
	
	//fermer le fichier
	fclose(fp);
	
	return 0;
	}
