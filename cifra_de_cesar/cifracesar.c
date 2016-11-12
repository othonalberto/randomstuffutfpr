#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char frase[80] = "";
	int x = 0, chave = 3; //chave é a quantidade de posições deslocadas

	printf("Digite sua frase: ");
	fgets(frase, sizeof(frase), stdin);

	while (frase[x] != '\0'){
		frase[x] = toupper(frase[x]);
		if (frase[x] == 32){ //verifica se o char em questão é um espaço e se sim, mantém na nova frase
			frase[x] = 32;
		}
		else if (frase[x] + chave > 90){
			//verifica se o char + a chave se tornaria um caracter especial (algo como '{') e volta para as letras
			frase[x] = frase[x] - 26 + chave;
		}
		else{
			frase[x] = frase[x] + chave;
		}
		//incrementa o contador
		x++;
	}

	printf("%s\n", frase);

	return 0;
}
