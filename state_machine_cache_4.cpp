ORDER_4321:
if (cache[0] == 0)
	goto DONE;
t->results[pos++] = cache[0];
cache[0] = *++segments[0];
if (cache[0] >= cache[1])
	goto ORDER_4321;
else if (cache[0] >= cache[2])
	goto ORDER_3421;
else if (cache[0] >= cache[3])
	goto ORDER_2431;
else
	goto ORDER_1432;

ORDER_4312:
if (cache[0] == 0)
	goto DONE;
t->results[pos++] = cache[0];
cache[0] = *++segments[0];
if (cache[0] >= cache[1])
	goto ORDER_4312;
else if (cache[0] >= cache[3])
	goto ORDER_3412;
else if (cache[0] >= cache[2])
	goto ORDER_2413;
else
	goto ORDER_1423;

ORDER_4231:
if (cache[0] == 0)
	goto DONE;
t->results[pos++] = cache[0];
cache[0] = *++segments[0];
if (cache[0] >= cache[2])
	goto ORDER_4231;
else if (cache[0] >= cache[1])
	goto ORDER_3241;
else if (cache[0] >= cache[3])
	goto ORDER_2341;
else
	goto ORDER_1342;

ORDER_4213:
if (cache[0] == 0)
	goto DONE;
t->results[pos++] = cache[0];
cache[0] = *++segments[0];
if (cache[0] >= cache[3])
	goto ORDER_4213;
else if (cache[0] >= cache[1])
	goto ORDER_3214;
else if (cache[0] >= cache[2])
	goto ORDER_2314;
else
	goto ORDER_1324;

ORDER_4132:
if (cache[0] == 0)
	goto DONE;
t->results[pos++] = cache[0];
cache[0] = *++segments[0];
if (cache[0] >= cache[2])
	goto ORDER_4132;
else if (cache[0] >= cache[3])
	goto ORDER_3142;
else if (cache[0] >= cache[1])
	goto ORDER_2143;
else
	goto ORDER_1243;

ORDER_4123:
if (cache[0] == 0)
	goto DONE;
t->results[pos++] = cache[0];
cache[0] = *++segments[0];
if (cache[0] >= cache[3])
	goto ORDER_4123;
else if (cache[0] >= cache[2])
	goto ORDER_3124;
else if (cache[0] >= cache[1])
	goto ORDER_2134;
else
	goto ORDER_1234;

ORDER_3421:
if (cache[1] == 0)
	goto DONE;
t->results[pos++] = cache[1];
cache[1] = *++segments[1];
if (cache[1] >= cache[0])
	goto ORDER_3421;
else if (cache[1] >= cache[2])
	goto ORDER_4321;
else if (cache[1] >= cache[3])
	goto ORDER_4231;
else
	goto ORDER_4132;

ORDER_3412:
if (cache[1] == 0)
	goto DONE;
t->results[pos++] = cache[1];
cache[1] = *++segments[1];
if (cache[1] >= cache[0])
	goto ORDER_3412;
else if (cache[1] >= cache[3])
	goto ORDER_4312;
else if (cache[1] >= cache[2])
	goto ORDER_4213;
else
	goto ORDER_4123;

ORDER_3241:
if (cache[2] == 0)
	goto DONE;
t->results[pos++] = cache[2];
cache[2] = *++segments[2];
if (cache[2] >= cache[0])
	goto ORDER_3241;
else if (cache[2] >= cache[1])
	goto ORDER_4231;
else if (cache[2] >= cache[3])
	goto ORDER_4321;
else
	goto ORDER_4312;

ORDER_3214:
if (cache[3] == 0)
	goto DONE;
t->results[pos++] = cache[3];
cache[3] = *++segments[3];
if (cache[3] >= cache[0])
	goto ORDER_3214;
else if (cache[3] >= cache[1])
	goto ORDER_4213;
else if (cache[3] >= cache[2])
	goto ORDER_4312;
else
	goto ORDER_4321;

ORDER_3142:
if (cache[2] == 0)
	goto DONE;
t->results[pos++] = cache[2];
cache[2] = *++segments[2];
if (cache[2] >= cache[0])
	goto ORDER_3142;
else if (cache[2] >= cache[3])
	goto ORDER_4132;
else if (cache[2] >= cache[1])
	goto ORDER_4123;
else
	goto ORDER_4213;

ORDER_3124:
if (cache[3] == 0)
	goto DONE;
t->results[pos++] = cache[3];
cache[3] = *++segments[3];
if (cache[3] >= cache[0])
	goto ORDER_3124;
else if (cache[3] >= cache[2])
	goto ORDER_4123;
else if (cache[3] >= cache[1])
	goto ORDER_4132;
else
	goto ORDER_4231;

ORDER_2431:
if (cache[1] == 0)
	goto DONE;
t->results[pos++] = cache[1];
cache[1] = *++segments[1];
if (cache[1] >= cache[2])
	goto ORDER_2431;
else if (cache[1] >= cache[0])
	goto ORDER_2341;
else if (cache[1] >= cache[3])
	goto ORDER_3241;
else
	goto ORDER_3142;

ORDER_2413:
if (cache[1] == 0)
	goto DONE;
t->results[pos++] = cache[1];
cache[1] = *++segments[1];
if (cache[1] >= cache[3])
	goto ORDER_2413;
else if (cache[1] >= cache[0])
	goto ORDER_2314;
else if (cache[1] >= cache[2])
	goto ORDER_3214;
else
	goto ORDER_3124;

ORDER_2341:
if (cache[2] == 0)
	goto DONE;
t->results[pos++] = cache[2];
cache[2] = *++segments[2];
if (cache[2] >= cache[1])
	goto ORDER_2341;
else if (cache[2] >= cache[0])
	goto ORDER_2431;
else if (cache[2] >= cache[3])
	goto ORDER_3421;
else
	goto ORDER_3412;

ORDER_2314:
if (cache[3] == 0)
	goto DONE;
t->results[pos++] = cache[3];
cache[3] = *++segments[3];
if (cache[3] >= cache[1])
	goto ORDER_2314;
else if (cache[3] >= cache[0])
	goto ORDER_2413;
else if (cache[3] >= cache[2])
	goto ORDER_3412;
else
	goto ORDER_3421;

ORDER_2143:
if (cache[2] == 0)
	goto DONE;
t->results[pos++] = cache[2];
cache[2] = *++segments[2];
if (cache[2] >= cache[3])
	goto ORDER_2143;
else if (cache[2] >= cache[0])
	goto ORDER_2134;
else if (cache[2] >= cache[1])
	goto ORDER_3124;
else
	goto ORDER_3214;

ORDER_2134:
if (cache[3] == 0)
	goto DONE;
t->results[pos++] = cache[3];
cache[3] = *++segments[3];
if (cache[3] >= cache[2])
	goto ORDER_2134;
else if (cache[3] >= cache[0])
	goto ORDER_2143;
else if (cache[3] >= cache[1])
	goto ORDER_3142;
else
	goto ORDER_3241;

ORDER_1432:
if (cache[1] == 0)
	goto DONE;
t->results[pos++] = cache[1];
cache[1] = *++segments[1];
if (cache[1] >= cache[2])
	goto ORDER_1432;
else if (cache[1] >= cache[3])
	goto ORDER_1342;
else if (cache[1] >= cache[0])
	goto ORDER_1243;
else
	goto ORDER_2143;

ORDER_1423:
if (cache[1] == 0)
	goto DONE;
t->results[pos++] = cache[1];
cache[1] = *++segments[1];
if (cache[1] >= cache[3])
	goto ORDER_1423;
else if (cache[1] >= cache[2])
	goto ORDER_1324;
else if (cache[1] >= cache[0])
	goto ORDER_1234;
else
	goto ORDER_2134;

ORDER_1342:
if (cache[2] == 0)
	goto DONE;
t->results[pos++] = cache[2];
cache[2] = *++segments[2];
if (cache[2] >= cache[1])
	goto ORDER_1342;
else if (cache[2] >= cache[3])
	goto ORDER_1432;
else if (cache[2] >= cache[0])
	goto ORDER_1423;
else
	goto ORDER_2413;

ORDER_1324:
if (cache[3] == 0)
	goto DONE;
t->results[pos++] = cache[3];
cache[3] = *++segments[3];
if (cache[3] >= cache[1])
	goto ORDER_1324;
else if (cache[3] >= cache[2])
	goto ORDER_1423;
else if (cache[3] >= cache[0])
	goto ORDER_1432;
else
	goto ORDER_2431;

ORDER_1243:
if (cache[2] == 0)
	goto DONE;
t->results[pos++] = cache[2];
cache[2] = *++segments[2];
if (cache[2] >= cache[3])
	goto ORDER_1243;
else if (cache[2] >= cache[1])
	goto ORDER_1234;
else if (cache[2] >= cache[0])
	goto ORDER_1324;
else
	goto ORDER_2314;

ORDER_1234:
if (cache[3] == 0)
	goto DONE;
t->results[pos++] = cache[3];
cache[3] = *++segments[3];
if (cache[3] >= cache[2])
	goto ORDER_1234;
else if (cache[3] >= cache[1])
	goto ORDER_1243;
else if (cache[3] >= cache[0])
	goto ORDER_1342;
else
	goto ORDER_2341;

