ORDER_54321:
if (cache[0] == 0)
	goto DONE;
t->results[pos++] = cache[0];
cache[0] = *++segments[0];
if (cache[0] >= cache[1])
	goto ORDER_54321;
else if (cache[0] >= cache[2])
	goto ORDER_45321;
else if (cache[0] >= cache[3])
	goto ORDER_35421;
else if (cache[0] >= cache[4])
	goto ORDER_25431;
else
	goto ORDER_15432;

ORDER_54312:
if (cache[0] == 0)
	goto DONE;
t->results[pos++] = cache[0];
cache[0] = *++segments[0];
if (cache[0] >= cache[1])
	goto ORDER_54312;
else if (cache[0] >= cache[2])
	goto ORDER_45312;
else if (cache[0] >= cache[4])
	goto ORDER_35412;
else if (cache[0] >= cache[3])
	goto ORDER_25413;
else
	goto ORDER_15423;

ORDER_54231:
if (cache[0] == 0)
	goto DONE;
t->results[pos++] = cache[0];
cache[0] = *++segments[0];
if (cache[0] >= cache[1])
	goto ORDER_54231;
else if (cache[0] >= cache[3])
	goto ORDER_45231;
else if (cache[0] >= cache[2])
	goto ORDER_35241;
else if (cache[0] >= cache[4])
	goto ORDER_25341;
else
	goto ORDER_15342;

ORDER_54213:
if (cache[0] == 0)
	goto DONE;
t->results[pos++] = cache[0];
cache[0] = *++segments[0];
if (cache[0] >= cache[1])
	goto ORDER_54213;
else if (cache[0] >= cache[4])
	goto ORDER_45213;
else if (cache[0] >= cache[2])
	goto ORDER_35214;
else if (cache[0] >= cache[3])
	goto ORDER_25314;
else
	goto ORDER_15324;

ORDER_54132:
if (cache[0] == 0)
	goto DONE;
t->results[pos++] = cache[0];
cache[0] = *++segments[0];
if (cache[0] >= cache[1])
	goto ORDER_54132;
else if (cache[0] >= cache[3])
	goto ORDER_45132;
else if (cache[0] >= cache[4])
	goto ORDER_35142;
else if (cache[0] >= cache[2])
	goto ORDER_25143;
else
	goto ORDER_15243;

ORDER_54123:
if (cache[0] == 0)
	goto DONE;
t->results[pos++] = cache[0];
cache[0] = *++segments[0];
if (cache[0] >= cache[1])
	goto ORDER_54123;
else if (cache[0] >= cache[4])
	goto ORDER_45123;
else if (cache[0] >= cache[3])
	goto ORDER_35124;
else if (cache[0] >= cache[2])
	goto ORDER_25134;
else
	goto ORDER_15234;

ORDER_53421:
if (cache[0] == 0)
	goto DONE;
t->results[pos++] = cache[0];
cache[0] = *++segments[0];
if (cache[0] >= cache[2])
	goto ORDER_53421;
else if (cache[0] >= cache[1])
	goto ORDER_43521;
else if (cache[0] >= cache[3])
	goto ORDER_34521;
else if (cache[0] >= cache[4])
	goto ORDER_24531;
else
	goto ORDER_14532;

ORDER_53412:
if (cache[0] == 0)
	goto DONE;
t->results[pos++] = cache[0];
cache[0] = *++segments[0];
if (cache[0] >= cache[2])
	goto ORDER_53412;
else if (cache[0] >= cache[1])
	goto ORDER_43512;
else if (cache[0] >= cache[4])
	goto ORDER_34512;
else if (cache[0] >= cache[3])
	goto ORDER_24513;
else
	goto ORDER_14523;

ORDER_53241:
if (cache[0] == 0)
	goto DONE;
t->results[pos++] = cache[0];
cache[0] = *++segments[0];
if (cache[0] >= cache[3])
	goto ORDER_53241;
else if (cache[0] >= cache[1])
	goto ORDER_43251;
else if (cache[0] >= cache[2])
	goto ORDER_34251;
else if (cache[0] >= cache[4])
	goto ORDER_24351;
else
	goto ORDER_14352;

ORDER_53214:
if (cache[0] == 0)
	goto DONE;
t->results[pos++] = cache[0];
cache[0] = *++segments[0];
if (cache[0] >= cache[4])
	goto ORDER_53214;
else if (cache[0] >= cache[1])
	goto ORDER_43215;
else if (cache[0] >= cache[2])
	goto ORDER_34215;
else if (cache[0] >= cache[3])
	goto ORDER_24315;
else
	goto ORDER_14325;

ORDER_53142:
if (cache[0] == 0)
	goto DONE;
t->results[pos++] = cache[0];
cache[0] = *++segments[0];
if (cache[0] >= cache[3])
	goto ORDER_53142;
else if (cache[0] >= cache[1])
	goto ORDER_43152;
else if (cache[0] >= cache[4])
	goto ORDER_34152;
else if (cache[0] >= cache[2])
	goto ORDER_24153;
else
	goto ORDER_14253;

ORDER_53124:
if (cache[0] == 0)
	goto DONE;
t->results[pos++] = cache[0];
cache[0] = *++segments[0];
if (cache[0] >= cache[4])
	goto ORDER_53124;
else if (cache[0] >= cache[1])
	goto ORDER_43125;
else if (cache[0] >= cache[3])
	goto ORDER_34125;
else if (cache[0] >= cache[2])
	goto ORDER_24135;
else
	goto ORDER_14235;

ORDER_52431:
if (cache[0] == 0)
	goto DONE;
t->results[pos++] = cache[0];
cache[0] = *++segments[0];
if (cache[0] >= cache[2])
	goto ORDER_52431;
else if (cache[0] >= cache[3])
	goto ORDER_42531;
else if (cache[0] >= cache[1])
	goto ORDER_32541;
else if (cache[0] >= cache[4])
	goto ORDER_23541;
else
	goto ORDER_13542;

ORDER_52413:
if (cache[0] == 0)
	goto DONE;
t->results[pos++] = cache[0];
cache[0] = *++segments[0];
if (cache[0] >= cache[2])
	goto ORDER_52413;
else if (cache[0] >= cache[4])
	goto ORDER_42513;
else if (cache[0] >= cache[1])
	goto ORDER_32514;
else if (cache[0] >= cache[3])
	goto ORDER_23514;
else
	goto ORDER_13524;

ORDER_52341:
if (cache[0] == 0)
	goto DONE;
t->results[pos++] = cache[0];
cache[0] = *++segments[0];
if (cache[0] >= cache[3])
	goto ORDER_52341;
else if (cache[0] >= cache[2])
	goto ORDER_42351;
else if (cache[0] >= cache[1])
	goto ORDER_32451;
else if (cache[0] >= cache[4])
	goto ORDER_23451;
else
	goto ORDER_13452;

ORDER_52314:
if (cache[0] == 0)
	goto DONE;
t->results[pos++] = cache[0];
cache[0] = *++segments[0];
if (cache[0] >= cache[4])
	goto ORDER_52314;
else if (cache[0] >= cache[2])
	goto ORDER_42315;
else if (cache[0] >= cache[1])
	goto ORDER_32415;
else if (cache[0] >= cache[3])
	goto ORDER_23415;
else
	goto ORDER_13425;

ORDER_52143:
if (cache[0] == 0)
	goto DONE;
t->results[pos++] = cache[0];
cache[0] = *++segments[0];
if (cache[0] >= cache[3])
	goto ORDER_52143;
else if (cache[0] >= cache[4])
	goto ORDER_42153;
else if (cache[0] >= cache[1])
	goto ORDER_32154;
else if (cache[0] >= cache[2])
	goto ORDER_23154;
else
	goto ORDER_13254;

ORDER_52134:
if (cache[0] == 0)
	goto DONE;
t->results[pos++] = cache[0];
cache[0] = *++segments[0];
if (cache[0] >= cache[4])
	goto ORDER_52134;
else if (cache[0] >= cache[3])
	goto ORDER_42135;
else if (cache[0] >= cache[1])
	goto ORDER_32145;
else if (cache[0] >= cache[2])
	goto ORDER_23145;
else
	goto ORDER_13245;

ORDER_51432:
if (cache[0] == 0)
	goto DONE;
t->results[pos++] = cache[0];
cache[0] = *++segments[0];
if (cache[0] >= cache[2])
	goto ORDER_51432;
else if (cache[0] >= cache[3])
	goto ORDER_41532;
else if (cache[0] >= cache[4])
	goto ORDER_31542;
else if (cache[0] >= cache[1])
	goto ORDER_21543;
else
	goto ORDER_12543;

ORDER_51423:
if (cache[0] == 0)
	goto DONE;
t->results[pos++] = cache[0];
cache[0] = *++segments[0];
if (cache[0] >= cache[2])
	goto ORDER_51423;
else if (cache[0] >= cache[4])
	goto ORDER_41523;
else if (cache[0] >= cache[3])
	goto ORDER_31524;
else if (cache[0] >= cache[1])
	goto ORDER_21534;
else
	goto ORDER_12534;

ORDER_51342:
if (cache[0] == 0)
	goto DONE;
t->results[pos++] = cache[0];
cache[0] = *++segments[0];
if (cache[0] >= cache[3])
	goto ORDER_51342;
else if (cache[0] >= cache[2])
	goto ORDER_41352;
else if (cache[0] >= cache[4])
	goto ORDER_31452;
else if (cache[0] >= cache[1])
	goto ORDER_21453;
else
	goto ORDER_12453;

ORDER_51324:
if (cache[0] == 0)
	goto DONE;
t->results[pos++] = cache[0];
cache[0] = *++segments[0];
if (cache[0] >= cache[4])
	goto ORDER_51324;
else if (cache[0] >= cache[2])
	goto ORDER_41325;
else if (cache[0] >= cache[3])
	goto ORDER_31425;
else if (cache[0] >= cache[1])
	goto ORDER_21435;
else
	goto ORDER_12435;

ORDER_51243:
if (cache[0] == 0)
	goto DONE;
t->results[pos++] = cache[0];
cache[0] = *++segments[0];
if (cache[0] >= cache[3])
	goto ORDER_51243;
else if (cache[0] >= cache[4])
	goto ORDER_41253;
else if (cache[0] >= cache[2])
	goto ORDER_31254;
else if (cache[0] >= cache[1])
	goto ORDER_21354;
else
	goto ORDER_12354;

ORDER_51234:
if (cache[0] == 0)
	goto DONE;
t->results[pos++] = cache[0];
cache[0] = *++segments[0];
if (cache[0] >= cache[4])
	goto ORDER_51234;
else if (cache[0] >= cache[3])
	goto ORDER_41235;
else if (cache[0] >= cache[2])
	goto ORDER_31245;
else if (cache[0] >= cache[1])
	goto ORDER_21345;
else
	goto ORDER_12345;

ORDER_45321:
if (cache[1] == 0)
	goto DONE;
t->results[pos++] = cache[1];
cache[1] = *++segments[1];
if (cache[1] >= cache[0])
	goto ORDER_45321;
else if (cache[1] >= cache[2])
	goto ORDER_54321;
else if (cache[1] >= cache[3])
	goto ORDER_53421;
else if (cache[1] >= cache[4])
	goto ORDER_52431;
else
	goto ORDER_51432;

ORDER_45312:
if (cache[1] == 0)
	goto DONE;
t->results[pos++] = cache[1];
cache[1] = *++segments[1];
if (cache[1] >= cache[0])
	goto ORDER_45312;
else if (cache[1] >= cache[2])
	goto ORDER_54312;
else if (cache[1] >= cache[4])
	goto ORDER_53412;
else if (cache[1] >= cache[3])
	goto ORDER_52413;
else
	goto ORDER_51423;

ORDER_45231:
if (cache[1] == 0)
	goto DONE;
t->results[pos++] = cache[1];
cache[1] = *++segments[1];
if (cache[1] >= cache[0])
	goto ORDER_45231;
else if (cache[1] >= cache[3])
	goto ORDER_54231;
else if (cache[1] >= cache[2])
	goto ORDER_53241;
else if (cache[1] >= cache[4])
	goto ORDER_52341;
else
	goto ORDER_51342;

ORDER_45213:
if (cache[1] == 0)
	goto DONE;
t->results[pos++] = cache[1];
cache[1] = *++segments[1];
if (cache[1] >= cache[0])
	goto ORDER_45213;
else if (cache[1] >= cache[4])
	goto ORDER_54213;
else if (cache[1] >= cache[2])
	goto ORDER_53214;
else if (cache[1] >= cache[3])
	goto ORDER_52314;
else
	goto ORDER_51324;

ORDER_45132:
if (cache[1] == 0)
	goto DONE;
t->results[pos++] = cache[1];
cache[1] = *++segments[1];
if (cache[1] >= cache[0])
	goto ORDER_45132;
else if (cache[1] >= cache[3])
	goto ORDER_54132;
else if (cache[1] >= cache[4])
	goto ORDER_53142;
else if (cache[1] >= cache[2])
	goto ORDER_52143;
else
	goto ORDER_51243;

ORDER_45123:
if (cache[1] == 0)
	goto DONE;
t->results[pos++] = cache[1];
cache[1] = *++segments[1];
if (cache[1] >= cache[0])
	goto ORDER_45123;
else if (cache[1] >= cache[4])
	goto ORDER_54123;
else if (cache[1] >= cache[3])
	goto ORDER_53124;
else if (cache[1] >= cache[2])
	goto ORDER_52134;
else
	goto ORDER_51234;

ORDER_43521:
if (cache[2] == 0)
	goto DONE;
t->results[pos++] = cache[2];
cache[2] = *++segments[2];
if (cache[2] >= cache[0])
	goto ORDER_43521;
else if (cache[2] >= cache[1])
	goto ORDER_53421;
else if (cache[2] >= cache[3])
	goto ORDER_54321;
else if (cache[2] >= cache[4])
	goto ORDER_54231;
else
	goto ORDER_54132;

ORDER_43512:
if (cache[2] == 0)
	goto DONE;
t->results[pos++] = cache[2];
cache[2] = *++segments[2];
if (cache[2] >= cache[0])
	goto ORDER_43512;
else if (cache[2] >= cache[1])
	goto ORDER_53412;
else if (cache[2] >= cache[4])
	goto ORDER_54312;
else if (cache[2] >= cache[3])
	goto ORDER_54213;
else
	goto ORDER_54123;

ORDER_43251:
if (cache[3] == 0)
	goto DONE;
t->results[pos++] = cache[3];
cache[3] = *++segments[3];
if (cache[3] >= cache[0])
	goto ORDER_43251;
else if (cache[3] >= cache[1])
	goto ORDER_53241;
else if (cache[3] >= cache[2])
	goto ORDER_54231;
else if (cache[3] >= cache[4])
	goto ORDER_54321;
else
	goto ORDER_54312;

ORDER_43215:
if (cache[4] == 0)
	goto DONE;
t->results[pos++] = cache[4];
cache[4] = *++segments[4];
if (cache[4] >= cache[0])
	goto ORDER_43215;
else if (cache[4] >= cache[1])
	goto ORDER_53214;
else if (cache[4] >= cache[2])
	goto ORDER_54213;
else if (cache[4] >= cache[3])
	goto ORDER_54312;
else
	goto ORDER_54321;

ORDER_43152:
if (cache[3] == 0)
	goto DONE;
t->results[pos++] = cache[3];
cache[3] = *++segments[3];
if (cache[3] >= cache[0])
	goto ORDER_43152;
else if (cache[3] >= cache[1])
	goto ORDER_53142;
else if (cache[3] >= cache[4])
	goto ORDER_54132;
else if (cache[3] >= cache[2])
	goto ORDER_54123;
else
	goto ORDER_54213;

ORDER_43125:
if (cache[4] == 0)
	goto DONE;
t->results[pos++] = cache[4];
cache[4] = *++segments[4];
if (cache[4] >= cache[0])
	goto ORDER_43125;
else if (cache[4] >= cache[1])
	goto ORDER_53124;
else if (cache[4] >= cache[3])
	goto ORDER_54123;
else if (cache[4] >= cache[2])
	goto ORDER_54132;
else
	goto ORDER_54231;

ORDER_42531:
if (cache[2] == 0)
	goto DONE;
t->results[pos++] = cache[2];
cache[2] = *++segments[2];
if (cache[2] >= cache[0])
	goto ORDER_42531;
else if (cache[2] >= cache[3])
	goto ORDER_52431;
else if (cache[2] >= cache[1])
	goto ORDER_52341;
else if (cache[2] >= cache[4])
	goto ORDER_53241;
else
	goto ORDER_53142;

ORDER_42513:
if (cache[2] == 0)
	goto DONE;
t->results[pos++] = cache[2];
cache[2] = *++segments[2];
if (cache[2] >= cache[0])
	goto ORDER_42513;
else if (cache[2] >= cache[4])
	goto ORDER_52413;
else if (cache[2] >= cache[1])
	goto ORDER_52314;
else if (cache[2] >= cache[3])
	goto ORDER_53214;
else
	goto ORDER_53124;

ORDER_42351:
if (cache[3] == 0)
	goto DONE;
t->results[pos++] = cache[3];
cache[3] = *++segments[3];
if (cache[3] >= cache[0])
	goto ORDER_42351;
else if (cache[3] >= cache[2])
	goto ORDER_52341;
else if (cache[3] >= cache[1])
	goto ORDER_52431;
else if (cache[3] >= cache[4])
	goto ORDER_53421;
else
	goto ORDER_53412;

ORDER_42315:
if (cache[4] == 0)
	goto DONE;
t->results[pos++] = cache[4];
cache[4] = *++segments[4];
if (cache[4] >= cache[0])
	goto ORDER_42315;
else if (cache[4] >= cache[2])
	goto ORDER_52314;
else if (cache[4] >= cache[1])
	goto ORDER_52413;
else if (cache[4] >= cache[3])
	goto ORDER_53412;
else
	goto ORDER_53421;

ORDER_42153:
if (cache[3] == 0)
	goto DONE;
t->results[pos++] = cache[3];
cache[3] = *++segments[3];
if (cache[3] >= cache[0])
	goto ORDER_42153;
else if (cache[3] >= cache[4])
	goto ORDER_52143;
else if (cache[3] >= cache[1])
	goto ORDER_52134;
else if (cache[3] >= cache[2])
	goto ORDER_53124;
else
	goto ORDER_53214;

ORDER_42135:
if (cache[4] == 0)
	goto DONE;
t->results[pos++] = cache[4];
cache[4] = *++segments[4];
if (cache[4] >= cache[0])
	goto ORDER_42135;
else if (cache[4] >= cache[3])
	goto ORDER_52134;
else if (cache[4] >= cache[1])
	goto ORDER_52143;
else if (cache[4] >= cache[2])
	goto ORDER_53142;
else
	goto ORDER_53241;

ORDER_41532:
if (cache[2] == 0)
	goto DONE;
t->results[pos++] = cache[2];
cache[2] = *++segments[2];
if (cache[2] >= cache[0])
	goto ORDER_41532;
else if (cache[2] >= cache[3])
	goto ORDER_51432;
else if (cache[2] >= cache[4])
	goto ORDER_51342;
else if (cache[2] >= cache[1])
	goto ORDER_51243;
else
	goto ORDER_52143;

ORDER_41523:
if (cache[2] == 0)
	goto DONE;
t->results[pos++] = cache[2];
cache[2] = *++segments[2];
if (cache[2] >= cache[0])
	goto ORDER_41523;
else if (cache[2] >= cache[4])
	goto ORDER_51423;
else if (cache[2] >= cache[3])
	goto ORDER_51324;
else if (cache[2] >= cache[1])
	goto ORDER_51234;
else
	goto ORDER_52134;

ORDER_41352:
if (cache[3] == 0)
	goto DONE;
t->results[pos++] = cache[3];
cache[3] = *++segments[3];
if (cache[3] >= cache[0])
	goto ORDER_41352;
else if (cache[3] >= cache[2])
	goto ORDER_51342;
else if (cache[3] >= cache[4])
	goto ORDER_51432;
else if (cache[3] >= cache[1])
	goto ORDER_51423;
else
	goto ORDER_52413;

ORDER_41325:
if (cache[4] == 0)
	goto DONE;
t->results[pos++] = cache[4];
cache[4] = *++segments[4];
if (cache[4] >= cache[0])
	goto ORDER_41325;
else if (cache[4] >= cache[2])
	goto ORDER_51324;
else if (cache[4] >= cache[3])
	goto ORDER_51423;
else if (cache[4] >= cache[1])
	goto ORDER_51432;
else
	goto ORDER_52431;

ORDER_41253:
if (cache[3] == 0)
	goto DONE;
t->results[pos++] = cache[3];
cache[3] = *++segments[3];
if (cache[3] >= cache[0])
	goto ORDER_41253;
else if (cache[3] >= cache[4])
	goto ORDER_51243;
else if (cache[3] >= cache[2])
	goto ORDER_51234;
else if (cache[3] >= cache[1])
	goto ORDER_51324;
else
	goto ORDER_52314;

ORDER_41235:
if (cache[4] == 0)
	goto DONE;
t->results[pos++] = cache[4];
cache[4] = *++segments[4];
if (cache[4] >= cache[0])
	goto ORDER_41235;
else if (cache[4] >= cache[3])
	goto ORDER_51234;
else if (cache[4] >= cache[2])
	goto ORDER_51243;
else if (cache[4] >= cache[1])
	goto ORDER_51342;
else
	goto ORDER_52341;

ORDER_35421:
if (cache[1] == 0)
	goto DONE;
t->results[pos++] = cache[1];
cache[1] = *++segments[1];
if (cache[1] >= cache[2])
	goto ORDER_35421;
else if (cache[1] >= cache[0])
	goto ORDER_34521;
else if (cache[1] >= cache[3])
	goto ORDER_43521;
else if (cache[1] >= cache[4])
	goto ORDER_42531;
else
	goto ORDER_41532;

ORDER_35412:
if (cache[1] == 0)
	goto DONE;
t->results[pos++] = cache[1];
cache[1] = *++segments[1];
if (cache[1] >= cache[2])
	goto ORDER_35412;
else if (cache[1] >= cache[0])
	goto ORDER_34512;
else if (cache[1] >= cache[4])
	goto ORDER_43512;
else if (cache[1] >= cache[3])
	goto ORDER_42513;
else
	goto ORDER_41523;

ORDER_35241:
if (cache[1] == 0)
	goto DONE;
t->results[pos++] = cache[1];
cache[1] = *++segments[1];
if (cache[1] >= cache[3])
	goto ORDER_35241;
else if (cache[1] >= cache[0])
	goto ORDER_34251;
else if (cache[1] >= cache[2])
	goto ORDER_43251;
else if (cache[1] >= cache[4])
	goto ORDER_42351;
else
	goto ORDER_41352;

ORDER_35214:
if (cache[1] == 0)
	goto DONE;
t->results[pos++] = cache[1];
cache[1] = *++segments[1];
if (cache[1] >= cache[4])
	goto ORDER_35214;
else if (cache[1] >= cache[0])
	goto ORDER_34215;
else if (cache[1] >= cache[2])
	goto ORDER_43215;
else if (cache[1] >= cache[3])
	goto ORDER_42315;
else
	goto ORDER_41325;

ORDER_35142:
if (cache[1] == 0)
	goto DONE;
t->results[pos++] = cache[1];
cache[1] = *++segments[1];
if (cache[1] >= cache[3])
	goto ORDER_35142;
else if (cache[1] >= cache[0])
	goto ORDER_34152;
else if (cache[1] >= cache[4])
	goto ORDER_43152;
else if (cache[1] >= cache[2])
	goto ORDER_42153;
else
	goto ORDER_41253;

ORDER_35124:
if (cache[1] == 0)
	goto DONE;
t->results[pos++] = cache[1];
cache[1] = *++segments[1];
if (cache[1] >= cache[4])
	goto ORDER_35124;
else if (cache[1] >= cache[0])
	goto ORDER_34125;
else if (cache[1] >= cache[3])
	goto ORDER_43125;
else if (cache[1] >= cache[2])
	goto ORDER_42135;
else
	goto ORDER_41235;

ORDER_34521:
if (cache[2] == 0)
	goto DONE;
t->results[pos++] = cache[2];
cache[2] = *++segments[2];
if (cache[2] >= cache[1])
	goto ORDER_34521;
else if (cache[2] >= cache[0])
	goto ORDER_35421;
else if (cache[2] >= cache[3])
	goto ORDER_45321;
else if (cache[2] >= cache[4])
	goto ORDER_45231;
else
	goto ORDER_45132;

ORDER_34512:
if (cache[2] == 0)
	goto DONE;
t->results[pos++] = cache[2];
cache[2] = *++segments[2];
if (cache[2] >= cache[1])
	goto ORDER_34512;
else if (cache[2] >= cache[0])
	goto ORDER_35412;
else if (cache[2] >= cache[4])
	goto ORDER_45312;
else if (cache[2] >= cache[3])
	goto ORDER_45213;
else
	goto ORDER_45123;

ORDER_34251:
if (cache[3] == 0)
	goto DONE;
t->results[pos++] = cache[3];
cache[3] = *++segments[3];
if (cache[3] >= cache[1])
	goto ORDER_34251;
else if (cache[3] >= cache[0])
	goto ORDER_35241;
else if (cache[3] >= cache[2])
	goto ORDER_45231;
else if (cache[3] >= cache[4])
	goto ORDER_45321;
else
	goto ORDER_45312;

ORDER_34215:
if (cache[4] == 0)
	goto DONE;
t->results[pos++] = cache[4];
cache[4] = *++segments[4];
if (cache[4] >= cache[1])
	goto ORDER_34215;
else if (cache[4] >= cache[0])
	goto ORDER_35214;
else if (cache[4] >= cache[2])
	goto ORDER_45213;
else if (cache[4] >= cache[3])
	goto ORDER_45312;
else
	goto ORDER_45321;

ORDER_34152:
if (cache[3] == 0)
	goto DONE;
t->results[pos++] = cache[3];
cache[3] = *++segments[3];
if (cache[3] >= cache[1])
	goto ORDER_34152;
else if (cache[3] >= cache[0])
	goto ORDER_35142;
else if (cache[3] >= cache[4])
	goto ORDER_45132;
else if (cache[3] >= cache[2])
	goto ORDER_45123;
else
	goto ORDER_45213;

ORDER_34125:
if (cache[4] == 0)
	goto DONE;
t->results[pos++] = cache[4];
cache[4] = *++segments[4];
if (cache[4] >= cache[1])
	goto ORDER_34125;
else if (cache[4] >= cache[0])
	goto ORDER_35124;
else if (cache[4] >= cache[3])
	goto ORDER_45123;
else if (cache[4] >= cache[2])
	goto ORDER_45132;
else
	goto ORDER_45231;

ORDER_32541:
if (cache[2] == 0)
	goto DONE;
t->results[pos++] = cache[2];
cache[2] = *++segments[2];
if (cache[2] >= cache[3])
	goto ORDER_32541;
else if (cache[2] >= cache[0])
	goto ORDER_32451;
else if (cache[2] >= cache[1])
	goto ORDER_42351;
else if (cache[2] >= cache[4])
	goto ORDER_43251;
else
	goto ORDER_43152;

ORDER_32514:
if (cache[2] == 0)
	goto DONE;
t->results[pos++] = cache[2];
cache[2] = *++segments[2];
if (cache[2] >= cache[4])
	goto ORDER_32514;
else if (cache[2] >= cache[0])
	goto ORDER_32415;
else if (cache[2] >= cache[1])
	goto ORDER_42315;
else if (cache[2] >= cache[3])
	goto ORDER_43215;
else
	goto ORDER_43125;

ORDER_32451:
if (cache[3] == 0)
	goto DONE;
t->results[pos++] = cache[3];
cache[3] = *++segments[3];
if (cache[3] >= cache[2])
	goto ORDER_32451;
else if (cache[3] >= cache[0])
	goto ORDER_32541;
else if (cache[3] >= cache[1])
	goto ORDER_42531;
else if (cache[3] >= cache[4])
	goto ORDER_43521;
else
	goto ORDER_43512;

ORDER_32415:
if (cache[4] == 0)
	goto DONE;
t->results[pos++] = cache[4];
cache[4] = *++segments[4];
if (cache[4] >= cache[2])
	goto ORDER_32415;
else if (cache[4] >= cache[0])
	goto ORDER_32514;
else if (cache[4] >= cache[1])
	goto ORDER_42513;
else if (cache[4] >= cache[3])
	goto ORDER_43512;
else
	goto ORDER_43521;

ORDER_32154:
if (cache[3] == 0)
	goto DONE;
t->results[pos++] = cache[3];
cache[3] = *++segments[3];
if (cache[3] >= cache[4])
	goto ORDER_32154;
else if (cache[3] >= cache[0])
	goto ORDER_32145;
else if (cache[3] >= cache[1])
	goto ORDER_42135;
else if (cache[3] >= cache[2])
	goto ORDER_43125;
else
	goto ORDER_43215;

ORDER_32145:
if (cache[4] == 0)
	goto DONE;
t->results[pos++] = cache[4];
cache[4] = *++segments[4];
if (cache[4] >= cache[3])
	goto ORDER_32145;
else if (cache[4] >= cache[0])
	goto ORDER_32154;
else if (cache[4] >= cache[1])
	goto ORDER_42153;
else if (cache[4] >= cache[2])
	goto ORDER_43152;
else
	goto ORDER_43251;

ORDER_31542:
if (cache[2] == 0)
	goto DONE;
t->results[pos++] = cache[2];
cache[2] = *++segments[2];
if (cache[2] >= cache[3])
	goto ORDER_31542;
else if (cache[2] >= cache[0])
	goto ORDER_31452;
else if (cache[2] >= cache[4])
	goto ORDER_41352;
else if (cache[2] >= cache[1])
	goto ORDER_41253;
else
	goto ORDER_42153;

ORDER_31524:
if (cache[2] == 0)
	goto DONE;
t->results[pos++] = cache[2];
cache[2] = *++segments[2];
if (cache[2] >= cache[4])
	goto ORDER_31524;
else if (cache[2] >= cache[0])
	goto ORDER_31425;
else if (cache[2] >= cache[3])
	goto ORDER_41325;
else if (cache[2] >= cache[1])
	goto ORDER_41235;
else
	goto ORDER_42135;

ORDER_31452:
if (cache[3] == 0)
	goto DONE;
t->results[pos++] = cache[3];
cache[3] = *++segments[3];
if (cache[3] >= cache[2])
	goto ORDER_31452;
else if (cache[3] >= cache[0])
	goto ORDER_31542;
else if (cache[3] >= cache[4])
	goto ORDER_41532;
else if (cache[3] >= cache[1])
	goto ORDER_41523;
else
	goto ORDER_42513;

ORDER_31425:
if (cache[4] == 0)
	goto DONE;
t->results[pos++] = cache[4];
cache[4] = *++segments[4];
if (cache[4] >= cache[2])
	goto ORDER_31425;
else if (cache[4] >= cache[0])
	goto ORDER_31524;
else if (cache[4] >= cache[3])
	goto ORDER_41523;
else if (cache[4] >= cache[1])
	goto ORDER_41532;
else
	goto ORDER_42531;

ORDER_31254:
if (cache[3] == 0)
	goto DONE;
t->results[pos++] = cache[3];
cache[3] = *++segments[3];
if (cache[3] >= cache[4])
	goto ORDER_31254;
else if (cache[3] >= cache[0])
	goto ORDER_31245;
else if (cache[3] >= cache[2])
	goto ORDER_41235;
else if (cache[3] >= cache[1])
	goto ORDER_41325;
else
	goto ORDER_42315;

ORDER_31245:
if (cache[4] == 0)
	goto DONE;
t->results[pos++] = cache[4];
cache[4] = *++segments[4];
if (cache[4] >= cache[3])
	goto ORDER_31245;
else if (cache[4] >= cache[0])
	goto ORDER_31254;
else if (cache[4] >= cache[2])
	goto ORDER_41253;
else if (cache[4] >= cache[1])
	goto ORDER_41352;
else
	goto ORDER_42351;

ORDER_25431:
if (cache[1] == 0)
	goto DONE;
t->results[pos++] = cache[1];
cache[1] = *++segments[1];
if (cache[1] >= cache[2])
	goto ORDER_25431;
else if (cache[1] >= cache[3])
	goto ORDER_24531;
else if (cache[1] >= cache[0])
	goto ORDER_23541;
else if (cache[1] >= cache[4])
	goto ORDER_32541;
else
	goto ORDER_31542;

ORDER_25413:
if (cache[1] == 0)
	goto DONE;
t->results[pos++] = cache[1];
cache[1] = *++segments[1];
if (cache[1] >= cache[2])
	goto ORDER_25413;
else if (cache[1] >= cache[4])
	goto ORDER_24513;
else if (cache[1] >= cache[0])
	goto ORDER_23514;
else if (cache[1] >= cache[3])
	goto ORDER_32514;
else
	goto ORDER_31524;

ORDER_25341:
if (cache[1] == 0)
	goto DONE;
t->results[pos++] = cache[1];
cache[1] = *++segments[1];
if (cache[1] >= cache[3])
	goto ORDER_25341;
else if (cache[1] >= cache[2])
	goto ORDER_24351;
else if (cache[1] >= cache[0])
	goto ORDER_23451;
else if (cache[1] >= cache[4])
	goto ORDER_32451;
else
	goto ORDER_31452;

ORDER_25314:
if (cache[1] == 0)
	goto DONE;
t->results[pos++] = cache[1];
cache[1] = *++segments[1];
if (cache[1] >= cache[4])
	goto ORDER_25314;
else if (cache[1] >= cache[2])
	goto ORDER_24315;
else if (cache[1] >= cache[0])
	goto ORDER_23415;
else if (cache[1] >= cache[3])
	goto ORDER_32415;
else
	goto ORDER_31425;

ORDER_25143:
if (cache[1] == 0)
	goto DONE;
t->results[pos++] = cache[1];
cache[1] = *++segments[1];
if (cache[1] >= cache[3])
	goto ORDER_25143;
else if (cache[1] >= cache[4])
	goto ORDER_24153;
else if (cache[1] >= cache[0])
	goto ORDER_23154;
else if (cache[1] >= cache[2])
	goto ORDER_32154;
else
	goto ORDER_31254;

ORDER_25134:
if (cache[1] == 0)
	goto DONE;
t->results[pos++] = cache[1];
cache[1] = *++segments[1];
if (cache[1] >= cache[4])
	goto ORDER_25134;
else if (cache[1] >= cache[3])
	goto ORDER_24135;
else if (cache[1] >= cache[0])
	goto ORDER_23145;
else if (cache[1] >= cache[2])
	goto ORDER_32145;
else
	goto ORDER_31245;

ORDER_24531:
if (cache[2] == 0)
	goto DONE;
t->results[pos++] = cache[2];
cache[2] = *++segments[2];
if (cache[2] >= cache[1])
	goto ORDER_24531;
else if (cache[2] >= cache[3])
	goto ORDER_25431;
else if (cache[2] >= cache[0])
	goto ORDER_25341;
else if (cache[2] >= cache[4])
	goto ORDER_35241;
else
	goto ORDER_35142;

ORDER_24513:
if (cache[2] == 0)
	goto DONE;
t->results[pos++] = cache[2];
cache[2] = *++segments[2];
if (cache[2] >= cache[1])
	goto ORDER_24513;
else if (cache[2] >= cache[4])
	goto ORDER_25413;
else if (cache[2] >= cache[0])
	goto ORDER_25314;
else if (cache[2] >= cache[3])
	goto ORDER_35214;
else
	goto ORDER_35124;

ORDER_24351:
if (cache[3] == 0)
	goto DONE;
t->results[pos++] = cache[3];
cache[3] = *++segments[3];
if (cache[3] >= cache[1])
	goto ORDER_24351;
else if (cache[3] >= cache[2])
	goto ORDER_25341;
else if (cache[3] >= cache[0])
	goto ORDER_25431;
else if (cache[3] >= cache[4])
	goto ORDER_35421;
else
	goto ORDER_35412;

ORDER_24315:
if (cache[4] == 0)
	goto DONE;
t->results[pos++] = cache[4];
cache[4] = *++segments[4];
if (cache[4] >= cache[1])
	goto ORDER_24315;
else if (cache[4] >= cache[2])
	goto ORDER_25314;
else if (cache[4] >= cache[0])
	goto ORDER_25413;
else if (cache[4] >= cache[3])
	goto ORDER_35412;
else
	goto ORDER_35421;

ORDER_24153:
if (cache[3] == 0)
	goto DONE;
t->results[pos++] = cache[3];
cache[3] = *++segments[3];
if (cache[3] >= cache[1])
	goto ORDER_24153;
else if (cache[3] >= cache[4])
	goto ORDER_25143;
else if (cache[3] >= cache[0])
	goto ORDER_25134;
else if (cache[3] >= cache[2])
	goto ORDER_35124;
else
	goto ORDER_35214;

ORDER_24135:
if (cache[4] == 0)
	goto DONE;
t->results[pos++] = cache[4];
cache[4] = *++segments[4];
if (cache[4] >= cache[1])
	goto ORDER_24135;
else if (cache[4] >= cache[3])
	goto ORDER_25134;
else if (cache[4] >= cache[0])
	goto ORDER_25143;
else if (cache[4] >= cache[2])
	goto ORDER_35142;
else
	goto ORDER_35241;

ORDER_23541:
if (cache[2] == 0)
	goto DONE;
t->results[pos++] = cache[2];
cache[2] = *++segments[2];
if (cache[2] >= cache[3])
	goto ORDER_23541;
else if (cache[2] >= cache[1])
	goto ORDER_23451;
else if (cache[2] >= cache[0])
	goto ORDER_24351;
else if (cache[2] >= cache[4])
	goto ORDER_34251;
else
	goto ORDER_34152;

ORDER_23514:
if (cache[2] == 0)
	goto DONE;
t->results[pos++] = cache[2];
cache[2] = *++segments[2];
if (cache[2] >= cache[4])
	goto ORDER_23514;
else if (cache[2] >= cache[1])
	goto ORDER_23415;
else if (cache[2] >= cache[0])
	goto ORDER_24315;
else if (cache[2] >= cache[3])
	goto ORDER_34215;
else
	goto ORDER_34125;

ORDER_23451:
if (cache[3] == 0)
	goto DONE;
t->results[pos++] = cache[3];
cache[3] = *++segments[3];
if (cache[3] >= cache[2])
	goto ORDER_23451;
else if (cache[3] >= cache[1])
	goto ORDER_23541;
else if (cache[3] >= cache[0])
	goto ORDER_24531;
else if (cache[3] >= cache[4])
	goto ORDER_34521;
else
	goto ORDER_34512;

ORDER_23415:
if (cache[4] == 0)
	goto DONE;
t->results[pos++] = cache[4];
cache[4] = *++segments[4];
if (cache[4] >= cache[2])
	goto ORDER_23415;
else if (cache[4] >= cache[1])
	goto ORDER_23514;
else if (cache[4] >= cache[0])
	goto ORDER_24513;
else if (cache[4] >= cache[3])
	goto ORDER_34512;
else
	goto ORDER_34521;

ORDER_23154:
if (cache[3] == 0)
	goto DONE;
t->results[pos++] = cache[3];
cache[3] = *++segments[3];
if (cache[3] >= cache[4])
	goto ORDER_23154;
else if (cache[3] >= cache[1])
	goto ORDER_23145;
else if (cache[3] >= cache[0])
	goto ORDER_24135;
else if (cache[3] >= cache[2])
	goto ORDER_34125;
else
	goto ORDER_34215;

ORDER_23145:
if (cache[4] == 0)
	goto DONE;
t->results[pos++] = cache[4];
cache[4] = *++segments[4];
if (cache[4] >= cache[3])
	goto ORDER_23145;
else if (cache[4] >= cache[1])
	goto ORDER_23154;
else if (cache[4] >= cache[0])
	goto ORDER_24153;
else if (cache[4] >= cache[2])
	goto ORDER_34152;
else
	goto ORDER_34251;

ORDER_21543:
if (cache[2] == 0)
	goto DONE;
t->results[pos++] = cache[2];
cache[2] = *++segments[2];
if (cache[2] >= cache[3])
	goto ORDER_21543;
else if (cache[2] >= cache[4])
	goto ORDER_21453;
else if (cache[2] >= cache[0])
	goto ORDER_21354;
else if (cache[2] >= cache[1])
	goto ORDER_31254;
else
	goto ORDER_32154;

ORDER_21534:
if (cache[2] == 0)
	goto DONE;
t->results[pos++] = cache[2];
cache[2] = *++segments[2];
if (cache[2] >= cache[4])
	goto ORDER_21534;
else if (cache[2] >= cache[3])
	goto ORDER_21435;
else if (cache[2] >= cache[0])
	goto ORDER_21345;
else if (cache[2] >= cache[1])
	goto ORDER_31245;
else
	goto ORDER_32145;

ORDER_21453:
if (cache[3] == 0)
	goto DONE;
t->results[pos++] = cache[3];
cache[3] = *++segments[3];
if (cache[3] >= cache[2])
	goto ORDER_21453;
else if (cache[3] >= cache[4])
	goto ORDER_21543;
else if (cache[3] >= cache[0])
	goto ORDER_21534;
else if (cache[3] >= cache[1])
	goto ORDER_31524;
else
	goto ORDER_32514;

ORDER_21435:
if (cache[4] == 0)
	goto DONE;
t->results[pos++] = cache[4];
cache[4] = *++segments[4];
if (cache[4] >= cache[2])
	goto ORDER_21435;
else if (cache[4] >= cache[3])
	goto ORDER_21534;
else if (cache[4] >= cache[0])
	goto ORDER_21543;
else if (cache[4] >= cache[1])
	goto ORDER_31542;
else
	goto ORDER_32541;

ORDER_21354:
if (cache[3] == 0)
	goto DONE;
t->results[pos++] = cache[3];
cache[3] = *++segments[3];
if (cache[3] >= cache[4])
	goto ORDER_21354;
else if (cache[3] >= cache[2])
	goto ORDER_21345;
else if (cache[3] >= cache[0])
	goto ORDER_21435;
else if (cache[3] >= cache[1])
	goto ORDER_31425;
else
	goto ORDER_32415;

ORDER_21345:
if (cache[4] == 0)
	goto DONE;
t->results[pos++] = cache[4];
cache[4] = *++segments[4];
if (cache[4] >= cache[3])
	goto ORDER_21345;
else if (cache[4] >= cache[2])
	goto ORDER_21354;
else if (cache[4] >= cache[0])
	goto ORDER_21453;
else if (cache[4] >= cache[1])
	goto ORDER_31452;
else
	goto ORDER_32451;

ORDER_15432:
if (cache[1] == 0)
	goto DONE;
t->results[pos++] = cache[1];
cache[1] = *++segments[1];
if (cache[1] >= cache[2])
	goto ORDER_15432;
else if (cache[1] >= cache[3])
	goto ORDER_14532;
else if (cache[1] >= cache[4])
	goto ORDER_13542;
else if (cache[1] >= cache[0])
	goto ORDER_12543;
else
	goto ORDER_21543;

ORDER_15423:
if (cache[1] == 0)
	goto DONE;
t->results[pos++] = cache[1];
cache[1] = *++segments[1];
if (cache[1] >= cache[2])
	goto ORDER_15423;
else if (cache[1] >= cache[4])
	goto ORDER_14523;
else if (cache[1] >= cache[3])
	goto ORDER_13524;
else if (cache[1] >= cache[0])
	goto ORDER_12534;
else
	goto ORDER_21534;

ORDER_15342:
if (cache[1] == 0)
	goto DONE;
t->results[pos++] = cache[1];
cache[1] = *++segments[1];
if (cache[1] >= cache[3])
	goto ORDER_15342;
else if (cache[1] >= cache[2])
	goto ORDER_14352;
else if (cache[1] >= cache[4])
	goto ORDER_13452;
else if (cache[1] >= cache[0])
	goto ORDER_12453;
else
	goto ORDER_21453;

ORDER_15324:
if (cache[1] == 0)
	goto DONE;
t->results[pos++] = cache[1];
cache[1] = *++segments[1];
if (cache[1] >= cache[4])
	goto ORDER_15324;
else if (cache[1] >= cache[2])
	goto ORDER_14325;
else if (cache[1] >= cache[3])
	goto ORDER_13425;
else if (cache[1] >= cache[0])
	goto ORDER_12435;
else
	goto ORDER_21435;

ORDER_15243:
if (cache[1] == 0)
	goto DONE;
t->results[pos++] = cache[1];
cache[1] = *++segments[1];
if (cache[1] >= cache[3])
	goto ORDER_15243;
else if (cache[1] >= cache[4])
	goto ORDER_14253;
else if (cache[1] >= cache[2])
	goto ORDER_13254;
else if (cache[1] >= cache[0])
	goto ORDER_12354;
else
	goto ORDER_21354;

ORDER_15234:
if (cache[1] == 0)
	goto DONE;
t->results[pos++] = cache[1];
cache[1] = *++segments[1];
if (cache[1] >= cache[4])
	goto ORDER_15234;
else if (cache[1] >= cache[3])
	goto ORDER_14235;
else if (cache[1] >= cache[2])
	goto ORDER_13245;
else if (cache[1] >= cache[0])
	goto ORDER_12345;
else
	goto ORDER_21345;

ORDER_14532:
if (cache[2] == 0)
	goto DONE;
t->results[pos++] = cache[2];
cache[2] = *++segments[2];
if (cache[2] >= cache[1])
	goto ORDER_14532;
else if (cache[2] >= cache[3])
	goto ORDER_15432;
else if (cache[2] >= cache[4])
	goto ORDER_15342;
else if (cache[2] >= cache[0])
	goto ORDER_15243;
else
	goto ORDER_25143;

ORDER_14523:
if (cache[2] == 0)
	goto DONE;
t->results[pos++] = cache[2];
cache[2] = *++segments[2];
if (cache[2] >= cache[1])
	goto ORDER_14523;
else if (cache[2] >= cache[4])
	goto ORDER_15423;
else if (cache[2] >= cache[3])
	goto ORDER_15324;
else if (cache[2] >= cache[0])
	goto ORDER_15234;
else
	goto ORDER_25134;

ORDER_14352:
if (cache[3] == 0)
	goto DONE;
t->results[pos++] = cache[3];
cache[3] = *++segments[3];
if (cache[3] >= cache[1])
	goto ORDER_14352;
else if (cache[3] >= cache[2])
	goto ORDER_15342;
else if (cache[3] >= cache[4])
	goto ORDER_15432;
else if (cache[3] >= cache[0])
	goto ORDER_15423;
else
	goto ORDER_25413;

ORDER_14325:
if (cache[4] == 0)
	goto DONE;
t->results[pos++] = cache[4];
cache[4] = *++segments[4];
if (cache[4] >= cache[1])
	goto ORDER_14325;
else if (cache[4] >= cache[2])
	goto ORDER_15324;
else if (cache[4] >= cache[3])
	goto ORDER_15423;
else if (cache[4] >= cache[0])
	goto ORDER_15432;
else
	goto ORDER_25431;

ORDER_14253:
if (cache[3] == 0)
	goto DONE;
t->results[pos++] = cache[3];
cache[3] = *++segments[3];
if (cache[3] >= cache[1])
	goto ORDER_14253;
else if (cache[3] >= cache[4])
	goto ORDER_15243;
else if (cache[3] >= cache[2])
	goto ORDER_15234;
else if (cache[3] >= cache[0])
	goto ORDER_15324;
else
	goto ORDER_25314;

ORDER_14235:
if (cache[4] == 0)
	goto DONE;
t->results[pos++] = cache[4];
cache[4] = *++segments[4];
if (cache[4] >= cache[1])
	goto ORDER_14235;
else if (cache[4] >= cache[3])
	goto ORDER_15234;
else if (cache[4] >= cache[2])
	goto ORDER_15243;
else if (cache[4] >= cache[0])
	goto ORDER_15342;
else
	goto ORDER_25341;

ORDER_13542:
if (cache[2] == 0)
	goto DONE;
t->results[pos++] = cache[2];
cache[2] = *++segments[2];
if (cache[2] >= cache[3])
	goto ORDER_13542;
else if (cache[2] >= cache[1])
	goto ORDER_13452;
else if (cache[2] >= cache[4])
	goto ORDER_14352;
else if (cache[2] >= cache[0])
	goto ORDER_14253;
else
	goto ORDER_24153;

ORDER_13524:
if (cache[2] == 0)
	goto DONE;
t->results[pos++] = cache[2];
cache[2] = *++segments[2];
if (cache[2] >= cache[4])
	goto ORDER_13524;
else if (cache[2] >= cache[1])
	goto ORDER_13425;
else if (cache[2] >= cache[3])
	goto ORDER_14325;
else if (cache[2] >= cache[0])
	goto ORDER_14235;
else
	goto ORDER_24135;

ORDER_13452:
if (cache[3] == 0)
	goto DONE;
t->results[pos++] = cache[3];
cache[3] = *++segments[3];
if (cache[3] >= cache[2])
	goto ORDER_13452;
else if (cache[3] >= cache[1])
	goto ORDER_13542;
else if (cache[3] >= cache[4])
	goto ORDER_14532;
else if (cache[3] >= cache[0])
	goto ORDER_14523;
else
	goto ORDER_24513;

ORDER_13425:
if (cache[4] == 0)
	goto DONE;
t->results[pos++] = cache[4];
cache[4] = *++segments[4];
if (cache[4] >= cache[2])
	goto ORDER_13425;
else if (cache[4] >= cache[1])
	goto ORDER_13524;
else if (cache[4] >= cache[3])
	goto ORDER_14523;
else if (cache[4] >= cache[0])
	goto ORDER_14532;
else
	goto ORDER_24531;

ORDER_13254:
if (cache[3] == 0)
	goto DONE;
t->results[pos++] = cache[3];
cache[3] = *++segments[3];
if (cache[3] >= cache[4])
	goto ORDER_13254;
else if (cache[3] >= cache[1])
	goto ORDER_13245;
else if (cache[3] >= cache[2])
	goto ORDER_14235;
else if (cache[3] >= cache[0])
	goto ORDER_14325;
else
	goto ORDER_24315;

ORDER_13245:
if (cache[4] == 0)
	goto DONE;
t->results[pos++] = cache[4];
cache[4] = *++segments[4];
if (cache[4] >= cache[3])
	goto ORDER_13245;
else if (cache[4] >= cache[1])
	goto ORDER_13254;
else if (cache[4] >= cache[2])
	goto ORDER_14253;
else if (cache[4] >= cache[0])
	goto ORDER_14352;
else
	goto ORDER_24351;

ORDER_12543:
if (cache[2] == 0)
	goto DONE;
t->results[pos++] = cache[2];
cache[2] = *++segments[2];
if (cache[2] >= cache[3])
	goto ORDER_12543;
else if (cache[2] >= cache[4])
	goto ORDER_12453;
else if (cache[2] >= cache[1])
	goto ORDER_12354;
else if (cache[2] >= cache[0])
	goto ORDER_13254;
else
	goto ORDER_23154;

ORDER_12534:
if (cache[2] == 0)
	goto DONE;
t->results[pos++] = cache[2];
cache[2] = *++segments[2];
if (cache[2] >= cache[4])
	goto ORDER_12534;
else if (cache[2] >= cache[3])
	goto ORDER_12435;
else if (cache[2] >= cache[1])
	goto ORDER_12345;
else if (cache[2] >= cache[0])
	goto ORDER_13245;
else
	goto ORDER_23145;

ORDER_12453:
if (cache[3] == 0)
	goto DONE;
t->results[pos++] = cache[3];
cache[3] = *++segments[3];
if (cache[3] >= cache[2])
	goto ORDER_12453;
else if (cache[3] >= cache[4])
	goto ORDER_12543;
else if (cache[3] >= cache[1])
	goto ORDER_12534;
else if (cache[3] >= cache[0])
	goto ORDER_13524;
else
	goto ORDER_23514;

ORDER_12435:
if (cache[4] == 0)
	goto DONE;
t->results[pos++] = cache[4];
cache[4] = *++segments[4];
if (cache[4] >= cache[2])
	goto ORDER_12435;
else if (cache[4] >= cache[3])
	goto ORDER_12534;
else if (cache[4] >= cache[1])
	goto ORDER_12543;
else if (cache[4] >= cache[0])
	goto ORDER_13542;
else
	goto ORDER_23541;

ORDER_12354:
if (cache[3] == 0)
	goto DONE;
t->results[pos++] = cache[3];
cache[3] = *++segments[3];
if (cache[3] >= cache[4])
	goto ORDER_12354;
else if (cache[3] >= cache[2])
	goto ORDER_12345;
else if (cache[3] >= cache[1])
	goto ORDER_12435;
else if (cache[3] >= cache[0])
	goto ORDER_13425;
else
	goto ORDER_23415;

ORDER_12345:
if (cache[4] == 0)
	goto DONE;
t->results[pos++] = cache[4];
cache[4] = *++segments[4];
if (cache[4] >= cache[3])
	goto ORDER_12345;
else if (cache[4] >= cache[2])
	goto ORDER_12354;
else if (cache[4] >= cache[1])
	goto ORDER_12453;
else if (cache[4] >= cache[0])
	goto ORDER_13452;
else
	goto ORDER_23451;

