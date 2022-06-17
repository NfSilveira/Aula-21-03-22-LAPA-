#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILE_NAME "employees.txt"

typedef struct {
  char employeeID[20];
  char name[40];
  char job[40];
  double salary;
  char address[500];
  char phoneNumber[20];
  char status[10];
}employeeData;


employeeData readEmployeeData(){
  employeeData emp;

  printf("\nCódigo do Funcionário: ");
  scanf("%[^\n]%*c", emp.employeeID);
  printf("Nome: ");
  scanf("%[^\n]%*c", emp.name);
  printf("Cargo: ");
  scanf("%[^\n]%*c", emp.job);
  printf("Salário: R$");
  scanf("%lf%*c", &emp.salary);
  printf("Endereço: ");
  scanf("%[^\n]%*c", emp.address);
  printf("Telefone: ");
  scanf("%[^\n]%*c", emp.phoneNumber);
  printf("Status do Funcionário: ");
  fgets(emp.status, 10, stdin);
  
  return emp;
}

void newEmployee() {
  FILE *myfile;
  employeeData emp;

  myfile = fopen(FILE_NAME, "a");
  emp = readEmployeeData();

  fprintf(myfile, "Código do Funcionário: %s\n", emp.employeeID);
  fprintf(myfile, "Nome : %s\n", emp.name);
  fprintf(myfile, "Cargo: %s\n", emp.job);
  fprintf(myfile, "Salário: %g\n", emp.salary);
  fprintf(myfile, "Endereço: %s\n", emp.address);
  fprintf(myfile, "Telefone: %s\n", emp.phoneNumber);

  if (strcmp(emp.status, "\n") == 0) {
    strcpy(emp.status, "Ativo");
  }
  else {
    strcpy(emp.status, "Inativo");
  }
  
  fprintf(myfile, "Status do Funcionário: %s\n\n", emp.status);
}

void listEmployees() {
  FILE *myfile;
  char ch;
  myfile = fopen(FILE_NAME, "r");
  
  while((ch = fgetc(myfile)) != EOF){
    printf("%c", ch);
  }
}


int main(void) {
  FILE *myfile;
  char option;


  printf("----------------------------------\n");
  printf("- Gerenciador de Funcionários -\n");
  printf("- a : Incluir funcionário\n");
  printf("- b : Listar todos os registros\n");
  printf("- d : Sair\n");
  printf("----------------------------------\n");
  printf("Digite a opção desejada: ");
  scanf("%c%*c",&option);

  if (option == 'a') {
    newEmployee();
  }
  
  else if (option == 'b') {
  listEmployees();
  }

  else {
    exit(0);
  }
  return 0;
}
