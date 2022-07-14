# include <stdio.h>

void main(){
    float alturaBrutus, pesoBrutus;
    float alturaOlivia, pesoOlivia;

    alturaBrutus = 1.84;
    pesoBrutus = 122;

    alturaOlivia = 1.76;
    pesoOlivia = 45;

    float imcBrutus, imcOlivia;
    imcBrutus = pesoBrutus/(alturaBrutus * alturaBrutus);
    imcOlivia = pesoOlivia/(alturaOlivia * alturaOlivia);

    printf("IMC atual do Brutus:%.1f\n", imcBrutus); 
    printf("IMC atual da Olivia:%.1f\n", imcOlivia);

    float pesoidealBrutus, pesoidealOlivia;
    pesoidealBrutus = 24.99 * (alturaBrutus * alturaBrutus);
    pesoidealOlivia = 18.5 * (alturaOlivia * alturaOlivia);

    printf("Brutus precisa emagrecer no minimo %.2f quilos.\n", pesoBrutus - pesoidealBrutus);
    printf("Olivia precisa engordar no minimo %.2f quilos.\n", pesoidealOlivia - pesoOlivia);
}