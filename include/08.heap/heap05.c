static uint8_t k_heapBMGetNID(uint8_t a, uint8_t b) {
	uint8_t		c;	
	for (c = a + 1; c == b || c == 0; ++c);
	return c;
}
