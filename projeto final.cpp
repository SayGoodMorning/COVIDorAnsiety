#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
	
int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
    int escolha,escolha2,i, c,n;
    char resposta[255];
    
    printf("            ESSE PROGRAMA FOI FEITO PARA QUE VOC�: \n\n ");
    
    printf("\n- Aprenda sobre o funcionamento da ANSIEDADE e ATAQUE DE P�NICO;");
    printf("\n- Como elas afetam no dia a dia;");
    printf("\n- Desenvolva h�bitos mais saud�veis com foco no momento presente; \n\n");
    
    printf("Caso n�o tenha uma ideia clara sobre ANSIEDADE e ATAQUE DE P�NICO digite: \n\n");
    
    	printf("\n[1] Para ANSIEDADE.");
    	printf("\n[2] Para ATAQUE DE P�NICO.");
    	printf("\n[3] Para AMBOS.");
    	printf("\n[4] Para DICAS DE EMERGENCIA NO AUXILIO DE INDIVIDUOS TENDO UM ATAQUE DE P�NICO. ");
    	printf("\n\nEscolha uma op��o : ");
        scanf("%i", &escolha);
        
         switch (escolha) {
      	
case 1:
	system("cls");
printf("\n\n Ansiedade se refere a sintomas de nervosismo, medo, tens�o, preocupa��o e o sentimento de que algo ruim est� prestes a acontecer. Tamb�m � associada a sintomas f�sicos como falta de ar, acelera��o de batimentos card�acos, suor, m�os geladas, tremedeira, problemas de concentra��o e dificuldade para dormir. Ansiedade � uma experiencia humana comum. Situa��es de extremo estresse, incluindo a atual COVID-19, podem levar para sentimentos excessivos de ansiedade, o qu� pode se tornar angustiante e incapacitante.\n\n ");
break;


case 2:
	system("cls");
printf("\n\n Ataques de panicos s�o um s�bito aumento de ansiedade com intensos sintomas f�sicos como acelera��o de batimentos card�acos, suor, tremedeira, dor no peito e desconforto, dificuldade para respira��o, tontura, n�usea ou desconforto abdominal. Para a pessoa que est� passando pela experi�ncia, pode parecer como se estar caminhando para a morte apesar de n�o estar em perigo iminente. Ataques de p�nico geralmente atacam sem aviso pr�vio, e algumas vezes n�o t�m um gatilho definido.\n\n");
break;

case 3:
	system("cls");
printf("\n\n[ANSIEDADE]:\n Ansiedade se refere a sintomas de nervosismo, medo, tens�o, preocupa��o e o sentimento de que algo ruim est� prestes a acontecer. Tamb�m � associada a sintomas f�sicos como falta de ar, acelera��o de batimentos card�acos, suor, m�os geladas, tremedeira, problemas de concentra��o e dificuldade para dormir. Ansiedade � uma experiencia humana comum. Situa��es de extremo estresse, incluindo a atual COVID-19, podem levar para sentimentos excessivos de ansiedade, o qu� pode se tornar angustiante e incapacitante.\n\n[ATAQUE DE P�NICO]:\n Ataques de panicos s�o um s�bito aumento de ansiedade com intensos sintomas f�sicos como acelera��o de batimentos card�acos, suor, tremedeira, dor no peito e desconforto, dificuldade para respira��o, tontura, n�usea ou desconforto abdominal. Para a pessoa que est� passando pela experi�ncia, pode parecer como se estar caminhando para a morte apesar de n�o estar em perigo iminente. Ataques de p�nico geralmente atacam sem aviso pr�vio, e algumas vezes n�o t�m um gatilho definido.\n\n ");
break;
case 4:
	system ("cls");
	printf("\n\n[DICAS DE EMERGENCIA]: \n  -Fique calmo.\nEstar calmo, ser compreensivo e nao julgar pode ajudar a reduzir o p�nico do individ�o.\n  -Ajude-o a focar na pr�pria respira��o.\nAche um local calmo para voc�s dois sentarem. Guie ele a pegar leve e respirar fundo por alguns minutos.\n  -Fazer algo f�sico.\nJuntos, ergam os bra�os ou batam os p�s no ch�o. Isto pode ajudar a queimar algum estresse do individ�o.\n  -Distraia-os.\nPe�a-o para citar 5 coisas que pode ver, 4 coisas que pode tocar, 3 sons que pode ouvir, 2 cheiros que pode identificar e 1 coisa da qual consegue sentir o sabor.");
	printf("\n\n__AP�S O ATAQUE\nAp�s o fim do ataque ele pode se sentir envergonhado. Tranquilize e encorage o individuo a buscar ajuda. [O Centro de Valoriza��o a Vida (CVV) realiza apoio emocional pelo telefone (188). Para mais informa��es acesse o site: https://www.cvv.org.br/]");
break;
}

system("PAUSE");

do {
	    system("cls");
		printf("Agora que voc� sabe o que ataques de p�nico e ansiedade s�o, vamos prosseguir para o 'diagn�stico'.\n");
		printf("-Falta de ar � um sintoma comum em ansiedade, ataques de p�nico e COVID-19. Voc� j� experenciou sintomas similares no passado (sim ou n�o)? ");
		gets(resposta);
		
		if (strcmp(resposta, "sim") == 0) {
			printf ("\nSe voc� j� tem hist�rico de ansiedade, outros medos e especificamente ataques de p�nico, � prov�vel que isso seja exatamente o que est� sentindo.\n");
			i++;
		} else if(strcmp(resposta, "n�o") == 0 || strcmp(resposta, "nao") == 0) {
			i++;
			n++;
		} else {
			printf("\nResposta digitada invalida, por favor tente novamente.\n\n");
		}
		
	} while(i == 0);
	
	//Pergunta 2
	printf("\n");
	i = 0;
	do {
		printf("-Os sintomas est�o melhorando em 10 a 15 minutos (sim ou n�o)? ");
		gets(resposta);
			
		if (strcmp(resposta, "sim") == 0) {
			printf ("\nAtaques de p�nico geralmente atingem o pico de intensidade em 10 minutos, ap�s isso os sintomas come�am a aliviar.\n");
			i++;
		} else if(strcmp(resposta, "n�o") == 0 || strcmp(resposta, "nao") == 0) {
			i++;
			n++;
		} else {
			printf("\nResposta digitada invalida, por favor tente novamente.\n\n");
		}
		
	} while(i == 0);
	
	//Pergunta 3
	printf("\n");
	i = 0;
	do {
		printf("-Os sintomas melhoram usando t�cnicas de relaxamento (sim ou n�o)? ");
		gets(resposta);
		
		if (strcmp(resposta, "sim") == 0) {
			printf ("\nAnsiedade e ataques de p�nico geralmente respondem muito bem para t�cnicas de relaxamento como respirar fundo ou medita��o. A falta de ar da COVID-19 � improv�vel de aliviar com t�cnicas de relaxamento.\n");
			i++;
		} else if(strcmp(resposta, "n�o") == 0 || strcmp(resposta, "nao") == 0) {
			i++;
			n++;
		} else {
			printf("\nResposta digitada invalida, por favor tente novamente.\n\n");
		}
		
	} while(i == 0);

	//Pergunta 4
	printf("\n");
	i = 0;
	do {
		printf("-Voc� tem dificuldade para respirar com febre, tosse ou dor de garganta? (sim ou n�o)? ");
		gets(resposta);
		
		if (strcmp(resposta, "sim") == 0) {
			printf ("\n� poss�vel que voc� tenha sintomas de COVID-19. Pessoas com COVID-19 geralmente experienciam outros sintomas al�m de dificuldade para respirar, como febre, tosse e garganta inflamada/dolorida. Te passaremos algumas dicas de como agir. \n\n");
			printf("\n[1] No caso de sintomas leves ou moderados. ");
    		printf("\n[2] Caso voc� tenha 50 anos ou mais. ");
    		printf("\n[3] Para sintomas piorando ou n�o indo embora depois de 3 a 4 dias. ");
    		printf("\n\nEscolha uma op��o : ");
      	scanf("%i", &escolha2);
      	switch (escolha) {
			case 1:
			system("cls");
			printf("\n\nNo caso de sintomas leves ou moderados, voc� dever� ficar em casa. Voc� nao deveria procurar ajuda m�dica pessoalmente, ficando em casa estaremos reduzindo a probabilidade de infectar outros, incluindo trabalhadores de hospital que s�o necess�rios para o tratamento de pacientes em casos mais serios. Assim voc� pode salvar a vida de outra pessoa por ficar em casa para garantir de rec�rsos de sa�de irem aqueles que est�o precisando mais. Cuide de todos ficando em casa. \n\n ");
			break;

			case 2:
			system("cls");
			printf("\n\n Caso voce tenha 50 anos ou mais ou tenha outros problemas de sa�de, incluindo doen�a pulmonar cr�nicas, doen�as de cora��o, diabetes, c�ncer ou um sistema imunol�gico enfraquecido, consulte seu m�dico ou provedor de sa�de. Eles talvez queiram ter um monitoramento mais profundo da sua situa��o.\n\n");
			break;

			case 3:
			system("cls");
			printf("\n\n Se seus sintomas piorarem ou n�o passarem depois de 3 a quatro dias, consulte seu provedor de sa�de. Ligue, fale pelo whatsapp ou use seu portal do paciente antes de fazer uma visita pessoal. Use 'medicina por telemarketing' no lugar de uma visita pessoal, se poss�vel.\n\n ");
		 break;
		 }
    		system("PAUSE");
    		
			c++;
			i++;
		} else if(strcmp(resposta, "n�o") == 0 || strcmp(resposta, "nao") == 0) {
			i++;
			n++;
		} else {
			printf("\nResposta digitada invalida, por favor tente novamente.\n\n");
		}
		// muito bom dia, boa tarde ou boa noite, ap�s a s�ie de quatro perguntas, de acordo com as respostas do us�ario n�s 
		//temos tres procedimentos, o primeiro � para caso ele tenha respondido sim a pergunta referente a covid, 
		//assim o programa prossegue com algumas dicas, a primeira sendo no caso dos sintomas serem leves ou moderados, a segunda no caso do usuario ter mais de 50 anos
		// e na terceira se os sintomas est�o piorando ou nao tiverem passador depois de 3 a 4 dias. No caso do usuario ter respondido sim para as perguntas 
		//sobre ansiedade e ataque de p�nico, proseguimos com t�cnicas para ele administrar a sua ansiedade. Por ultimo, no caso do usuario nao ter se enquadrado
		//nesses sintomas, informamos ele de que provavelmente esteja com outra enfermidade.
		
	} while(i==0);
	
	//Recomenda��es
	if(c == 0) ;{
		printf("\nComo voc� n�o demostrou possuir sintomas do novo coronav�rus lhe apresentaremos t�cnicas para 'administrar' a ansiedade e ataques de p�nico.\n");
		printf("-Foque em coisas das quais voc� consegue controlar.Fique em casa mesmo que nao se sinta doente. Lave suas m�os frequeentemente com �gua e sab�o por no m�nimo20 segundos. N�o toque sua face com m�os n�o lavadas. Para mais informa��es sobre o Corona vir�s acesse: https://coronavirus.saude.gov.br/ \n Limite a quantidade de tempo que voc� gasta assistindo e lendo as not�cias. Apenas acredite em informa��es de sites confiaveis. \nCrie e mantenha uma rotina di�ria, incluindo exercicio, comida saudavel e suficiente tempo de sono.");
		printf("-Fique conectado, Fale com amigos, fam�lia e outros suportes diariamente por telefone, video chamadas, texto e email. \nAjude outros, isso beneficia tanto a pessoa que est� recebendo a ajuda como o ajudante.");
	}
	if(n==4){
		printf("\nComo voc� respondeu de forma a n�o se enquadrar em nenhum dos casos citados aqui, � possivel que na verdade esteja com outra enfermidade, tenha em mente que estamos tendo grande alta nos casos de Dengue e chikungunya ent�o pode ser interessante mante-las como possibilidades");
	}

}
