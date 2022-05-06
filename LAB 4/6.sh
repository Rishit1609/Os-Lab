echo "How many elements in one line?"
read n
i=1
count=0
while [ $i -le 100 ]
do
  echo -n " $i "
  count=`expr $count + 1`
  i=`expr $i + 1`
  if [ $count -eq $n ]
  then
  echo ""
  count=0
  fi
done