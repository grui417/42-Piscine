#!/bin/sh
cat /etc/passwd | sort | sed 1,1d | sed 'n; d' | sed 's/:.*//' | awk -F '' '{ for(i=NF; i; i--) printf("%c", $i); print "" }' | sort -r | tr "\n" "," | sed 's/, */, /g'
