fun main() {
  var cl1: MutableList<String> = mutableListOf("x0","x1","x2")
  var cl2: MutableList<String> = mutableListOf("!x0","!x1","x3")
  var cl3: MutableList<String> = mutableListOf("!x0","!x3","!x2")

  var instancia: MutableList<List<String>> = mutableListOf(cl1,cl2,cl3)
  var certificado: MutableList<Boolean> = mutableListOf(true,true,false,false)
    //println(instancia + certificado)
  var aux = false
  var aux2 = true
  var index = 0

  for(clausula in instancia){
    aux = false
    for(literal in clausula){
      if(literal[0].equals('!')){
        index = literal[2].toInt() - 48
        aux = aux.or(!certificado[index])
        //println(literal + " " + !certificado[index])
      }
      else{
        index = literal[1].toInt() - 48
        aux = aux.or(certificado[index])
        //println(literal + " " + certificado[index])
      }

    }
    //println("aux = " + aux)

    aux2 = aux2.and(aux)
  }
  println(aux2)
}
