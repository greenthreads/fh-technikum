.PHONY: clean All

All:
	@echo "----------Building project:[ sem1 - Debug ]----------"
	@cd "sem1" && $(MAKE) -f  "sem1.mk"
clean:
	@echo "----------Cleaning project:[ sem1 - Debug ]----------"
	@cd "sem1" && $(MAKE) -f  "sem1.mk" clean
