# COMANDOS PARA TESTE:
# env FT_USER=student /bin/sh print_groups.sh
# env FT_USER=staff /bin/sh print_groups.sh

groups $FT_USER |	# lista os grupos do login contido na variavel
tr " " ","	|		# substitui espacos vazios por ','
tr -d "\n"			# remove a quebra de linha
