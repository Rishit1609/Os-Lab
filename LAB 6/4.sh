echo -n "Enter n "
read n
declare -a a
i=0
while [ $i -lt $n ]
    do  
        read a[$i]
        i=`expr $i + 1`
done
echo -n "Enter m "
read m
declare -a a2
i=0
while [ $i -lt $m ]
    do  
        read a2[$i]
        i=`expr $i + 1`
done
declare -a a3
i=0
while [ $i -lt $n ]
    do  
        a3[$i]=${a[$i]}
        i=`expr $i + 1`
done
i=0
while [ $i -lt $m ]
    do
        k=`expr $n + $i`
        a3[$k]=${a2[$i]}
        i=`expr $i + 1`
done
i=0
k=`expr $m + $n`
echo " "
while [ $i -lt $k ]
    do
     echo ${a3[$i]}
     i=`expr $i + 1`
done 