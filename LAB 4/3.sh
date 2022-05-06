read a
c=0
while [ $a -gt 0 ]
do
    c=`expr $c + 1`
    a=`expr $a / 10`
done
echo $c