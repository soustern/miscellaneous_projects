#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function to generate employee
void generate_employee(char name[50], char phone_number[15], char role[50], float salary, char admission_date[12], char resignation_name[12])
{

    printf("\n\n");
    printf("\nNome: %s", name);
    printf("\nTelefone: %s", phone_number);
    printf("\nCargo: %s", role);
    printf("\nSalário: %.2f", salary);
    printf("\nData de admissão: %s", admission_date);
    printf("\nData de desligamento: %s", resignation_name);
    printf("\n------------------------------------\n");
}

// Function to generate customer
void generate_customer(char name[50], char phone_number[15], char city[50], char street[50], char address_number[10], char date[12])
{

    printf("\n");
    printf("Nome: %s", name);
    printf("Telefone: %s", phone_number);
    printf("Endereço:");
    printf("\n\tCidade: %s", city);
    printf("\tRua: %s", street);
    printf("\tNúmero: %s", address_number);
    printf("Data de criação: %s", date);
    printf("\n------------------------------------\n");
}

// Employee struct
struct employee
{

    char name[50];
    char phone_number[30];
    char role[50];
    float salary;
    char admission_date[12];
    char resignation_date[12];
};

// Main function
int main()
{

    // Structures (number at the end fo iterations)
    struct employee employee[100];
    // Used to pass the structure to render
    struct employee empl[100];

    // Variables
    int option;
    int employee_quantity;
    char date[20];

    // File system
    FILE *fp;

    // Dashboard
    printf("\t\t===============Bem vindx!================\n\n");
    printf("Selecione sua operação de acordo com o número designado:\n\n");
    printf("1 - Vizualizar funcionários\n2 - Cadastrar funcionário\n\n3 - Vizualizar Clientes\n4 - Cadastrar Cliente\n\n5 - Sair");
    printf("\n\nSua opção: ");
    scanf("%d", &option);
    fgetc(stdin);

    // Switch condition
    switch (option)
    {
    case 1:
        // Clear previous information on screen
        system("clear");
        // Opening file
        fp = fopen("funcionarios_cadastrados.dat", "r");
        // Make it so date variable is overwriten (strcpy) with system date
        strcpy(date, __DATE__);
        printf("\n  *********Todos os funcionários cadastrados em %s*********", date);
        while (fread(&empl, sizeof(struct employee), 1, fp))
        {
            for (int i = 0; i < employee_quantity; i++)
            {
                generate_employee(employee[i].name, employee[i].phone_number, employee[i].role, employee[i].salary, employee[i].admission_date, employee[i].resignation_date);
            }
        }
        fclose(fp);
        break;
    case 2:
        // Clear previous information on screen
        system("clear");
        printf("\n\nInsira quantos funcionários serão cadastrados: ");
        scanf("%i", &employee_quantity);
        // Used to mix scanf and fgetc together
        fgetc(stdin);
        // Initializing user input cycle
        for (int i = 0; i < employee_quantity; i++)
        {
            printf("\n\nFuncionario %i-----------\n", i + 1);
            printf("Insira o nome: ");
            fgets(employee[i].name, 50, stdin);
            // Used so the \n at the end of fgets doesnt make it so one line is jumped
            employee[i].name[strlen(employee[i].name) - 1] = 0;
            printf("Insira o número de telefone: ");
            fgets(employee[i].phone_number, 30, stdin);
            // Used so the \n at the end of fgets doesnt make it so one line is jumped
            employee[i].phone_number[strlen(employee[i].phone_number) - 1] = 0;
            printf("Insira o cargo: ");
            fgets(employee[i].role, 50, stdin);
            // Used so the \n at the end of fgets doesnt make it so one line is jumped
            employee[i].role[strlen(employee[i].role) - 1] = 0;
            printf("Insira o salário: ");
            scanf("%f", &employee[i].salary);
            fgetc(stdin);
            printf("Insira a data de admissão: ");
            fgets(employee[i].admission_date, 50, stdin);
            // Used so the \n at the end of fgets doesnt make it so one line is jumped
            employee[i].admission_date[strlen(employee[i].admission_date) - 1] = 0;
            printf("Insira a data de demissão (se houver): ");
            fgets(employee[i].resignation_date, 50, stdin);
            // Used so the \n at the end of fgets doesnt make it so one line is jumped
            employee[i].resignation_date[strlen(employee[i].resignation_date) - 1] = 0;
        }
        // Rendering what was created with user input
        for (int i = 0; i < employee_quantity; i++)
        {
            generate_employee(employee[i].name, employee[i].phone_number, employee[i].role, employee[i].salary, employee[i].admission_date, employee[i].resignation_date);
        }
        // Creating file with user input
        fp = fopen("funcionarios_cadastrados.dat", "a+");
        fwrite(&employee, sizeof(struct employee), 1, fp);
        if (fwrite != 0)
            printf("\nSalvo com sucesso!");
        else
            printf("\nErro ao salvar.");
        fclose(fp);
        break;

    default:
        break;
    }
}
