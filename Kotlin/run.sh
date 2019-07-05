#!/bin/bash

echo -e "\033[1;37mFile name:  \033[0m"
read name;

sufix=".kt"
nameFile="$name$sufix"
>"$name.jar"

if [ -e $nameFile ]; then
  seconds=$(date -r $nameFile +%s);
  new=$seconds;

  echo -e "\033[5;35mAwaiting changes ... \033[0m"

  while [ -e $nameFile ]
  do
      if [ "$seconds" != "$new" ];
       then
          echo -e "\033[1;34m \nCompiling ... \033[0m"
          secondsC=$(date -r "$name.jar" +%s);
          kotlinc $nameFile -include-runtime -d "$name.jar"
          newC=$(date -r "$name.jar" +%s);

          if [ -e "$name.jar" ] && [ "$secondsC" != "$newC" ]; then
            echo -e "\033[1;32mDone. \n  \033[0m"
            echo -e "\033[1;30m--------------Start execution:--------------\033[0m"
            java -jar "$name.jar"
            echo -e "\033[1;30m\n--------------End of execution--------------\n\033[0m"
            else
            echo -e "\033[1;31mERROR.  \033[0m"
          fi

        seconds=$new;
        echo -e "\033[5;35mWaiting for new changes ...\033[0m"
      fi

      new=$(date -r $nameFile +%s)
  done
else
  echo -e "\033[1;31mFile not found\033[0m"
  rm "$name.jar"
fi
