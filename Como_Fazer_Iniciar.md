# Objetivo

* O objetivo deste markdown � guiar novos desenvolvedores a estarem em condi��es de trabalhar neste
projeto.
	
---

# Base �bvia

* A partir de uma carga de trabalho focado no desenvolvimento para jogos, criar um projeto vazio.

* Criar um arquivo .cpp aleat�rio dentro do projeto permitir� que outras a��es possam ser feitas.

## Analisando Propriedades

* Clique com bot�o direito no nome do projeto. Procure pelo _Gerenciador de Propriedades_.

<img src="https://github.com/user-attachments/assets/a4ed7f22-4df6-41a7-b89a-6e3a06346599" width=600>

* No campo de _Configura��o_, selecione "Todas as Configura��es."

* Procure pela aba _C/C++_.
	* Em _General_, procure _Compila��o pelo Multiprocessador_, e sete "Sim".
	* Em _Otimiza��o_, procure _Favore�a Tamanho ou Velocidade_, e sete "Favore�a C�digo Veloz".
	* Em _Preprocessador_, procure por _Defini��es de Preprocessador_. Selecione a configura��o "Release" e finalmente adicione a string ";NDEBUG", caso n�o exista ainda.
	* Em _Gera��o de C�digo_, procure _Biblioteca em Tempo de Execu��o_:
		* Para configura��o "Release", sete "/MT"
		* Para configura��o "Debug", sete "/MTd"
		* Para mais explica��es do porqu�, veja o link no final
	* Ainda em _Gera��o de C�digo_, procure _Modelo de Ponto Flutuante_, sete "R�pido". H� um motivo importante.

* Procure pela aba _Vinculador_
	* Em seguida _Sistema_ e finalmente _Subsistema_. Selecione o "Windows".

* Para mais informa��es, veja o v�deo explicativo: https://youtu.be/2NOgrpXks9A?list=PLqCJpWy5Fohd3S7ICFXwUomYW0Wv67pDD




