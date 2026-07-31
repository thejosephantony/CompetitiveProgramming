/*
 * M‚dia 3.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
Leia quatro n£meros (N1, N2, N3, N4), cada um deles com uma casa decimal, correspondente …s quatro notas de um aluno. Calcule a m‚dia com pesos 2, 3, 4 e 1, respectivamente, para cada uma destas notas e mostre esta m‚dia acompanhada pela mensagem "Media: ". Se esta m‚dia for maior ou igual a 7.0, imprima a mensagem "Aluno aprovado.". Se a m‚dia calculada for inferior a 5.0, imprima a mensagem "Aluno reprovado.". Se a m‚dia calculada for um valor entre 5.0 e 6.9, inclusive estas, o programa deve imprimir a mensagem "Aluno em exame.".

No caso do aluno estar em exame, leia um valor correspondente … nota do exame obtida pelo aluno. Imprima entÆo a mensagem "Nota do exame: " acompanhada pela nota digitada. Recalcule a m‚dia (some a pontua‡Æo do exame com a m‚dia anteriormente calculada e divida por 2). e imprima a mensagem "Aluno aprovado." (caso a m‚dia final seja 5.0 ou mais ) ou "Aluno reprovado.", (caso a m‚dia tenha ficado 4.9 ou menos). Para estes dois casos (aprovado ou reprovado ap¢s ter pego exame) apresente na £ltima linha uma mensagem "Media final: " seguido da m‚dia final para esse aluno.

Entrada
A entrada cont‚m quatro n£meros de ponto flutuante correspendentes as notas dos alunos.

Sa¡da
Todas as respostas devem ser apresentadas com uma casa decimal. As mensagens devem ser impressas conforme a descri‡Æo do problema. NÆo esque‡a de imprimir o enter ap¢s o final de cada linha, caso contr rio obter  "Presentation Error".
 * 
 */


#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;


int main(){
	cout << fixed << setprecision(1);
	double n1;
	double n2;
	double n3;
	double n4;
	
	double nExame;
	
	int p1 = 2;
	int p2 = 3;
	int p3 = 4;
	int p4 = 1;
	
	double media;
	double mediaFinal;
	
	cin >> n1 >> n2 >> n3 >> n4;
	
	media = ((n1 * p1) + (n2 * p2) + (n3 * p3) + (n4 * p4))/(p1 + p2 + p3 + p4);
	
	cout << "Media: " << media << endl;
	
	if(media >= 7.0){
		cout << "Aluno aprovado." << endl;	
	}
	else if(media >= 5.0 and media <= 6.9){
		cout << "Aluno em exame." << endl;
		cin >> nExame;
		cout << "Nota do exame: " << nExame << endl;
		mediaFinal = (media + nExame)/2;
		
		if(mediaFinal >= 5.0){
			cout << "Aluno aprovado." << endl;
			cout << "Media final: " << mediaFinal << endl; 
		}
		else{
			cout << "Aluno reprovado." << endl;
			cout << "Media final: " << mediaFinal << endl;
		}
	}
	else{
		cout << "Aluno reprovado." << endl;
	}

	return 0;
}

