Algoritmo "NotaDoAluno"
// Disciplina  : [Algaritimos e Lógica de Programação]
// Professor   : NILTON CESAR SACCO
// Descrição   : nota do aluno
// Autor(a)    : Daniel de Godoy Carolino
// Data atual  : 06/04/2022
Var
   nome : caracter
   nota, media, soma : real
   cont : inteiro


Inicio
   cont :=  0

   enquanto ( nota <> -1 ) faca
      escreval("Informe a nota")
      leia(nota)

      se (nota <> -1) entao   //condiçaO
         soma := soma + nota //acumulador
         cont := cont + 1   //repetidor (quantidade de contagem)
      fimse
   fimenquanto

   media := soma / cont

   escreval()
   escreval(" Sua média é: ", media)


Fimalgoritmo