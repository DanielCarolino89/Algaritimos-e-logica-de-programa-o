Algoritmo "PE�AS"
// Disciplina  : [Algaritimos e L�gica de Programa��o]
// Professor   : NILTON CESAR SACCO
// Autor(a)    : Daniel de Godoy Carolino
// Data atual  : 06/04/2022
Var
   // Se��o de Declara��es das vari�veis
   nome: caracter
   codmaquina, pecastotal, pecasdefeito: inteiro

Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...
   escreval("Nome do funcion�rio: ")
   leia(nome)
   escreval()
   escreval("Codigo da m�quina: ")
   leia(codmaquina)
   escreval()
   escreval("Total de pe�as: ")
   leia(pecastotal)
   escreval()
   escreval("Pe�as com defeitos: ")
   leia(pecasdefeito)
   escreval()

   se(pecasdefeito/pecastotal > 0.1) entao
      escreval("maquina est� com defeito")
   senao
      escreval("maquina est� nos triques")
   fimse

Fimalgoritmo