#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

#define DISPONIVEL 0
#define RESERVADO 1
#define OCUPADO 2

//================ STRUCTS =================//
typedef struct {
    char nome[100];
    char cpf[15];
    char telefone[20];
    char endereco[200];
    char sexo; // M ou F
} Cliente;

typedef struct {
    char cpf_responsavel[15];
    char localizacao[50];
    int capacidade;
    int status;
} Jazigo;

//================ FUNÇÕES =================//
void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void paraMinusculo(char *s) {
    for(; *s; s++) *s = tolower(*s);
}

//================ VERIFICAÇÕES =================//
int cpfExiste(char *cpf) {
    FILE *file = fopen("clientes.dat", "rb");
    if (!file) return 0;

    Cliente c;
    while (fread(&c, sizeof(Cliente), 1, file)) {
        if (strcmp(c.cpf, cpf) == 0) {
            fclose(file);
            return 1;
        }
    }
    fclose(file);
    return 0;
}

int telefoneExiste(char *telefone) {
    FILE *file = fopen("clientes.dat", "rb");
    if (!file) return 0;

    Cliente c;
    while (fread(&c, sizeof(Cliente), 1, file)) {
        if (strcmp(c.telefone, telefone) == 0) {
            fclose(file);
            return 1;
        }
    }
    fclose(file);
    return 0;
}

//================ CLIENTES =================//
void cadastrarCliente() {
    Cliente c;

    printf("\nNome: ");
    fgets(c.nome, 100, stdin);
    c.nome[strcspn(c.nome, "\n")] = 0;

    printf("CPF: ");
    scanf("%s", c.cpf);
    limparBuffer();

    if (cpfExiste(c.cpf)) {
        printf("CPF ja cadastrado!\n");
        return;
    }

    printf("Telefone: ");
    scanf("%s", c.telefone);
    limparBuffer();

    if (telefoneExiste(c.telefone)) {
        printf("Telefone ja cadastrado!\n");
        return;
    }

    printf("Endereco: ");
    fgets(c.endereco, 200, stdin);
    c.endereco[strcspn(c.endereco, "\n")] = 0;

    printf("Sexo (M/F): ");
    scanf(" %c", &c.sexo);
    limparBuffer();

    FILE *file = fopen("clientes.dat", "ab");
    fwrite(&c, sizeof(Cliente), 1, file);
    fclose(file);

    printf("Cliente cadastrado!\n");
}

void listarClientes() {
    FILE *file = fopen("clientes.dat", "rb");
    if (!file) {
        printf("Nenhum cliente.\n");
        return;
    }

    Cliente c;

    printf("\n--- CLIENTES ---\n");

    while (fread(&c, sizeof(Cliente), 1, file)) {

        printf("\nNome: %s\n", c.nome);
        printf("CPF: %s\n", c.cpf);
        printf("Telefone: %s\n", c.telefone);
        printf("Endereco: %s\n", c.endereco);

        if (c.sexo == 'M' || c.sexo == 'm')
            printf("Sexo: Masculino\n");
        else
            printf("Sexo: Feminino\n");
    }

    fclose(file);
}

void buscarCliente() {
    FILE *file = fopen("clientes.dat", "rb");
    if (!file) {
        printf("Nenhum cliente.\n");
        return;
    }

    int tipo, achou = 0;
    char termo[100], nomeTemp[100];

    printf("1-CPF | 2-Nome: ");
    scanf("%d", &tipo);
    limparBuffer();

    printf("Buscar: ");
    fgets(termo, 100, stdin);
    termo[strcspn(termo, "\n")] = 0;

    paraMinusculo(termo);

    Cliente c;

    while (fread(&c, sizeof(Cliente), 1, file)) {

        if (tipo == 1) {
            if (strcmp(c.cpf, termo) == 0) {

                printf("\nNome: %s\nCPF: %s\nTelefone: %s\nEndereco: %s\n",
                       c.nome, c.cpf, c.telefone, c.endereco);

                if (c.sexo == 'M' || c.sexo == 'm')
                    printf("Sexo: Masculino\n");
                else
                    printf("Sexo: Feminino\n");

                achou = 1;
            }
        } else {
            strcpy(nomeTemp, c.nome);
            paraMinusculo(nomeTemp);

            if (strstr(nomeTemp, termo)) {

                printf("\nNome: %s\nCPF: %s\nTelefone: %s\nEndereco: %s\n",
                       c.nome, c.cpf, c.telefone, c.endereco);

                if (c.sexo == 'M' || c.sexo == 'm')
                    printf("Sexo: Masculino\n");
                else
                    printf("Sexo: Feminino\n");

                achou = 1;
            }
        }
    }

    if (!achou) printf("Nao encontrado.\n");

    fclose(file);
}

//================ JAZIGOS =================//
void cadastrarJazigo() {
    Jazigo j;

    printf("CPF Responsavel: ");
    scanf("%s", j.cpf_responsavel);
    limparBuffer();

    if (!cpfExiste(j.cpf_responsavel)) {
        printf("Cliente nao existe!\n");
        return;
    }

    printf("Localizacao: ");
    fgets(j.localizacao, 50, stdin);
    j.localizacao[strcspn(j.localizacao, "\n")] = 0;

    printf("Capacidade: ");
    scanf("%d", &j.capacidade);

    j.status = RESERVADO;

    FILE *file = fopen("jazigos.dat", "ab");
    fwrite(&j, sizeof(Jazigo), 1, file);
    fclose(file);

    printf("Jazigo cadastrado!\n");
}

void listarJazigos() {
    FILE *file = fopen("jazigos.dat", "rb");
    if (!file) {
        printf("Nenhum jazigo.\n");
        return;
    }

    Jazigo j;
    char status[20];

    while (fread(&j, sizeof(Jazigo), 1, file)) {

        if (j.status == DISPONIVEL) strcpy(status, "Disponivel");
        else if (j.status == RESERVADO) strcpy(status, "Reservado");
        else strcpy(status, "Ocupado");

        printf("Local: %s | Status: %s | CPF: %s\n",
               j.localizacao, status, j.cpf_responsavel);
    }

    fclose(file);
}

void buscarJazigo() {
    FILE *file = fopen("jazigos.dat", "rb");
    if (!file) {
        printf("Nenhum jazigo.\n");
        return;
    }

    char termo[50], temp[50];
    int achou = 0;

    printf("Localizacao: ");
    fgets(termo, 50, stdin);
    termo[strcspn(termo, "\n")] = 0;

    paraMinusculo(termo);

    Jazigo j;

    while (fread(&j, sizeof(Jazigo), 1, file)) {
        strcpy(temp, j.localizacao);
        paraMinusculo(temp);

        if (strstr(temp, termo)) {
            printf("Encontrado: %s\n", j.localizacao);
            achou = 1;
        }
    }

    if (!achou) printf("Nao encontrado.\n");

    fclose(file);
}

void alterarStatus() {
    FILE *file = fopen("jazigos.dat", "rb+");
    if (!file) return;

    char local[50];
    int achou = 0;

    printf("Localizacao exata: ");
    fgets(local, 50, stdin);
    local[strcspn(local, "\n")] = 0;

    Jazigo j;

    while (fread(&j, sizeof(Jazigo), 1, file)) {

        if (strcmp(j.localizacao, local) == 0) {

            printf("Novo status (0-Disp 1-Res 2-Ocup): ");
            scanf("%d", &j.status);

            fseek(file, -sizeof(Jazigo), SEEK_CUR);
            fwrite(&j, sizeof(Jazigo), 1, file);

            printf("Atualizado!\n");
            achou = 1;
            break;
        }
    }

    if (!achou) printf("Nao encontrado.\n");

    fclose(file);
}

//================ MENU =================//
int main() {
    setlocale(LC_ALL, "portuguese");

    int op;

    do {
        printf("\n===== SISTEMA =====\n");
        printf("1-Cadastrar Cliente\n");
        printf("2-Listar Clientes\n");
        printf("3-Buscar Cliente\n");
        printf("4-Cadastrar Jazigo\n");
        printf("5-Listar Jazigos\n");
        printf("6-Buscar Jazigo\n");
        printf("7-Alterar status do jazigo\n"); // ✅ ALTERADO
        printf("0-Sair\n");

        scanf("%d", &op);
        limparBuffer();

        switch(op) {
            case 1: cadastrarCliente(); break;
            case 2: listarClientes(); break;
            case 3: buscarCliente(); break;
            case 4: cadastrarJazigo(); break;
            case 5: listarJazigos(); break;
            case 6: buscarJazigo(); break;
            case 7: alterarStatus(); break;
        }

    } while(op != 0);

    return 0;
}
