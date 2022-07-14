# include <stdio.h>
# include <math.h>

float paraMetrosPorSegundo(float v){
	float m = v/3.6; 
	return m;
}

float areaCirculo(float raio){
	float A;
	float pi = 3.141592;
	A = raio*raio*pi;
	return A;
}

int maior3(int n1, int n2, int n3){
	if (n1 >= n2 & n1 >= n3){
		return n1;
	} else if(n2 >= n3){
		return n2;
	} else{
		return n3;
	}
}

int ehPar(int n){
	if (n % 2 == 0){
		return 1;
	} else {
		return 0;
	}
}

int ehDivisivelPor3ou5(int n){
	if(n % 3 == 0 & n % 5 == 0){
		return 0;
	} else if(n % 3 == 0){
		return 1;
	} else if(n % 5 == 0){
		return 1;
	} else {
		return 0;
	}
}

float pesoIdeal(float h, char sexo){
	if(sexo == 'M'){
		return (72.7*h) - 58;
	} else{
		return (62.1*h) - 44;
	}
}

void LeituraPesoIdeal(){
	float altura, peso;
	char sexo_informado;
	printf("informe sua altura:");
	scanf("%f", &altura);
	printf("informe seu peso:");
	scanf("%f", &peso);
	printf("informe seu sexo:");
	scanf("%s", &sexo_informado);
	float pesoideal = pesoIdeal(altura, sexo_informado);

	if(peso > pesoideal){
		printf("\nVoce deve perder %.2f kg para chegar no seu peso ideal.\n", peso - pesoideal);
	} else{
		printf("\nVoce deve ganhar %.2f kg para chegar no seu peso ideal.\n", pesoideal - peso);
	}

}

int somaImpares(int N){
	int k = 1, soma = 0;
	while (k <= N){
		if(ehPar(k) == 0){
			soma += k;
		}
		k++;
	}
	return soma;
}

double fatorial(int N){
	int k = 1;
	double fatorial = 1;
	while(k <= N){
		fatorial *= k;
		k++;
	}
	return fatorial;
}

int somaNumerosDiv3ou5(int N){
	int soma = 0, k = 0;
	while(k <= N){
		if(k % 3 == 0 & k % 5 != 0){
			soma += k;
		} else if(k % 3 != 0 & k % 5 == 0){
			soma += k;
		}
		k++;
	}
	return soma;
	/* ou pode ser assim:
	int soma = 0, k = 0;
	while(k <= N){
		if(ehDivisivelPor3ou5(k) == 1){
			soma += k;
		}
		k++;
	} 
	return soma; */
	
}

float calculaMedia(int x, int y, int z, int operacao){
	float media = 0;
	if(operacao == 1){
		//media geometrica
		media = x * y * z;
		media = pow(media, 0.333333);
	} else if(operacao == 2){
		// media ponderada
		media = x + 2*y + 3*z;
		media /= 6;
	} else if(operacao == 3){
		// media harmonica
		media += (float) 1/x; 
		media += (float) 1/y;
		media += (float) 1/z;
		media = 3/media;
	} else {
		// media aritmetica
		media = (x + y + z)/3;
	} 
	return media;

}

int numeroDivisores(int N){
	int num_divisores = 1, k = 1;
	while(k <= (N/2)){
		if(N % k == 0){
			num_divisores += 1;
		}
		k++;
	}
	return num_divisores;
}

int enesimoFibonacci(int N){

	int fib1 = 0, fib2 = 1, k = 3;
	int aux;
	while(k <= N){
		if (N == 1){
			return fib1;
		} else if(N == 2){
			return fib2;
		} else{
			aux = fib1;
			fib1 = fib2;
			fib2 = aux + fib1;			
			//printf("%d\n", fib2);
		      }
	k++;
	}
	return fib2;

}

int mdc(unsigned int x, unsigned int y){
	unsigned int menor;
	if(x <= y){
		menor = x;
	} else{
		menor = y;
	}
	int k = 1, mdc = 1;
	while (k <= menor){
		if(x % k == 0 & y % k == 0){
			mdc = k;
		}
		k++;
	}
	return mdc;
}

void main(){
	//printf("conversao de 100 km = %.2f m/s.\n", paraMetrosPorSegundo(100));
	//printf("Area circulo raio 2: %.2f\n", areaCirculo(2));
	//printf("Maior entre(10, 5, 5): %d\n", maior3(10, 25, 11));
	//printf("28 eh par? %d\n", ehPar(28)); 
	//printf("testando\n15: %d,\n10: %d,\n9: %d,\n11: %d,\n", ehDivisivelPor3ou5(15), ehDivisivelPor3ou5(10), ehDivisivelPor3ou5(9), ehDivisivelPor3ou5(11));
	//printf("peso ideal Gustavo: %.2f kg.\n", pesoIdeal(1.78, 'M'));
	//LeituraPesoIdeal();
	//printf("soma impares ate 11: %d\n", somaImpares(11));
	//printf("fatorial de 10: %.0lf\n", fatorial(10));
	//printf("%d\n", somaNumerosDiv3ou5(21));
	//printf("media geometrica: %f\n", calculaMedia(1,2,3,1));
	//printf("media ponderada: %f\n", calculaMedia(1,2,3,2));
	//printf("media harmonica: %f\n", calculaMedia(1,2,3,3));
	//printf("media aritmetica: %f\n", calculaMedia(1,2,3,4));
	//printf("%d\n", numeroDivisores(66));
	//printf("%d\n", enesimoFibonacci(10));
	//printf("%d\n", mdc(18, 10));
}
