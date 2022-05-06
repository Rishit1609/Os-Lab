a=1
b=1
p=5
while [ $p -gt 0 ]
do
    echo -n "$a $b "
    a=`expr $a + $b`
    b=`expr $a + $b`
    p=`expr $p - 1`
done
