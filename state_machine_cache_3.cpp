ORDER_321:
if (cache[0] == 0)
	goto DONE;
t->results[pos++] = cache[0];
cache[0] = *++segments[0];
if (cache[0] >= cache[1])
	goto ORDER_321;
else if (cache[0] >= cache[2])
	goto ORDER_231;
else
	goto ORDER_132;

ORDER_312:
if (cache[0] == 0)
	goto DONE;
t->results[pos++] = cache[0];
cache[0] = *++segments[0];
if (cache[0] >= cache[2])
	goto ORDER_312;
else if (cache[0] >= cache[1])
	goto ORDER_213;
else
	goto ORDER_123;

ORDER_231:
if (cache[1] == 0)
	goto DONE;
t->results[pos++] = cache[1];
cache[1] = *++segments[1];
if (cache[1] >= cache[0])
	goto ORDER_231;
else if (cache[1] >= cache[2])
	goto ORDER_321;
else
	goto ORDER_312;

ORDER_213:
if (cache[2] == 0)
	goto DONE;
t->results[pos++] = cache[2];
cache[2] = *++segments[2];
if (cache[2] >= cache[0])
	goto ORDER_213;
else if (cache[2] >= cache[1])
	goto ORDER_312;
else
	goto ORDER_321;

ORDER_132:
if (cache[1] == 0)
	goto DONE;
t->results[pos++] = cache[1];
cache[1] = *++segments[1];
if (cache[1] >= cache[2])
	goto ORDER_132;
else if (cache[1] >= cache[0])
	goto ORDER_123;
else
	goto ORDER_213;

ORDER_123:
if (cache[2] == 0)
	goto DONE;
t->results[pos++] = cache[2];
cache[2] = *++segments[2];
if (cache[2] >= cache[1])
	goto ORDER_123;
else if (cache[2] >= cache[0])
	goto ORDER_132;
else
	goto ORDER_231;

