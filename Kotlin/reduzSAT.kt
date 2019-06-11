fun main() {
  var cl1: MutableList<String> = mutableListOf("x0")
  var cl2: MutableList<String> = mutableListOf("!x0","!x1","x3")
  var cl3: MutableList<String> = mutableListOf("!x0","!x3")

  var expressao: MutableList<List<String>> = mutableListOf(cl1,cl2,cl3)
  var i = 0
  var novaExpressao: MutableList<List<String>> = mutableListOf()

  if(expressao[0].count() == 1){
    var clAux: MutableList<String> = mutableListOf(expressao[0][0],"y1","y2")

    println(novaExpressao)
  }
  println(novaExpressao + expressao)

}
