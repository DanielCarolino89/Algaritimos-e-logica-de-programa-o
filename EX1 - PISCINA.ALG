Algoritmo "semnome"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 23/03/2022
Var
   // Se��o de Declara��es das vari�veis
   nome, mensagem_: caracter
   anoatual, anonascimento, estilo, idade  : inteiro

Inicio
   escreval(" DIGITE SEU NOME: ")
   leia(nome)
   escreval()
   escreval(" INFORME O ANO ATUAL: ")
   leia(anoatual)
   escreval()
   escreval(" INFORME O ANO DE NASCIMENTO: ")
   leia(anonascimento)
   escreval()
   escreval(" INFORME O ESTILO DE NATA��O ")
   escreval(" 1 - NADO LIVRE " )
   escreval(" 2 - NADO DE COSTAS ")
   escreval(" 3 - NADO BORBOLETA ")
   leia(estilo)
   escreval()

   idade := anoatual - anonascimento

   se( estilo = 1) e ( idade <=16 ) ent�o
      //escreval("Piscina 1 ")
      mensagem_ := "Piscina 1"
   senao
      se( estilo = 1) e ( idade >16 ) ent�o
         escreval("Piscina 5 ")
      senao
         se( estilo = 2) e ( idade <=21 ) ent�o
            escreval("Piscina 2 ")
         senao
            se( estilo = 2) e ( idade >21 ) ent�o
               escreval("Piscina 3 ")
            senao
               se( estilo = 3) e ( idade <=12 ) ent�o
                  escreval("Piscina 4 ")
               senao
                  se( estilo = 3) e ( idade >12 ) ent�o
                     escreval("Piscina 6")
                  senao
                     escreval("Estilo invalido ou idade invalida")
                  fimse
               fimse
            fimse
         fimse
      fimse
   fimse

   escreval("Nome: ", nome)
   escreval("Idade: ", idade)
   escreval("Estilo: ", estilo)
   escreval("Piscina: ", mensagem_)

Fimalgoritmo