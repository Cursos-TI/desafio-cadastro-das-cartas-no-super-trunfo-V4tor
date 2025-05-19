#include <stdio.h>

void moverTorre (int casas) {
    if (casas > 0){
        printf("Direita\n");
        moverTorre(casas - 1);
  }
}
void moverBispo (int casas) {
     if (casas > 0){
        printf("Cima Direita\n");
        moverBispo(casas - 1);
     }
}

void moverRainha (int casas) {
   if (casas > 0){  
         printf("esquerda\n");
         moverRainha(casas - 1);
      }
   }
      int main (){
         printf("MOVIMENTO DA TORRE\n");
         printf("\n");
         moverTorre (5);
         printf("\n");
         printf("MOVIMENTO DO BISPO\n");
         printf("\n");
         moverBispo (5);
         printf("\n");
         printf("MOVIMENTO DA RAINHA\n");
         printf("\n");
         moverRainha(8);
         printf("\n");

         //cavalo será duas para cima e uma para direita

         printf("MOVIMENTO DO CAVALO\n");
         printf("\n");
      

         for (int cavalo = 1; cavalo <= 2; cavalo++){
            printf("cima\n");
        }
        
        for (int cavalo2 = 1; cavalo2 <= 1; cavalo2++){
            printf("direita\n");
        }
        
printf("\n");

        printf("MOVIMENTO DO BISPO MAIS COMPLEXO\n");


    for (int i = 1; i <= 4; i++){

       for (int j = 1; j <= 1; j++){
printf("direita\n");
       }
        printf("acima\n");
    }
    


}