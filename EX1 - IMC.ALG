Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 16/03/2022
Var
   // Seção de Declarações das variáveis
   altura,peso,imc : real
   codp,nome : inteiro

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreval("codigo")
   leia(codp)
   escreval()
   escreval(" Digite seu nome")
   leia(nome)
   escreval()
   escreval(" Digite sua altura")
   leia(altura)
   escreval()
   escreval(" Digite seu peso")
   leia(peso)
   escreval()
   imc := peso / (altura * altura)
   escreval(" Seu IMC é:", imc)
   escreval()
   se imc <=18 entao
      escreval(" Magreza")
   senao se (imc >=18) e (imc<=25)entao
      escreval(" Normal")
   fimse
   se(imc >=25) e (imc <=30)entao
      escreval(" Sobrepeso")
   fimse
se(imc >=30) e (imc <=35)entao
   escreval(" Obesidade Grau I")
fimse
se(imc >=35) e (imc<=40)entao
   escreval(" Obesidade Grau II")
fimse
 se (imc >=40)entao
   escreval(" Obesidade Grau III (Obesidade grave ou morbida)")
fimse







Fimalgoritmo