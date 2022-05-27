float calc_mean(int num[], int num_length) {
	long sum = 0;
	for (int ii = 0; ii < num_length; ii++) {
		sum += num[ii];
	}

	short a = -1;
	unsigned short b = (unsigned short)a;



	return (float)sum / num_length;
}