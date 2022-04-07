Algoritmo "repetidor"
// Disciplina  : [Algaritimos e Lógica de Programação]
// Professor   : NILTON CESAR SACCO
// Descrição   : Repetições
// Autor(a)    : Daniel de Godoy Carolino
// Data atual  : 06/04/2022
Var
   numero, soma, media : real
   cont : inteiro



Inicio
   cont :=  0
   enquanto (cont < 5 ) faça  //repetidor
      escreva(" Informe um número: ")
      leia(numero)
      
      soma := soma + numero //acumulador

      cont := cont + 1   //repetidor (quantidade de contagem)

   fimenquanto

   media := soma / 5
   escreval()
   escreval(" A soma é: ", soma)
   escreval()
   escreval(" A média é: ", media)





Fimalgoritmo