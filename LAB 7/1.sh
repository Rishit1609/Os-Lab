echo "Enter a numer"
read n
declare -a a
temp=$n
i=0
while [ $temp -gt 0 ]
do
    k=`expr $temp % 10`
    a[$i]=$k
    temp=`expr $temp / 10`
    i=`expr $i + 1`
done
echo "Enter places to swap"
read l
read m
if [ $l -lt 0  ]
then
    echo "Cannot do the operation"
else if [ $l -gt $i ]
then
    echo "Cannot do the operation"
else if [ $m -lt 0  ]
then
    echo "Cannot do the operation"
else if [ $m -gt $i ]
then
    echo "Cannot do the operation"
fi
fi
fi
fi
l=`expr $l - 1`
m=`expr $m - 1`
t=${a[$l]}
a[$l]=${a[$m]}
a[$m]=$t
i=`expr $i - 1`
temp=0
while [ $i -ge 0 ]
do
    t=${a[$i]}
    temp=`expr $temp \* 10 + $t`
    i=`expr $i - 1`
done
echo $temp

