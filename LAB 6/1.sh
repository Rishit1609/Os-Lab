echo "Enter n"
read n
i=0
declare -a a
while [ $i -lt $n ]
    do
        read a[$i]
        i=`expr $i + 1`
done
i=`expr $n - 1`
echo " "
while [ $i -ge 0 ]
    do
    echo ${a[$i]}
    i=`expr $i - 1`
done