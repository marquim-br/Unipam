#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void dadosPessoais(){
	char nome[100];
	char pai[100];
	char mae[100];
	char nascimento[20];
	char cpf[10];
	char rua[100];
	char bairro[100];
	char cidade[100];
	char cep[20];
	char estado[2];
	char pais[20];
	char telefone[20];
	char celular[20];
	char email[100];
	int i=1,j;
	
	FILE * curri;
	curri = fopen ("curriculo.html","a");
	
	printf("Digite o seu nome completo: ");
	gets(nome);
	
	fputs (nome,curri);
	fputs ("</h1>",curri);
	fputs ("<img src=""voce-sabia-que-o-pikachu-existe-de-verdade.jpg"">",curri);
	fputs ("</nav>",curri);
	fputs ("<section>",curri);
	fputs ("<h1>Dados Pessoais</h1>",curri);
	
	fputs("<p>Nome: ",curri);
	fputs(nome,curri);
	fputs("</p>",curri);
	
	printf("Se não possuir a informacao so precisa apertar --enter-- \nDigite o nome completo do se pai: ");
	gets(pai);
	
	fputs("<p>",curri);
	printf("Digite o nome completo da sua mae: ");
	gets(mae);
	fputs ("<p>Filiacao:",curri);
	fputs (pai,curri);
	fputs ("e",curri);
	fputs (mae,curri);
	fputs ("</p>",curri);
	
	printf("\nDigite a data do seu nascimento");
	printf("Ex: DD/MM/AA - com as barras: ");
	
	gets(nascimento);
	
	printf("Digite seu cpf:" );
	gets(cpf);
	fputs ("<p>CPF: ",curri);
	fputs(cpf,curri);
	fputs ("</p>",curri);
	printf("Digite o nome da sua rua: ");
	gets (rua);
	fputs ("<p>Rua",curri);
	fputs(rua,curri);
	fputs ("</p>",curri);
	
	printf("Digite o bairro: ");
	gets(bairro);
	fputs ("<p>Bairro:",curri);
	fputs (bairro,curri);
	fputs ("</p>",curri);
	printf("Digite a cidade: ");
	gets(cidade);
	fputs ("<p>Cidade:",curri);
	fputs (cidade,curri);
	fputs ("</p>",curri);
	
	printf("Digite o cep: ");
	gets(cep);
	fputs ("<p>CEP:",curri);
	fputs (cep,curri);
	fputs ("</p>",curri);
	printf("Digite a sigla de seu estado: ");
	gets(estado);
	fputs ("<p>Estado:",curri);
	fputs (estado,curri);
	fputs ("</p>",curri);
	
	printf("Digite o nome do seu pais: ");
	gets(pais);
	fputs ("<p>Pais:",curri);
	fputs (pais,curri);
	fputs ("</p>",curri);
	
	printf("Digite seu celular.\nEx: (XX) XXXX-XXXX: ");
	gets(celular);
	fputs ("<p>Celular:",curri);
	fputs (celular,curri);
	fputs ("</p>",curri);
	printf("Digite o seu e-mail: ");
	gets(email);
	fputs ("<p>E-mail:",curri);
	fputs (email,curri);
	fputs ("</p>",curri);

	fclose (curri);
}
void formacao(){
	char ano[20];
	char curso[50];
	char instituicao[100];
	FILE * curri;
	curri = fopen ("curriculo.html","a");
	fputs("<h1>Formacao academica/titulaçao</h1>",curri);
	fputs("<div>",curri);
	printf("Digite o ano em iniciou na instituição e o ano de termino.\n EX: ####-####: ");
	gets(ano);
	fputs("<p>",curri);
	fputs(ano,curri);
	printf("Digite o nome do curso feito: ");
	gets(curso);
	fputs(curso,curri);
	printf("Digite o nome da instituicao de ensino: ");
	gets(instituicao);
	fputs(instituicao,curri);
	fputs("</p></div>",curri);
	fclose(curri);	
}
experiencia(){
	char nome[100];
	char data[20];
	char vinculo[100];
	char funcao[100];
	char carga[3];
	FILE * curri;
	curri = fopen ("curriculo.html","a");
	fputs("<h1>Atuacao profissional</h1><div><div>",curri);
	printf("Digite o nome da empresa trabalhada: ");
	gets(nome);
	fputs("<h3>",curri);
	fputs(nome,curri);
	printf("Digite o ano em iniciou na empresa e o ano de termino.\n EX: ####-####: ");
	gets(data);
	fputs("<p>",curri);
	fputs(data,curri);
	printf("Qual seu vinculo com a empresa: ");
	gets(vinculo);
	fputs("Vinculo: ",curri);
	fputs(vinculo,curri);
	printf("Qual sua funcao?: ");
	fputs(", Enquadramento funcional: ",curri);
	gets(funcao);
	fputs(funcao,curri);
	printf("Sua carga horaria semanal: ");
	fputs(", Carga horaria: ",curri);
	gets(carga);
	fputs(carga,curri);
	fputs("</p></div></div></section></body></html>",curri);
	fclose (curri);
}
int main ()
{
	
	char inicio[4];
	char final[4];
	char tipoDeEnsino[50];
	char curso[50];
	
	FILE * curri;
	curri = fopen ("curriculo.html","w");
	
	fputs ("<!DOCTYPE html>",curri);
	fputs ("<html>",curri);
	fputs ("<head>",curri);
	fputs ("<title>Curriculo</title>",curri);
	fputs ("<meta charset=utf-8>",curri);
	fputs ("<style type=text/css>",curri);
	fputs ("img{float: right;float: top;width: 20%;height: 20%;}",curri);
	fputs ("h1{padding: 10px;background: red;}",curri);
	fputs (".a{padding: 10px;background: white;}",curri);
	fputs ("</style>",curri);
	fputs ("</head><body><nav>",curri);
	fputs ("<h1 class=a>",curri);
	fclose (curri);
	dadosPessoais();
	formacao();
	experiencia();
	system("curriculo.html");	
	return 0;
}

