#if [ ! $# -eq 1 ]; then
#  echo "usage: ${0} \"<file-pattern>\""
#  exit 0
#fi
#
#lcov -d . -c -o coverage.info
#
#lcov --list-full-path -e coverage.info ${1} -o coverage-stripped.info
#
##genhtml -o html-coverage coverage-stripped.info
#genhtml -o html-coverage coverage.info
#
#lcov -d . -z
#
#exit 0


lcov -d . -c -o coverage.info

lcov --list-full-path -e coverage.info . -o coverage-stripped.info

#genhtml -o html-coverage coverage-stripped.info
genhtml -o html-coverage coverage.info

lcov -d . -z

