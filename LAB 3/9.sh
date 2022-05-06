echo "Enter a character "
read a
case $a in
[a-z]) echo "Small letter";;
[A-Z]) echo "Capital letter";;
[0-9]) echo "digit";;
*) echo "Special character";;
esac