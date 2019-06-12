

cl1 = ["x0","x1","x2"]
cl2 = ["!x0","!x1","x3"]
cl3 = ["!x0","!x3","!x2"]

instancia = [cl1,cl2,cl3]
certificado = [True,False,False,False]
aux2 = True

for clausula in instancia:
    aux = False
    for literal in clausula:
        if(literal[0] == "!"):
            aux = aux or not(certificado[int(literal[2])])
        else:
            aux = aux or certificado[int(literal[1])]
    aux2 = aux2 and aux

print(aux2)
