Algoritmo "repetidor"
// Disciplina  : [Algaritimos e L�gica de Programa��o]
// Professor   : NILTON CESAR SACCO
// Descri��o   : Repeti��es
// Autor(a)    : Daniel de Godoy Carolino
// Data atual  : 06/04/2022
Var
   numero, soma, media : real
   cont : inteiro



Inicio
   cont :=  0
   enquanto (cont < 5 ) fa�a  //repetidor
      escreva(" Informe um n�mero: ")
      leia(numero)
      
      soma := soma + numero //acumulador

      cont := cont + 1   //repetidor (quantidade de contagem)

   fimenquanto

   media := soma / 5
   escreval()
   escreval(" A soma �: ", soma)
   escreval()
   escreval(" A m�dia �: ", media)





Fimalgoritmo