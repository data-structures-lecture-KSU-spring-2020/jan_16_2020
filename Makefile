.PHONY: clean All

All:
	@echo "----------Building project:[ jan_16_2020 - Debug ]----------"
	@cd "jan_16_2020" && "$(MAKE)" -f  "jan_16_2020.mk"
clean:
	@echo "----------Cleaning project:[ jan_16_2020 - Debug ]----------"
	@cd "jan_16_2020" && "$(MAKE)" -f  "jan_16_2020.mk" clean
