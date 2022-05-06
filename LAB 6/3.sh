echo "Enter n"
read n
declare -a a
i=0
while [ $i -lt $n ]
    do  
        read a[$i]
        i=`expr $i + 1`
done
i=0
echo "Enter you choice "
read c
case $c in
1)
 l=0
 while [ $l -lt $n ]
    do 
        j=0
        while [ $j -lt $n ]
        do
            if [ ${a[$j]} -ge ${a[$l]} ]
            then
                t=${a[$j]}
                a[$j]=${a[$l]}
                a[$l]=$t
            fi
            j=`expr $j + 1`
        done
        l=`expr $l + 1`  
done
;;
2)
 l=0
 while [ $l -lt $n ]
    do 
        j=0
        while [ $j -lt $n ]
        do
            if [ ${a[$j]} -le ${a[$l]} ]
            then
                t=${a[$j]}
                a[$j]=${a[$l]}
                a[$l]=$t
            fi
            j=`expr $j + 1`
        done
        l=`expr $l + 1`  
done
;;
esac
echo "Acc to your choice "
i=0
while [ $i -lt $n ]
    do  
    echo ${a[$i]}
    i=`expr $i + 1`
    done


    