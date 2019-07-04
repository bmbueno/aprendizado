#!/bin/bash


echo "Nome do fonte: "
read nome;
echo "Aguardando modificações ..."

sufix=".kt"
nome_arq="$nome$sufix"

seconds=$(date -r $nome_arq +%s);
novo=$seconds;

while true
  do
	if [ "$seconds" != "$novo" ];
	 then
    echo -e "\nCompilando ... "
    kotlinc $nome_arq -include-runtime -d "$nome.jar"
    echo -e "Feito ! \n"
    echo "--------------Inicio Execução:--------------"
    java -jar "$nome.jar"
    echo -e "\n--------------Fim da Execução--------------\n"
    seconds=$novo;
    echo "Aguardando novas modificações ..."
	fi

	novo=$(date -r $nome_arq +%s)

done
