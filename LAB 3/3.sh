echo "Enter three numbers"
read a 
read b
read c
if [ $a -le $b ] && [ $a -le $b ]
then 
    echo " $a is smallest "
elif [ $b -le $a ] && [ $b -le $c ]
then 
    echo " $b is smallest "
else         
    echo " $c is smallest "
 fi   