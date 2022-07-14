# Exercícios do Beecrowd
[link site do beecrowd](https://www.beecrowd.com.br/judge/en/login)

Este projeto conterá todos os exercícios resolvidos do beecrowd.

*"Uma jornada de 200 km começa com um simples passo."*  
-Provérbio Chinês.

Linguagens utilizadas:
* C

* Python 3

Programas utilizados:
* Sublime Text - para C

* Pycharm - para Python 3

Obs.:  
___________________________________________ para compilar no sublime:___________________________________________.

Tools -> Build System -> New Build System  
Copiar e colar o seguinte código na aba que abrir:  
`{ "cmd": ["gcc","$file_name","-o","${file_base_name}.exe", "&&", "start", "${file_base_name}.exe"], "shell": true }`  
Salve o arquivo como C.sublime-build na pasta que o próprio editor abre automaticamente quando mandar salvar.  
Após isso, volte em Tools->Build System e escolha a opção "C".  
Adicionar a biblioteca #include <stdlib.h> para...  
...poder colocar system("pause"); na última linha da função main() ---- isso é necessário  

_________________________________________________________________________________________________________________.