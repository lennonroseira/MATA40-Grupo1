#include <stdio.h>

menu(){
       int c;
       printf("1. Somar dois n�meros.\n");
       printf("2. Subtrair dois n�meros.\n");
       printf("3. Multiplicar dois n�meros.\n");
       printf("4. Dividir dois n�meros.\n");
       printf("5. Raiz quadrada de um n�mero.\n");
       printf("Digite a op��o desejada:\n");
       scanf("%d",&c);
        switch (c){
   case 1:
      soma();
   break;

   case 2:
      sub();
   break;
   
   case 3:
      mult(); 
       
   break;
   
   case 4:
       div();
       
   break;
   
   case 5:
       raiz();
       
   break;

   default:
     printf("Valor Invalido");
}  
       
       }
soma(){
     int x,y,z;
      printf("Digite dois numeros:");
     scanf("%d %d",&x,&y);
     z=x+y;
     printf("%d",z);
       
       }
       
sub(){
   int x,y,z;
      printf("Digite dois numeros:");
     scanf("%d %d",&x,&y);
     z=x-y;
     printf("%d",z);  
      }
mult(){
    int x,y,z;
      printf("Digite dois numeros:");
     scanf("%d %d",&x,&y);   
      z=x*y; 
      printf("%d",z);
       }
div(){
   int x,y,z;
     printf("Digite dois numeros:");
     scanf("%d %d",&x,&y);   
      z=x/y;
      printf("%d",z);
      }
raiz(){
      int x,y; 
      printf("Digite um numero:");
      scanf("%d",&x);
      y=sqrt(x);
      printf("%d",y);
       }
           
    
    
       
main(){
       menu();
       
       }
