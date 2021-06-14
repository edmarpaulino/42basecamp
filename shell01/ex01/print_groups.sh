#! /bin/sh

# COMANDOS PARA TESTE:
# env FT_USER=student bash print_groups.sh
# env FT_USER=staff bash print_groups.sh

groups $FT_USER | tr " " "," | tr -d "\n"
