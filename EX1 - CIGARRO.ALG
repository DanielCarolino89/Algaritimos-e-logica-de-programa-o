Algoritmo "semnome"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 16/03/2022
Var
   // Se��o de Declara��es das vari�veis
   quantidade,maco,conta,fuma,v1,v2,v3: real

Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...
   escreval("quantidade de cigarros consumidos diariamente?")
   leia(quantidade)
   v1:=(quantidade / 20)
   escreval()
   escreval("O valor do ma�o?")
   leia(maco)
   v2:=(v1 * maco)
   escreval()
   escreval("Tempo em anos como fumante?")
   leia(fuma)
   v3:=(fuma * 365)* v2
   escreval()
   escreval("o valor total gasto durante esse per�odo", v3:10:2)












Fimalgoritmo