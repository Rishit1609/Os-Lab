a=$1
b=$2
if [ $a -gt $b ]
then 
    echo "$a is greater"
elif [ $b -gt $a ]
then 
    echo "$b is greater"
else
echo "Cannot determine"         
fi    
