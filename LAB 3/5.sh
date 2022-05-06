echo "Enter Year"
read a
if [ `expr $a % 400` -eq 0 ]
then 
    echo "Leap year"
elif [ `expr $a % 100` -eq 0 ]
then
    echo "Not leap year"
elif [ `expr $a % 4` -eq 0 ]
then 
    echo "Leap Year"
else
    echo "Not a leap year"
fi    