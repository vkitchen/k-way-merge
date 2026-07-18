ORDER_321:
if (cache0 == 0)
	goto DONE;
t->results[pos++] = cache0;
cache0 = *++segments[0];
if (cache0 >= cache1)
	goto ORDER_321;
else if (cache0 >= cache2)
	goto ORDER_231;
else
	goto ORDER_132;

ORDER_312:
if (cache0 == 0)
	goto DONE;
t->results[pos++] = cache0;
cache0 = *++segments[0];
if (cache0 >= cache2)
	goto ORDER_312;
else if (cache0 >= cache1)
	goto ORDER_213;
else
	goto ORDER_123;

ORDER_231:
if (cache1 == 0)
	goto DONE;
t->results[pos++] = cache1;
cache1 = *++segments[1];
if (cache1 >= cache0)
	goto ORDER_231;
else if (cache1 >= cache2)
	goto ORDER_321;
else
	goto ORDER_312;

ORDER_213:
if (cache2 == 0)
	goto DONE;
t->results[pos++] = cache2;
cache2 = *++segments[2];
if (cache2 >= cache0)
	goto ORDER_213;
else if (cache2 >= cache1)
	goto ORDER_312;
else
	goto ORDER_321;

ORDER_132:
if (cache1 == 0)
	goto DONE;
t->results[pos++] = cache1;
cache1 = *++segments[1];
if (cache1 >= cache2)
	goto ORDER_132;
else if (cache1 >= cache0)
	goto ORDER_123;
else
	goto ORDER_213;

ORDER_123:
if (cache2 == 0)
	goto DONE;
t->results[pos++] = cache2;
cache2 = *++segments[2];
if (cache2 >= cache1)
	goto ORDER_123;
else if (cache2 >= cache0)
	goto ORDER_132;
else
	goto ORDER_231;

