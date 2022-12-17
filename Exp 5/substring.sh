str="Hi welcome to miet"
substr="${str:0:9}"
substr2="${str:-3:3}"
substr3="${str:10:12}"
echo -e "\nExtracting the substring from index 0 upto index 10: $substr\n"

echo -e "\nExtracting the substring from index -3 upto index 4: $substr2\n"

echo -e "\nExtracting the substring from index 10 upto index 24: $substr3\n"

echo "Length of the string: ${#str}"
