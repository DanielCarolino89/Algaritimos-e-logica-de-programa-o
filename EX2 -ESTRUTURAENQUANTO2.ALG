Algoritmo "EstruturaEnquanto2"
// Disciplina  : [Algaritimos e L�gica de Programa��o]
// Professor   : NILTON CESAR SACCO
// Descri��o   : Repeti��es
// Autor(a)    : Daniel de Godoy Carolino
// Data atual  : 06/04/2022
Var
   nome, resp : caracter
Inicio
   resp := "S"
   escreval(" Me diga seu nome: ")
   leia(nome)
   escreval

   enquanto (maiusc(resp) = "S") faca
   //enquanto (resp = "S") ou (resp = "s") faca
      escreval(" Ol�, ", nome)
      escreval()

      escreval(" Deseja continuar(S/N)? " )
      leia(resp)
      escreval()

   fimenquanto

   escreval( "Obrigado por usar meu algaritimo!" )


Fimalgoritmo