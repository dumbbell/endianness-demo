PROGRAMS = rabbit-utf8 \
	   rabbit-utf16 \
	   rabbit-utf32

.PHONY: all run clean

all: run

run: $(PROGRAMS)
	@printf "\n\033[1m== 🐇 in UTF-8 ==\033[0m\n\n"
	@./rabbit-utf8

	@printf "\n\033[1m== 🐇 in UTF-16 ==\033[0m\n\n"
	@./rabbit-utf16 | ./from-utf16
	@echo
	@./rabbit-utf16 | tail -n +2

	@printf "\n\033[1m== 🐇 in UTF-32 ==\033[0m\n\n"
	@./rabbit-utf32 | ./from-utf32
	@echo
	@./rabbit-utf32 | tail -n +2

rabbit-utf8: rabbit-utf8.c

rabbit-utf16: rabbit-utf16.c

rabbit-utf32: rabbit-utf32.c

clean:
	rm -f $(PROGRAMS)
