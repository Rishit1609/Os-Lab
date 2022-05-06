read a
read b
read c
if [ `expr $a \* $a + $b \* $b` -eq `expr $c \* $c` ]
then
    echo "it is a triangle"
    area=`expr $a \* $b`
    echo "area = "`expr $area / 2`
elif [ `expr $b \* $b + $c \* $c` -eq `expr $a \* $a` ]
then
    echo "it is a triangle"
    area=`expr $b \* $c`
    echo "area = "`expr $area / 2`
elif [ `expr $c \* $c + $a \* $a` -eq `expr $b \* $b` ]
then
    echo "it is a triangle"
    area=`expr $c \* $a`
    echo "area = "`expr $area / 2`
else
    echo "not a triangle"
fi