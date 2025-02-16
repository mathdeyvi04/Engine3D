# Objetivo

* O objetivo deste markdown é guiar novos desenvolvedores a estarem em condições de trabalhar neste
projeto.
	
---

# Base Óbvia

* A partir de uma carga de trabalho focado no desenvolvimento para jogos, criar um projeto vazio.

* Criar um arquivo .cpp aleatório dentro do projeto permitirá que outras ações possam ser feitas.

## Analisando Propriedades

* Clique com botão direito no nome do projeto. Procure pelo _Gerenciador de Propriedades_.

<img src="https://github.com/user-attachments/assets/a4ed7f22-4df6-41a7-b89a-6e3a06346599" width=600>

* No campo de _Configuração_, selecione "Todas as Configurações."

* Procure pela aba _C/C++_.
	* Em _General_, procure _Compilação pelo Multiprocessador_, e sete "Sim".
	* Em _Otimização_, procure _Favoreça Tamanho ou Velocidade_, e sete "Favoreça Código Veloz".
	* Em _Preprocessador_, procure por _Definições de Preprocessador_. Selecione a configuração "Release" e finalmente adicione a string ";NDEBUG", caso não exista ainda.
	* Em _Geração de Código_, procure _Biblioteca em Tempo de Execução_:
		* Para configuração "Release", sete "/MT"
		* Para configuração "Debug", sete "/MTd"
		* Para mais explicações do porquê, veja o link no final
	* Ainda em _Geração de Código_, procure _Modelo de Ponto Flutuante_, sete "Rápido". Há um motivo importante.

* Procure pela aba _Vinculador_
	* Em seguida _Sistema_ e finalmente _Subsistema_. Selecione o "Windows".

* Para mais informações, veja o vídeo explicativo: https://youtu.be/2NOgrpXks9A?list=PLqCJpWy5Fohd3S7ICFXwUomYW0Wv67pDD




