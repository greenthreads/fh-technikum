.PHONY: clean All

All:
	@echo "----------Building project:[ week1 - Debug ]----------"
	@cd "sem1/week1" && $(MAKE) -f  "week1.mk"
clean:
	@echo "----------Cleaning project:[ week1 - Debug ]----------"
	@cd "sem1/week1" && $(MAKE) -f  "week1.mk" clean
