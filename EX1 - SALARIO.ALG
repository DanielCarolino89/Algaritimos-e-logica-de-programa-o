Algoritmo "semnome"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 16/03/2022
Var
   // Se��o de Declara��es das vari�v
   hora: real
   trabalho: real
   salario:  real

Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...
   escreval("Qual o valor hora aula?")
   leia(hora)

   escreval("Numero de aulas trabalhadas?")
   leia(trabalho)

   salario:=(hora * trabalho)
   escreval("O s�lario bruto � R$",salario)

Fimalgoritmo