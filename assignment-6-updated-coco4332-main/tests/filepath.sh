if [ -f tests/result.out ] ; then
    rm tests/result.out
fi

#test invalid input file
./"$1" tests/imaginaryfile.csv CosmicCrafts >> tests/result.out
diff -q -w -i tests/result.out tests/expected-filepath.out
exit