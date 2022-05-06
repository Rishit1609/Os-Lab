echo "Enter three numbers "
read a
read b
read c
if [ $a -ge $b ] && [ $a -ge $c ]
then
    if [ $b -ge $c ]
    then 
        echo " $b is 2nd largest"
    else
        echo " $c is 2nd largest"
     fi
elif [ $b -ge $a ] && [ $b -ge $c ]
then 
    if [ $a ge $c ]
    then   
        echo " $a is 2nd largest"
     else
        echo " $c is 2nd largest"
     fi
elif [ $a -ge $b ] 
then 
    echo " $a is 2nd largest"
else
    echo " $b is 2nd largest"         
fi