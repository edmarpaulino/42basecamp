#1 /bin/sh

# COMANDOS PARA TESTE:
# env FT_LINE1=7 FT_LINE2=15 ./r_dwssap.sh

cat /etc/passwd | grep -v "^#" | awk -F: '{if (NR%2==0)print $1}' | rev | sort -r | awk -v firstLine=$FT_LINE1 -v lastLine=$FT_LINE2 '{if (NR>=firstLine && NR<=lastLine)print}' | sed 's/$/, /' | tr -d '\n' | sed 's/, $/./'