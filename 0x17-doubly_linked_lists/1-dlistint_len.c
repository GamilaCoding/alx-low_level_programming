#!/usr/bin/python3
def safe_rint_integer(value):
	try:
	print("{:d}",format(value))
	except (ValueError, TypeError):
		return False
	return True
