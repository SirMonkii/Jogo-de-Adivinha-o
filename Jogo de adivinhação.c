#include <stdio.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL,"portuguese");
	
	int replay;
	
	replay = 1;
	
	while(replay == 1){
	
	int num1, num2, tentativas, confirmado, fim, fimE, fimEContador, dica;
	
	dica = 3;
	
	fimE = 8;
	
	confirmado = 0;
	
	fim = 0;  
	
	system("cls");
	
	printf("Olá!! Seja bem vindo ao meu jogo de adivinhação de números!!\n\n\n");
	
	printf("Aqui estão algumas regras:\n\n");
	
	printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
	printf("!                                                                                          !\n");
	printf("!  1- Escolha sempre números de 1 a 20                                                     !\n");
	printf("!  2- São apenas 8 tentativas para adivinhar o número                                      !\n");
	printf("!  3- Caso você precise de alguma dica, digite 0 (Dicas contam tentativa, use com cuidado) !\n");
	printf("!  4- Você terá apenas 3 dicas                                                             !\n");
	printf("!                                                                                          !\n");
	printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n\n");
	
	printf("Jogador um, digite o número que o segundo jogador tentará acertar: ");
	scanf("%d", &num1);
	
	system("cls");
	
	do{
		
		if((num1 > 20) || (num1 < 1)){
			
			printf("Número inválido, o número precisa estar entre 1 e 20, escolha outro número: ");
			scanf("%d", &num1);			
			
		}
		else{
			
			if((num1 <= 20) || (num1 >= 1)){
				
			confirmado++;
			
			system("cls");
			
			}
		}
		
	}while(confirmado == 0);
	
	printf("Agora é a sua vez, segundo jogador...   Tente advinhar o número!!\n\n");
	
	do{
		scanf("%d", &num2);
		
		if(num2 == 0){
			
			if(dica <= 3){
				if(dica == 3){
					
					dica--;
					
					fimE--;
					
					if((num1 <= 10) && (num1 >= 1)){
					
					printf("O número está entre 1 e 10!! Você tem mais %d dicas e %d tentativa(s)\n\n", dica, fimE);
					
					}
					else{
						
						if((num1 >= 10) && (num1 <= 20)){
							
							printf("O número está entre 10 e 20!! Você tem mais %d dicas e %d tentativa(s)\n\n", dica, fimE);
							
						}
						
					}
					
				}
				else{
					if(dica == 2){
						
						dica--;

						fimE--;
						
						if(num1 % 2 == 0){
							
							printf("O número é par!! Você tem mais %d dica e %d tentativa(s)\n\n", dica, fimE);
							
						}
						else{
							
							printf("O número é impar!! Você tem mais %d dica e %d tentativa(s)\n\n", dica, fimE);
							
						}
						
					}
					else{
						
						if(dica == 1){
							
							dica--;
							
							fimE--;
							
							if((num1 >= 1) && (num1 <= 5)){
								
								printf("O número está entre 1 e 5!! Esta foi a sua última dica, você tem mais %d tentiva(s)\n\n", fimE);
								
							}
							else{
								
								if((num1 >= 5) && (num1 <= 10)){
									
									printf("O número está entre 5 e 10!! Esta foi a sua última dica, você tem mais %d tentativa(s)\n\n", fimE);
									
								}
								else{
									
									if((num1 >= 10) && (num1 <= 15)){
										
										printf("O número está entre 10 e 15!! Esta foi a sua última dica, você tem mais %d tentativa(s)\n\n", fimE);
										
									}
									else{
										
										if((num1 >= 15) && (num1 <= 20)){
											
											printf("O número está entre 15 e 0!! Esta foi a sua última dica, você tem mais %d tentativa(s)\n\n", fimE);
											
										}
										
									}
									
								}
								
							}
							
							
						}
						else{
							
							if(dica == 0){
								
								printf("Suas dicas acabaram\n\n");
								
							}
							
						}
						
					}
				}
			}
			
		}
		else{
			
			if(num2 == num1){
			
			system("cls");
			
			printf("Parabéns você acertou!! O número secreto era: %d", num1);
			
			fim = 0;
			
			break;
			
			}
			
			else{
			
			if(num2 != num1){
				
				system("cls");
			
				tentativas = fimE - 1;
			
				printf("Número errado, tente novamente, você ainda tem mais %d tentativa(s)\n", tentativas);
			
				fimE--;
				
			}
			
		}
			
		}
	
	
	}while((fim == 1 ) || (fimE > 0));
	
	if(fimE == 0){
		
		system("cls");
		
		printf("Suas tentativas se esgotaram...  O número secreto era %d!!", num1);
		
	}
	
	printf("\n\n----------------------------------------------------------");
	
	printf("\n\nDeseja jogar novamente? Digite 1 para SIM, ou 0 para NÃO\n");
	scanf("%d", &replay);
	
}

	return 0;
}
