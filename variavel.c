
#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

int main(){
 
   float vetor[10];
   int aux;
   float a=-5.0,b=20.0;
   int r;
   int tamanho= sizeof(vetor)/sizeof(int);
   srand( (unsigned)time(NULL) );
   
    for(int k=0;k<tamanho;k++){
	//gerando numero aleatorio 
       //vetor[i]= a+(a-b)*rand();
	   r = rand();
        // Assumindo que RAND_MAX seja pelo menos 2^32-1
        //printf("r = %d\n");

        // zera bit de sinal, expoente
        r = (r & 0x3FFFFFFF) | 0x3F800000; 
		// zera bits de sinal de 
        //printf("r = %d\n");

        // gera numero entre 1 e 2
        float f = *((float *)&r);
        //printf("f = %f\n", f);

        // normaliza entre 0 e 1
        f = f - 1;
        //printf("f = %f\n", f);

        float min = a; 
        float max = b;

        float fRand = min + (f * (max - min));
		//printf("fRand = %f\n", fRand);
		vetor[k]=fRand;}
        
	   
   
   for(int i=0;i<tamanho;i++)
       printf("%f\t", vetor[i]);
   
    printf("\n");
    printf("\n");
   
   for(int i=tamanho-1; i>0;i--){
   	
	   for(int j=0;j<i;j++){
	   	
		   if(vetor[j]>vetor[j+1]){
		     aux =vetor[j];
			  vetor[j]=vetor[j+1];
			  vetor[j+1]=aux;
			 
			 }
		}
	   
	   
   }
   for(int i=0;i<tamanho;i++)
   printf("%f\t", vetor[i]);
   
   

    return 0;
}


//JULIO LAGE 