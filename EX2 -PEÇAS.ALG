Algoritmo "PEÇAS"
// Disciplina  : [Algaritimos e Lógica de Programação]
// Professor   : NILTON CESAR SACCO
// Autor(a)    : Daniel de Godoy Carolino
// Data atual  : 06/04/2022
Var
   // Seção de Declarações das variáveis
   nome: caracter
   codmaquina, pecastotal, pecasdefeito: inteiro

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreval("Nome do funcionário: ")
   leia(nome)
   escreval()
   escreval("Codigo da máquina: ")
   leia(codmaquina)
   escreval()
   escreval("Total de peças: ")
   leia(pecastotal)
   escreval()
   escreval("Peças com defeitos: ")
   leia(pecasdefeito)
   escreval()

   se(pecasdefeito/pecastotal > 0.1) entao
      escreval("maquina está com defeito")
   senao
      escreval("maquina está nos triques")
   fimse

Fimalgoritmo