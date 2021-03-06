#!/bin/bash

name=$1;

sufix=".c"
nameFile="$(pwd)/$name$sufix"
>"$name"

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
          gcc $nameFile -o $name
          newC=$(date -r "$name" +%s);

          if [ -e "$name" ] && [ "$secondsC" != "$newC" ]; then
            echo -e "\033[1;32mDone. \n  \033[0m"
            echo -e "\033[1;30m--------------Start execution:--------------\033[0m"
            ./$name
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
  rm "$name"
fi
