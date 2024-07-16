if [ -f tests/result.out ] ; then
    rm tests/result.out
fi

#test: working as intended
./graph tests/profiles-long.csv DogLuvr >> tests/result.out
diff -q -w -B -i tests/result.out tests/expected-terminal2.out
exit