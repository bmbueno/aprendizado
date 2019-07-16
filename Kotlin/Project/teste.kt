//======================================================================================
// constructor padrao
class book {
  var titulo: String
  var numero: Int

  constructor(titulo: String, numero: Int){
    this.titulo = titulo
    this.numero = numero
  }
}
//======================================================================================
// constructor indireto
class book2 constructor(titulo: String, numero: Int){
  var titulo: String
  var numero: Int

  init {
    this.titulo = titulo
    this.numero = numero
  }
}
//======================================================================================
// constructor reduzido
class book3 constructor(var titulo: String, var numero: Int)
//======================================================================================
// constructor com get/set personalizado
class book4(val numero: Int){
  var titulo = "default"
  set(value){
    if(!value.isNotEmpty()){
      throw IllegalArgumentException("titulo nao pode ser vazio")
    }
    field = value
  }
  get(){
    return field
  }
}
//======================================================================================
// mais de um constructor
class Car(val name: String, val plateNo: String) {
    var new: Boolean? = null
    var colour: String = ""

    constructor(name: String, plateNo: String, new: Boolean) : this(name, plateNo) {
        this.new = new
    }

    constructor(name: String, plateNo: String, new: Boolean, colour: String ) :
            this(name, plateNo, new) {
        this.colour = colour
    }
}
//======================================================================================
/// sendo private nao permite a construcao direta, só atraves de outros metodos

fun main(){

  val carro = Car("Prisma", "XTZ1234")
  val carro2 = Car("Up", "XTZ1234", false)
  val carro3 = Car("Uno", "XTZ1234", false, "blue")


  println(carro.name)
  println(carro.plateNo)

  println(carro2.name)
  println(carro2.new)
}
