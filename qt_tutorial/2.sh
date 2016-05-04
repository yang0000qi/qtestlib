
if [ ! $# -eq 3 ]; then
  echo "usage: ${0} <gcov-files-dir> \"<file-pattern>\" <target-dir>"
  exit 0
fi

lcov -d ${1} -c -o ${1}/coverage.info

lcov --list-full-path -e ${1}/coverage.info ${2} -o ${1}/coverage-stripped.info

genhtml -o ${3} ${1}/coverage-stripped.info

lcov -d ${1} -z

exit 0
