#!/bin/bash


echo "Nome do fonte: "
read nome;
echo "Aguardando modificações ..."

sufix=".kt"
nome_arq="$nome$sufix"
>"$nome.jar"

seconds=$(date -r $nome_arq +%s);
novo=$seconds;

while true
  do
	if [ "$seconds" != "$novo" ];
	 then
    echo -e "\nCompilando ... "
    secondsC=$(date -r "$nome.jar" +%s);
    kotlinc $nome_arq -include-runtime -d "$nome.jar"
    novo1=$(date -r "$nome.jar" +%s);

    if [ -e "$nome.jar" ] && [ "$secondsC" != "$novo1" ]; then
      echo -e "Feito ! \n"
      echo "--------------Inicio Execução:--------------"
      java -jar "$nome.jar"
      echo -e "\n--------------Fim da Execução--------------\n"
      else
      echo "ERRO AO COMPILAR"
    fi

    seconds=$novo;
    echo "Aguardando novas modificações ..."
	fi

	novo=$(date -r $nome_arq +%s)

done
