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
	
	printf("Ol�!! Seja bem vindo ao meu jogo de adivinha��o de n�meros!!\n\n\n");
	
	printf("Aqui est�o algumas regras:\n\n");
	
	printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
	printf("!                                                                                          !\n");
	printf("!  1- Escolha sempre n�meros de 1 a 20                                                     !\n");
	printf("!  2- S�o apenas 8 tentativas para adivinhar o n�mero                                      !\n");
	printf("!  3- Caso voc� precise de alguma dica, digite 0 (Dicas contam tentativa, use com cuidado) !\n");
	printf("!  4- Voc� ter� apenas 3 dicas                                                             !\n");
	printf("!                                                                                          !\n");
	printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n\n");
	
	printf("Jogador um, digite o n�mero que o segundo jogador tentar� acertar: ");
	scanf("%d", &num1);
	
	system("cls");
	
	do{
		
		if((num1 > 20) || (num1 < 1)){
			
			printf("N�mero inv�lido, o n�mero precisa estar entre 1 e 20, escolha outro n�mero: ");
			scanf("%d", &num1);			
			
		}
		else{
			
			if((num1 <= 20) || (num1 >= 1)){
				
			confirmado++;
			
			system("cls");
			
			}
		}
		
	}while(confirmado == 0);
	
	printf("Agora � a sua vez, segundo jogador...   Tente advinhar o n�mero!!\n\n");
	
	do{
		scanf("%d", &num2);
		
		if(num2 == 0){
			
			if(dica <= 3){
				if(dica == 3){
					
					dica--;
					
					fimE--;
					
					if((num1 <= 10) && (num1 >= 1)){
					
					printf("O n�mero est� entre 1 e 10!! Voc� tem mais %d dicas e %d tentativa(s)\n\n", dica, fimE);
					
					}
					else{
						
						if((num1 >= 10) && (num1 <= 20)){
							
							printf("O n�mero est� entre 10 e 20!! Voc� tem mais %d dicas e %d tentativa(s)\n\n", dica, fimE);
							
						}
						
					}
					
				}
				else{
					if(dica == 2){
						
						dica--;

						fimE--;
						
						if(num1 % 2 == 0){
							
							printf("O n�mero � par!! Voc� tem mais %d dica e %d tentativa(s)\n\n", dica, fimE);
							
						}
						else{
							
							printf("O n�mero � impar!! Voc� tem mais %d dica e %d tentativa(s)\n\n", dica, fimE);
							
						}
						
					}
					else{
						
						if(dica == 1){
							
							dica--;
							
							fimE--;
							
							if((num1 >= 1) && (num1 <= 5)){
								
								printf("O n�mero est� entre 1 e 5!! Esta foi a sua �ltima dica, voc� tem mais %d tentiva(s)\n\n", fimE);
								
							}
							else{
								
								if((num1 >= 5) && (num1 <= 10)){
									
									printf("O n�mero est� entre 5 e 10!! Esta foi a sua �ltima dica, voc� tem mais %d tentativa(s)\n\n", fimE);
									
								}
								else{
									
									if((num1 >= 10) && (num1 <= 15)){
										
										printf("O n�mero est� entre 10 e 15!! Esta foi a sua �ltima dica, voc� tem mais %d tentativa(s)\n\n", fimE);
										
									}
									else{
										
										if((num1 >= 15) && (num1 <= 20)){
											
											printf("O n�mero est� entre 15 e 0!! Esta foi a sua �ltima dica, voc� tem mais %d tentativa(s)\n\n", fimE);
											
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
			
			printf("Parab�ns voc� acertou!! O n�mero secreto era: %d", num1);
			
			fim = 0;
			
			break;
			
			}
			
			else{
			
			if(num2 != num1){
				
				system("cls");
			
				tentativas = fimE - 1;
			
				printf("N�mero errado, tente novamente, voc� ainda tem mais %d tentativa(s)\n", tentativas);
			
				fimE--;
				
			}
			
		}
			
		}
	
	
	}while((fim == 1 ) || (fimE > 0));
	
	if(fimE == 0){
		
		system("cls");
		
		printf("Suas tentativas se esgotaram...  O n�mero secreto era %d!!", num1);
		
	}
	
	printf("\n\n----------------------------------------------------------");
	
	printf("\n\nDeseja jogar novamente? Digite 1 para SIM, ou 0 para N�O\n");
	scanf("%d", &replay);
	
}

	return 0;
}
