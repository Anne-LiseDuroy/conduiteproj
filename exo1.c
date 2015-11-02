#include <stdio.h>
void creer_fichier (){
	int entierp;
	FILE * fic;
	
	printf("donner des entiers positifs finir avec -1\n");
	scanf("%i",& entierp);
	fic = fopen("donnees.txt", "w");
	while (entierp != -1){
		fprintf(fic, "%i ", entierp);
		scanf("%i",& entierp);
	}
	fclose (fic);
}

void afficher_fichier(){
	int contenuf;
	FILE * fic;

	fic = fopen("donnees.txt", "r");
	fscanf(fic, "%i", & contenuf);
	while (! feof (fic)){
		printf("%i ", contenuf);
		fscanf(fic, "%i", & contenuf);
	}
	fclose (fic);
}

int main (){
	creer_fichier();
	afficher_fichier();
}
