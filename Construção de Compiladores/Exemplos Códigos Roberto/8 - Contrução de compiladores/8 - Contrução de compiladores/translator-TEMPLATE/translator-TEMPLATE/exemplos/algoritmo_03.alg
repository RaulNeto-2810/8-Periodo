algoritmo "algoritmo 03"
var
  x, k : real
  y : inteiro
  v : logico
  c : caractere
  l : literal

  funcao fat(n:inteiro) : inteiro
  var 
     i : inteiro
     f : inteiro
  inicio
    f <- 1
    para i de 1 ate n passo 1 faca
      f <- f * i
    fimpara
    retorne f
  fimfuncao

  procedimento mostrar(n : inteiro)
  var
     i : inteiro
  inicio
    para i de 1 ate n passo 1 faca
      //escreval(i, "! = ", fat(i))
    fimpara
  fimprocedimento

inicio
  
  //x <- 34 / 2.5
  y <- 34
  v <- verdadeiro
  c <- "m"
  l <- "linha de codigo"
  //escreva("Informe um valor para X : ")
  //leia(x)
  //escreval("x = ", x)

  //mostrar( 5 )
fimalgoritmo
