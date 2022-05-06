echo "Enter n"
read n
declare -a a
i=0
while [ $i -lt $n ]
    do  
        read a[$i]
        i=`expr $i + 1`
done
l=0
k=`expr $n - 2`
while [ $l -lt $k ]
    do 
        t=${a[$l+1]}
        a[$l+1]=${a[$l]}
        a[$l]=$t
        l=`expr $l + 2`  
done
i=0
while [ $i -lt $n ]
    do  
        echo "${a[$i]}"
        i=`expr $i + 1`
done
