if [ -f tests/result.out ] ; then
    rm tests/result.out
fi

#test invalid command line args
./"$1" >> tests/result.out
diff -q -w -i tests/result.out tests/expected-commandline.out
exit