import java.util.Scanner

fun main(){

  var total = 0

  println("Digite um numero: ")
  val n = readLine()!!.toInt()

  for (i in 1..n)
    total = total + i

  println("A soma é: $total")
}
