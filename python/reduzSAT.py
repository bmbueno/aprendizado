
cl1 = ["x0"]
cl2 = ["!x0","!x1","x2","!x3","x4"]
cl3 = ["!x0","!x3"]
cl4 = ["x1","x3","!x4"]

expressao = [cl1,cl2,cl3,cl4]
novaExpressao = []
i = 0
for clausula in expressao:
    if len(clausula) == 1:
        aux = [[clausula[0],("z" + str(i)),("z" + str(i+1))],
        [clausula[0],("z" + str(i)),("!z" + str(i+1))],
        [clausula[0],("!z" + str(i)),("z" + str(i+1))],
        [clausula[0],("!z" + str(i)),("!z" + str(i+1))]]
        novaExpressao = novaExpressao + aux
        i = i + 2

    elif len(clausula) == 2:
        aux = [[clausula[0],clausula[1],("z" + str(i+1))],
        [clausula[0],clausula[1],("!z" + str(i+1))]]
        novaExpressao = novaExpressao + aux
        i = i + 1
    elif len(clausula) == 3:
        novaExpressao.append(clausula)
    else:
        aux = []
        ultimo = len(clausula) - 1
        auxPrimeira = [clausula[0],clausula[1],("z" + str(i))]
        for x in range(2,ultimo-1):
            aux = aux + [("!z" + str(i)),clausula[x],("z" + str(i+1))]
            i = i + 2
        i = i - 1
        auxUltima = [("!z" + str(i)),clausula[ultimo-1],clausula[ultimo]]

        novaExpressao = [auxPrimeira] + novaExpressao + [aux] + [auxUltima]




print(novaExpressao)
