executables = filterstat exists existsall

all: $(executables)

$(executables): %: %.c
	mkdir -p build
	gcc -O -o "build/$@" "$<"
