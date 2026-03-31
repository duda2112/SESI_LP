#include <stdio.h>

int main (){
    float vlr_compra, vlr_desconto;
    
    printf("Digite o valor de compra: ");
    scanf("%f", &vlr_compra);
    
    if(vlr_compra > 100){
        vlr_desconto = vlr_compra * 0.10;
    }else{
        vlr_desconto = vlr_compra * 0.05;
    }
    
    printf("**********************************\n");
    printf(" Preco do produto  R$ %.2f \n", vlr_compra);
    printf(" Valor do desconto R$ %.2f \n", vlr_desconto);
    printf(" Valor final       R$ %.2f \n", vlr_compra - vlr_desconto);
    printf("*********************************\n");

    
}