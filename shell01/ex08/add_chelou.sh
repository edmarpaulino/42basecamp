#! /bin/sh

# COMANDOS PARA TESTE:
#
# env FT_NBR1="\\'?\"\\\"'\\" FT_NBR2=rcrdmddd ./add_chelou.sh
# env FT_NBR1='\"\"!\"\"!\"\"!\"\"!\"\"!\"\"' FT_NBR2=dcrcmcmooododmrrrmorcmcrmomo ./add_chelou.sh

echo $FT_NBR1 + $FT_NBR2 | tr "mrdoc" "01234" | sed "s/'/0/g" | sed 's/\\/1/g' | sed 's/"/2/g' | sed 's/?/3/g' | sed 's/!/4/g' | xargs echo "ibase=5;" | bc | xargs echo "ibase=10; obase=13;" | bc | tr "0123456789ABC" "gtaio luSnemf"