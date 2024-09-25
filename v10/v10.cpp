#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	printf("\t\t Programme Pour Le Formatage de la Date\n\n");
	

	printf("!! Noter bien la format qu 'il faut respecter : 15/09/2012\n\n");
	
		//declaration de variable
	char date[500];
	
	//saisir
e:	printf("Donner Moi Votre Date: "); scanf("%s",date);

	//converition
  int Mois = (date[3] - '0') * 10 + (date[4] - '0');  // conversion des caractères en entier
  int Jour = (date[0] - '0') * 10 + (date[1] - '0');  // conversion des caractères en entier
  int anee=(date[6] - '0') * 1000 + (date[7] - '0')*100+ (date[8] - '0')*10+(date[9] - '0');
  
  if(Mois<1 && Mois>12) {
  	
  	printf("Le mois Entrer est invalid !!!!\n");
  	printf("Resaisir La date !!!");
  	goto e;
  	
  }
	if(Jour<1 && Jour>31) {
  	printf("Le Jour Entrer est invalid !!!!\n");
  	printf("Resaisir La date !!!");
  	goto e;
  }
	//traiter le resultat enter 
	//trouver le code ascii 
	int nb=strlen(date);
	int ascii[nb];
	for(int i=0;i<nb;i++){
		ascii[i]=date[i];
	}
	
	//tra
	//variable de traitement 
	int cmp=0;
	char nmb[2];
	for(int i=0;i<nb;i++)
	
	{
		
		if( (ascii[0] && ascii[1] && ascii[3] && ascii[4]&& ascii[6] && ascii[8] && ascii[9] <49) && (ascii[0] && ascii[1] && ascii[3] && ascii[4]&& ascii[6] && ascii[8] && ascii[9] <57) ) {
			printf("NB Entrer des nombre !!!!");
			break;
		}
		
		if(ascii[2] && ascii[5] != 47) 
		{
		printf("Tu n'a pas utiliser le syntax demender !!!!\n");
		printf("Resaisir Votre Date: \n\n");
		
		goto e;
	    }
		                            
		else cmp+=1;
	} 
	

  //switch date 
  
  switch(Mois){
  	case 1: printf("Formatage de la Date Donner est %d-Janvier-%d",Jour,anee);
  	        break;
  	 case 2: printf("Formatage de la Date Donner est %d-Fevrier-%d",Jour,anee);
  	        break;
	
	case 3:printf("Formatage de la Date Donner est %d-Mars-%d",Jour,anee);
  	        break;		
	
	case 4:printf("Formatage de la Date Donner est %d-Avril-%d",Jour,anee);
  	        break;	
			  
	case 5:printf("Formatage de la Date Donner est %d-Mai-%d",Jour,anee);
  	        break;	
	
	case 6: printf("Formatage de la Date Donner est %d-Juin-%d",Jour,anee);
  	        break;
	
	case 7: printf("Formatage de la Date Donner est %d-Juillet-%d",Jour,anee);
  	        break;	
			  
	case 8: printf("Formatage de la Date Donner est %d-Aout-%d",Jour,anee);
  	        break;
	
	case 9:printf("Formatage de la Date Donner est %d-Septembre-%d",Jour,anee);
  	        break;		
	
	case 10: printf("Formatage de la Date Donner est %d-Octobre-%d",Jour,anee);
  	        break;
			  
	case 11:printf("Formatage de la Date Donner est %d-Novembre-%d",Jour,anee);
  	        break;
			  
	case 12:printf("Formatage de la Date Donner est %d-Decembre-%d",Jour,anee);
  	        break;		  		  		    		  	  		  	  	           
  }
  
	}
	
	
	
	
      
          
          
           
	

