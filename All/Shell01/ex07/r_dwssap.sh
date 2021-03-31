cat /etc/passwd | cut --complement -d ":" -f 5 | sed -n 'n;p' | cut -d ":" -f 1 | rev | sort -d -r | sed -n "$FT_LINE1","$FT_LINE2"p | sed -z 's/\n/, /g;s/, $/./'
