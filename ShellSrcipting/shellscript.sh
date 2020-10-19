#!/bin/bash
RESULT_CSV="./Results.csv"
printf "NAME,EMAIL,GIT-URL,CLONE-STATUS,BUILD-STATUS,CPPCHECK,VALGRIND
" > $RESULT_CSV


while IFS=, read -r NAME EMAILID REPOLINK; do
    [[ $NAME != 'Name' ]] && printf "$NAME," >> $RESULT_CSV 
    [[ $EMAILID != 'Email ID' ]] && printf "$EMAILID," >> $RESULT_CSV
    if [ "$REPOLINK" != 'Repo link' ]; then
        printf "$REPOLINK," >> $RESULT_CSV
        
        git clone "$REPOLINK"
        [[ $? == 0 ]] && printf "Clone Success," >> $RESULT_CSV
        [[ $? > 0 ]] && printf "Clone failed," >> $RESULT_CSV
        
        REPO=`echo "$REPOLINK" | cut -d'/' -f5`
        MAKE_PATH=`find "$REPO" -name "Makefile" -exec dirname {} \;`
        make -C "$MAKE_PATH"
        [[ $? == 0 ]] && printf "build Success," >> $RESULT_CSV
        [[ $? > 0 ]] && printf "build failed," >> $RESULT_CSV
        
        CPPERROR=`cppcheck "$MAKE_DIR" | grep 'error' | wc -l`
        printf "$CPPERROR," >> $RESULT_CSV
        make test -C "$MAKE_PATH"
        
        EXEVAL=`find "$MAKE_PATH" -name "Test*.out"`
        valgrind "./$EXEVAL" 2> valgrin.csv
        VALGRIN=`grep "ERROR SUMMARY" valgrin.csv`
        printf "${VALGRIN:24:1} \n" >> $RESULT_CSV
        
    fi
done < Input.csv

