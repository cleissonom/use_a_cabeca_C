CC = gcc

test: 
	@$(CC) test.c -o _test && ./_test

main: 
	@$(CC) $(path)/main.c -o $(path)/_main && ./$(path)/_main

clean:
	@if [ -n "$$(find . -name '_*' -print -exec echo x \;)" ]; then \
		echo "Apagando os seguintes arquivos:"; \
		find . -name '_*' -print -delete; \
	else \
		echo "Nenhum arquivo a ser deletado."; \
	fi