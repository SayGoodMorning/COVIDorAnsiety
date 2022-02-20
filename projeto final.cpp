#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
	
int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
    int escolha,escolha2,i, c,n;
    char resposta[255];
    
    printf("            ESSE PROGRAMA FOI FEITO PARA QUE VOCÊ: \n\n ");
    
    printf("\n- Aprenda sobre o funcionamento da ANSIEDADE e ATAQUE DE PÂNICO;");
    printf("\n- Como elas afetam no dia a dia;");
    printf("\n- Desenvolva hábitos mais saudáveis com foco no momento presente; \n\n");
    
    printf("Caso não tenha uma ideia clara sobre ANSIEDADE e ATAQUE DE PÂNICO digite: \n\n");
    
    	printf("\n[1] Para ANSIEDADE.");
    	printf("\n[2] Para ATAQUE DE PÂNICO.");
    	printf("\n[3] Para AMBOS.");
    	printf("\n[4] Para DICAS DE EMERGENCIA NO AUXILIO DE INDIVIDUOS TENDO UM ATAQUE DE PÂNICO. ");
    	printf("\n\nEscolha uma opção : ");
        scanf("%i", &escolha);
        
         switch (escolha) {
      	
case 1:
	system("cls");
printf("\n\n Ansiedade se refere a sintomas de nervosismo, medo, tensão, preocupação e o sentimento de que algo ruim está prestes a acontecer. Também é associada a sintomas físicos como falta de ar, aceleração de batimentos cardíacos, suor, mãos geladas, tremedeira, problemas de concentração e dificuldade para dormir. Ansiedade é uma experiencia humana comum. Situações de extremo estresse, incluindo a atual COVID-19, podem levar para sentimentos excessivos de ansiedade, o quê pode se tornar angustiante e incapacitante.\n\n ");
break;


case 2:
	system("cls");
printf("\n\n Ataques de panicos são um súbito aumento de ansiedade com intensos sintomas físicos como aceleração de batimentos cardíacos, suor, tremedeira, dor no peito e desconforto, dificuldade para respiração, tontura, náusea ou desconforto abdominal. Para a pessoa que está passando pela experiência, pode parecer como se estar caminhando para a morte apesar de não estar em perigo iminente. Ataques de pânico geralmente atacam sem aviso prévio, e algumas vezes não têm um gatilho definido.\n\n");
break;

case 3:
	system("cls");
printf("\n\n[ANSIEDADE]:\n Ansiedade se refere a sintomas de nervosismo, medo, tensão, preocupação e o sentimento de que algo ruim está prestes a acontecer. Também é associada a sintomas físicos como falta de ar, aceleração de batimentos cardíacos, suor, mãos geladas, tremedeira, problemas de concentração e dificuldade para dormir. Ansiedade é uma experiencia humana comum. Situações de extremo estresse, incluindo a atual COVID-19, podem levar para sentimentos excessivos de ansiedade, o quê pode se tornar angustiante e incapacitante.\n\n[ATAQUE DE PÂNICO]:\n Ataques de panicos são um súbito aumento de ansiedade com intensos sintomas físicos como aceleração de batimentos cardíacos, suor, tremedeira, dor no peito e desconforto, dificuldade para respiração, tontura, náusea ou desconforto abdominal. Para a pessoa que está passando pela experiência, pode parecer como se estar caminhando para a morte apesar de não estar em perigo iminente. Ataques de pânico geralmente atacam sem aviso prévio, e algumas vezes não têm um gatilho definido.\n\n ");
break;
case 4:
	system ("cls");
	printf("\n\n[DICAS DE EMERGENCIA]: \n  -Fique calmo.\nEstar calmo, ser compreensivo e nao julgar pode ajudar a reduzir o pânico do individúo.\n  -Ajude-o a focar na própria respiração.\nAche um local calmo para vocês dois sentarem. Guie ele a pegar leve e respirar fundo por alguns minutos.\n  -Fazer algo físico.\nJuntos, ergam os braços ou batam os pés no chão. Isto pode ajudar a queimar algum estresse do individúo.\n  -Distraia-os.\nPeça-o para citar 5 coisas que pode ver, 4 coisas que pode tocar, 3 sons que pode ouvir, 2 cheiros que pode identificar e 1 coisa da qual consegue sentir o sabor.");
	printf("\n\n__APÓS O ATAQUE\nApós o fim do ataque ele pode se sentir envergonhado. Tranquilize e encorage o individuo a buscar ajuda. [O Centro de Valorização a Vida (CVV) realiza apoio emocional pelo telefone (188). Para mais informações acesse o site: https://www.cvv.org.br/]");
break;
}

system("PAUSE");

do {
	    system("cls");
		printf("Agora que você sabe o que ataques de pânico e ansiedade são, vamos prosseguir para o 'diagnóstico'.\n");
		printf("-Falta de ar é um sintoma comum em ansiedade, ataques de pânico e COVID-19. Você já experenciou sintomas similares no passado (sim ou não)? ");
		gets(resposta);
		
		if (strcmp(resposta, "sim") == 0) {
			printf ("\nSe você já tem histórico de ansiedade, outros medos e especificamente ataques de pânico, é provável que isso seja exatamente o que está sentindo.\n");
			i++;
		} else if(strcmp(resposta, "nÆo") == 0 || strcmp(resposta, "nao") == 0) {
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
		printf("-Os sintomas estão melhorando em 10 a 15 minutos (sim ou não)? ");
		gets(resposta);
			
		if (strcmp(resposta, "sim") == 0) {
			printf ("\nAtaques de pânico geralmente atingem o pico de intensidade em 10 minutos, após isso os sintomas começam a aliviar.\n");
			i++;
		} else if(strcmp(resposta, "nÆo") == 0 || strcmp(resposta, "nao") == 0) {
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
		printf("-Os sintomas melhoram usando técnicas de relaxamento (sim ou não)? ");
		gets(resposta);
		
		if (strcmp(resposta, "sim") == 0) {
			printf ("\nAnsiedade e ataques de pânico geralmente respondem muito bem para técnicas de relaxamento como respirar fundo ou meditação. A falta de ar da COVID-19 é improvável de aliviar com técnicas de relaxamento.\n");
			i++;
		} else if(strcmp(resposta, "nÆo") == 0 || strcmp(resposta, "nao") == 0) {
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
		printf("-Você tem dificuldade para respirar com febre, tosse ou dor de garganta? (sim ou não)? ");
		gets(resposta);
		
		if (strcmp(resposta, "sim") == 0) {
			printf ("\nÉ possível que você tenha sintomas de COVID-19. Pessoas com COVID-19 geralmente experienciam outros sintomas além de dificuldade para respirar, como febre, tosse e garganta inflamada/dolorida. Te passaremos algumas dicas de como agir. \n\n");
			printf("\n[1] No caso de sintomas leves ou moderados. ");
    		printf("\n[2] Caso você tenha 50 anos ou mais. ");
    		printf("\n[3] Para sintomas piorando ou não indo embora depois de 3 a 4 dias. ");
    		printf("\n\nEscolha uma opção : ");
      	scanf("%i", &escolha2);
      	switch (escolha) {
			case 1:
			system("cls");
			printf("\n\nNo caso de sintomas leves ou moderados, você deverá ficar em casa. Você nao deveria procurar ajuda médica pessoalmente, ficando em casa estaremos reduzindo a probabilidade de infectar outros, incluindo trabalhadores de hospital que são necessários para o tratamento de pacientes em casos mais serios. Assim você pode salvar a vida de outra pessoa por ficar em casa para garantir de recúrsos de saúde irem aqueles que estão precisando mais. Cuide de todos ficando em casa. \n\n ");
			break;

			case 2:
			system("cls");
			printf("\n\n Caso voce tenha 50 anos ou mais ou tenha outros problemas de saúde, incluindo doença pulmonar crônicas, doenças de coração, diabetes, câncer ou um sistema imunológico enfraquecido, consulte seu médico ou provedor de saúde. Eles talvez queiram ter um monitoramento mais profundo da sua situação.\n\n");
			break;

			case 3:
			system("cls");
			printf("\n\n Se seus sintomas piorarem ou não passarem depois de 3 a quatro dias, consulte seu provedor de saúde. Ligue, fale pelo whatsapp ou use seu portal do paciente antes de fazer uma visita pessoal. Use 'medicina por telemarketing' no lugar de uma visita pessoal, se possível.\n\n ");
		 break;
		 }
    		system("PAUSE");
    		
			c++;
			i++;
		} else if(strcmp(resposta, "nÆo") == 0 || strcmp(resposta, "nao") == 0) {
			i++;
			n++;
		} else {
			printf("\nResposta digitada invalida, por favor tente novamente.\n\n");
		}
		// muito bom dia, boa tarde ou boa noite, após a séie de quatro perguntas, de acordo com as respostas do usúario nós 
		//temos tres procedimentos, o primeiro é para caso ele tenha respondido sim a pergunta referente a covid, 
		//assim o programa prossegue com algumas dicas, a primeira sendo no caso dos sintomas serem leves ou moderados, a segunda no caso do usuario ter mais de 50 anos
		// e na terceira se os sintomas estão piorando ou nao tiverem passador depois de 3 a 4 dias. No caso do usuario ter respondido sim para as perguntas 
		//sobre ansiedade e ataque de pânico, proseguimos com técnicas para ele administrar a sua ansiedade. Por ultimo, no caso do usuario nao ter se enquadrado
		//nesses sintomas, informamos ele de que provavelmente esteja com outra enfermidade.
		
	} while(i==0);
	
	//Recomendações
	if(c == 0) ;{
		printf("\nComo você não demostrou possuir sintomas do novo coronavírus lhe apresentaremos técnicas para 'administrar' a ansiedade e ataques de pânico.\n");
		printf("-Foque em coisas das quais você consegue controlar.Fique em casa mesmo que nao se sinta doente. Lave suas mãos frequeentemente com água e sabão por no mínimo20 segundos. Não toque sua face com mãos não lavadas. Para mais informações sobre o Corona virús acesse: https://coronavirus.saude.gov.br/ \n Limite a quantidade de tempo que você gasta assistindo e lendo as notícias. Apenas acredite em informações de sites confiaveis. \nCrie e mantenha uma rotina diária, incluindo exercicio, comida saudavel e suficiente tempo de sono.");
		printf("-Fique conectado, Fale com amigos, família e outros suportes diariamente por telefone, video chamadas, texto e email. \nAjude outros, isso beneficia tanto a pessoa que está recebendo a ajuda como o ajudante.");
	}
	if(n==4){
		printf("\nComo você respondeu de forma a não se enquadrar em nenhum dos casos citados aqui, é possivel que na verdade esteja com outra enfermidade, tenha em mente que estamos tendo grande alta nos casos de Dengue e chikungunya então pode ser interessante mante-las como possibilidades");
	}

}
