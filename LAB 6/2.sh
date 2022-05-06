echo "Enter n"
read n
i=0
while [ $i -lt $n ]
    do
        read a[$i]
        i=`expr $i + 1`
done
i=0
k=`expr $n / 2`
while [ $i -lt `expr $k` ]
    do
        t=${a[$i]}
        j=`expr $n - 1`
        l=`expr $j - $i`
        a[$i]=${a[$l]}
        a[$l]=$t
        i=`expr $i + 1` 
done
i=0
while [ $i -lt $n ]
    do 
        echo ${a[$i]}
        i=`expr $i + 1`
done
