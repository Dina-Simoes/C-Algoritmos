/*--------------------------------------
    5089 Programação - Algoritmos
    
			Teste final

Programa para fazer operações com vetores
    e apresentar fórmulas mateméticas.

26-01-2023, Dina Simões
----------------------------------------*/

#include<stdio.h>	// biblioteca padrao I/O
#include<conio.h> 	// biblioteca para a utilização de comandos I/O extras
#include<stdlib.h>	// biblioteca padrão, permite a utilização de comandos do sistema
#include <math.h>	// biblioteca que permite usar funções matemáticas como 'sqrt'

main(){
	int n=10, i, j, v[n], aux, soma=0;
	float base, comp, alt, raio, area, volume, lado, Pi = 3.1415927;
	float a, b, c, x1, x2, aux2;                                    // Acrescentei mais uma 'linha' de floats para ser mais fácil de 'ler' o código.
	char op, op1, op2, op3, op4;

	
	do{                                             
		system("cls");
		printf("\t------------------------------\n");				//Este foi o modo de apresentação por mim escolhido, sempre presente e simples.
		printf("\t\tMENU PRINCIPAL\n");								//Este modo de apresentação será mantido até ao fim do código.
		printf("\t------------------------------\n");
		printf("\n\t1 - MENU ARRAYS");
		printf("\n\t2 - MENU FORMULAS MATEMATICAS");
		printf("\n\t0 - Sair"); 									//Opção SAIR ou VOLTAR sempre com a tecla '0'.
		printf("\n\t=> ");
		scanf(" %c", &op);											
		
		switch(op){
			case '1':{
				system("cls");										//Esta função limpa o ecrã.
			
				printf("\t---------------------------\n");
				printf("\t\tMENU ARRAYS\n");
				printf("\t---------------------------\n");
				system("pause");
				
				do{
					system("cls");
					printf("\t---------------------------\n");
					printf("\t\tMENU ARRAYS\n");
					printf("\t---------------------------\n");
					printf("\n\t1 - Ordenacao do vetor de forma crescente");
					printf("\n\t2 - Ordenacao do vetor de forma decrescente");
					printf("\n\t3 - Soma de todos os valores");
					printf("\n\t0 - Voltar ao MENU PRINCIPAL");
					printf("\n\t=> ");
					scanf(" %c", &op1);	
					
					switch(op1){
						case '1':{
							system("cls");
							printf("\t-----------------------------------------------------\n");
							printf("\t\tOrdenacao do vetor de forma crescente:\n");
							printf("\t-----------------------------------------------------\n\n");
							printf("\tInsira os %d elementos que deseja ordenar: \n\n", n);			//É pedido ao utilizador para inserir os valores do vetor. Este comando vai ser repetido várias vezes neste código.
    						for(i=0; i<n; i++) {
       							scanf("%d", &v[i]);													//Os valores inseridos pelo utilizador são guardados nas respetivas variáveis.
 						    }

  					    	for(i=0; i<n-1; i++){
     						    for(j=0; j<n-i-1; j++){
        					        if(v[j] > v[j+1]){
           						        aux = v[j];
              						    v[j] = v[j+1];
               						    v[j+1] = aux;
          						    }	
                                }
  						    }

 							printf("O vetor ordenado eh: ");
   						    for(i=0; i<n; i++){
      					    printf("%d ", v[i]);
 						    }	
							system("pause");
							break;
						}
						case '2':{
							system("cls");
							printf("\t------------------------------------------------------\n");
							printf("\t\tOrdenacao do vetor de forma decrescente:\n");
							printf("\t------------------------------------------------------\n\n");
							printf("\tInsira os %d elementos que deseja ordenar: \n\n", n);
   						    for(i=0; i<n; i++) {
      						    scanf("%d", &v[i]);
  						    }

   						    for(i=0; i<n-1; i++){
     						    for(j=0; j<n-i-1; j++){
         						    if(v[j] < v[j+1]){
             						    aux = v[j];
              						    v[j] = v[j+1];
               						    v[j+1] = aux;
          						    }
        					    }
  					        }
  						    
 						    printf("O vetor ordenado eh: ");
  						    for(i=0; i<n; i++) {
      					    printf("%d ", v[i]);
   						    }
							system("pause");
							break;
						}
						case '3':{
							system("cls");
							printf("\t----------------------------------------------\n");
							printf("\t\tSoma de todos os valores: \n");
							printf("\t----------------------------------------------\n");
						 	printf("\nIntroduza os valores que deseja somar: \n\n");
	
					    	for(i=0; i<n; i++){														// O vetor tem 10 elementos, começa no '0' e vai até ao '9'.
					    	scanf("%d", &aux);														// Os valores introduzidos pelo utilizador são guardados nas respetivas variáveis.
					    		
							 	v[i] = aux;	                 										//Soma de todos os vetores, v[i], que foram previamente guardados na variável 'aux'.
								soma=soma+v[i]; 													 		
							}

							printf("\n\nSoma dos valores introduzidos eh %d \n\n", soma);
							system("pause");
							break;
						}	
						case '0':{
							system("cls");
							printf("\n\n-------- A voltar ao MENU PRINCIPAL ----------\n\n");
							system("pause");
							break;
						}
						
						default:{
							system("cls");
							printf("\n\n-------- Opcao Nao Existente. ----------\n\n");
							system("pause");
							break;
						}
					}
				}while(op1 != '0');
			}break;
		
			case '2':{
				system("cls");
				printf("\t-----------------------------------------\n");
				printf("\t\tMENU FORMULAS MATEMATICAS\n");
				printf("\t-----------------------------------------\n");
				system("pause");
				
				do{
					system("cls");
					printf("\t-----------------------------------------\n");
					printf("\t\tMENU FORMULAS MATEMATICAS\n");
					printf("\t-----------------------------------------\n");
					printf("\n\t1 - MENU AREAS");
					printf("\n\t2 - MENU VOLUMES");
					printf("\n\t3 - FORMULA RESOLVENTE");
					printf("\n\t0 - Voltar");
					printf("\n\t=> ");
					scanf(" %c", &op2);	
					
					switch(op2){
						case '1':{
							system("cls");
							printf("\t-----------------------------\n");
							printf("\t\tSUBMENU AREAS\n");
							printf("\t-----------------------------\n");
							system("pause"); 
							do{
								system("cls");
								printf("\t-----------------------------\n");
								printf("\t\tSUBMENU AREAS\n");
								printf("\t-----------------------------\n");
								printf("\n\t1 - Triangulo");
								printf("\n\t2 - Circulo");
								printf("\n\t3 - Quadrado");
								printf("\n\t0 - Voltar ao Menu FORMULAS MATEMATICAS");
								printf("\n\t=> ");
								scanf(" %c", &op3);	
								
								switch(op3){
									case '1':{
										system("cls");
										printf("\t-----------------------------------------------\n");
										printf("\t\tCalculo da area de um Triangulo\n");
										printf("\t-----------------------------------------------\n");
  									    printf("\nInsira o tamanho da base do triangulo: "); 			//Os valores necessários para calcular a área são pedidos ao utilizador.
  									    scanf("%f", &base);												//E esses valores são guardados nas respectivas variáveis.
  										printf("\nInsira o tamanho da altura do triangulo: ");
    									scanf("%f", &alt);        

 									    area = (base * alt) / 2;										 // Fórmula de cálculo da area de um triangulo; alt = altura.

   									    printf("\nA area do triangulo eh: %f\n\n", area);
										system("pause");
										break;
									}
									case '2':{
										system("cls");
										printf("\t-----------------------------------------------\n");
										printf("\t\tCalculo da area de um Circulo\n");
										printf("\t-----------------------------------------------\n");
    									printf("Insira o raio do circulo: ");  							
  									    scanf("%f", &raio);

  									    area = Pi * raio * raio; 										// A área do círculo.

   									    printf("\nA area do circulo eh: %f\n\n", area);
										system("pause");
										break;
									}
									case '3':{
										system("cls");
										printf("\t-----------------------------------------------\n");
										printf("\t\tCalculo da area de um Retangulo\n");
										printf("\t-----------------------------------------------\n");
  									    printf("\nIntroduza o comprimento do retangulo: ");  			 
  									    scanf("%f", &comp);
  									    printf("\nIntroduza a altura do retangulo: ");
   									    scanf("%f", &alt);

   									    area = comp * alt; 												// A área do retangulo = comprimento * altura

   									    printf("\nA area do retangulo eh: %f\n\n", area);
										system("pause");
										break;
									}	
									case '0':{
										system("cls");
										printf("\n\n-------- A voltar ao MENU FORMULAS MATEMATICAS ----------\n\n");
										system("pause");
										break;
									}
									default:{
										system("cls");
										printf("\n\n-------- Opcao Nao Existente. ----------\n\n");
										system("pause");
										break;
									}
								}
							}while(op3 != '0');
						}break;
						case '2':{
							system("cls"); 
							printf("\t---------------------------------\n");
							printf("\t\tSUBMENU VOLUMES\n");
							printf("\t---------------------------------\n");
							system("pause");
													
							do{
								system("cls");
								printf("\t---------------------------------\n");
								printf("\t\tSUBMENU VOLUMES\n");
								printf("\t---------------------------------\n");
								printf("\n\t1 - Piramide");
								printf("\n\t2 - Esfera");
								printf("\n\t3 - Cubo");
								printf("\n\t0 - Voltar");
								printf("\n\t=> ");
								scanf(" %c", &op4);	
								
								switch(op4){
									case '1':{
										system("cls");
										printf("\t----------------------------------------------------\n");
										printf("\t\tCalculo do volume de uma Piramide\n");
										printf("\t----------------------------------------------------\n");
										
										
										
										printf("\nInsira o valor do tamanho de um dos lados da base da piramide: "); 
   									    scanf("%f", &base);															 

  									    printf("\nInsira o valor do tamanho da altura: ");
   									    scanf("%f", &alt);
																													//Assumindo que se trata de uma pirâmide com base quadrada => base com lados iguais.
    									volume = (base * base * alt) / 3;											//Volume piramide=(lado base*lado base*altura)/3.

   									    printf("\nO volume da piramide eh: %f \n\n", volume);
										system("pause"); 
										break;
									}
									case '2':{
										system("cls"); 
										printf("\t-------------------------------------------------\n");
										printf("\t\tCalculo do volume de uma Esfera\n");
										printf("\t-------------------------------------------------\n");
										
										printf("\nInsira o valor do tamanho do raio da esfera: ");	
   									    scanf("%f", &raio);											
   									    
   									    volume = (4 * Pi * raio * raio * raio) / 3;							//Fórmula para o cálculo do volume da esfera.
   									    printf("\nO volume da esfera eh: %f \n\n", volume);
										system("pause");
										break;
									}
									case '3':{
										system("cls");
										printf("\t----------------------------------------------\n");
										printf("\t\tCalculo do volume de um Cubo\n");
										printf("\t----------------------------------------------\n");
										
																											//O cubo é um poliedro regular => tem os lados todos iguais. 
										printf("\nInsira o valor do tamanho de um dos lados do cubo: ");	
   									    scanf("%f", &lado);													
   									    
										volume = lado * lado * lado;										//Fórmula de calculo do volume do cubo.
										
										printf("\nO volume da esfera eh: %f \n\n", volume);
										system("pause");
										break;
									}
									case '0':{
										system("cls");
										printf("\n\n-------- A voltar ao MENU FORMULAS MATEMATICAS ----------\n\n");
										system("pause");
										break;
									}
									default:{
										system("cls");
										printf("\n\n-------- Opcao Nao Existente. ----------\n\n");
										system("pause");
										break;
									}
								}
							}while(op4 != '0');	
						}break;
						case '3':{
							system("cls");
							printf("\t-------------------------------------\n");
							printf("\t\tFORMULA RESOLVENTE\n");
							printf("\t-------------------------------------\n");
							
							printf("\nInsira o valor de 'a': "); 						// O utilizador irá introduzir os valores de 'a', 'b' e 'c'.
						   	scanf("%f", &a);						
						    printf("\nInsira o valor de 'b': ");
						   	scanf("%f", &b);
						   	printf("\nInsira o valor de 'c': "); 
						   	scanf("%f", &c);
						   							
						   	aux2 = b*b - 4*a* c;										 /* Não é possível calcular raiz quadrada de um número negativo .
						   	                     					   						Daí ter usado 'if', 'else' e aux2 - permite distinguir ambas as situações, quando aux é negativo e quando aux é >=0.*/
						    if(aux2 >= 0){

						   		x1 = ( -b - sqrt(aux2)) / (2 * a);
						   		x2 = ( -b + sqrt(aux2)) / (2 * a);
						   		
						   		printf("\nOs valores de 'x' sao %.2f e %.2f\n\n", x1, x2); //float com 2 casas decimais
						    }
						   	else{
						   		printf("\nO calculo nao eh possivel\n\n");
							   }						
						   
							system("pause"); 	
						}break;
						case '0':{
							system("cls");
							printf("\n\n-------- A voltar ao MENU PRINCIPAL ----------\n\n");
							system("pause");
							break;
						}
						default:{
							system("cls");
							printf("\n\n-------- Opcao Nao Existente. ----------\n\n");
							system("pause");
							break;
						}
					}	
				}while (op2 != '0');
				break;	
			
				case '0':{
					system("cls");
					printf("\n\n-------- A Sair ----------\n\n");
					system("pause");
					break;
				}
				default:{
					system("cls");
					printf("\n\n-------- Opcao Nao Existente. ----------\n\n");
					system("pause");
					break;
				}
			}
					
		}
	}while(op != '0');
}