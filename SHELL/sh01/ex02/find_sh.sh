find . -type f -name '*.sh' | rev | cut -c 4- | rev | sed 's/\.sh//g' | sed 's/\(.*\)\///g'
