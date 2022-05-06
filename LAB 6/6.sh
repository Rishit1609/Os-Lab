echo -n "Enter n "
read n
s=0
i=0
while [ $i -lt $n ]
do
    read ${a[$i]}
    i=`expr $i + 1`
done
i=0
while [ $i -lt $n ]
do
    k=${#a[$i]}
    $((s += a[i]))
    i=`expr $i + 1`
done
v=`expr $s / $n`
echo -n " The sum is $s and average is $v"