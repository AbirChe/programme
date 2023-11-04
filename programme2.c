/*       programe N�2
   
    Nom : 
    Prenom :
    Matricule : 
    Groupe :                   
	section             
	                                                  home work 2          */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() 
{
	
	
	//declaration de variables
    
	signed char texte[256];
    signed char A[256];
    signed char B[256];
	signed char C[256];
	signed char D[256];
	signed char E[256];

	// cree un fichier reponses
	FILE *f;
    f = fopen ("answer.txt","w");
    
    
    //tester l'existence d'un fichier
    if(f == NULL){
            puts("\nThere has been an error creating your file!\n");
            exit(1);
        }
        printf("\nun nouveau fichier nomme answer.txt a ete cree avec succes.\n\n");
	
	
	// ouvrir la fichier questionnaire et lire les questions
    FILE *fp;
    fp = fopen ("quiz.txt","r");
  
   //tester l'existence d'un fichier
   	if(fp == NULL){
		puts("there has been an error");
		exit(1);
	}

    // afficher les questions une par une � partir de la fichier questionnaire 
    // afficher la 1ere question 
     fgets(texte,255,fp);
     printf("%s\n",texte);
	 scanf("%s",&A);
	
	 //sauvegarder la reponse dans le fichier  reponse
	  fprintf(f,"%s",texte);
	  fprintf(f,"%s;\n",A);
	 
	//aficher la 2eme question
	 
     fgets(texte,255,fp);
     printf("%s\n",texte);
	 scanf("%s",&B);
	
	 // sauvegarder la reponse dans le fichier reponse
     fprintf(f,"%s",texte);
	 fprintf(f,"%s;\n",B);
	
	 //aficher la 3eme question
	
	 fgets(texte,255,fp);
     printf("%s\n",texte);
      scanf("%s",&C);
      
	  // sauvegarder la reponse dans le fichier reponse
     fprintf(f,"%s",texte);
	 fprintf(f,"%s;\n",C);
	

	  //aficher la 4eme question
     fgets(texte,255,fp);
     printf("%s\n",texte);
     scanf("%s\n",&D);
     scanf("%s",&E);
   // sauvegarder la reponse dans le fichier reponse
	 fprintf(f,"%s\n",texte);
	 fprintf(f,"%s;\n",D);
	 fprintf(f,"%s;",E);
 
 // feremer les deux fichiers
	fclose(fp);  
	fclose(f);

	return 0;
}
