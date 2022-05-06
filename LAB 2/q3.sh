echo enter a
read a
echo enter b
read b
a=`expr $a + $b`
b=`expr $a - $b`
a=`expr $a - $b`
echo a is $a b is $b