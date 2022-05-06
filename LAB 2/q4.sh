echo enter s
read s
h=`expr $s / 3600`
m=`expr $s / 60`
echo $h : $m : $s