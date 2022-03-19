Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 16/03/2022
Var
   // Seção de Declarações das variáveis
   quantidade,maco,conta,fuma,v1,v2,v3: real

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreval("quantidade de cigarros consumidos diariamente?")
   leia(quantidade)
   v1:=(quantidade / 20)
   escreval()
   escreval("O valor do maço?")
   leia(maco)
   v2:=(v1 * maco)
   escreval()
   escreval("Tempo em anos como fumante?")
   leia(fuma)
   v3:=(fuma * 365)* v2
   escreval()
   escreval("o valor total gasto durante esse período", v3:10:2)












Fimalgoritmo