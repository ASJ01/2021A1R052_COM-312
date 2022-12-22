echo "enter the file name:"
read fname
echo "enter the starting line number:"
read s
echo "enter the ending line number:"
read n
sed -i $s,$n\p $fname | cat > new1.txt
cat new1.txt
