#include <stdio.h> // stdio.h é uma diretiva de pré-processamento em C que inclui a biblioteca padrão de entrada e saída (standard input/output).
// com o stdio.h podemos usar funções como printf() e scanf()
#define NUMERO_DE_TENTATIVAS 5 // a diretiva define, faz com que se podssa definir uma constante "uma variável que não varia"
// constantes, por convenção é em letras maiúsculas
int main() {

    // imprime o cabeçalho do jogo
    printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhacao *\n");
    printf("******************************************\n");

    int numerosecreto = 42; 

    int chute;

    for (int i = 1; i <= NUMERO_DE_TENTATIVAS; i++){
        printf("tentativa %d de %d\n", i, NUMERO_DE_TENTATIVAS);
        printf("qual e o seu chute?: "); // mensagem para entrada dos dados
        scanf("%d", &chute); // %d diz á maquina que o dado de entrada é um número inteiro
        // o segundo argumento é onde esse dado de entrada será armazenado que é antecedido com um "E" comercial "&"
        if(chute == numerosecreto){
            printf("Parabens! Voce acertou o Numero Secreto %d\n", numerosecreto); // %d diz à string que um dado inteiro ira ser armazenado lá
            // após a string é especificado qual variável a %d irá acessar
            break;
        } else {
            printf("Seu chute foi %d\n", chute); 
            printf("Que pena! Voce errou o Numero Secreto, tente novamente\n");
        }
    }
}
int main();