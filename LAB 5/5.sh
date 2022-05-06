a[0]="A"
a[1]="B"
a[2]="C"
a[3]="D"
a[4]="E"
i=0
while [ $i -lt 5 ]
do
    j=0
    k=`expr $i + 1`
    while [ $j -lt $k ]
    do
        echo -n ${a[j]}
        j=`expr $j + 1`
    done
    echo ""
    i=`expr $i + 1`
done