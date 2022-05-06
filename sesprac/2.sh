echo "Enter a character"
read ch
case $ch in 
[a-z]) echo "small letter";;
[A-Z]) echo "capital letter";;
[0-9]) echo "digit";;
*) echo "symbol";;
esac