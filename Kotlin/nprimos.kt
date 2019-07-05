fun main(){


  println("Digite um numero: ")
  val n = readLine()!!.toInt()

  var primo = true

  for (i in 2..n-1)
    if ((n % i) == 0 ) {
      primo = false

    }

  if (primo)
    print("É primo")
  else
    print("Nao eh primo")


  }
