Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 16/03/2022
Var
   // Seção de Declarações das variáv
   hora: real
   trabalho: real
   salario:  real

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreval("Qual o valor hora aula?")
   leia(hora)

   escreval("Numero de aulas trabalhadas?")
   leia(trabalho)

   salario:=(hora * trabalho)
   escreval("O sálario bruto é R$",salario)

Fimalgoritmo