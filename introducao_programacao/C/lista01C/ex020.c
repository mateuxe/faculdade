#include <stdio.h>
    //globais
double lucro, lucroT, vendaT, compraT, maiorLucro = 0;
int menor10 = 0, menor20 = 0, maior20 = 0, maiorV;
unsigned long int codL, codV;


    //funcs
void verificarLucro(unsigned long int* cod,double* c,double* v,int* t);
void imprimir();

int main()
{
    unsigned long int cod;
    double compraM, vendaM;
    int numVendas;
    // auxiliares
    
    while(scanf("%lu %lf %lf %d",&cod,&compraM,&vendaM,&numVendas) != EOF) {
        verificarLucro(&cod,&compraM,&vendaM,&numVendas);
    }
    
    lucroT = (vendaT - compraT) * (100 / compraT);
    imprimir();
    return 0;
}


void verificarLucro(unsigned long int* cod,double* c,double* v,int* t) {
    /* *c = Valor de compra, 
    *v = Valor de venda, *t = num prod vendidos*/
    double percentLucro;
    lucro = ((*t * *v) - (*t * *c)); // lucro obtido
    percentLucro = (100 / (*t * *c)) * lucro; // perc de lucro na venda
    
    if(percentLucro < 10)
        menor10++;
    else if(percentLucro >= 10 && percentLucro <= 20)
        menor20++;
    else {
        maior20++;
    }
    
    if (lucro > maiorLucro) { // verificar maior lucro
        codL = *cod;
        maiorLucro = lucro;
    }
    lucro = 0;
    
    if(*t > maiorV) { // verificar mais vendidas
        maiorV = *t;
        codV = *cod;
    }
    
    compraT += (*c * *t);
    vendaT += (*v * *t);
}

void imprimir() {
    printf("Quantidade de mercadorias que geraram lucro menor que 10%%: %d\n",menor10);
    printf("Quantidade de mercadorias que geraram lucro maior ou igual a 10%% e menor ou igual a 20%%: %d\n",menor20);
    printf("Quantidade de mercadorias que geraram lucro maior que 20%%: %d\n",maior20);
    printf("Codigo da mercadoria que gerou maior lucro: %lu\n",codL);
    printf("Codigo da mercadoria mais vendida: %lu\n",codV);
    printf("Valor total de compras: %.2lf, valor total de vendas: %.2lf e percentual de lucro total: %.2lf%%\n",compraT,vendaT,lucroT);
}
