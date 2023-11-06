ORDER_321:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[1])
	goto ORDER_321;
else if (*segments[0] >= *segments[2])
	goto ORDER_231;
else
	goto ORDER_132;

ORDER_312:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[2])
	goto ORDER_312;
else if (*segments[0] >= *segments[1])
	goto ORDER_213;
else
	goto ORDER_123;

ORDER_231:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[0])
	goto ORDER_231;
else if (*segments[1] >= *segments[2])
	goto ORDER_321;
else
	goto ORDER_312;

ORDER_213:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[0])
	goto ORDER_213;
else if (*segments[2] >= *segments[1])
	goto ORDER_312;
else
	goto ORDER_321;

ORDER_132:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[2])
	goto ORDER_132;
else if (*segments[1] >= *segments[0])
	goto ORDER_123;
else
	goto ORDER_213;

ORDER_123:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[1])
	goto ORDER_123;
else if (*segments[2] >= *segments[0])
	goto ORDER_132;
else
	goto ORDER_231;

