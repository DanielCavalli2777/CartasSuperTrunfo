#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
  
  //São paulo corresponde a letra A
  //Minas Gerais corresponde a letra B
  //Rio Grande do sul corresponde a letra C
  //Bahia corresponde a letra D
  //Rio de janeiro corresponde a letra E
  //Maranhão corresponde a letra F
  //Piauí corresponde a letra G
  //Amazonas corresponde a letra H

// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.


#include <string.h> // Necessário para funções de string como strcpy

// Definição da estrutura para armazenar informações da cidade
typedef struct {
    char estado;          		  // Estado (ex: 'S' para São Paulo)
    char codigo_carta[5];      // Código da carta (ex: "SP") - Aumentado para 5 para acomodar o '\0'
    char nome_cidade[101];     // Nome da cidade (ex: "São Paulo") - Aumentado para 101 para acomodar o '\0' e nomes longos
    long int populacao;       // População da cidade
    double area;              // Área da cidade (em km²)
    double pib;               // Produto Interno Bruto (em bilhões de reais)
    int num_pontos_turisticos; // Número de pontos turísticos
} Cidade;

int main() {
    // Declaração de uma variável do tipo Cidade
    Cidade city;

    // Interface amigável para o usuário (pedindo para digitar os dados)
    printf("Digite os dados da cidade:\n");

    printf("Digite a sigla do Estado (ex: S para Sao Paulo): ");
    scanf(" %c", &city.estado); // Observe o espaço antes de %c para consumir espaços em branco

    printf("Digite o Código da Carta do Estado (ex: A): ");
    scanf("%4s", city.codigo_carta); // Limitando a leitura para 4 caracteres para evitar buffer overflow

    // Limpeza do buffer de entrada antes de ler o nome da cidade
    int c;
    while ((c = getchar()) != '\n' && c != EOF);


    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", city.nome_cidade); // Lê a linha inteira, incluindo espaços, até encontrar um Enter

    printf("Digite a Populacao: ");
    scanf("%ld", &city.populacao);

    printf("Digite a Area (em km²): ");
    scanf("%lf", &city.area);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%lf", &city.pib);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &city.num_pontos_turisticos);

    // Exibindo os dados da cidade que foram digitados
    printf("\nDados da Cidade Digitados:\n");
    printf("Estado: %c\n", city.estado);
    printf("Código da Carta: %s\n", city.codigo_carta);
    printf("Nome da Cidade: %s\n", city.nome_cidade);
    printf("População: %ld\n", city.populacao);
    printf("Área: %.2lf km²\n", city.area); // Formatando para 2 casas decimais
    printf("PIB: %.2lf bilhoes de reais\n", city.pib); // Formatando para 2 casas decimais
    printf("Número de Pontos Turisticos: %d\n", city.num_pontos_turisticos);

    return 0;
}
