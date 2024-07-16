#!/bin/bash

#set up grading environment
SCORE=0
EXIT=0
PPRINT="------------------------------------"

if [ -f tests/result.out ] ; then
    rm tests/result.out
fi

#edit access permissions
chmod +x graph

#test 1: terminal output 1
bash tests/terminal1.sh
correct=$?
if [[ correct -eq 0 ]]; then
    ((SCORE += 30))
else
    echo $PPRINT
    echo "TEST 1 FAILED"
    echo $PPRINT
    echo "Expected your code to print:"
    cat tests/expected-terminal1.out
    echo ""
    echo $PPRINT
    echo "But instead got:"
    cat tests/result.out
    echo ""
    echo $PPRINT
    EXIT=1
fi

#test 2: terminal output 2
bash tests/terminal2.sh
correct=$?
if [[ correct -eq 0 ]]; then
    ((SCORE += 30))
else
    echo $PPRINT
    echo "TEST 2 FAILED"
    echo $PPRINT
    echo "Expected your code to print:"
    cat tests/expected-terminal2.out
    echo ""
    echo $PPRINT
    echo "But instead got:"
    cat tests/result.out
    echo ""
    echo $PPRINT
    EXIT=1
fi

#test 3: terminal output 3
bash tests/terminal3.sh
correct=$?
if [[ correct -eq 0 ]]; then
    ((SCORE += 30))
else
    echo $PPRINT
    echo "TEST 3 FAILED"
    echo $PPRINT
    echo "Expected your code to print:"
    cat tests/expected-terminal3.out
    echo ""
    echo $PPRINT
    echo "But instead got:"
    cat tests/result.out
    echo ""
    echo $PPRINT
    EXIT=1
fi

#test 4: invalid command line arguments
bash tests/commandline.sh graph
correct=$?
if [[ correct -eq 0 ]]; then
    ((SCORE += 5))
else
    echo $PPRINT
    echo "TEST 4 FAILED"
    echo $PPRINT
    echo "Expected your code to print:"
    cat tests/expected-commandline.out
    echo ""
    echo $PPRINT
    echo "But instead got:"
    cat tests/result.out
    echo ""
    echo $PPRINT
    EXIT=1
fi

#test 5: invalid filepath
bash tests/filepath.sh graph
correct=$?
if [[ correct -eq 0 ]]; then
    ((SCORE += 5))
else
    echo $PPRINT
    echo "TEST 5 FAILED"
    echo $PPRINT
    echo "Expected your code to print:"
    cat tests/expected-filepath.out
    echo ""
    echo $PPRINT
    echo "But instead got:"
    cat tests/result.out
    echo ""
    echo $PPRINT
    EXIT=1
fi


echo $PPRINT
echo "ALL TESTS COMPLETE"
echo $PPRINT

if [[ EXIT -eq 0 ]]; then
    echo "All tests passed!"
fi

echo "Final score: $SCORE"

exit $EXIT