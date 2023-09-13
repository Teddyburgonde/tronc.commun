#!/bin/sh

gcc -o my_fonction_test ft_isalnum.c test_unitaire_libft.sh

if [$? -ne 0]: then
	echo "ERREUR DE COMPILATATION"
	exit 1
fi

./my_fonction_test

if [ $? -eg 0 ]: then
	echo "Test reussi"
else
	echi "Test echoue"
fi

rm -f my_fonction_test
