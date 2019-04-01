#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union student{
	char nom[20];
	char prenom[25];
	int matricule;
};

void remplissage(union student stud[],int n);
void afficher(union student stud[],int n);

int main(int argc, char *argv[]) {

	       union student stud[20];
		      int i,n;
	        // lecture de la taille
	        printf("donner la valeur n:");

	        do{
	           scanf("%d",&n);
		}while(n<0  ||  n>10);

		printf("1-le remplissage de tableau:\n");
	        remplissage(stud,n);
		printf("\n");
		printf("2-l'affichage de tableau:\n");
	        afficher(stud,n);
	     getch();

	return 0;
}

void remplissage(union student stud[],int n){
	       int i;
	      for(i=0;i<n;i++){
                 printf("les informations de l'etudiant numero:%d\n",i+1);
	         printf("donner le nom d'etudiant:");
	         scanf("%s",&stud[i].nom);
		 printf("donner le prenom d'etudiant:");
	         scanf("%s",&stud[i].prenom);
	         printf("donner le matricule d'etudiant:");
	         scanf("%d",&stud[i].matricule);
	         printf("\n");
	       }
}

void afficher(union student stud[],int n){
	       int i;
	      for(i=0;i<n;i++){
                 printf("l'affichage des informatins l'etudiant numero:%d\n",i+1);
	         printf("donner le nom d'etudiant:%s\n",stud[i].nom);
	         printf("donner le prenom d'etudiant:%s\n",stud[i].prenom);
	         printf("donner le matricule d'etudiant:%d\n",stud[i].matricule);
	         printf("\n");
	      }
}
