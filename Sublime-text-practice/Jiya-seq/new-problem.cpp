Too Lazy to name a Eqn

i = mult itr for no 1
    j = mult itr for no 2
	        k = total count = C

	                          0 .... 3 ... 5 ..... 300
	                          i = 0;
j = 0;
k = 0;

int a, b, c;

while (k < c) {
	if ( a * i == b * j) {
		arr[k] = a * i;
		i++;
		j++;
		k++;
	} else if (a * i < b * j) {
		arr[k] = a * i;
		i++;
		k++;
	} else {
		arr[k] = a * i;
		j++;
		k++;
	}
}