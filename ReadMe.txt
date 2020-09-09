	O Projeto do jogo foi criado em duas etapas diferentes, a primeira foi implementar a lógica do jogo
utilizando o eclipse e o gedit, e a segunda foi a implementacao grafica, feita utilizando o QT.
	Para compilar o projeto como um todo abra a pasta do Jogo_Truco dentro da pasta Truco, neste diretório 
estara contido todos os arquivos necessarios para apresentar jogo com a interface grafica.

	Comandos para compilar e executar o projeto:
	Primeiro abra a pasta ~/UFSC/prog3
	1 - Execute o comando do bash para gerar a biblioteca do carteado
	$bash stlb.sh
	2 - Crie uma pasta chamada Lib dentro do diretório carteado
	$cd carteado || mkdir Lib
	3 - Mova a biblioteca libcarteado.a para o diretório Lib
	$mv libcarteado.a carteado/Lib
	Abra o repósitório na pasta Jogo_Truco
	$ qmake
	$ make
	$ ./Jogo_Truco

