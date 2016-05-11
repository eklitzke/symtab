TARGETS = dl test.so

all: $(TARGETS)

dl: dl.c
	gcc -ldl $< -o $@

test.so: test.c
	gcc -fPIC -pie -Wl,-E $< -o $@

clean:
	rm -f $(TARGETS)

.PHONY: all clean
