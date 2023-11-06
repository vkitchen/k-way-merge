ORDER_654321:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[1])
	goto ORDER_654321;
else if (*segments[0] >= *segments[2])
	goto ORDER_564321;
else if (*segments[0] >= *segments[3])
	goto ORDER_465321;
else if (*segments[0] >= *segments[4])
	goto ORDER_365421;
else if (*segments[0] >= *segments[5])
	goto ORDER_265431;
else
	goto ORDER_165432;

ORDER_654312:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[1])
	goto ORDER_654312;
else if (*segments[0] >= *segments[2])
	goto ORDER_564312;
else if (*segments[0] >= *segments[3])
	goto ORDER_465312;
else if (*segments[0] >= *segments[5])
	goto ORDER_365412;
else if (*segments[0] >= *segments[4])
	goto ORDER_265413;
else
	goto ORDER_165423;

ORDER_654231:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[1])
	goto ORDER_654231;
else if (*segments[0] >= *segments[2])
	goto ORDER_564231;
else if (*segments[0] >= *segments[4])
	goto ORDER_465231;
else if (*segments[0] >= *segments[3])
	goto ORDER_365241;
else if (*segments[0] >= *segments[5])
	goto ORDER_265341;
else
	goto ORDER_165342;

ORDER_654213:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[1])
	goto ORDER_654213;
else if (*segments[0] >= *segments[2])
	goto ORDER_564213;
else if (*segments[0] >= *segments[5])
	goto ORDER_465213;
else if (*segments[0] >= *segments[3])
	goto ORDER_365214;
else if (*segments[0] >= *segments[4])
	goto ORDER_265314;
else
	goto ORDER_165324;

ORDER_654132:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[1])
	goto ORDER_654132;
else if (*segments[0] >= *segments[2])
	goto ORDER_564132;
else if (*segments[0] >= *segments[4])
	goto ORDER_465132;
else if (*segments[0] >= *segments[5])
	goto ORDER_365142;
else if (*segments[0] >= *segments[3])
	goto ORDER_265143;
else
	goto ORDER_165243;

ORDER_654123:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[1])
	goto ORDER_654123;
else if (*segments[0] >= *segments[2])
	goto ORDER_564123;
else if (*segments[0] >= *segments[5])
	goto ORDER_465123;
else if (*segments[0] >= *segments[4])
	goto ORDER_365124;
else if (*segments[0] >= *segments[3])
	goto ORDER_265134;
else
	goto ORDER_165234;

ORDER_653421:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[1])
	goto ORDER_653421;
else if (*segments[0] >= *segments[3])
	goto ORDER_563421;
else if (*segments[0] >= *segments[2])
	goto ORDER_463521;
else if (*segments[0] >= *segments[4])
	goto ORDER_364521;
else if (*segments[0] >= *segments[5])
	goto ORDER_264531;
else
	goto ORDER_164532;

ORDER_653412:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[1])
	goto ORDER_653412;
else if (*segments[0] >= *segments[3])
	goto ORDER_563412;
else if (*segments[0] >= *segments[2])
	goto ORDER_463512;
else if (*segments[0] >= *segments[5])
	goto ORDER_364512;
else if (*segments[0] >= *segments[4])
	goto ORDER_264513;
else
	goto ORDER_164523;

ORDER_653241:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[1])
	goto ORDER_653241;
else if (*segments[0] >= *segments[4])
	goto ORDER_563241;
else if (*segments[0] >= *segments[2])
	goto ORDER_463251;
else if (*segments[0] >= *segments[3])
	goto ORDER_364251;
else if (*segments[0] >= *segments[5])
	goto ORDER_264351;
else
	goto ORDER_164352;

ORDER_653214:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[1])
	goto ORDER_653214;
else if (*segments[0] >= *segments[5])
	goto ORDER_563214;
else if (*segments[0] >= *segments[2])
	goto ORDER_463215;
else if (*segments[0] >= *segments[3])
	goto ORDER_364215;
else if (*segments[0] >= *segments[4])
	goto ORDER_264315;
else
	goto ORDER_164325;

ORDER_653142:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[1])
	goto ORDER_653142;
else if (*segments[0] >= *segments[4])
	goto ORDER_563142;
else if (*segments[0] >= *segments[2])
	goto ORDER_463152;
else if (*segments[0] >= *segments[5])
	goto ORDER_364152;
else if (*segments[0] >= *segments[3])
	goto ORDER_264153;
else
	goto ORDER_164253;

ORDER_653124:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[1])
	goto ORDER_653124;
else if (*segments[0] >= *segments[5])
	goto ORDER_563124;
else if (*segments[0] >= *segments[2])
	goto ORDER_463125;
else if (*segments[0] >= *segments[4])
	goto ORDER_364125;
else if (*segments[0] >= *segments[3])
	goto ORDER_264135;
else
	goto ORDER_164235;

ORDER_652431:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[1])
	goto ORDER_652431;
else if (*segments[0] >= *segments[3])
	goto ORDER_562431;
else if (*segments[0] >= *segments[4])
	goto ORDER_462531;
else if (*segments[0] >= *segments[2])
	goto ORDER_362541;
else if (*segments[0] >= *segments[5])
	goto ORDER_263541;
else
	goto ORDER_163542;

ORDER_652413:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[1])
	goto ORDER_652413;
else if (*segments[0] >= *segments[3])
	goto ORDER_562413;
else if (*segments[0] >= *segments[5])
	goto ORDER_462513;
else if (*segments[0] >= *segments[2])
	goto ORDER_362514;
else if (*segments[0] >= *segments[4])
	goto ORDER_263514;
else
	goto ORDER_163524;

ORDER_652341:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[1])
	goto ORDER_652341;
else if (*segments[0] >= *segments[4])
	goto ORDER_562341;
else if (*segments[0] >= *segments[3])
	goto ORDER_462351;
else if (*segments[0] >= *segments[2])
	goto ORDER_362451;
else if (*segments[0] >= *segments[5])
	goto ORDER_263451;
else
	goto ORDER_163452;

ORDER_652314:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[1])
	goto ORDER_652314;
else if (*segments[0] >= *segments[5])
	goto ORDER_562314;
else if (*segments[0] >= *segments[3])
	goto ORDER_462315;
else if (*segments[0] >= *segments[2])
	goto ORDER_362415;
else if (*segments[0] >= *segments[4])
	goto ORDER_263415;
else
	goto ORDER_163425;

ORDER_652143:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[1])
	goto ORDER_652143;
else if (*segments[0] >= *segments[4])
	goto ORDER_562143;
else if (*segments[0] >= *segments[5])
	goto ORDER_462153;
else if (*segments[0] >= *segments[2])
	goto ORDER_362154;
else if (*segments[0] >= *segments[3])
	goto ORDER_263154;
else
	goto ORDER_163254;

ORDER_652134:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[1])
	goto ORDER_652134;
else if (*segments[0] >= *segments[5])
	goto ORDER_562134;
else if (*segments[0] >= *segments[4])
	goto ORDER_462135;
else if (*segments[0] >= *segments[2])
	goto ORDER_362145;
else if (*segments[0] >= *segments[3])
	goto ORDER_263145;
else
	goto ORDER_163245;

ORDER_651432:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[1])
	goto ORDER_651432;
else if (*segments[0] >= *segments[3])
	goto ORDER_561432;
else if (*segments[0] >= *segments[4])
	goto ORDER_461532;
else if (*segments[0] >= *segments[5])
	goto ORDER_361542;
else if (*segments[0] >= *segments[2])
	goto ORDER_261543;
else
	goto ORDER_162543;

ORDER_651423:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[1])
	goto ORDER_651423;
else if (*segments[0] >= *segments[3])
	goto ORDER_561423;
else if (*segments[0] >= *segments[5])
	goto ORDER_461523;
else if (*segments[0] >= *segments[4])
	goto ORDER_361524;
else if (*segments[0] >= *segments[2])
	goto ORDER_261534;
else
	goto ORDER_162534;

ORDER_651342:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[1])
	goto ORDER_651342;
else if (*segments[0] >= *segments[4])
	goto ORDER_561342;
else if (*segments[0] >= *segments[3])
	goto ORDER_461352;
else if (*segments[0] >= *segments[5])
	goto ORDER_361452;
else if (*segments[0] >= *segments[2])
	goto ORDER_261453;
else
	goto ORDER_162453;

ORDER_651324:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[1])
	goto ORDER_651324;
else if (*segments[0] >= *segments[5])
	goto ORDER_561324;
else if (*segments[0] >= *segments[3])
	goto ORDER_461325;
else if (*segments[0] >= *segments[4])
	goto ORDER_361425;
else if (*segments[0] >= *segments[2])
	goto ORDER_261435;
else
	goto ORDER_162435;

ORDER_651243:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[1])
	goto ORDER_651243;
else if (*segments[0] >= *segments[4])
	goto ORDER_561243;
else if (*segments[0] >= *segments[5])
	goto ORDER_461253;
else if (*segments[0] >= *segments[3])
	goto ORDER_361254;
else if (*segments[0] >= *segments[2])
	goto ORDER_261354;
else
	goto ORDER_162354;

ORDER_651234:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[1])
	goto ORDER_651234;
else if (*segments[0] >= *segments[5])
	goto ORDER_561234;
else if (*segments[0] >= *segments[4])
	goto ORDER_461235;
else if (*segments[0] >= *segments[3])
	goto ORDER_361245;
else if (*segments[0] >= *segments[2])
	goto ORDER_261345;
else
	goto ORDER_162345;

ORDER_645321:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[2])
	goto ORDER_645321;
else if (*segments[0] >= *segments[1])
	goto ORDER_546321;
else if (*segments[0] >= *segments[3])
	goto ORDER_456321;
else if (*segments[0] >= *segments[4])
	goto ORDER_356421;
else if (*segments[0] >= *segments[5])
	goto ORDER_256431;
else
	goto ORDER_156432;

ORDER_645312:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[2])
	goto ORDER_645312;
else if (*segments[0] >= *segments[1])
	goto ORDER_546312;
else if (*segments[0] >= *segments[3])
	goto ORDER_456312;
else if (*segments[0] >= *segments[5])
	goto ORDER_356412;
else if (*segments[0] >= *segments[4])
	goto ORDER_256413;
else
	goto ORDER_156423;

ORDER_645231:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[2])
	goto ORDER_645231;
else if (*segments[0] >= *segments[1])
	goto ORDER_546231;
else if (*segments[0] >= *segments[4])
	goto ORDER_456231;
else if (*segments[0] >= *segments[3])
	goto ORDER_356241;
else if (*segments[0] >= *segments[5])
	goto ORDER_256341;
else
	goto ORDER_156342;

ORDER_645213:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[2])
	goto ORDER_645213;
else if (*segments[0] >= *segments[1])
	goto ORDER_546213;
else if (*segments[0] >= *segments[5])
	goto ORDER_456213;
else if (*segments[0] >= *segments[3])
	goto ORDER_356214;
else if (*segments[0] >= *segments[4])
	goto ORDER_256314;
else
	goto ORDER_156324;

ORDER_645132:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[2])
	goto ORDER_645132;
else if (*segments[0] >= *segments[1])
	goto ORDER_546132;
else if (*segments[0] >= *segments[4])
	goto ORDER_456132;
else if (*segments[0] >= *segments[5])
	goto ORDER_356142;
else if (*segments[0] >= *segments[3])
	goto ORDER_256143;
else
	goto ORDER_156243;

ORDER_645123:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[2])
	goto ORDER_645123;
else if (*segments[0] >= *segments[1])
	goto ORDER_546123;
else if (*segments[0] >= *segments[5])
	goto ORDER_456123;
else if (*segments[0] >= *segments[4])
	goto ORDER_356124;
else if (*segments[0] >= *segments[3])
	goto ORDER_256134;
else
	goto ORDER_156234;

ORDER_643521:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[3])
	goto ORDER_643521;
else if (*segments[0] >= *segments[1])
	goto ORDER_543621;
else if (*segments[0] >= *segments[2])
	goto ORDER_453621;
else if (*segments[0] >= *segments[4])
	goto ORDER_354621;
else if (*segments[0] >= *segments[5])
	goto ORDER_254631;
else
	goto ORDER_154632;

ORDER_643512:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[3])
	goto ORDER_643512;
else if (*segments[0] >= *segments[1])
	goto ORDER_543612;
else if (*segments[0] >= *segments[2])
	goto ORDER_453612;
else if (*segments[0] >= *segments[5])
	goto ORDER_354612;
else if (*segments[0] >= *segments[4])
	goto ORDER_254613;
else
	goto ORDER_154623;

ORDER_643251:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[4])
	goto ORDER_643251;
else if (*segments[0] >= *segments[1])
	goto ORDER_543261;
else if (*segments[0] >= *segments[2])
	goto ORDER_453261;
else if (*segments[0] >= *segments[3])
	goto ORDER_354261;
else if (*segments[0] >= *segments[5])
	goto ORDER_254361;
else
	goto ORDER_154362;

ORDER_643215:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[5])
	goto ORDER_643215;
else if (*segments[0] >= *segments[1])
	goto ORDER_543216;
else if (*segments[0] >= *segments[2])
	goto ORDER_453216;
else if (*segments[0] >= *segments[3])
	goto ORDER_354216;
else if (*segments[0] >= *segments[4])
	goto ORDER_254316;
else
	goto ORDER_154326;

ORDER_643152:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[4])
	goto ORDER_643152;
else if (*segments[0] >= *segments[1])
	goto ORDER_543162;
else if (*segments[0] >= *segments[2])
	goto ORDER_453162;
else if (*segments[0] >= *segments[5])
	goto ORDER_354162;
else if (*segments[0] >= *segments[3])
	goto ORDER_254163;
else
	goto ORDER_154263;

ORDER_643125:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[5])
	goto ORDER_643125;
else if (*segments[0] >= *segments[1])
	goto ORDER_543126;
else if (*segments[0] >= *segments[2])
	goto ORDER_453126;
else if (*segments[0] >= *segments[4])
	goto ORDER_354126;
else if (*segments[0] >= *segments[3])
	goto ORDER_254136;
else
	goto ORDER_154236;

ORDER_642531:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[3])
	goto ORDER_642531;
else if (*segments[0] >= *segments[1])
	goto ORDER_542631;
else if (*segments[0] >= *segments[4])
	goto ORDER_452631;
else if (*segments[0] >= *segments[2])
	goto ORDER_352641;
else if (*segments[0] >= *segments[5])
	goto ORDER_253641;
else
	goto ORDER_153642;

ORDER_642513:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[3])
	goto ORDER_642513;
else if (*segments[0] >= *segments[1])
	goto ORDER_542613;
else if (*segments[0] >= *segments[5])
	goto ORDER_452613;
else if (*segments[0] >= *segments[2])
	goto ORDER_352614;
else if (*segments[0] >= *segments[4])
	goto ORDER_253614;
else
	goto ORDER_153624;

ORDER_642351:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[4])
	goto ORDER_642351;
else if (*segments[0] >= *segments[1])
	goto ORDER_542361;
else if (*segments[0] >= *segments[3])
	goto ORDER_452361;
else if (*segments[0] >= *segments[2])
	goto ORDER_352461;
else if (*segments[0] >= *segments[5])
	goto ORDER_253461;
else
	goto ORDER_153462;

ORDER_642315:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[5])
	goto ORDER_642315;
else if (*segments[0] >= *segments[1])
	goto ORDER_542316;
else if (*segments[0] >= *segments[3])
	goto ORDER_452316;
else if (*segments[0] >= *segments[2])
	goto ORDER_352416;
else if (*segments[0] >= *segments[4])
	goto ORDER_253416;
else
	goto ORDER_153426;

ORDER_642153:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[4])
	goto ORDER_642153;
else if (*segments[0] >= *segments[1])
	goto ORDER_542163;
else if (*segments[0] >= *segments[5])
	goto ORDER_452163;
else if (*segments[0] >= *segments[2])
	goto ORDER_352164;
else if (*segments[0] >= *segments[3])
	goto ORDER_253164;
else
	goto ORDER_153264;

ORDER_642135:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[5])
	goto ORDER_642135;
else if (*segments[0] >= *segments[1])
	goto ORDER_542136;
else if (*segments[0] >= *segments[4])
	goto ORDER_452136;
else if (*segments[0] >= *segments[2])
	goto ORDER_352146;
else if (*segments[0] >= *segments[3])
	goto ORDER_253146;
else
	goto ORDER_153246;

ORDER_641532:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[3])
	goto ORDER_641532;
else if (*segments[0] >= *segments[1])
	goto ORDER_541632;
else if (*segments[0] >= *segments[4])
	goto ORDER_451632;
else if (*segments[0] >= *segments[5])
	goto ORDER_351642;
else if (*segments[0] >= *segments[2])
	goto ORDER_251643;
else
	goto ORDER_152643;

ORDER_641523:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[3])
	goto ORDER_641523;
else if (*segments[0] >= *segments[1])
	goto ORDER_541623;
else if (*segments[0] >= *segments[5])
	goto ORDER_451623;
else if (*segments[0] >= *segments[4])
	goto ORDER_351624;
else if (*segments[0] >= *segments[2])
	goto ORDER_251634;
else
	goto ORDER_152634;

ORDER_641352:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[4])
	goto ORDER_641352;
else if (*segments[0] >= *segments[1])
	goto ORDER_541362;
else if (*segments[0] >= *segments[3])
	goto ORDER_451362;
else if (*segments[0] >= *segments[5])
	goto ORDER_351462;
else if (*segments[0] >= *segments[2])
	goto ORDER_251463;
else
	goto ORDER_152463;

ORDER_641325:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[5])
	goto ORDER_641325;
else if (*segments[0] >= *segments[1])
	goto ORDER_541326;
else if (*segments[0] >= *segments[3])
	goto ORDER_451326;
else if (*segments[0] >= *segments[4])
	goto ORDER_351426;
else if (*segments[0] >= *segments[2])
	goto ORDER_251436;
else
	goto ORDER_152436;

ORDER_641253:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[4])
	goto ORDER_641253;
else if (*segments[0] >= *segments[1])
	goto ORDER_541263;
else if (*segments[0] >= *segments[5])
	goto ORDER_451263;
else if (*segments[0] >= *segments[3])
	goto ORDER_351264;
else if (*segments[0] >= *segments[2])
	goto ORDER_251364;
else
	goto ORDER_152364;

ORDER_641235:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[5])
	goto ORDER_641235;
else if (*segments[0] >= *segments[1])
	goto ORDER_541236;
else if (*segments[0] >= *segments[4])
	goto ORDER_451236;
else if (*segments[0] >= *segments[3])
	goto ORDER_351246;
else if (*segments[0] >= *segments[2])
	goto ORDER_251346;
else
	goto ORDER_152346;

ORDER_635421:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[2])
	goto ORDER_635421;
else if (*segments[0] >= *segments[3])
	goto ORDER_536421;
else if (*segments[0] >= *segments[1])
	goto ORDER_436521;
else if (*segments[0] >= *segments[4])
	goto ORDER_346521;
else if (*segments[0] >= *segments[5])
	goto ORDER_246531;
else
	goto ORDER_146532;

ORDER_635412:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[2])
	goto ORDER_635412;
else if (*segments[0] >= *segments[3])
	goto ORDER_536412;
else if (*segments[0] >= *segments[1])
	goto ORDER_436512;
else if (*segments[0] >= *segments[5])
	goto ORDER_346512;
else if (*segments[0] >= *segments[4])
	goto ORDER_246513;
else
	goto ORDER_146523;

ORDER_635241:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[2])
	goto ORDER_635241;
else if (*segments[0] >= *segments[4])
	goto ORDER_536241;
else if (*segments[0] >= *segments[1])
	goto ORDER_436251;
else if (*segments[0] >= *segments[3])
	goto ORDER_346251;
else if (*segments[0] >= *segments[5])
	goto ORDER_246351;
else
	goto ORDER_146352;

ORDER_635214:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[2])
	goto ORDER_635214;
else if (*segments[0] >= *segments[5])
	goto ORDER_536214;
else if (*segments[0] >= *segments[1])
	goto ORDER_436215;
else if (*segments[0] >= *segments[3])
	goto ORDER_346215;
else if (*segments[0] >= *segments[4])
	goto ORDER_246315;
else
	goto ORDER_146325;

ORDER_635142:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[2])
	goto ORDER_635142;
else if (*segments[0] >= *segments[4])
	goto ORDER_536142;
else if (*segments[0] >= *segments[1])
	goto ORDER_436152;
else if (*segments[0] >= *segments[5])
	goto ORDER_346152;
else if (*segments[0] >= *segments[3])
	goto ORDER_246153;
else
	goto ORDER_146253;

ORDER_635124:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[2])
	goto ORDER_635124;
else if (*segments[0] >= *segments[5])
	goto ORDER_536124;
else if (*segments[0] >= *segments[1])
	goto ORDER_436125;
else if (*segments[0] >= *segments[4])
	goto ORDER_346125;
else if (*segments[0] >= *segments[3])
	goto ORDER_246135;
else
	goto ORDER_146235;

ORDER_634521:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[3])
	goto ORDER_634521;
else if (*segments[0] >= *segments[2])
	goto ORDER_534621;
else if (*segments[0] >= *segments[1])
	goto ORDER_435621;
else if (*segments[0] >= *segments[4])
	goto ORDER_345621;
else if (*segments[0] >= *segments[5])
	goto ORDER_245631;
else
	goto ORDER_145632;

ORDER_634512:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[3])
	goto ORDER_634512;
else if (*segments[0] >= *segments[2])
	goto ORDER_534612;
else if (*segments[0] >= *segments[1])
	goto ORDER_435612;
else if (*segments[0] >= *segments[5])
	goto ORDER_345612;
else if (*segments[0] >= *segments[4])
	goto ORDER_245613;
else
	goto ORDER_145623;

ORDER_634251:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[4])
	goto ORDER_634251;
else if (*segments[0] >= *segments[2])
	goto ORDER_534261;
else if (*segments[0] >= *segments[1])
	goto ORDER_435261;
else if (*segments[0] >= *segments[3])
	goto ORDER_345261;
else if (*segments[0] >= *segments[5])
	goto ORDER_245361;
else
	goto ORDER_145362;

ORDER_634215:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[5])
	goto ORDER_634215;
else if (*segments[0] >= *segments[2])
	goto ORDER_534216;
else if (*segments[0] >= *segments[1])
	goto ORDER_435216;
else if (*segments[0] >= *segments[3])
	goto ORDER_345216;
else if (*segments[0] >= *segments[4])
	goto ORDER_245316;
else
	goto ORDER_145326;

ORDER_634152:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[4])
	goto ORDER_634152;
else if (*segments[0] >= *segments[2])
	goto ORDER_534162;
else if (*segments[0] >= *segments[1])
	goto ORDER_435162;
else if (*segments[0] >= *segments[5])
	goto ORDER_345162;
else if (*segments[0] >= *segments[3])
	goto ORDER_245163;
else
	goto ORDER_145263;

ORDER_634125:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[5])
	goto ORDER_634125;
else if (*segments[0] >= *segments[2])
	goto ORDER_534126;
else if (*segments[0] >= *segments[1])
	goto ORDER_435126;
else if (*segments[0] >= *segments[4])
	goto ORDER_345126;
else if (*segments[0] >= *segments[3])
	goto ORDER_245136;
else
	goto ORDER_145236;

ORDER_632541:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[3])
	goto ORDER_632541;
else if (*segments[0] >= *segments[4])
	goto ORDER_532641;
else if (*segments[0] >= *segments[1])
	goto ORDER_432651;
else if (*segments[0] >= *segments[2])
	goto ORDER_342651;
else if (*segments[0] >= *segments[5])
	goto ORDER_243651;
else
	goto ORDER_143652;

ORDER_632514:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[3])
	goto ORDER_632514;
else if (*segments[0] >= *segments[5])
	goto ORDER_532614;
else if (*segments[0] >= *segments[1])
	goto ORDER_432615;
else if (*segments[0] >= *segments[2])
	goto ORDER_342615;
else if (*segments[0] >= *segments[4])
	goto ORDER_243615;
else
	goto ORDER_143625;

ORDER_632451:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[4])
	goto ORDER_632451;
else if (*segments[0] >= *segments[3])
	goto ORDER_532461;
else if (*segments[0] >= *segments[1])
	goto ORDER_432561;
else if (*segments[0] >= *segments[2])
	goto ORDER_342561;
else if (*segments[0] >= *segments[5])
	goto ORDER_243561;
else
	goto ORDER_143562;

ORDER_632415:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[5])
	goto ORDER_632415;
else if (*segments[0] >= *segments[3])
	goto ORDER_532416;
else if (*segments[0] >= *segments[1])
	goto ORDER_432516;
else if (*segments[0] >= *segments[2])
	goto ORDER_342516;
else if (*segments[0] >= *segments[4])
	goto ORDER_243516;
else
	goto ORDER_143526;

ORDER_632154:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[4])
	goto ORDER_632154;
else if (*segments[0] >= *segments[5])
	goto ORDER_532164;
else if (*segments[0] >= *segments[1])
	goto ORDER_432165;
else if (*segments[0] >= *segments[2])
	goto ORDER_342165;
else if (*segments[0] >= *segments[3])
	goto ORDER_243165;
else
	goto ORDER_143265;

ORDER_632145:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[5])
	goto ORDER_632145;
else if (*segments[0] >= *segments[4])
	goto ORDER_532146;
else if (*segments[0] >= *segments[1])
	goto ORDER_432156;
else if (*segments[0] >= *segments[2])
	goto ORDER_342156;
else if (*segments[0] >= *segments[3])
	goto ORDER_243156;
else
	goto ORDER_143256;

ORDER_631542:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[3])
	goto ORDER_631542;
else if (*segments[0] >= *segments[4])
	goto ORDER_531642;
else if (*segments[0] >= *segments[1])
	goto ORDER_431652;
else if (*segments[0] >= *segments[5])
	goto ORDER_341652;
else if (*segments[0] >= *segments[2])
	goto ORDER_241653;
else
	goto ORDER_142653;

ORDER_631524:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[3])
	goto ORDER_631524;
else if (*segments[0] >= *segments[5])
	goto ORDER_531624;
else if (*segments[0] >= *segments[1])
	goto ORDER_431625;
else if (*segments[0] >= *segments[4])
	goto ORDER_341625;
else if (*segments[0] >= *segments[2])
	goto ORDER_241635;
else
	goto ORDER_142635;

ORDER_631452:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[4])
	goto ORDER_631452;
else if (*segments[0] >= *segments[3])
	goto ORDER_531462;
else if (*segments[0] >= *segments[1])
	goto ORDER_431562;
else if (*segments[0] >= *segments[5])
	goto ORDER_341562;
else if (*segments[0] >= *segments[2])
	goto ORDER_241563;
else
	goto ORDER_142563;

ORDER_631425:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[5])
	goto ORDER_631425;
else if (*segments[0] >= *segments[3])
	goto ORDER_531426;
else if (*segments[0] >= *segments[1])
	goto ORDER_431526;
else if (*segments[0] >= *segments[4])
	goto ORDER_341526;
else if (*segments[0] >= *segments[2])
	goto ORDER_241536;
else
	goto ORDER_142536;

ORDER_631254:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[4])
	goto ORDER_631254;
else if (*segments[0] >= *segments[5])
	goto ORDER_531264;
else if (*segments[0] >= *segments[1])
	goto ORDER_431265;
else if (*segments[0] >= *segments[3])
	goto ORDER_341265;
else if (*segments[0] >= *segments[2])
	goto ORDER_241365;
else
	goto ORDER_142365;

ORDER_631245:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[5])
	goto ORDER_631245;
else if (*segments[0] >= *segments[4])
	goto ORDER_531246;
else if (*segments[0] >= *segments[1])
	goto ORDER_431256;
else if (*segments[0] >= *segments[3])
	goto ORDER_341256;
else if (*segments[0] >= *segments[2])
	goto ORDER_241356;
else
	goto ORDER_142356;

ORDER_625431:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[2])
	goto ORDER_625431;
else if (*segments[0] >= *segments[3])
	goto ORDER_526431;
else if (*segments[0] >= *segments[4])
	goto ORDER_426531;
else if (*segments[0] >= *segments[1])
	goto ORDER_326541;
else if (*segments[0] >= *segments[5])
	goto ORDER_236541;
else
	goto ORDER_136542;

ORDER_625413:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[2])
	goto ORDER_625413;
else if (*segments[0] >= *segments[3])
	goto ORDER_526413;
else if (*segments[0] >= *segments[5])
	goto ORDER_426513;
else if (*segments[0] >= *segments[1])
	goto ORDER_326514;
else if (*segments[0] >= *segments[4])
	goto ORDER_236514;
else
	goto ORDER_136524;

ORDER_625341:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[2])
	goto ORDER_625341;
else if (*segments[0] >= *segments[4])
	goto ORDER_526341;
else if (*segments[0] >= *segments[3])
	goto ORDER_426351;
else if (*segments[0] >= *segments[1])
	goto ORDER_326451;
else if (*segments[0] >= *segments[5])
	goto ORDER_236451;
else
	goto ORDER_136452;

ORDER_625314:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[2])
	goto ORDER_625314;
else if (*segments[0] >= *segments[5])
	goto ORDER_526314;
else if (*segments[0] >= *segments[3])
	goto ORDER_426315;
else if (*segments[0] >= *segments[1])
	goto ORDER_326415;
else if (*segments[0] >= *segments[4])
	goto ORDER_236415;
else
	goto ORDER_136425;

ORDER_625143:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[2])
	goto ORDER_625143;
else if (*segments[0] >= *segments[4])
	goto ORDER_526143;
else if (*segments[0] >= *segments[5])
	goto ORDER_426153;
else if (*segments[0] >= *segments[1])
	goto ORDER_326154;
else if (*segments[0] >= *segments[3])
	goto ORDER_236154;
else
	goto ORDER_136254;

ORDER_625134:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[2])
	goto ORDER_625134;
else if (*segments[0] >= *segments[5])
	goto ORDER_526134;
else if (*segments[0] >= *segments[4])
	goto ORDER_426135;
else if (*segments[0] >= *segments[1])
	goto ORDER_326145;
else if (*segments[0] >= *segments[3])
	goto ORDER_236145;
else
	goto ORDER_136245;

ORDER_624531:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[3])
	goto ORDER_624531;
else if (*segments[0] >= *segments[2])
	goto ORDER_524631;
else if (*segments[0] >= *segments[4])
	goto ORDER_425631;
else if (*segments[0] >= *segments[1])
	goto ORDER_325641;
else if (*segments[0] >= *segments[5])
	goto ORDER_235641;
else
	goto ORDER_135642;

ORDER_624513:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[3])
	goto ORDER_624513;
else if (*segments[0] >= *segments[2])
	goto ORDER_524613;
else if (*segments[0] >= *segments[5])
	goto ORDER_425613;
else if (*segments[0] >= *segments[1])
	goto ORDER_325614;
else if (*segments[0] >= *segments[4])
	goto ORDER_235614;
else
	goto ORDER_135624;

ORDER_624351:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[4])
	goto ORDER_624351;
else if (*segments[0] >= *segments[2])
	goto ORDER_524361;
else if (*segments[0] >= *segments[3])
	goto ORDER_425361;
else if (*segments[0] >= *segments[1])
	goto ORDER_325461;
else if (*segments[0] >= *segments[5])
	goto ORDER_235461;
else
	goto ORDER_135462;

ORDER_624315:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[5])
	goto ORDER_624315;
else if (*segments[0] >= *segments[2])
	goto ORDER_524316;
else if (*segments[0] >= *segments[3])
	goto ORDER_425316;
else if (*segments[0] >= *segments[1])
	goto ORDER_325416;
else if (*segments[0] >= *segments[4])
	goto ORDER_235416;
else
	goto ORDER_135426;

ORDER_624153:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[4])
	goto ORDER_624153;
else if (*segments[0] >= *segments[2])
	goto ORDER_524163;
else if (*segments[0] >= *segments[5])
	goto ORDER_425163;
else if (*segments[0] >= *segments[1])
	goto ORDER_325164;
else if (*segments[0] >= *segments[3])
	goto ORDER_235164;
else
	goto ORDER_135264;

ORDER_624135:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[5])
	goto ORDER_624135;
else if (*segments[0] >= *segments[2])
	goto ORDER_524136;
else if (*segments[0] >= *segments[4])
	goto ORDER_425136;
else if (*segments[0] >= *segments[1])
	goto ORDER_325146;
else if (*segments[0] >= *segments[3])
	goto ORDER_235146;
else
	goto ORDER_135246;

ORDER_623541:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[3])
	goto ORDER_623541;
else if (*segments[0] >= *segments[4])
	goto ORDER_523641;
else if (*segments[0] >= *segments[2])
	goto ORDER_423651;
else if (*segments[0] >= *segments[1])
	goto ORDER_324651;
else if (*segments[0] >= *segments[5])
	goto ORDER_234651;
else
	goto ORDER_134652;

ORDER_623514:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[3])
	goto ORDER_623514;
else if (*segments[0] >= *segments[5])
	goto ORDER_523614;
else if (*segments[0] >= *segments[2])
	goto ORDER_423615;
else if (*segments[0] >= *segments[1])
	goto ORDER_324615;
else if (*segments[0] >= *segments[4])
	goto ORDER_234615;
else
	goto ORDER_134625;

ORDER_623451:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[4])
	goto ORDER_623451;
else if (*segments[0] >= *segments[3])
	goto ORDER_523461;
else if (*segments[0] >= *segments[2])
	goto ORDER_423561;
else if (*segments[0] >= *segments[1])
	goto ORDER_324561;
else if (*segments[0] >= *segments[5])
	goto ORDER_234561;
else
	goto ORDER_134562;

ORDER_623415:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[5])
	goto ORDER_623415;
else if (*segments[0] >= *segments[3])
	goto ORDER_523416;
else if (*segments[0] >= *segments[2])
	goto ORDER_423516;
else if (*segments[0] >= *segments[1])
	goto ORDER_324516;
else if (*segments[0] >= *segments[4])
	goto ORDER_234516;
else
	goto ORDER_134526;

ORDER_623154:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[4])
	goto ORDER_623154;
else if (*segments[0] >= *segments[5])
	goto ORDER_523164;
else if (*segments[0] >= *segments[2])
	goto ORDER_423165;
else if (*segments[0] >= *segments[1])
	goto ORDER_324165;
else if (*segments[0] >= *segments[3])
	goto ORDER_234165;
else
	goto ORDER_134265;

ORDER_623145:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[5])
	goto ORDER_623145;
else if (*segments[0] >= *segments[4])
	goto ORDER_523146;
else if (*segments[0] >= *segments[2])
	goto ORDER_423156;
else if (*segments[0] >= *segments[1])
	goto ORDER_324156;
else if (*segments[0] >= *segments[3])
	goto ORDER_234156;
else
	goto ORDER_134256;

ORDER_621543:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[3])
	goto ORDER_621543;
else if (*segments[0] >= *segments[4])
	goto ORDER_521643;
else if (*segments[0] >= *segments[5])
	goto ORDER_421653;
else if (*segments[0] >= *segments[1])
	goto ORDER_321654;
else if (*segments[0] >= *segments[2])
	goto ORDER_231654;
else
	goto ORDER_132654;

ORDER_621534:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[3])
	goto ORDER_621534;
else if (*segments[0] >= *segments[5])
	goto ORDER_521634;
else if (*segments[0] >= *segments[4])
	goto ORDER_421635;
else if (*segments[0] >= *segments[1])
	goto ORDER_321645;
else if (*segments[0] >= *segments[2])
	goto ORDER_231645;
else
	goto ORDER_132645;

ORDER_621453:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[4])
	goto ORDER_621453;
else if (*segments[0] >= *segments[3])
	goto ORDER_521463;
else if (*segments[0] >= *segments[5])
	goto ORDER_421563;
else if (*segments[0] >= *segments[1])
	goto ORDER_321564;
else if (*segments[0] >= *segments[2])
	goto ORDER_231564;
else
	goto ORDER_132564;

ORDER_621435:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[5])
	goto ORDER_621435;
else if (*segments[0] >= *segments[3])
	goto ORDER_521436;
else if (*segments[0] >= *segments[4])
	goto ORDER_421536;
else if (*segments[0] >= *segments[1])
	goto ORDER_321546;
else if (*segments[0] >= *segments[2])
	goto ORDER_231546;
else
	goto ORDER_132546;

ORDER_621354:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[4])
	goto ORDER_621354;
else if (*segments[0] >= *segments[5])
	goto ORDER_521364;
else if (*segments[0] >= *segments[3])
	goto ORDER_421365;
else if (*segments[0] >= *segments[1])
	goto ORDER_321465;
else if (*segments[0] >= *segments[2])
	goto ORDER_231465;
else
	goto ORDER_132465;

ORDER_621345:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[5])
	goto ORDER_621345;
else if (*segments[0] >= *segments[4])
	goto ORDER_521346;
else if (*segments[0] >= *segments[3])
	goto ORDER_421356;
else if (*segments[0] >= *segments[1])
	goto ORDER_321456;
else if (*segments[0] >= *segments[2])
	goto ORDER_231456;
else
	goto ORDER_132456;

ORDER_615432:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[2])
	goto ORDER_615432;
else if (*segments[0] >= *segments[3])
	goto ORDER_516432;
else if (*segments[0] >= *segments[4])
	goto ORDER_416532;
else if (*segments[0] >= *segments[5])
	goto ORDER_316542;
else if (*segments[0] >= *segments[1])
	goto ORDER_216543;
else
	goto ORDER_126543;

ORDER_615423:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[2])
	goto ORDER_615423;
else if (*segments[0] >= *segments[3])
	goto ORDER_516423;
else if (*segments[0] >= *segments[5])
	goto ORDER_416523;
else if (*segments[0] >= *segments[4])
	goto ORDER_316524;
else if (*segments[0] >= *segments[1])
	goto ORDER_216534;
else
	goto ORDER_126534;

ORDER_615342:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[2])
	goto ORDER_615342;
else if (*segments[0] >= *segments[4])
	goto ORDER_516342;
else if (*segments[0] >= *segments[3])
	goto ORDER_416352;
else if (*segments[0] >= *segments[5])
	goto ORDER_316452;
else if (*segments[0] >= *segments[1])
	goto ORDER_216453;
else
	goto ORDER_126453;

ORDER_615324:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[2])
	goto ORDER_615324;
else if (*segments[0] >= *segments[5])
	goto ORDER_516324;
else if (*segments[0] >= *segments[3])
	goto ORDER_416325;
else if (*segments[0] >= *segments[4])
	goto ORDER_316425;
else if (*segments[0] >= *segments[1])
	goto ORDER_216435;
else
	goto ORDER_126435;

ORDER_615243:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[2])
	goto ORDER_615243;
else if (*segments[0] >= *segments[4])
	goto ORDER_516243;
else if (*segments[0] >= *segments[5])
	goto ORDER_416253;
else if (*segments[0] >= *segments[3])
	goto ORDER_316254;
else if (*segments[0] >= *segments[1])
	goto ORDER_216354;
else
	goto ORDER_126354;

ORDER_615234:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[2])
	goto ORDER_615234;
else if (*segments[0] >= *segments[5])
	goto ORDER_516234;
else if (*segments[0] >= *segments[4])
	goto ORDER_416235;
else if (*segments[0] >= *segments[3])
	goto ORDER_316245;
else if (*segments[0] >= *segments[1])
	goto ORDER_216345;
else
	goto ORDER_126345;

ORDER_614532:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[3])
	goto ORDER_614532;
else if (*segments[0] >= *segments[2])
	goto ORDER_514632;
else if (*segments[0] >= *segments[4])
	goto ORDER_415632;
else if (*segments[0] >= *segments[5])
	goto ORDER_315642;
else if (*segments[0] >= *segments[1])
	goto ORDER_215643;
else
	goto ORDER_125643;

ORDER_614523:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[3])
	goto ORDER_614523;
else if (*segments[0] >= *segments[2])
	goto ORDER_514623;
else if (*segments[0] >= *segments[5])
	goto ORDER_415623;
else if (*segments[0] >= *segments[4])
	goto ORDER_315624;
else if (*segments[0] >= *segments[1])
	goto ORDER_215634;
else
	goto ORDER_125634;

ORDER_614352:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[4])
	goto ORDER_614352;
else if (*segments[0] >= *segments[2])
	goto ORDER_514362;
else if (*segments[0] >= *segments[3])
	goto ORDER_415362;
else if (*segments[0] >= *segments[5])
	goto ORDER_315462;
else if (*segments[0] >= *segments[1])
	goto ORDER_215463;
else
	goto ORDER_125463;

ORDER_614325:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[5])
	goto ORDER_614325;
else if (*segments[0] >= *segments[2])
	goto ORDER_514326;
else if (*segments[0] >= *segments[3])
	goto ORDER_415326;
else if (*segments[0] >= *segments[4])
	goto ORDER_315426;
else if (*segments[0] >= *segments[1])
	goto ORDER_215436;
else
	goto ORDER_125436;

ORDER_614253:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[4])
	goto ORDER_614253;
else if (*segments[0] >= *segments[2])
	goto ORDER_514263;
else if (*segments[0] >= *segments[5])
	goto ORDER_415263;
else if (*segments[0] >= *segments[3])
	goto ORDER_315264;
else if (*segments[0] >= *segments[1])
	goto ORDER_215364;
else
	goto ORDER_125364;

ORDER_614235:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[5])
	goto ORDER_614235;
else if (*segments[0] >= *segments[2])
	goto ORDER_514236;
else if (*segments[0] >= *segments[4])
	goto ORDER_415236;
else if (*segments[0] >= *segments[3])
	goto ORDER_315246;
else if (*segments[0] >= *segments[1])
	goto ORDER_215346;
else
	goto ORDER_125346;

ORDER_613542:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[3])
	goto ORDER_613542;
else if (*segments[0] >= *segments[4])
	goto ORDER_513642;
else if (*segments[0] >= *segments[2])
	goto ORDER_413652;
else if (*segments[0] >= *segments[5])
	goto ORDER_314652;
else if (*segments[0] >= *segments[1])
	goto ORDER_214653;
else
	goto ORDER_124653;

ORDER_613524:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[3])
	goto ORDER_613524;
else if (*segments[0] >= *segments[5])
	goto ORDER_513624;
else if (*segments[0] >= *segments[2])
	goto ORDER_413625;
else if (*segments[0] >= *segments[4])
	goto ORDER_314625;
else if (*segments[0] >= *segments[1])
	goto ORDER_214635;
else
	goto ORDER_124635;

ORDER_613452:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[4])
	goto ORDER_613452;
else if (*segments[0] >= *segments[3])
	goto ORDER_513462;
else if (*segments[0] >= *segments[2])
	goto ORDER_413562;
else if (*segments[0] >= *segments[5])
	goto ORDER_314562;
else if (*segments[0] >= *segments[1])
	goto ORDER_214563;
else
	goto ORDER_124563;

ORDER_613425:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[5])
	goto ORDER_613425;
else if (*segments[0] >= *segments[3])
	goto ORDER_513426;
else if (*segments[0] >= *segments[2])
	goto ORDER_413526;
else if (*segments[0] >= *segments[4])
	goto ORDER_314526;
else if (*segments[0] >= *segments[1])
	goto ORDER_214536;
else
	goto ORDER_124536;

ORDER_613254:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[4])
	goto ORDER_613254;
else if (*segments[0] >= *segments[5])
	goto ORDER_513264;
else if (*segments[0] >= *segments[2])
	goto ORDER_413265;
else if (*segments[0] >= *segments[3])
	goto ORDER_314265;
else if (*segments[0] >= *segments[1])
	goto ORDER_214365;
else
	goto ORDER_124365;

ORDER_613245:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[5])
	goto ORDER_613245;
else if (*segments[0] >= *segments[4])
	goto ORDER_513246;
else if (*segments[0] >= *segments[2])
	goto ORDER_413256;
else if (*segments[0] >= *segments[3])
	goto ORDER_314256;
else if (*segments[0] >= *segments[1])
	goto ORDER_214356;
else
	goto ORDER_124356;

ORDER_612543:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[3])
	goto ORDER_612543;
else if (*segments[0] >= *segments[4])
	goto ORDER_512643;
else if (*segments[0] >= *segments[5])
	goto ORDER_412653;
else if (*segments[0] >= *segments[2])
	goto ORDER_312654;
else if (*segments[0] >= *segments[1])
	goto ORDER_213654;
else
	goto ORDER_123654;

ORDER_612534:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[3])
	goto ORDER_612534;
else if (*segments[0] >= *segments[5])
	goto ORDER_512634;
else if (*segments[0] >= *segments[4])
	goto ORDER_412635;
else if (*segments[0] >= *segments[2])
	goto ORDER_312645;
else if (*segments[0] >= *segments[1])
	goto ORDER_213645;
else
	goto ORDER_123645;

ORDER_612453:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[4])
	goto ORDER_612453;
else if (*segments[0] >= *segments[3])
	goto ORDER_512463;
else if (*segments[0] >= *segments[5])
	goto ORDER_412563;
else if (*segments[0] >= *segments[2])
	goto ORDER_312564;
else if (*segments[0] >= *segments[1])
	goto ORDER_213564;
else
	goto ORDER_123564;

ORDER_612435:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[5])
	goto ORDER_612435;
else if (*segments[0] >= *segments[3])
	goto ORDER_512436;
else if (*segments[0] >= *segments[4])
	goto ORDER_412536;
else if (*segments[0] >= *segments[2])
	goto ORDER_312546;
else if (*segments[0] >= *segments[1])
	goto ORDER_213546;
else
	goto ORDER_123546;

ORDER_612354:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[4])
	goto ORDER_612354;
else if (*segments[0] >= *segments[5])
	goto ORDER_512364;
else if (*segments[0] >= *segments[3])
	goto ORDER_412365;
else if (*segments[0] >= *segments[2])
	goto ORDER_312465;
else if (*segments[0] >= *segments[1])
	goto ORDER_213465;
else
	goto ORDER_123465;

ORDER_612345:
if (*segments[0] == 0)
	goto DONE;
t->results[pos++] = *segments[0]++;
if (*segments[0] >= *segments[5])
	goto ORDER_612345;
else if (*segments[0] >= *segments[4])
	goto ORDER_512346;
else if (*segments[0] >= *segments[3])
	goto ORDER_412356;
else if (*segments[0] >= *segments[2])
	goto ORDER_312456;
else if (*segments[0] >= *segments[1])
	goto ORDER_213456;
else
	goto ORDER_123456;

ORDER_564321:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[0])
	goto ORDER_564321;
else if (*segments[1] >= *segments[2])
	goto ORDER_654321;
else if (*segments[1] >= *segments[3])
	goto ORDER_645321;
else if (*segments[1] >= *segments[4])
	goto ORDER_635421;
else if (*segments[1] >= *segments[5])
	goto ORDER_625431;
else
	goto ORDER_615432;

ORDER_564312:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[0])
	goto ORDER_564312;
else if (*segments[1] >= *segments[2])
	goto ORDER_654312;
else if (*segments[1] >= *segments[3])
	goto ORDER_645312;
else if (*segments[1] >= *segments[5])
	goto ORDER_635412;
else if (*segments[1] >= *segments[4])
	goto ORDER_625413;
else
	goto ORDER_615423;

ORDER_564231:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[0])
	goto ORDER_564231;
else if (*segments[1] >= *segments[2])
	goto ORDER_654231;
else if (*segments[1] >= *segments[4])
	goto ORDER_645231;
else if (*segments[1] >= *segments[3])
	goto ORDER_635241;
else if (*segments[1] >= *segments[5])
	goto ORDER_625341;
else
	goto ORDER_615342;

ORDER_564213:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[0])
	goto ORDER_564213;
else if (*segments[1] >= *segments[2])
	goto ORDER_654213;
else if (*segments[1] >= *segments[5])
	goto ORDER_645213;
else if (*segments[1] >= *segments[3])
	goto ORDER_635214;
else if (*segments[1] >= *segments[4])
	goto ORDER_625314;
else
	goto ORDER_615324;

ORDER_564132:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[0])
	goto ORDER_564132;
else if (*segments[1] >= *segments[2])
	goto ORDER_654132;
else if (*segments[1] >= *segments[4])
	goto ORDER_645132;
else if (*segments[1] >= *segments[5])
	goto ORDER_635142;
else if (*segments[1] >= *segments[3])
	goto ORDER_625143;
else
	goto ORDER_615243;

ORDER_564123:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[0])
	goto ORDER_564123;
else if (*segments[1] >= *segments[2])
	goto ORDER_654123;
else if (*segments[1] >= *segments[5])
	goto ORDER_645123;
else if (*segments[1] >= *segments[4])
	goto ORDER_635124;
else if (*segments[1] >= *segments[3])
	goto ORDER_625134;
else
	goto ORDER_615234;

ORDER_563421:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[0])
	goto ORDER_563421;
else if (*segments[1] >= *segments[3])
	goto ORDER_653421;
else if (*segments[1] >= *segments[2])
	goto ORDER_643521;
else if (*segments[1] >= *segments[4])
	goto ORDER_634521;
else if (*segments[1] >= *segments[5])
	goto ORDER_624531;
else
	goto ORDER_614532;

ORDER_563412:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[0])
	goto ORDER_563412;
else if (*segments[1] >= *segments[3])
	goto ORDER_653412;
else if (*segments[1] >= *segments[2])
	goto ORDER_643512;
else if (*segments[1] >= *segments[5])
	goto ORDER_634512;
else if (*segments[1] >= *segments[4])
	goto ORDER_624513;
else
	goto ORDER_614523;

ORDER_563241:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[0])
	goto ORDER_563241;
else if (*segments[1] >= *segments[4])
	goto ORDER_653241;
else if (*segments[1] >= *segments[2])
	goto ORDER_643251;
else if (*segments[1] >= *segments[3])
	goto ORDER_634251;
else if (*segments[1] >= *segments[5])
	goto ORDER_624351;
else
	goto ORDER_614352;

ORDER_563214:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[0])
	goto ORDER_563214;
else if (*segments[1] >= *segments[5])
	goto ORDER_653214;
else if (*segments[1] >= *segments[2])
	goto ORDER_643215;
else if (*segments[1] >= *segments[3])
	goto ORDER_634215;
else if (*segments[1] >= *segments[4])
	goto ORDER_624315;
else
	goto ORDER_614325;

ORDER_563142:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[0])
	goto ORDER_563142;
else if (*segments[1] >= *segments[4])
	goto ORDER_653142;
else if (*segments[1] >= *segments[2])
	goto ORDER_643152;
else if (*segments[1] >= *segments[5])
	goto ORDER_634152;
else if (*segments[1] >= *segments[3])
	goto ORDER_624153;
else
	goto ORDER_614253;

ORDER_563124:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[0])
	goto ORDER_563124;
else if (*segments[1] >= *segments[5])
	goto ORDER_653124;
else if (*segments[1] >= *segments[2])
	goto ORDER_643125;
else if (*segments[1] >= *segments[4])
	goto ORDER_634125;
else if (*segments[1] >= *segments[3])
	goto ORDER_624135;
else
	goto ORDER_614235;

ORDER_562431:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[0])
	goto ORDER_562431;
else if (*segments[1] >= *segments[3])
	goto ORDER_652431;
else if (*segments[1] >= *segments[4])
	goto ORDER_642531;
else if (*segments[1] >= *segments[2])
	goto ORDER_632541;
else if (*segments[1] >= *segments[5])
	goto ORDER_623541;
else
	goto ORDER_613542;

ORDER_562413:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[0])
	goto ORDER_562413;
else if (*segments[1] >= *segments[3])
	goto ORDER_652413;
else if (*segments[1] >= *segments[5])
	goto ORDER_642513;
else if (*segments[1] >= *segments[2])
	goto ORDER_632514;
else if (*segments[1] >= *segments[4])
	goto ORDER_623514;
else
	goto ORDER_613524;

ORDER_562341:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[0])
	goto ORDER_562341;
else if (*segments[1] >= *segments[4])
	goto ORDER_652341;
else if (*segments[1] >= *segments[3])
	goto ORDER_642351;
else if (*segments[1] >= *segments[2])
	goto ORDER_632451;
else if (*segments[1] >= *segments[5])
	goto ORDER_623451;
else
	goto ORDER_613452;

ORDER_562314:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[0])
	goto ORDER_562314;
else if (*segments[1] >= *segments[5])
	goto ORDER_652314;
else if (*segments[1] >= *segments[3])
	goto ORDER_642315;
else if (*segments[1] >= *segments[2])
	goto ORDER_632415;
else if (*segments[1] >= *segments[4])
	goto ORDER_623415;
else
	goto ORDER_613425;

ORDER_562143:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[0])
	goto ORDER_562143;
else if (*segments[1] >= *segments[4])
	goto ORDER_652143;
else if (*segments[1] >= *segments[5])
	goto ORDER_642153;
else if (*segments[1] >= *segments[2])
	goto ORDER_632154;
else if (*segments[1] >= *segments[3])
	goto ORDER_623154;
else
	goto ORDER_613254;

ORDER_562134:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[0])
	goto ORDER_562134;
else if (*segments[1] >= *segments[5])
	goto ORDER_652134;
else if (*segments[1] >= *segments[4])
	goto ORDER_642135;
else if (*segments[1] >= *segments[2])
	goto ORDER_632145;
else if (*segments[1] >= *segments[3])
	goto ORDER_623145;
else
	goto ORDER_613245;

ORDER_561432:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[0])
	goto ORDER_561432;
else if (*segments[1] >= *segments[3])
	goto ORDER_651432;
else if (*segments[1] >= *segments[4])
	goto ORDER_641532;
else if (*segments[1] >= *segments[5])
	goto ORDER_631542;
else if (*segments[1] >= *segments[2])
	goto ORDER_621543;
else
	goto ORDER_612543;

ORDER_561423:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[0])
	goto ORDER_561423;
else if (*segments[1] >= *segments[3])
	goto ORDER_651423;
else if (*segments[1] >= *segments[5])
	goto ORDER_641523;
else if (*segments[1] >= *segments[4])
	goto ORDER_631524;
else if (*segments[1] >= *segments[2])
	goto ORDER_621534;
else
	goto ORDER_612534;

ORDER_561342:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[0])
	goto ORDER_561342;
else if (*segments[1] >= *segments[4])
	goto ORDER_651342;
else if (*segments[1] >= *segments[3])
	goto ORDER_641352;
else if (*segments[1] >= *segments[5])
	goto ORDER_631452;
else if (*segments[1] >= *segments[2])
	goto ORDER_621453;
else
	goto ORDER_612453;

ORDER_561324:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[0])
	goto ORDER_561324;
else if (*segments[1] >= *segments[5])
	goto ORDER_651324;
else if (*segments[1] >= *segments[3])
	goto ORDER_641325;
else if (*segments[1] >= *segments[4])
	goto ORDER_631425;
else if (*segments[1] >= *segments[2])
	goto ORDER_621435;
else
	goto ORDER_612435;

ORDER_561243:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[0])
	goto ORDER_561243;
else if (*segments[1] >= *segments[4])
	goto ORDER_651243;
else if (*segments[1] >= *segments[5])
	goto ORDER_641253;
else if (*segments[1] >= *segments[3])
	goto ORDER_631254;
else if (*segments[1] >= *segments[2])
	goto ORDER_621354;
else
	goto ORDER_612354;

ORDER_561234:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[0])
	goto ORDER_561234;
else if (*segments[1] >= *segments[5])
	goto ORDER_651234;
else if (*segments[1] >= *segments[4])
	goto ORDER_641235;
else if (*segments[1] >= *segments[3])
	goto ORDER_631245;
else if (*segments[1] >= *segments[2])
	goto ORDER_621345;
else
	goto ORDER_612345;

ORDER_546321:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[0])
	goto ORDER_546321;
else if (*segments[2] >= *segments[1])
	goto ORDER_645321;
else if (*segments[2] >= *segments[3])
	goto ORDER_654321;
else if (*segments[2] >= *segments[4])
	goto ORDER_653421;
else if (*segments[2] >= *segments[5])
	goto ORDER_652431;
else
	goto ORDER_651432;

ORDER_546312:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[0])
	goto ORDER_546312;
else if (*segments[2] >= *segments[1])
	goto ORDER_645312;
else if (*segments[2] >= *segments[3])
	goto ORDER_654312;
else if (*segments[2] >= *segments[5])
	goto ORDER_653412;
else if (*segments[2] >= *segments[4])
	goto ORDER_652413;
else
	goto ORDER_651423;

ORDER_546231:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[0])
	goto ORDER_546231;
else if (*segments[2] >= *segments[1])
	goto ORDER_645231;
else if (*segments[2] >= *segments[4])
	goto ORDER_654231;
else if (*segments[2] >= *segments[3])
	goto ORDER_653241;
else if (*segments[2] >= *segments[5])
	goto ORDER_652341;
else
	goto ORDER_651342;

ORDER_546213:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[0])
	goto ORDER_546213;
else if (*segments[2] >= *segments[1])
	goto ORDER_645213;
else if (*segments[2] >= *segments[5])
	goto ORDER_654213;
else if (*segments[2] >= *segments[3])
	goto ORDER_653214;
else if (*segments[2] >= *segments[4])
	goto ORDER_652314;
else
	goto ORDER_651324;

ORDER_546132:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[0])
	goto ORDER_546132;
else if (*segments[2] >= *segments[1])
	goto ORDER_645132;
else if (*segments[2] >= *segments[4])
	goto ORDER_654132;
else if (*segments[2] >= *segments[5])
	goto ORDER_653142;
else if (*segments[2] >= *segments[3])
	goto ORDER_652143;
else
	goto ORDER_651243;

ORDER_546123:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[0])
	goto ORDER_546123;
else if (*segments[2] >= *segments[1])
	goto ORDER_645123;
else if (*segments[2] >= *segments[5])
	goto ORDER_654123;
else if (*segments[2] >= *segments[4])
	goto ORDER_653124;
else if (*segments[2] >= *segments[3])
	goto ORDER_652134;
else
	goto ORDER_651234;

ORDER_543621:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[0])
	goto ORDER_543621;
else if (*segments[3] >= *segments[1])
	goto ORDER_643521;
else if (*segments[3] >= *segments[2])
	goto ORDER_653421;
else if (*segments[3] >= *segments[4])
	goto ORDER_654321;
else if (*segments[3] >= *segments[5])
	goto ORDER_654231;
else
	goto ORDER_654132;

ORDER_543612:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[0])
	goto ORDER_543612;
else if (*segments[3] >= *segments[1])
	goto ORDER_643512;
else if (*segments[3] >= *segments[2])
	goto ORDER_653412;
else if (*segments[3] >= *segments[5])
	goto ORDER_654312;
else if (*segments[3] >= *segments[4])
	goto ORDER_654213;
else
	goto ORDER_654123;

ORDER_543261:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[0])
	goto ORDER_543261;
else if (*segments[4] >= *segments[1])
	goto ORDER_643251;
else if (*segments[4] >= *segments[2])
	goto ORDER_653241;
else if (*segments[4] >= *segments[3])
	goto ORDER_654231;
else if (*segments[4] >= *segments[5])
	goto ORDER_654321;
else
	goto ORDER_654312;

ORDER_543216:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[0])
	goto ORDER_543216;
else if (*segments[5] >= *segments[1])
	goto ORDER_643215;
else if (*segments[5] >= *segments[2])
	goto ORDER_653214;
else if (*segments[5] >= *segments[3])
	goto ORDER_654213;
else if (*segments[5] >= *segments[4])
	goto ORDER_654312;
else
	goto ORDER_654321;

ORDER_543162:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[0])
	goto ORDER_543162;
else if (*segments[4] >= *segments[1])
	goto ORDER_643152;
else if (*segments[4] >= *segments[2])
	goto ORDER_653142;
else if (*segments[4] >= *segments[5])
	goto ORDER_654132;
else if (*segments[4] >= *segments[3])
	goto ORDER_654123;
else
	goto ORDER_654213;

ORDER_543126:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[0])
	goto ORDER_543126;
else if (*segments[5] >= *segments[1])
	goto ORDER_643125;
else if (*segments[5] >= *segments[2])
	goto ORDER_653124;
else if (*segments[5] >= *segments[4])
	goto ORDER_654123;
else if (*segments[5] >= *segments[3])
	goto ORDER_654132;
else
	goto ORDER_654231;

ORDER_542631:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[0])
	goto ORDER_542631;
else if (*segments[3] >= *segments[1])
	goto ORDER_642531;
else if (*segments[3] >= *segments[4])
	goto ORDER_652431;
else if (*segments[3] >= *segments[2])
	goto ORDER_652341;
else if (*segments[3] >= *segments[5])
	goto ORDER_653241;
else
	goto ORDER_653142;

ORDER_542613:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[0])
	goto ORDER_542613;
else if (*segments[3] >= *segments[1])
	goto ORDER_642513;
else if (*segments[3] >= *segments[5])
	goto ORDER_652413;
else if (*segments[3] >= *segments[2])
	goto ORDER_652314;
else if (*segments[3] >= *segments[4])
	goto ORDER_653214;
else
	goto ORDER_653124;

ORDER_542361:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[0])
	goto ORDER_542361;
else if (*segments[4] >= *segments[1])
	goto ORDER_642351;
else if (*segments[4] >= *segments[3])
	goto ORDER_652341;
else if (*segments[4] >= *segments[2])
	goto ORDER_652431;
else if (*segments[4] >= *segments[5])
	goto ORDER_653421;
else
	goto ORDER_653412;

ORDER_542316:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[0])
	goto ORDER_542316;
else if (*segments[5] >= *segments[1])
	goto ORDER_642315;
else if (*segments[5] >= *segments[3])
	goto ORDER_652314;
else if (*segments[5] >= *segments[2])
	goto ORDER_652413;
else if (*segments[5] >= *segments[4])
	goto ORDER_653412;
else
	goto ORDER_653421;

ORDER_542163:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[0])
	goto ORDER_542163;
else if (*segments[4] >= *segments[1])
	goto ORDER_642153;
else if (*segments[4] >= *segments[5])
	goto ORDER_652143;
else if (*segments[4] >= *segments[2])
	goto ORDER_652134;
else if (*segments[4] >= *segments[3])
	goto ORDER_653124;
else
	goto ORDER_653214;

ORDER_542136:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[0])
	goto ORDER_542136;
else if (*segments[5] >= *segments[1])
	goto ORDER_642135;
else if (*segments[5] >= *segments[4])
	goto ORDER_652134;
else if (*segments[5] >= *segments[2])
	goto ORDER_652143;
else if (*segments[5] >= *segments[3])
	goto ORDER_653142;
else
	goto ORDER_653241;

ORDER_541632:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[0])
	goto ORDER_541632;
else if (*segments[3] >= *segments[1])
	goto ORDER_641532;
else if (*segments[3] >= *segments[4])
	goto ORDER_651432;
else if (*segments[3] >= *segments[5])
	goto ORDER_651342;
else if (*segments[3] >= *segments[2])
	goto ORDER_651243;
else
	goto ORDER_652143;

ORDER_541623:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[0])
	goto ORDER_541623;
else if (*segments[3] >= *segments[1])
	goto ORDER_641523;
else if (*segments[3] >= *segments[5])
	goto ORDER_651423;
else if (*segments[3] >= *segments[4])
	goto ORDER_651324;
else if (*segments[3] >= *segments[2])
	goto ORDER_651234;
else
	goto ORDER_652134;

ORDER_541362:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[0])
	goto ORDER_541362;
else if (*segments[4] >= *segments[1])
	goto ORDER_641352;
else if (*segments[4] >= *segments[3])
	goto ORDER_651342;
else if (*segments[4] >= *segments[5])
	goto ORDER_651432;
else if (*segments[4] >= *segments[2])
	goto ORDER_651423;
else
	goto ORDER_652413;

ORDER_541326:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[0])
	goto ORDER_541326;
else if (*segments[5] >= *segments[1])
	goto ORDER_641325;
else if (*segments[5] >= *segments[3])
	goto ORDER_651324;
else if (*segments[5] >= *segments[4])
	goto ORDER_651423;
else if (*segments[5] >= *segments[2])
	goto ORDER_651432;
else
	goto ORDER_652431;

ORDER_541263:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[0])
	goto ORDER_541263;
else if (*segments[4] >= *segments[1])
	goto ORDER_641253;
else if (*segments[4] >= *segments[5])
	goto ORDER_651243;
else if (*segments[4] >= *segments[3])
	goto ORDER_651234;
else if (*segments[4] >= *segments[2])
	goto ORDER_651324;
else
	goto ORDER_652314;

ORDER_541236:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[0])
	goto ORDER_541236;
else if (*segments[5] >= *segments[1])
	goto ORDER_641235;
else if (*segments[5] >= *segments[4])
	goto ORDER_651234;
else if (*segments[5] >= *segments[3])
	goto ORDER_651243;
else if (*segments[5] >= *segments[2])
	goto ORDER_651342;
else
	goto ORDER_652341;

ORDER_536421:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[0])
	goto ORDER_536421;
else if (*segments[2] >= *segments[3])
	goto ORDER_635421;
else if (*segments[2] >= *segments[1])
	goto ORDER_634521;
else if (*segments[2] >= *segments[4])
	goto ORDER_643521;
else if (*segments[2] >= *segments[5])
	goto ORDER_642531;
else
	goto ORDER_641532;

ORDER_536412:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[0])
	goto ORDER_536412;
else if (*segments[2] >= *segments[3])
	goto ORDER_635412;
else if (*segments[2] >= *segments[1])
	goto ORDER_634512;
else if (*segments[2] >= *segments[5])
	goto ORDER_643512;
else if (*segments[2] >= *segments[4])
	goto ORDER_642513;
else
	goto ORDER_641523;

ORDER_536241:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[0])
	goto ORDER_536241;
else if (*segments[2] >= *segments[4])
	goto ORDER_635241;
else if (*segments[2] >= *segments[1])
	goto ORDER_634251;
else if (*segments[2] >= *segments[3])
	goto ORDER_643251;
else if (*segments[2] >= *segments[5])
	goto ORDER_642351;
else
	goto ORDER_641352;

ORDER_536214:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[0])
	goto ORDER_536214;
else if (*segments[2] >= *segments[5])
	goto ORDER_635214;
else if (*segments[2] >= *segments[1])
	goto ORDER_634215;
else if (*segments[2] >= *segments[3])
	goto ORDER_643215;
else if (*segments[2] >= *segments[4])
	goto ORDER_642315;
else
	goto ORDER_641325;

ORDER_536142:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[0])
	goto ORDER_536142;
else if (*segments[2] >= *segments[4])
	goto ORDER_635142;
else if (*segments[2] >= *segments[1])
	goto ORDER_634152;
else if (*segments[2] >= *segments[5])
	goto ORDER_643152;
else if (*segments[2] >= *segments[3])
	goto ORDER_642153;
else
	goto ORDER_641253;

ORDER_536124:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[0])
	goto ORDER_536124;
else if (*segments[2] >= *segments[5])
	goto ORDER_635124;
else if (*segments[2] >= *segments[1])
	goto ORDER_634125;
else if (*segments[2] >= *segments[4])
	goto ORDER_643125;
else if (*segments[2] >= *segments[3])
	goto ORDER_642135;
else
	goto ORDER_641235;

ORDER_534621:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[0])
	goto ORDER_534621;
else if (*segments[3] >= *segments[2])
	goto ORDER_634521;
else if (*segments[3] >= *segments[1])
	goto ORDER_635421;
else if (*segments[3] >= *segments[4])
	goto ORDER_645321;
else if (*segments[3] >= *segments[5])
	goto ORDER_645231;
else
	goto ORDER_645132;

ORDER_534612:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[0])
	goto ORDER_534612;
else if (*segments[3] >= *segments[2])
	goto ORDER_634512;
else if (*segments[3] >= *segments[1])
	goto ORDER_635412;
else if (*segments[3] >= *segments[5])
	goto ORDER_645312;
else if (*segments[3] >= *segments[4])
	goto ORDER_645213;
else
	goto ORDER_645123;

ORDER_534261:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[0])
	goto ORDER_534261;
else if (*segments[4] >= *segments[2])
	goto ORDER_634251;
else if (*segments[4] >= *segments[1])
	goto ORDER_635241;
else if (*segments[4] >= *segments[3])
	goto ORDER_645231;
else if (*segments[4] >= *segments[5])
	goto ORDER_645321;
else
	goto ORDER_645312;

ORDER_534216:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[0])
	goto ORDER_534216;
else if (*segments[5] >= *segments[2])
	goto ORDER_634215;
else if (*segments[5] >= *segments[1])
	goto ORDER_635214;
else if (*segments[5] >= *segments[3])
	goto ORDER_645213;
else if (*segments[5] >= *segments[4])
	goto ORDER_645312;
else
	goto ORDER_645321;

ORDER_534162:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[0])
	goto ORDER_534162;
else if (*segments[4] >= *segments[2])
	goto ORDER_634152;
else if (*segments[4] >= *segments[1])
	goto ORDER_635142;
else if (*segments[4] >= *segments[5])
	goto ORDER_645132;
else if (*segments[4] >= *segments[3])
	goto ORDER_645123;
else
	goto ORDER_645213;

ORDER_534126:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[0])
	goto ORDER_534126;
else if (*segments[5] >= *segments[2])
	goto ORDER_634125;
else if (*segments[5] >= *segments[1])
	goto ORDER_635124;
else if (*segments[5] >= *segments[4])
	goto ORDER_645123;
else if (*segments[5] >= *segments[3])
	goto ORDER_645132;
else
	goto ORDER_645231;

ORDER_532641:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[0])
	goto ORDER_532641;
else if (*segments[3] >= *segments[4])
	goto ORDER_632541;
else if (*segments[3] >= *segments[1])
	goto ORDER_632451;
else if (*segments[3] >= *segments[2])
	goto ORDER_642351;
else if (*segments[3] >= *segments[5])
	goto ORDER_643251;
else
	goto ORDER_643152;

ORDER_532614:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[0])
	goto ORDER_532614;
else if (*segments[3] >= *segments[5])
	goto ORDER_632514;
else if (*segments[3] >= *segments[1])
	goto ORDER_632415;
else if (*segments[3] >= *segments[2])
	goto ORDER_642315;
else if (*segments[3] >= *segments[4])
	goto ORDER_643215;
else
	goto ORDER_643125;

ORDER_532461:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[0])
	goto ORDER_532461;
else if (*segments[4] >= *segments[3])
	goto ORDER_632451;
else if (*segments[4] >= *segments[1])
	goto ORDER_632541;
else if (*segments[4] >= *segments[2])
	goto ORDER_642531;
else if (*segments[4] >= *segments[5])
	goto ORDER_643521;
else
	goto ORDER_643512;

ORDER_532416:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[0])
	goto ORDER_532416;
else if (*segments[5] >= *segments[3])
	goto ORDER_632415;
else if (*segments[5] >= *segments[1])
	goto ORDER_632514;
else if (*segments[5] >= *segments[2])
	goto ORDER_642513;
else if (*segments[5] >= *segments[4])
	goto ORDER_643512;
else
	goto ORDER_643521;

ORDER_532164:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[0])
	goto ORDER_532164;
else if (*segments[4] >= *segments[5])
	goto ORDER_632154;
else if (*segments[4] >= *segments[1])
	goto ORDER_632145;
else if (*segments[4] >= *segments[2])
	goto ORDER_642135;
else if (*segments[4] >= *segments[3])
	goto ORDER_643125;
else
	goto ORDER_643215;

ORDER_532146:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[0])
	goto ORDER_532146;
else if (*segments[5] >= *segments[4])
	goto ORDER_632145;
else if (*segments[5] >= *segments[1])
	goto ORDER_632154;
else if (*segments[5] >= *segments[2])
	goto ORDER_642153;
else if (*segments[5] >= *segments[3])
	goto ORDER_643152;
else
	goto ORDER_643251;

ORDER_531642:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[0])
	goto ORDER_531642;
else if (*segments[3] >= *segments[4])
	goto ORDER_631542;
else if (*segments[3] >= *segments[1])
	goto ORDER_631452;
else if (*segments[3] >= *segments[5])
	goto ORDER_641352;
else if (*segments[3] >= *segments[2])
	goto ORDER_641253;
else
	goto ORDER_642153;

ORDER_531624:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[0])
	goto ORDER_531624;
else if (*segments[3] >= *segments[5])
	goto ORDER_631524;
else if (*segments[3] >= *segments[1])
	goto ORDER_631425;
else if (*segments[3] >= *segments[4])
	goto ORDER_641325;
else if (*segments[3] >= *segments[2])
	goto ORDER_641235;
else
	goto ORDER_642135;

ORDER_531462:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[0])
	goto ORDER_531462;
else if (*segments[4] >= *segments[3])
	goto ORDER_631452;
else if (*segments[4] >= *segments[1])
	goto ORDER_631542;
else if (*segments[4] >= *segments[5])
	goto ORDER_641532;
else if (*segments[4] >= *segments[2])
	goto ORDER_641523;
else
	goto ORDER_642513;

ORDER_531426:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[0])
	goto ORDER_531426;
else if (*segments[5] >= *segments[3])
	goto ORDER_631425;
else if (*segments[5] >= *segments[1])
	goto ORDER_631524;
else if (*segments[5] >= *segments[4])
	goto ORDER_641523;
else if (*segments[5] >= *segments[2])
	goto ORDER_641532;
else
	goto ORDER_642531;

ORDER_531264:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[0])
	goto ORDER_531264;
else if (*segments[4] >= *segments[5])
	goto ORDER_631254;
else if (*segments[4] >= *segments[1])
	goto ORDER_631245;
else if (*segments[4] >= *segments[3])
	goto ORDER_641235;
else if (*segments[4] >= *segments[2])
	goto ORDER_641325;
else
	goto ORDER_642315;

ORDER_531246:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[0])
	goto ORDER_531246;
else if (*segments[5] >= *segments[4])
	goto ORDER_631245;
else if (*segments[5] >= *segments[1])
	goto ORDER_631254;
else if (*segments[5] >= *segments[3])
	goto ORDER_641253;
else if (*segments[5] >= *segments[2])
	goto ORDER_641352;
else
	goto ORDER_642351;

ORDER_526431:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[0])
	goto ORDER_526431;
else if (*segments[2] >= *segments[3])
	goto ORDER_625431;
else if (*segments[2] >= *segments[4])
	goto ORDER_624531;
else if (*segments[2] >= *segments[1])
	goto ORDER_623541;
else if (*segments[2] >= *segments[5])
	goto ORDER_632541;
else
	goto ORDER_631542;

ORDER_526413:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[0])
	goto ORDER_526413;
else if (*segments[2] >= *segments[3])
	goto ORDER_625413;
else if (*segments[2] >= *segments[5])
	goto ORDER_624513;
else if (*segments[2] >= *segments[1])
	goto ORDER_623514;
else if (*segments[2] >= *segments[4])
	goto ORDER_632514;
else
	goto ORDER_631524;

ORDER_526341:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[0])
	goto ORDER_526341;
else if (*segments[2] >= *segments[4])
	goto ORDER_625341;
else if (*segments[2] >= *segments[3])
	goto ORDER_624351;
else if (*segments[2] >= *segments[1])
	goto ORDER_623451;
else if (*segments[2] >= *segments[5])
	goto ORDER_632451;
else
	goto ORDER_631452;

ORDER_526314:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[0])
	goto ORDER_526314;
else if (*segments[2] >= *segments[5])
	goto ORDER_625314;
else if (*segments[2] >= *segments[3])
	goto ORDER_624315;
else if (*segments[2] >= *segments[1])
	goto ORDER_623415;
else if (*segments[2] >= *segments[4])
	goto ORDER_632415;
else
	goto ORDER_631425;

ORDER_526143:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[0])
	goto ORDER_526143;
else if (*segments[2] >= *segments[4])
	goto ORDER_625143;
else if (*segments[2] >= *segments[5])
	goto ORDER_624153;
else if (*segments[2] >= *segments[1])
	goto ORDER_623154;
else if (*segments[2] >= *segments[3])
	goto ORDER_632154;
else
	goto ORDER_631254;

ORDER_526134:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[0])
	goto ORDER_526134;
else if (*segments[2] >= *segments[5])
	goto ORDER_625134;
else if (*segments[2] >= *segments[4])
	goto ORDER_624135;
else if (*segments[2] >= *segments[1])
	goto ORDER_623145;
else if (*segments[2] >= *segments[3])
	goto ORDER_632145;
else
	goto ORDER_631245;

ORDER_524631:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[0])
	goto ORDER_524631;
else if (*segments[3] >= *segments[2])
	goto ORDER_624531;
else if (*segments[3] >= *segments[4])
	goto ORDER_625431;
else if (*segments[3] >= *segments[1])
	goto ORDER_625341;
else if (*segments[3] >= *segments[5])
	goto ORDER_635241;
else
	goto ORDER_635142;

ORDER_524613:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[0])
	goto ORDER_524613;
else if (*segments[3] >= *segments[2])
	goto ORDER_624513;
else if (*segments[3] >= *segments[5])
	goto ORDER_625413;
else if (*segments[3] >= *segments[1])
	goto ORDER_625314;
else if (*segments[3] >= *segments[4])
	goto ORDER_635214;
else
	goto ORDER_635124;

ORDER_524361:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[0])
	goto ORDER_524361;
else if (*segments[4] >= *segments[2])
	goto ORDER_624351;
else if (*segments[4] >= *segments[3])
	goto ORDER_625341;
else if (*segments[4] >= *segments[1])
	goto ORDER_625431;
else if (*segments[4] >= *segments[5])
	goto ORDER_635421;
else
	goto ORDER_635412;

ORDER_524316:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[0])
	goto ORDER_524316;
else if (*segments[5] >= *segments[2])
	goto ORDER_624315;
else if (*segments[5] >= *segments[3])
	goto ORDER_625314;
else if (*segments[5] >= *segments[1])
	goto ORDER_625413;
else if (*segments[5] >= *segments[4])
	goto ORDER_635412;
else
	goto ORDER_635421;

ORDER_524163:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[0])
	goto ORDER_524163;
else if (*segments[4] >= *segments[2])
	goto ORDER_624153;
else if (*segments[4] >= *segments[5])
	goto ORDER_625143;
else if (*segments[4] >= *segments[1])
	goto ORDER_625134;
else if (*segments[4] >= *segments[3])
	goto ORDER_635124;
else
	goto ORDER_635214;

ORDER_524136:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[0])
	goto ORDER_524136;
else if (*segments[5] >= *segments[2])
	goto ORDER_624135;
else if (*segments[5] >= *segments[4])
	goto ORDER_625134;
else if (*segments[5] >= *segments[1])
	goto ORDER_625143;
else if (*segments[5] >= *segments[3])
	goto ORDER_635142;
else
	goto ORDER_635241;

ORDER_523641:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[0])
	goto ORDER_523641;
else if (*segments[3] >= *segments[4])
	goto ORDER_623541;
else if (*segments[3] >= *segments[2])
	goto ORDER_623451;
else if (*segments[3] >= *segments[1])
	goto ORDER_624351;
else if (*segments[3] >= *segments[5])
	goto ORDER_634251;
else
	goto ORDER_634152;

ORDER_523614:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[0])
	goto ORDER_523614;
else if (*segments[3] >= *segments[5])
	goto ORDER_623514;
else if (*segments[3] >= *segments[2])
	goto ORDER_623415;
else if (*segments[3] >= *segments[1])
	goto ORDER_624315;
else if (*segments[3] >= *segments[4])
	goto ORDER_634215;
else
	goto ORDER_634125;

ORDER_523461:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[0])
	goto ORDER_523461;
else if (*segments[4] >= *segments[3])
	goto ORDER_623451;
else if (*segments[4] >= *segments[2])
	goto ORDER_623541;
else if (*segments[4] >= *segments[1])
	goto ORDER_624531;
else if (*segments[4] >= *segments[5])
	goto ORDER_634521;
else
	goto ORDER_634512;

ORDER_523416:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[0])
	goto ORDER_523416;
else if (*segments[5] >= *segments[3])
	goto ORDER_623415;
else if (*segments[5] >= *segments[2])
	goto ORDER_623514;
else if (*segments[5] >= *segments[1])
	goto ORDER_624513;
else if (*segments[5] >= *segments[4])
	goto ORDER_634512;
else
	goto ORDER_634521;

ORDER_523164:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[0])
	goto ORDER_523164;
else if (*segments[4] >= *segments[5])
	goto ORDER_623154;
else if (*segments[4] >= *segments[2])
	goto ORDER_623145;
else if (*segments[4] >= *segments[1])
	goto ORDER_624135;
else if (*segments[4] >= *segments[3])
	goto ORDER_634125;
else
	goto ORDER_634215;

ORDER_523146:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[0])
	goto ORDER_523146;
else if (*segments[5] >= *segments[4])
	goto ORDER_623145;
else if (*segments[5] >= *segments[2])
	goto ORDER_623154;
else if (*segments[5] >= *segments[1])
	goto ORDER_624153;
else if (*segments[5] >= *segments[3])
	goto ORDER_634152;
else
	goto ORDER_634251;

ORDER_521643:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[0])
	goto ORDER_521643;
else if (*segments[3] >= *segments[4])
	goto ORDER_621543;
else if (*segments[3] >= *segments[5])
	goto ORDER_621453;
else if (*segments[3] >= *segments[1])
	goto ORDER_621354;
else if (*segments[3] >= *segments[2])
	goto ORDER_631254;
else
	goto ORDER_632154;

ORDER_521634:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[0])
	goto ORDER_521634;
else if (*segments[3] >= *segments[5])
	goto ORDER_621534;
else if (*segments[3] >= *segments[4])
	goto ORDER_621435;
else if (*segments[3] >= *segments[1])
	goto ORDER_621345;
else if (*segments[3] >= *segments[2])
	goto ORDER_631245;
else
	goto ORDER_632145;

ORDER_521463:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[0])
	goto ORDER_521463;
else if (*segments[4] >= *segments[3])
	goto ORDER_621453;
else if (*segments[4] >= *segments[5])
	goto ORDER_621543;
else if (*segments[4] >= *segments[1])
	goto ORDER_621534;
else if (*segments[4] >= *segments[2])
	goto ORDER_631524;
else
	goto ORDER_632514;

ORDER_521436:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[0])
	goto ORDER_521436;
else if (*segments[5] >= *segments[3])
	goto ORDER_621435;
else if (*segments[5] >= *segments[4])
	goto ORDER_621534;
else if (*segments[5] >= *segments[1])
	goto ORDER_621543;
else if (*segments[5] >= *segments[2])
	goto ORDER_631542;
else
	goto ORDER_632541;

ORDER_521364:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[0])
	goto ORDER_521364;
else if (*segments[4] >= *segments[5])
	goto ORDER_621354;
else if (*segments[4] >= *segments[3])
	goto ORDER_621345;
else if (*segments[4] >= *segments[1])
	goto ORDER_621435;
else if (*segments[4] >= *segments[2])
	goto ORDER_631425;
else
	goto ORDER_632415;

ORDER_521346:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[0])
	goto ORDER_521346;
else if (*segments[5] >= *segments[4])
	goto ORDER_621345;
else if (*segments[5] >= *segments[3])
	goto ORDER_621354;
else if (*segments[5] >= *segments[1])
	goto ORDER_621453;
else if (*segments[5] >= *segments[2])
	goto ORDER_631452;
else
	goto ORDER_632451;

ORDER_516432:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[0])
	goto ORDER_516432;
else if (*segments[2] >= *segments[3])
	goto ORDER_615432;
else if (*segments[2] >= *segments[4])
	goto ORDER_614532;
else if (*segments[2] >= *segments[5])
	goto ORDER_613542;
else if (*segments[2] >= *segments[1])
	goto ORDER_612543;
else
	goto ORDER_621543;

ORDER_516423:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[0])
	goto ORDER_516423;
else if (*segments[2] >= *segments[3])
	goto ORDER_615423;
else if (*segments[2] >= *segments[5])
	goto ORDER_614523;
else if (*segments[2] >= *segments[4])
	goto ORDER_613524;
else if (*segments[2] >= *segments[1])
	goto ORDER_612534;
else
	goto ORDER_621534;

ORDER_516342:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[0])
	goto ORDER_516342;
else if (*segments[2] >= *segments[4])
	goto ORDER_615342;
else if (*segments[2] >= *segments[3])
	goto ORDER_614352;
else if (*segments[2] >= *segments[5])
	goto ORDER_613452;
else if (*segments[2] >= *segments[1])
	goto ORDER_612453;
else
	goto ORDER_621453;

ORDER_516324:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[0])
	goto ORDER_516324;
else if (*segments[2] >= *segments[5])
	goto ORDER_615324;
else if (*segments[2] >= *segments[3])
	goto ORDER_614325;
else if (*segments[2] >= *segments[4])
	goto ORDER_613425;
else if (*segments[2] >= *segments[1])
	goto ORDER_612435;
else
	goto ORDER_621435;

ORDER_516243:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[0])
	goto ORDER_516243;
else if (*segments[2] >= *segments[4])
	goto ORDER_615243;
else if (*segments[2] >= *segments[5])
	goto ORDER_614253;
else if (*segments[2] >= *segments[3])
	goto ORDER_613254;
else if (*segments[2] >= *segments[1])
	goto ORDER_612354;
else
	goto ORDER_621354;

ORDER_516234:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[0])
	goto ORDER_516234;
else if (*segments[2] >= *segments[5])
	goto ORDER_615234;
else if (*segments[2] >= *segments[4])
	goto ORDER_614235;
else if (*segments[2] >= *segments[3])
	goto ORDER_613245;
else if (*segments[2] >= *segments[1])
	goto ORDER_612345;
else
	goto ORDER_621345;

ORDER_514632:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[0])
	goto ORDER_514632;
else if (*segments[3] >= *segments[2])
	goto ORDER_614532;
else if (*segments[3] >= *segments[4])
	goto ORDER_615432;
else if (*segments[3] >= *segments[5])
	goto ORDER_615342;
else if (*segments[3] >= *segments[1])
	goto ORDER_615243;
else
	goto ORDER_625143;

ORDER_514623:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[0])
	goto ORDER_514623;
else if (*segments[3] >= *segments[2])
	goto ORDER_614523;
else if (*segments[3] >= *segments[5])
	goto ORDER_615423;
else if (*segments[3] >= *segments[4])
	goto ORDER_615324;
else if (*segments[3] >= *segments[1])
	goto ORDER_615234;
else
	goto ORDER_625134;

ORDER_514362:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[0])
	goto ORDER_514362;
else if (*segments[4] >= *segments[2])
	goto ORDER_614352;
else if (*segments[4] >= *segments[3])
	goto ORDER_615342;
else if (*segments[4] >= *segments[5])
	goto ORDER_615432;
else if (*segments[4] >= *segments[1])
	goto ORDER_615423;
else
	goto ORDER_625413;

ORDER_514326:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[0])
	goto ORDER_514326;
else if (*segments[5] >= *segments[2])
	goto ORDER_614325;
else if (*segments[5] >= *segments[3])
	goto ORDER_615324;
else if (*segments[5] >= *segments[4])
	goto ORDER_615423;
else if (*segments[5] >= *segments[1])
	goto ORDER_615432;
else
	goto ORDER_625431;

ORDER_514263:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[0])
	goto ORDER_514263;
else if (*segments[4] >= *segments[2])
	goto ORDER_614253;
else if (*segments[4] >= *segments[5])
	goto ORDER_615243;
else if (*segments[4] >= *segments[3])
	goto ORDER_615234;
else if (*segments[4] >= *segments[1])
	goto ORDER_615324;
else
	goto ORDER_625314;

ORDER_514236:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[0])
	goto ORDER_514236;
else if (*segments[5] >= *segments[2])
	goto ORDER_614235;
else if (*segments[5] >= *segments[4])
	goto ORDER_615234;
else if (*segments[5] >= *segments[3])
	goto ORDER_615243;
else if (*segments[5] >= *segments[1])
	goto ORDER_615342;
else
	goto ORDER_625341;

ORDER_513642:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[0])
	goto ORDER_513642;
else if (*segments[3] >= *segments[4])
	goto ORDER_613542;
else if (*segments[3] >= *segments[2])
	goto ORDER_613452;
else if (*segments[3] >= *segments[5])
	goto ORDER_614352;
else if (*segments[3] >= *segments[1])
	goto ORDER_614253;
else
	goto ORDER_624153;

ORDER_513624:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[0])
	goto ORDER_513624;
else if (*segments[3] >= *segments[5])
	goto ORDER_613524;
else if (*segments[3] >= *segments[2])
	goto ORDER_613425;
else if (*segments[3] >= *segments[4])
	goto ORDER_614325;
else if (*segments[3] >= *segments[1])
	goto ORDER_614235;
else
	goto ORDER_624135;

ORDER_513462:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[0])
	goto ORDER_513462;
else if (*segments[4] >= *segments[3])
	goto ORDER_613452;
else if (*segments[4] >= *segments[2])
	goto ORDER_613542;
else if (*segments[4] >= *segments[5])
	goto ORDER_614532;
else if (*segments[4] >= *segments[1])
	goto ORDER_614523;
else
	goto ORDER_624513;

ORDER_513426:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[0])
	goto ORDER_513426;
else if (*segments[5] >= *segments[3])
	goto ORDER_613425;
else if (*segments[5] >= *segments[2])
	goto ORDER_613524;
else if (*segments[5] >= *segments[4])
	goto ORDER_614523;
else if (*segments[5] >= *segments[1])
	goto ORDER_614532;
else
	goto ORDER_624531;

ORDER_513264:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[0])
	goto ORDER_513264;
else if (*segments[4] >= *segments[5])
	goto ORDER_613254;
else if (*segments[4] >= *segments[2])
	goto ORDER_613245;
else if (*segments[4] >= *segments[3])
	goto ORDER_614235;
else if (*segments[4] >= *segments[1])
	goto ORDER_614325;
else
	goto ORDER_624315;

ORDER_513246:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[0])
	goto ORDER_513246;
else if (*segments[5] >= *segments[4])
	goto ORDER_613245;
else if (*segments[5] >= *segments[2])
	goto ORDER_613254;
else if (*segments[5] >= *segments[3])
	goto ORDER_614253;
else if (*segments[5] >= *segments[1])
	goto ORDER_614352;
else
	goto ORDER_624351;

ORDER_512643:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[0])
	goto ORDER_512643;
else if (*segments[3] >= *segments[4])
	goto ORDER_612543;
else if (*segments[3] >= *segments[5])
	goto ORDER_612453;
else if (*segments[3] >= *segments[2])
	goto ORDER_612354;
else if (*segments[3] >= *segments[1])
	goto ORDER_613254;
else
	goto ORDER_623154;

ORDER_512634:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[0])
	goto ORDER_512634;
else if (*segments[3] >= *segments[5])
	goto ORDER_612534;
else if (*segments[3] >= *segments[4])
	goto ORDER_612435;
else if (*segments[3] >= *segments[2])
	goto ORDER_612345;
else if (*segments[3] >= *segments[1])
	goto ORDER_613245;
else
	goto ORDER_623145;

ORDER_512463:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[0])
	goto ORDER_512463;
else if (*segments[4] >= *segments[3])
	goto ORDER_612453;
else if (*segments[4] >= *segments[5])
	goto ORDER_612543;
else if (*segments[4] >= *segments[2])
	goto ORDER_612534;
else if (*segments[4] >= *segments[1])
	goto ORDER_613524;
else
	goto ORDER_623514;

ORDER_512436:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[0])
	goto ORDER_512436;
else if (*segments[5] >= *segments[3])
	goto ORDER_612435;
else if (*segments[5] >= *segments[4])
	goto ORDER_612534;
else if (*segments[5] >= *segments[2])
	goto ORDER_612543;
else if (*segments[5] >= *segments[1])
	goto ORDER_613542;
else
	goto ORDER_623541;

ORDER_512364:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[0])
	goto ORDER_512364;
else if (*segments[4] >= *segments[5])
	goto ORDER_612354;
else if (*segments[4] >= *segments[3])
	goto ORDER_612345;
else if (*segments[4] >= *segments[2])
	goto ORDER_612435;
else if (*segments[4] >= *segments[1])
	goto ORDER_613425;
else
	goto ORDER_623415;

ORDER_512346:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[0])
	goto ORDER_512346;
else if (*segments[5] >= *segments[4])
	goto ORDER_612345;
else if (*segments[5] >= *segments[3])
	goto ORDER_612354;
else if (*segments[5] >= *segments[2])
	goto ORDER_612453;
else if (*segments[5] >= *segments[1])
	goto ORDER_613452;
else
	goto ORDER_623451;

ORDER_465321:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[2])
	goto ORDER_465321;
else if (*segments[1] >= *segments[0])
	goto ORDER_456321;
else if (*segments[1] >= *segments[3])
	goto ORDER_546321;
else if (*segments[1] >= *segments[4])
	goto ORDER_536421;
else if (*segments[1] >= *segments[5])
	goto ORDER_526431;
else
	goto ORDER_516432;

ORDER_465312:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[2])
	goto ORDER_465312;
else if (*segments[1] >= *segments[0])
	goto ORDER_456312;
else if (*segments[1] >= *segments[3])
	goto ORDER_546312;
else if (*segments[1] >= *segments[5])
	goto ORDER_536412;
else if (*segments[1] >= *segments[4])
	goto ORDER_526413;
else
	goto ORDER_516423;

ORDER_465231:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[2])
	goto ORDER_465231;
else if (*segments[1] >= *segments[0])
	goto ORDER_456231;
else if (*segments[1] >= *segments[4])
	goto ORDER_546231;
else if (*segments[1] >= *segments[3])
	goto ORDER_536241;
else if (*segments[1] >= *segments[5])
	goto ORDER_526341;
else
	goto ORDER_516342;

ORDER_465213:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[2])
	goto ORDER_465213;
else if (*segments[1] >= *segments[0])
	goto ORDER_456213;
else if (*segments[1] >= *segments[5])
	goto ORDER_546213;
else if (*segments[1] >= *segments[3])
	goto ORDER_536214;
else if (*segments[1] >= *segments[4])
	goto ORDER_526314;
else
	goto ORDER_516324;

ORDER_465132:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[2])
	goto ORDER_465132;
else if (*segments[1] >= *segments[0])
	goto ORDER_456132;
else if (*segments[1] >= *segments[4])
	goto ORDER_546132;
else if (*segments[1] >= *segments[5])
	goto ORDER_536142;
else if (*segments[1] >= *segments[3])
	goto ORDER_526143;
else
	goto ORDER_516243;

ORDER_465123:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[2])
	goto ORDER_465123;
else if (*segments[1] >= *segments[0])
	goto ORDER_456123;
else if (*segments[1] >= *segments[5])
	goto ORDER_546123;
else if (*segments[1] >= *segments[4])
	goto ORDER_536124;
else if (*segments[1] >= *segments[3])
	goto ORDER_526134;
else
	goto ORDER_516234;

ORDER_463521:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[3])
	goto ORDER_463521;
else if (*segments[1] >= *segments[0])
	goto ORDER_453621;
else if (*segments[1] >= *segments[2])
	goto ORDER_543621;
else if (*segments[1] >= *segments[4])
	goto ORDER_534621;
else if (*segments[1] >= *segments[5])
	goto ORDER_524631;
else
	goto ORDER_514632;

ORDER_463512:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[3])
	goto ORDER_463512;
else if (*segments[1] >= *segments[0])
	goto ORDER_453612;
else if (*segments[1] >= *segments[2])
	goto ORDER_543612;
else if (*segments[1] >= *segments[5])
	goto ORDER_534612;
else if (*segments[1] >= *segments[4])
	goto ORDER_524613;
else
	goto ORDER_514623;

ORDER_463251:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[4])
	goto ORDER_463251;
else if (*segments[1] >= *segments[0])
	goto ORDER_453261;
else if (*segments[1] >= *segments[2])
	goto ORDER_543261;
else if (*segments[1] >= *segments[3])
	goto ORDER_534261;
else if (*segments[1] >= *segments[5])
	goto ORDER_524361;
else
	goto ORDER_514362;

ORDER_463215:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[5])
	goto ORDER_463215;
else if (*segments[1] >= *segments[0])
	goto ORDER_453216;
else if (*segments[1] >= *segments[2])
	goto ORDER_543216;
else if (*segments[1] >= *segments[3])
	goto ORDER_534216;
else if (*segments[1] >= *segments[4])
	goto ORDER_524316;
else
	goto ORDER_514326;

ORDER_463152:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[4])
	goto ORDER_463152;
else if (*segments[1] >= *segments[0])
	goto ORDER_453162;
else if (*segments[1] >= *segments[2])
	goto ORDER_543162;
else if (*segments[1] >= *segments[5])
	goto ORDER_534162;
else if (*segments[1] >= *segments[3])
	goto ORDER_524163;
else
	goto ORDER_514263;

ORDER_463125:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[5])
	goto ORDER_463125;
else if (*segments[1] >= *segments[0])
	goto ORDER_453126;
else if (*segments[1] >= *segments[2])
	goto ORDER_543126;
else if (*segments[1] >= *segments[4])
	goto ORDER_534126;
else if (*segments[1] >= *segments[3])
	goto ORDER_524136;
else
	goto ORDER_514236;

ORDER_462531:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[3])
	goto ORDER_462531;
else if (*segments[1] >= *segments[0])
	goto ORDER_452631;
else if (*segments[1] >= *segments[4])
	goto ORDER_542631;
else if (*segments[1] >= *segments[2])
	goto ORDER_532641;
else if (*segments[1] >= *segments[5])
	goto ORDER_523641;
else
	goto ORDER_513642;

ORDER_462513:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[3])
	goto ORDER_462513;
else if (*segments[1] >= *segments[0])
	goto ORDER_452613;
else if (*segments[1] >= *segments[5])
	goto ORDER_542613;
else if (*segments[1] >= *segments[2])
	goto ORDER_532614;
else if (*segments[1] >= *segments[4])
	goto ORDER_523614;
else
	goto ORDER_513624;

ORDER_462351:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[4])
	goto ORDER_462351;
else if (*segments[1] >= *segments[0])
	goto ORDER_452361;
else if (*segments[1] >= *segments[3])
	goto ORDER_542361;
else if (*segments[1] >= *segments[2])
	goto ORDER_532461;
else if (*segments[1] >= *segments[5])
	goto ORDER_523461;
else
	goto ORDER_513462;

ORDER_462315:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[5])
	goto ORDER_462315;
else if (*segments[1] >= *segments[0])
	goto ORDER_452316;
else if (*segments[1] >= *segments[3])
	goto ORDER_542316;
else if (*segments[1] >= *segments[2])
	goto ORDER_532416;
else if (*segments[1] >= *segments[4])
	goto ORDER_523416;
else
	goto ORDER_513426;

ORDER_462153:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[4])
	goto ORDER_462153;
else if (*segments[1] >= *segments[0])
	goto ORDER_452163;
else if (*segments[1] >= *segments[5])
	goto ORDER_542163;
else if (*segments[1] >= *segments[2])
	goto ORDER_532164;
else if (*segments[1] >= *segments[3])
	goto ORDER_523164;
else
	goto ORDER_513264;

ORDER_462135:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[5])
	goto ORDER_462135;
else if (*segments[1] >= *segments[0])
	goto ORDER_452136;
else if (*segments[1] >= *segments[4])
	goto ORDER_542136;
else if (*segments[1] >= *segments[2])
	goto ORDER_532146;
else if (*segments[1] >= *segments[3])
	goto ORDER_523146;
else
	goto ORDER_513246;

ORDER_461532:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[3])
	goto ORDER_461532;
else if (*segments[1] >= *segments[0])
	goto ORDER_451632;
else if (*segments[1] >= *segments[4])
	goto ORDER_541632;
else if (*segments[1] >= *segments[5])
	goto ORDER_531642;
else if (*segments[1] >= *segments[2])
	goto ORDER_521643;
else
	goto ORDER_512643;

ORDER_461523:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[3])
	goto ORDER_461523;
else if (*segments[1] >= *segments[0])
	goto ORDER_451623;
else if (*segments[1] >= *segments[5])
	goto ORDER_541623;
else if (*segments[1] >= *segments[4])
	goto ORDER_531624;
else if (*segments[1] >= *segments[2])
	goto ORDER_521634;
else
	goto ORDER_512634;

ORDER_461352:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[4])
	goto ORDER_461352;
else if (*segments[1] >= *segments[0])
	goto ORDER_451362;
else if (*segments[1] >= *segments[3])
	goto ORDER_541362;
else if (*segments[1] >= *segments[5])
	goto ORDER_531462;
else if (*segments[1] >= *segments[2])
	goto ORDER_521463;
else
	goto ORDER_512463;

ORDER_461325:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[5])
	goto ORDER_461325;
else if (*segments[1] >= *segments[0])
	goto ORDER_451326;
else if (*segments[1] >= *segments[3])
	goto ORDER_541326;
else if (*segments[1] >= *segments[4])
	goto ORDER_531426;
else if (*segments[1] >= *segments[2])
	goto ORDER_521436;
else
	goto ORDER_512436;

ORDER_461253:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[4])
	goto ORDER_461253;
else if (*segments[1] >= *segments[0])
	goto ORDER_451263;
else if (*segments[1] >= *segments[5])
	goto ORDER_541263;
else if (*segments[1] >= *segments[3])
	goto ORDER_531264;
else if (*segments[1] >= *segments[2])
	goto ORDER_521364;
else
	goto ORDER_512364;

ORDER_461235:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[5])
	goto ORDER_461235;
else if (*segments[1] >= *segments[0])
	goto ORDER_451236;
else if (*segments[1] >= *segments[4])
	goto ORDER_541236;
else if (*segments[1] >= *segments[3])
	goto ORDER_531246;
else if (*segments[1] >= *segments[2])
	goto ORDER_521346;
else
	goto ORDER_512346;

ORDER_456321:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[1])
	goto ORDER_456321;
else if (*segments[2] >= *segments[0])
	goto ORDER_465321;
else if (*segments[2] >= *segments[3])
	goto ORDER_564321;
else if (*segments[2] >= *segments[4])
	goto ORDER_563421;
else if (*segments[2] >= *segments[5])
	goto ORDER_562431;
else
	goto ORDER_561432;

ORDER_456312:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[1])
	goto ORDER_456312;
else if (*segments[2] >= *segments[0])
	goto ORDER_465312;
else if (*segments[2] >= *segments[3])
	goto ORDER_564312;
else if (*segments[2] >= *segments[5])
	goto ORDER_563412;
else if (*segments[2] >= *segments[4])
	goto ORDER_562413;
else
	goto ORDER_561423;

ORDER_456231:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[1])
	goto ORDER_456231;
else if (*segments[2] >= *segments[0])
	goto ORDER_465231;
else if (*segments[2] >= *segments[4])
	goto ORDER_564231;
else if (*segments[2] >= *segments[3])
	goto ORDER_563241;
else if (*segments[2] >= *segments[5])
	goto ORDER_562341;
else
	goto ORDER_561342;

ORDER_456213:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[1])
	goto ORDER_456213;
else if (*segments[2] >= *segments[0])
	goto ORDER_465213;
else if (*segments[2] >= *segments[5])
	goto ORDER_564213;
else if (*segments[2] >= *segments[3])
	goto ORDER_563214;
else if (*segments[2] >= *segments[4])
	goto ORDER_562314;
else
	goto ORDER_561324;

ORDER_456132:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[1])
	goto ORDER_456132;
else if (*segments[2] >= *segments[0])
	goto ORDER_465132;
else if (*segments[2] >= *segments[4])
	goto ORDER_564132;
else if (*segments[2] >= *segments[5])
	goto ORDER_563142;
else if (*segments[2] >= *segments[3])
	goto ORDER_562143;
else
	goto ORDER_561243;

ORDER_456123:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[1])
	goto ORDER_456123;
else if (*segments[2] >= *segments[0])
	goto ORDER_465123;
else if (*segments[2] >= *segments[5])
	goto ORDER_564123;
else if (*segments[2] >= *segments[4])
	goto ORDER_563124;
else if (*segments[2] >= *segments[3])
	goto ORDER_562134;
else
	goto ORDER_561234;

ORDER_453621:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[1])
	goto ORDER_453621;
else if (*segments[3] >= *segments[0])
	goto ORDER_463521;
else if (*segments[3] >= *segments[2])
	goto ORDER_563421;
else if (*segments[3] >= *segments[4])
	goto ORDER_564321;
else if (*segments[3] >= *segments[5])
	goto ORDER_564231;
else
	goto ORDER_564132;

ORDER_453612:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[1])
	goto ORDER_453612;
else if (*segments[3] >= *segments[0])
	goto ORDER_463512;
else if (*segments[3] >= *segments[2])
	goto ORDER_563412;
else if (*segments[3] >= *segments[5])
	goto ORDER_564312;
else if (*segments[3] >= *segments[4])
	goto ORDER_564213;
else
	goto ORDER_564123;

ORDER_453261:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[1])
	goto ORDER_453261;
else if (*segments[4] >= *segments[0])
	goto ORDER_463251;
else if (*segments[4] >= *segments[2])
	goto ORDER_563241;
else if (*segments[4] >= *segments[3])
	goto ORDER_564231;
else if (*segments[4] >= *segments[5])
	goto ORDER_564321;
else
	goto ORDER_564312;

ORDER_453216:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[1])
	goto ORDER_453216;
else if (*segments[5] >= *segments[0])
	goto ORDER_463215;
else if (*segments[5] >= *segments[2])
	goto ORDER_563214;
else if (*segments[5] >= *segments[3])
	goto ORDER_564213;
else if (*segments[5] >= *segments[4])
	goto ORDER_564312;
else
	goto ORDER_564321;

ORDER_453162:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[1])
	goto ORDER_453162;
else if (*segments[4] >= *segments[0])
	goto ORDER_463152;
else if (*segments[4] >= *segments[2])
	goto ORDER_563142;
else if (*segments[4] >= *segments[5])
	goto ORDER_564132;
else if (*segments[4] >= *segments[3])
	goto ORDER_564123;
else
	goto ORDER_564213;

ORDER_453126:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[1])
	goto ORDER_453126;
else if (*segments[5] >= *segments[0])
	goto ORDER_463125;
else if (*segments[5] >= *segments[2])
	goto ORDER_563124;
else if (*segments[5] >= *segments[4])
	goto ORDER_564123;
else if (*segments[5] >= *segments[3])
	goto ORDER_564132;
else
	goto ORDER_564231;

ORDER_452631:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[1])
	goto ORDER_452631;
else if (*segments[3] >= *segments[0])
	goto ORDER_462531;
else if (*segments[3] >= *segments[4])
	goto ORDER_562431;
else if (*segments[3] >= *segments[2])
	goto ORDER_562341;
else if (*segments[3] >= *segments[5])
	goto ORDER_563241;
else
	goto ORDER_563142;

ORDER_452613:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[1])
	goto ORDER_452613;
else if (*segments[3] >= *segments[0])
	goto ORDER_462513;
else if (*segments[3] >= *segments[5])
	goto ORDER_562413;
else if (*segments[3] >= *segments[2])
	goto ORDER_562314;
else if (*segments[3] >= *segments[4])
	goto ORDER_563214;
else
	goto ORDER_563124;

ORDER_452361:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[1])
	goto ORDER_452361;
else if (*segments[4] >= *segments[0])
	goto ORDER_462351;
else if (*segments[4] >= *segments[3])
	goto ORDER_562341;
else if (*segments[4] >= *segments[2])
	goto ORDER_562431;
else if (*segments[4] >= *segments[5])
	goto ORDER_563421;
else
	goto ORDER_563412;

ORDER_452316:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[1])
	goto ORDER_452316;
else if (*segments[5] >= *segments[0])
	goto ORDER_462315;
else if (*segments[5] >= *segments[3])
	goto ORDER_562314;
else if (*segments[5] >= *segments[2])
	goto ORDER_562413;
else if (*segments[5] >= *segments[4])
	goto ORDER_563412;
else
	goto ORDER_563421;

ORDER_452163:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[1])
	goto ORDER_452163;
else if (*segments[4] >= *segments[0])
	goto ORDER_462153;
else if (*segments[4] >= *segments[5])
	goto ORDER_562143;
else if (*segments[4] >= *segments[2])
	goto ORDER_562134;
else if (*segments[4] >= *segments[3])
	goto ORDER_563124;
else
	goto ORDER_563214;

ORDER_452136:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[1])
	goto ORDER_452136;
else if (*segments[5] >= *segments[0])
	goto ORDER_462135;
else if (*segments[5] >= *segments[4])
	goto ORDER_562134;
else if (*segments[5] >= *segments[2])
	goto ORDER_562143;
else if (*segments[5] >= *segments[3])
	goto ORDER_563142;
else
	goto ORDER_563241;

ORDER_451632:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[1])
	goto ORDER_451632;
else if (*segments[3] >= *segments[0])
	goto ORDER_461532;
else if (*segments[3] >= *segments[4])
	goto ORDER_561432;
else if (*segments[3] >= *segments[5])
	goto ORDER_561342;
else if (*segments[3] >= *segments[2])
	goto ORDER_561243;
else
	goto ORDER_562143;

ORDER_451623:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[1])
	goto ORDER_451623;
else if (*segments[3] >= *segments[0])
	goto ORDER_461523;
else if (*segments[3] >= *segments[5])
	goto ORDER_561423;
else if (*segments[3] >= *segments[4])
	goto ORDER_561324;
else if (*segments[3] >= *segments[2])
	goto ORDER_561234;
else
	goto ORDER_562134;

ORDER_451362:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[1])
	goto ORDER_451362;
else if (*segments[4] >= *segments[0])
	goto ORDER_461352;
else if (*segments[4] >= *segments[3])
	goto ORDER_561342;
else if (*segments[4] >= *segments[5])
	goto ORDER_561432;
else if (*segments[4] >= *segments[2])
	goto ORDER_561423;
else
	goto ORDER_562413;

ORDER_451326:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[1])
	goto ORDER_451326;
else if (*segments[5] >= *segments[0])
	goto ORDER_461325;
else if (*segments[5] >= *segments[3])
	goto ORDER_561324;
else if (*segments[5] >= *segments[4])
	goto ORDER_561423;
else if (*segments[5] >= *segments[2])
	goto ORDER_561432;
else
	goto ORDER_562431;

ORDER_451263:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[1])
	goto ORDER_451263;
else if (*segments[4] >= *segments[0])
	goto ORDER_461253;
else if (*segments[4] >= *segments[5])
	goto ORDER_561243;
else if (*segments[4] >= *segments[3])
	goto ORDER_561234;
else if (*segments[4] >= *segments[2])
	goto ORDER_561324;
else
	goto ORDER_562314;

ORDER_451236:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[1])
	goto ORDER_451236;
else if (*segments[5] >= *segments[0])
	goto ORDER_461235;
else if (*segments[5] >= *segments[4])
	goto ORDER_561234;
else if (*segments[5] >= *segments[3])
	goto ORDER_561243;
else if (*segments[5] >= *segments[2])
	goto ORDER_561342;
else
	goto ORDER_562341;

ORDER_436521:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[3])
	goto ORDER_436521;
else if (*segments[2] >= *segments[0])
	goto ORDER_435621;
else if (*segments[2] >= *segments[1])
	goto ORDER_534621;
else if (*segments[2] >= *segments[4])
	goto ORDER_543621;
else if (*segments[2] >= *segments[5])
	goto ORDER_542631;
else
	goto ORDER_541632;

ORDER_436512:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[3])
	goto ORDER_436512;
else if (*segments[2] >= *segments[0])
	goto ORDER_435612;
else if (*segments[2] >= *segments[1])
	goto ORDER_534612;
else if (*segments[2] >= *segments[5])
	goto ORDER_543612;
else if (*segments[2] >= *segments[4])
	goto ORDER_542613;
else
	goto ORDER_541623;

ORDER_436251:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[4])
	goto ORDER_436251;
else if (*segments[2] >= *segments[0])
	goto ORDER_435261;
else if (*segments[2] >= *segments[1])
	goto ORDER_534261;
else if (*segments[2] >= *segments[3])
	goto ORDER_543261;
else if (*segments[2] >= *segments[5])
	goto ORDER_542361;
else
	goto ORDER_541362;

ORDER_436215:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[5])
	goto ORDER_436215;
else if (*segments[2] >= *segments[0])
	goto ORDER_435216;
else if (*segments[2] >= *segments[1])
	goto ORDER_534216;
else if (*segments[2] >= *segments[3])
	goto ORDER_543216;
else if (*segments[2] >= *segments[4])
	goto ORDER_542316;
else
	goto ORDER_541326;

ORDER_436152:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[4])
	goto ORDER_436152;
else if (*segments[2] >= *segments[0])
	goto ORDER_435162;
else if (*segments[2] >= *segments[1])
	goto ORDER_534162;
else if (*segments[2] >= *segments[5])
	goto ORDER_543162;
else if (*segments[2] >= *segments[3])
	goto ORDER_542163;
else
	goto ORDER_541263;

ORDER_436125:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[5])
	goto ORDER_436125;
else if (*segments[2] >= *segments[0])
	goto ORDER_435126;
else if (*segments[2] >= *segments[1])
	goto ORDER_534126;
else if (*segments[2] >= *segments[4])
	goto ORDER_543126;
else if (*segments[2] >= *segments[3])
	goto ORDER_542136;
else
	goto ORDER_541236;

ORDER_435621:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[2])
	goto ORDER_435621;
else if (*segments[3] >= *segments[0])
	goto ORDER_436521;
else if (*segments[3] >= *segments[1])
	goto ORDER_536421;
else if (*segments[3] >= *segments[4])
	goto ORDER_546321;
else if (*segments[3] >= *segments[5])
	goto ORDER_546231;
else
	goto ORDER_546132;

ORDER_435612:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[2])
	goto ORDER_435612;
else if (*segments[3] >= *segments[0])
	goto ORDER_436512;
else if (*segments[3] >= *segments[1])
	goto ORDER_536412;
else if (*segments[3] >= *segments[5])
	goto ORDER_546312;
else if (*segments[3] >= *segments[4])
	goto ORDER_546213;
else
	goto ORDER_546123;

ORDER_435261:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[2])
	goto ORDER_435261;
else if (*segments[4] >= *segments[0])
	goto ORDER_436251;
else if (*segments[4] >= *segments[1])
	goto ORDER_536241;
else if (*segments[4] >= *segments[3])
	goto ORDER_546231;
else if (*segments[4] >= *segments[5])
	goto ORDER_546321;
else
	goto ORDER_546312;

ORDER_435216:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[2])
	goto ORDER_435216;
else if (*segments[5] >= *segments[0])
	goto ORDER_436215;
else if (*segments[5] >= *segments[1])
	goto ORDER_536214;
else if (*segments[5] >= *segments[3])
	goto ORDER_546213;
else if (*segments[5] >= *segments[4])
	goto ORDER_546312;
else
	goto ORDER_546321;

ORDER_435162:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[2])
	goto ORDER_435162;
else if (*segments[4] >= *segments[0])
	goto ORDER_436152;
else if (*segments[4] >= *segments[1])
	goto ORDER_536142;
else if (*segments[4] >= *segments[5])
	goto ORDER_546132;
else if (*segments[4] >= *segments[3])
	goto ORDER_546123;
else
	goto ORDER_546213;

ORDER_435126:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[2])
	goto ORDER_435126;
else if (*segments[5] >= *segments[0])
	goto ORDER_436125;
else if (*segments[5] >= *segments[1])
	goto ORDER_536124;
else if (*segments[5] >= *segments[4])
	goto ORDER_546123;
else if (*segments[5] >= *segments[3])
	goto ORDER_546132;
else
	goto ORDER_546231;

ORDER_432651:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[4])
	goto ORDER_432651;
else if (*segments[3] >= *segments[0])
	goto ORDER_432561;
else if (*segments[3] >= *segments[1])
	goto ORDER_532461;
else if (*segments[3] >= *segments[2])
	goto ORDER_542361;
else if (*segments[3] >= *segments[5])
	goto ORDER_543261;
else
	goto ORDER_543162;

ORDER_432615:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[5])
	goto ORDER_432615;
else if (*segments[3] >= *segments[0])
	goto ORDER_432516;
else if (*segments[3] >= *segments[1])
	goto ORDER_532416;
else if (*segments[3] >= *segments[2])
	goto ORDER_542316;
else if (*segments[3] >= *segments[4])
	goto ORDER_543216;
else
	goto ORDER_543126;

ORDER_432561:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[3])
	goto ORDER_432561;
else if (*segments[4] >= *segments[0])
	goto ORDER_432651;
else if (*segments[4] >= *segments[1])
	goto ORDER_532641;
else if (*segments[4] >= *segments[2])
	goto ORDER_542631;
else if (*segments[4] >= *segments[5])
	goto ORDER_543621;
else
	goto ORDER_543612;

ORDER_432516:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[3])
	goto ORDER_432516;
else if (*segments[5] >= *segments[0])
	goto ORDER_432615;
else if (*segments[5] >= *segments[1])
	goto ORDER_532614;
else if (*segments[5] >= *segments[2])
	goto ORDER_542613;
else if (*segments[5] >= *segments[4])
	goto ORDER_543612;
else
	goto ORDER_543621;

ORDER_432165:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[5])
	goto ORDER_432165;
else if (*segments[4] >= *segments[0])
	goto ORDER_432156;
else if (*segments[4] >= *segments[1])
	goto ORDER_532146;
else if (*segments[4] >= *segments[2])
	goto ORDER_542136;
else if (*segments[4] >= *segments[3])
	goto ORDER_543126;
else
	goto ORDER_543216;

ORDER_432156:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[4])
	goto ORDER_432156;
else if (*segments[5] >= *segments[0])
	goto ORDER_432165;
else if (*segments[5] >= *segments[1])
	goto ORDER_532164;
else if (*segments[5] >= *segments[2])
	goto ORDER_542163;
else if (*segments[5] >= *segments[3])
	goto ORDER_543162;
else
	goto ORDER_543261;

ORDER_431652:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[4])
	goto ORDER_431652;
else if (*segments[3] >= *segments[0])
	goto ORDER_431562;
else if (*segments[3] >= *segments[1])
	goto ORDER_531462;
else if (*segments[3] >= *segments[5])
	goto ORDER_541362;
else if (*segments[3] >= *segments[2])
	goto ORDER_541263;
else
	goto ORDER_542163;

ORDER_431625:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[5])
	goto ORDER_431625;
else if (*segments[3] >= *segments[0])
	goto ORDER_431526;
else if (*segments[3] >= *segments[1])
	goto ORDER_531426;
else if (*segments[3] >= *segments[4])
	goto ORDER_541326;
else if (*segments[3] >= *segments[2])
	goto ORDER_541236;
else
	goto ORDER_542136;

ORDER_431562:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[3])
	goto ORDER_431562;
else if (*segments[4] >= *segments[0])
	goto ORDER_431652;
else if (*segments[4] >= *segments[1])
	goto ORDER_531642;
else if (*segments[4] >= *segments[5])
	goto ORDER_541632;
else if (*segments[4] >= *segments[2])
	goto ORDER_541623;
else
	goto ORDER_542613;

ORDER_431526:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[3])
	goto ORDER_431526;
else if (*segments[5] >= *segments[0])
	goto ORDER_431625;
else if (*segments[5] >= *segments[1])
	goto ORDER_531624;
else if (*segments[5] >= *segments[4])
	goto ORDER_541623;
else if (*segments[5] >= *segments[2])
	goto ORDER_541632;
else
	goto ORDER_542631;

ORDER_431265:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[5])
	goto ORDER_431265;
else if (*segments[4] >= *segments[0])
	goto ORDER_431256;
else if (*segments[4] >= *segments[1])
	goto ORDER_531246;
else if (*segments[4] >= *segments[3])
	goto ORDER_541236;
else if (*segments[4] >= *segments[2])
	goto ORDER_541326;
else
	goto ORDER_542316;

ORDER_431256:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[4])
	goto ORDER_431256;
else if (*segments[5] >= *segments[0])
	goto ORDER_431265;
else if (*segments[5] >= *segments[1])
	goto ORDER_531264;
else if (*segments[5] >= *segments[3])
	goto ORDER_541263;
else if (*segments[5] >= *segments[2])
	goto ORDER_541362;
else
	goto ORDER_542361;

ORDER_426531:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[3])
	goto ORDER_426531;
else if (*segments[2] >= *segments[0])
	goto ORDER_425631;
else if (*segments[2] >= *segments[4])
	goto ORDER_524631;
else if (*segments[2] >= *segments[1])
	goto ORDER_523641;
else if (*segments[2] >= *segments[5])
	goto ORDER_532641;
else
	goto ORDER_531642;

ORDER_426513:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[3])
	goto ORDER_426513;
else if (*segments[2] >= *segments[0])
	goto ORDER_425613;
else if (*segments[2] >= *segments[5])
	goto ORDER_524613;
else if (*segments[2] >= *segments[1])
	goto ORDER_523614;
else if (*segments[2] >= *segments[4])
	goto ORDER_532614;
else
	goto ORDER_531624;

ORDER_426351:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[4])
	goto ORDER_426351;
else if (*segments[2] >= *segments[0])
	goto ORDER_425361;
else if (*segments[2] >= *segments[3])
	goto ORDER_524361;
else if (*segments[2] >= *segments[1])
	goto ORDER_523461;
else if (*segments[2] >= *segments[5])
	goto ORDER_532461;
else
	goto ORDER_531462;

ORDER_426315:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[5])
	goto ORDER_426315;
else if (*segments[2] >= *segments[0])
	goto ORDER_425316;
else if (*segments[2] >= *segments[3])
	goto ORDER_524316;
else if (*segments[2] >= *segments[1])
	goto ORDER_523416;
else if (*segments[2] >= *segments[4])
	goto ORDER_532416;
else
	goto ORDER_531426;

ORDER_426153:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[4])
	goto ORDER_426153;
else if (*segments[2] >= *segments[0])
	goto ORDER_425163;
else if (*segments[2] >= *segments[5])
	goto ORDER_524163;
else if (*segments[2] >= *segments[1])
	goto ORDER_523164;
else if (*segments[2] >= *segments[3])
	goto ORDER_532164;
else
	goto ORDER_531264;

ORDER_426135:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[5])
	goto ORDER_426135;
else if (*segments[2] >= *segments[0])
	goto ORDER_425136;
else if (*segments[2] >= *segments[4])
	goto ORDER_524136;
else if (*segments[2] >= *segments[1])
	goto ORDER_523146;
else if (*segments[2] >= *segments[3])
	goto ORDER_532146;
else
	goto ORDER_531246;

ORDER_425631:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[2])
	goto ORDER_425631;
else if (*segments[3] >= *segments[0])
	goto ORDER_426531;
else if (*segments[3] >= *segments[4])
	goto ORDER_526431;
else if (*segments[3] >= *segments[1])
	goto ORDER_526341;
else if (*segments[3] >= *segments[5])
	goto ORDER_536241;
else
	goto ORDER_536142;

ORDER_425613:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[2])
	goto ORDER_425613;
else if (*segments[3] >= *segments[0])
	goto ORDER_426513;
else if (*segments[3] >= *segments[5])
	goto ORDER_526413;
else if (*segments[3] >= *segments[1])
	goto ORDER_526314;
else if (*segments[3] >= *segments[4])
	goto ORDER_536214;
else
	goto ORDER_536124;

ORDER_425361:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[2])
	goto ORDER_425361;
else if (*segments[4] >= *segments[0])
	goto ORDER_426351;
else if (*segments[4] >= *segments[3])
	goto ORDER_526341;
else if (*segments[4] >= *segments[1])
	goto ORDER_526431;
else if (*segments[4] >= *segments[5])
	goto ORDER_536421;
else
	goto ORDER_536412;

ORDER_425316:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[2])
	goto ORDER_425316;
else if (*segments[5] >= *segments[0])
	goto ORDER_426315;
else if (*segments[5] >= *segments[3])
	goto ORDER_526314;
else if (*segments[5] >= *segments[1])
	goto ORDER_526413;
else if (*segments[5] >= *segments[4])
	goto ORDER_536412;
else
	goto ORDER_536421;

ORDER_425163:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[2])
	goto ORDER_425163;
else if (*segments[4] >= *segments[0])
	goto ORDER_426153;
else if (*segments[4] >= *segments[5])
	goto ORDER_526143;
else if (*segments[4] >= *segments[1])
	goto ORDER_526134;
else if (*segments[4] >= *segments[3])
	goto ORDER_536124;
else
	goto ORDER_536214;

ORDER_425136:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[2])
	goto ORDER_425136;
else if (*segments[5] >= *segments[0])
	goto ORDER_426135;
else if (*segments[5] >= *segments[4])
	goto ORDER_526134;
else if (*segments[5] >= *segments[1])
	goto ORDER_526143;
else if (*segments[5] >= *segments[3])
	goto ORDER_536142;
else
	goto ORDER_536241;

ORDER_423651:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[4])
	goto ORDER_423651;
else if (*segments[3] >= *segments[0])
	goto ORDER_423561;
else if (*segments[3] >= *segments[2])
	goto ORDER_523461;
else if (*segments[3] >= *segments[1])
	goto ORDER_524361;
else if (*segments[3] >= *segments[5])
	goto ORDER_534261;
else
	goto ORDER_534162;

ORDER_423615:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[5])
	goto ORDER_423615;
else if (*segments[3] >= *segments[0])
	goto ORDER_423516;
else if (*segments[3] >= *segments[2])
	goto ORDER_523416;
else if (*segments[3] >= *segments[1])
	goto ORDER_524316;
else if (*segments[3] >= *segments[4])
	goto ORDER_534216;
else
	goto ORDER_534126;

ORDER_423561:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[3])
	goto ORDER_423561;
else if (*segments[4] >= *segments[0])
	goto ORDER_423651;
else if (*segments[4] >= *segments[2])
	goto ORDER_523641;
else if (*segments[4] >= *segments[1])
	goto ORDER_524631;
else if (*segments[4] >= *segments[5])
	goto ORDER_534621;
else
	goto ORDER_534612;

ORDER_423516:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[3])
	goto ORDER_423516;
else if (*segments[5] >= *segments[0])
	goto ORDER_423615;
else if (*segments[5] >= *segments[2])
	goto ORDER_523614;
else if (*segments[5] >= *segments[1])
	goto ORDER_524613;
else if (*segments[5] >= *segments[4])
	goto ORDER_534612;
else
	goto ORDER_534621;

ORDER_423165:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[5])
	goto ORDER_423165;
else if (*segments[4] >= *segments[0])
	goto ORDER_423156;
else if (*segments[4] >= *segments[2])
	goto ORDER_523146;
else if (*segments[4] >= *segments[1])
	goto ORDER_524136;
else if (*segments[4] >= *segments[3])
	goto ORDER_534126;
else
	goto ORDER_534216;

ORDER_423156:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[4])
	goto ORDER_423156;
else if (*segments[5] >= *segments[0])
	goto ORDER_423165;
else if (*segments[5] >= *segments[2])
	goto ORDER_523164;
else if (*segments[5] >= *segments[1])
	goto ORDER_524163;
else if (*segments[5] >= *segments[3])
	goto ORDER_534162;
else
	goto ORDER_534261;

ORDER_421653:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[4])
	goto ORDER_421653;
else if (*segments[3] >= *segments[0])
	goto ORDER_421563;
else if (*segments[3] >= *segments[5])
	goto ORDER_521463;
else if (*segments[3] >= *segments[1])
	goto ORDER_521364;
else if (*segments[3] >= *segments[2])
	goto ORDER_531264;
else
	goto ORDER_532164;

ORDER_421635:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[5])
	goto ORDER_421635;
else if (*segments[3] >= *segments[0])
	goto ORDER_421536;
else if (*segments[3] >= *segments[4])
	goto ORDER_521436;
else if (*segments[3] >= *segments[1])
	goto ORDER_521346;
else if (*segments[3] >= *segments[2])
	goto ORDER_531246;
else
	goto ORDER_532146;

ORDER_421563:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[3])
	goto ORDER_421563;
else if (*segments[4] >= *segments[0])
	goto ORDER_421653;
else if (*segments[4] >= *segments[5])
	goto ORDER_521643;
else if (*segments[4] >= *segments[1])
	goto ORDER_521634;
else if (*segments[4] >= *segments[2])
	goto ORDER_531624;
else
	goto ORDER_532614;

ORDER_421536:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[3])
	goto ORDER_421536;
else if (*segments[5] >= *segments[0])
	goto ORDER_421635;
else if (*segments[5] >= *segments[4])
	goto ORDER_521634;
else if (*segments[5] >= *segments[1])
	goto ORDER_521643;
else if (*segments[5] >= *segments[2])
	goto ORDER_531642;
else
	goto ORDER_532641;

ORDER_421365:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[5])
	goto ORDER_421365;
else if (*segments[4] >= *segments[0])
	goto ORDER_421356;
else if (*segments[4] >= *segments[3])
	goto ORDER_521346;
else if (*segments[4] >= *segments[1])
	goto ORDER_521436;
else if (*segments[4] >= *segments[2])
	goto ORDER_531426;
else
	goto ORDER_532416;

ORDER_421356:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[4])
	goto ORDER_421356;
else if (*segments[5] >= *segments[0])
	goto ORDER_421365;
else if (*segments[5] >= *segments[3])
	goto ORDER_521364;
else if (*segments[5] >= *segments[1])
	goto ORDER_521463;
else if (*segments[5] >= *segments[2])
	goto ORDER_531462;
else
	goto ORDER_532461;

ORDER_416532:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[3])
	goto ORDER_416532;
else if (*segments[2] >= *segments[0])
	goto ORDER_415632;
else if (*segments[2] >= *segments[4])
	goto ORDER_514632;
else if (*segments[2] >= *segments[5])
	goto ORDER_513642;
else if (*segments[2] >= *segments[1])
	goto ORDER_512643;
else
	goto ORDER_521643;

ORDER_416523:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[3])
	goto ORDER_416523;
else if (*segments[2] >= *segments[0])
	goto ORDER_415623;
else if (*segments[2] >= *segments[5])
	goto ORDER_514623;
else if (*segments[2] >= *segments[4])
	goto ORDER_513624;
else if (*segments[2] >= *segments[1])
	goto ORDER_512634;
else
	goto ORDER_521634;

ORDER_416352:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[4])
	goto ORDER_416352;
else if (*segments[2] >= *segments[0])
	goto ORDER_415362;
else if (*segments[2] >= *segments[3])
	goto ORDER_514362;
else if (*segments[2] >= *segments[5])
	goto ORDER_513462;
else if (*segments[2] >= *segments[1])
	goto ORDER_512463;
else
	goto ORDER_521463;

ORDER_416325:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[5])
	goto ORDER_416325;
else if (*segments[2] >= *segments[0])
	goto ORDER_415326;
else if (*segments[2] >= *segments[3])
	goto ORDER_514326;
else if (*segments[2] >= *segments[4])
	goto ORDER_513426;
else if (*segments[2] >= *segments[1])
	goto ORDER_512436;
else
	goto ORDER_521436;

ORDER_416253:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[4])
	goto ORDER_416253;
else if (*segments[2] >= *segments[0])
	goto ORDER_415263;
else if (*segments[2] >= *segments[5])
	goto ORDER_514263;
else if (*segments[2] >= *segments[3])
	goto ORDER_513264;
else if (*segments[2] >= *segments[1])
	goto ORDER_512364;
else
	goto ORDER_521364;

ORDER_416235:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[5])
	goto ORDER_416235;
else if (*segments[2] >= *segments[0])
	goto ORDER_415236;
else if (*segments[2] >= *segments[4])
	goto ORDER_514236;
else if (*segments[2] >= *segments[3])
	goto ORDER_513246;
else if (*segments[2] >= *segments[1])
	goto ORDER_512346;
else
	goto ORDER_521346;

ORDER_415632:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[2])
	goto ORDER_415632;
else if (*segments[3] >= *segments[0])
	goto ORDER_416532;
else if (*segments[3] >= *segments[4])
	goto ORDER_516432;
else if (*segments[3] >= *segments[5])
	goto ORDER_516342;
else if (*segments[3] >= *segments[1])
	goto ORDER_516243;
else
	goto ORDER_526143;

ORDER_415623:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[2])
	goto ORDER_415623;
else if (*segments[3] >= *segments[0])
	goto ORDER_416523;
else if (*segments[3] >= *segments[5])
	goto ORDER_516423;
else if (*segments[3] >= *segments[4])
	goto ORDER_516324;
else if (*segments[3] >= *segments[1])
	goto ORDER_516234;
else
	goto ORDER_526134;

ORDER_415362:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[2])
	goto ORDER_415362;
else if (*segments[4] >= *segments[0])
	goto ORDER_416352;
else if (*segments[4] >= *segments[3])
	goto ORDER_516342;
else if (*segments[4] >= *segments[5])
	goto ORDER_516432;
else if (*segments[4] >= *segments[1])
	goto ORDER_516423;
else
	goto ORDER_526413;

ORDER_415326:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[2])
	goto ORDER_415326;
else if (*segments[5] >= *segments[0])
	goto ORDER_416325;
else if (*segments[5] >= *segments[3])
	goto ORDER_516324;
else if (*segments[5] >= *segments[4])
	goto ORDER_516423;
else if (*segments[5] >= *segments[1])
	goto ORDER_516432;
else
	goto ORDER_526431;

ORDER_415263:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[2])
	goto ORDER_415263;
else if (*segments[4] >= *segments[0])
	goto ORDER_416253;
else if (*segments[4] >= *segments[5])
	goto ORDER_516243;
else if (*segments[4] >= *segments[3])
	goto ORDER_516234;
else if (*segments[4] >= *segments[1])
	goto ORDER_516324;
else
	goto ORDER_526314;

ORDER_415236:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[2])
	goto ORDER_415236;
else if (*segments[5] >= *segments[0])
	goto ORDER_416235;
else if (*segments[5] >= *segments[4])
	goto ORDER_516234;
else if (*segments[5] >= *segments[3])
	goto ORDER_516243;
else if (*segments[5] >= *segments[1])
	goto ORDER_516342;
else
	goto ORDER_526341;

ORDER_413652:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[4])
	goto ORDER_413652;
else if (*segments[3] >= *segments[0])
	goto ORDER_413562;
else if (*segments[3] >= *segments[2])
	goto ORDER_513462;
else if (*segments[3] >= *segments[5])
	goto ORDER_514362;
else if (*segments[3] >= *segments[1])
	goto ORDER_514263;
else
	goto ORDER_524163;

ORDER_413625:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[5])
	goto ORDER_413625;
else if (*segments[3] >= *segments[0])
	goto ORDER_413526;
else if (*segments[3] >= *segments[2])
	goto ORDER_513426;
else if (*segments[3] >= *segments[4])
	goto ORDER_514326;
else if (*segments[3] >= *segments[1])
	goto ORDER_514236;
else
	goto ORDER_524136;

ORDER_413562:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[3])
	goto ORDER_413562;
else if (*segments[4] >= *segments[0])
	goto ORDER_413652;
else if (*segments[4] >= *segments[2])
	goto ORDER_513642;
else if (*segments[4] >= *segments[5])
	goto ORDER_514632;
else if (*segments[4] >= *segments[1])
	goto ORDER_514623;
else
	goto ORDER_524613;

ORDER_413526:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[3])
	goto ORDER_413526;
else if (*segments[5] >= *segments[0])
	goto ORDER_413625;
else if (*segments[5] >= *segments[2])
	goto ORDER_513624;
else if (*segments[5] >= *segments[4])
	goto ORDER_514623;
else if (*segments[5] >= *segments[1])
	goto ORDER_514632;
else
	goto ORDER_524631;

ORDER_413265:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[5])
	goto ORDER_413265;
else if (*segments[4] >= *segments[0])
	goto ORDER_413256;
else if (*segments[4] >= *segments[2])
	goto ORDER_513246;
else if (*segments[4] >= *segments[3])
	goto ORDER_514236;
else if (*segments[4] >= *segments[1])
	goto ORDER_514326;
else
	goto ORDER_524316;

ORDER_413256:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[4])
	goto ORDER_413256;
else if (*segments[5] >= *segments[0])
	goto ORDER_413265;
else if (*segments[5] >= *segments[2])
	goto ORDER_513264;
else if (*segments[5] >= *segments[3])
	goto ORDER_514263;
else if (*segments[5] >= *segments[1])
	goto ORDER_514362;
else
	goto ORDER_524361;

ORDER_412653:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[4])
	goto ORDER_412653;
else if (*segments[3] >= *segments[0])
	goto ORDER_412563;
else if (*segments[3] >= *segments[5])
	goto ORDER_512463;
else if (*segments[3] >= *segments[2])
	goto ORDER_512364;
else if (*segments[3] >= *segments[1])
	goto ORDER_513264;
else
	goto ORDER_523164;

ORDER_412635:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[5])
	goto ORDER_412635;
else if (*segments[3] >= *segments[0])
	goto ORDER_412536;
else if (*segments[3] >= *segments[4])
	goto ORDER_512436;
else if (*segments[3] >= *segments[2])
	goto ORDER_512346;
else if (*segments[3] >= *segments[1])
	goto ORDER_513246;
else
	goto ORDER_523146;

ORDER_412563:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[3])
	goto ORDER_412563;
else if (*segments[4] >= *segments[0])
	goto ORDER_412653;
else if (*segments[4] >= *segments[5])
	goto ORDER_512643;
else if (*segments[4] >= *segments[2])
	goto ORDER_512634;
else if (*segments[4] >= *segments[1])
	goto ORDER_513624;
else
	goto ORDER_523614;

ORDER_412536:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[3])
	goto ORDER_412536;
else if (*segments[5] >= *segments[0])
	goto ORDER_412635;
else if (*segments[5] >= *segments[4])
	goto ORDER_512634;
else if (*segments[5] >= *segments[2])
	goto ORDER_512643;
else if (*segments[5] >= *segments[1])
	goto ORDER_513642;
else
	goto ORDER_523641;

ORDER_412365:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[5])
	goto ORDER_412365;
else if (*segments[4] >= *segments[0])
	goto ORDER_412356;
else if (*segments[4] >= *segments[3])
	goto ORDER_512346;
else if (*segments[4] >= *segments[2])
	goto ORDER_512436;
else if (*segments[4] >= *segments[1])
	goto ORDER_513426;
else
	goto ORDER_523416;

ORDER_412356:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[4])
	goto ORDER_412356;
else if (*segments[5] >= *segments[0])
	goto ORDER_412365;
else if (*segments[5] >= *segments[3])
	goto ORDER_512364;
else if (*segments[5] >= *segments[2])
	goto ORDER_512463;
else if (*segments[5] >= *segments[1])
	goto ORDER_513462;
else
	goto ORDER_523461;

ORDER_365421:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[2])
	goto ORDER_365421;
else if (*segments[1] >= *segments[3])
	goto ORDER_356421;
else if (*segments[1] >= *segments[0])
	goto ORDER_346521;
else if (*segments[1] >= *segments[4])
	goto ORDER_436521;
else if (*segments[1] >= *segments[5])
	goto ORDER_426531;
else
	goto ORDER_416532;

ORDER_365412:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[2])
	goto ORDER_365412;
else if (*segments[1] >= *segments[3])
	goto ORDER_356412;
else if (*segments[1] >= *segments[0])
	goto ORDER_346512;
else if (*segments[1] >= *segments[5])
	goto ORDER_436512;
else if (*segments[1] >= *segments[4])
	goto ORDER_426513;
else
	goto ORDER_416523;

ORDER_365241:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[2])
	goto ORDER_365241;
else if (*segments[1] >= *segments[4])
	goto ORDER_356241;
else if (*segments[1] >= *segments[0])
	goto ORDER_346251;
else if (*segments[1] >= *segments[3])
	goto ORDER_436251;
else if (*segments[1] >= *segments[5])
	goto ORDER_426351;
else
	goto ORDER_416352;

ORDER_365214:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[2])
	goto ORDER_365214;
else if (*segments[1] >= *segments[5])
	goto ORDER_356214;
else if (*segments[1] >= *segments[0])
	goto ORDER_346215;
else if (*segments[1] >= *segments[3])
	goto ORDER_436215;
else if (*segments[1] >= *segments[4])
	goto ORDER_426315;
else
	goto ORDER_416325;

ORDER_365142:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[2])
	goto ORDER_365142;
else if (*segments[1] >= *segments[4])
	goto ORDER_356142;
else if (*segments[1] >= *segments[0])
	goto ORDER_346152;
else if (*segments[1] >= *segments[5])
	goto ORDER_436152;
else if (*segments[1] >= *segments[3])
	goto ORDER_426153;
else
	goto ORDER_416253;

ORDER_365124:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[2])
	goto ORDER_365124;
else if (*segments[1] >= *segments[5])
	goto ORDER_356124;
else if (*segments[1] >= *segments[0])
	goto ORDER_346125;
else if (*segments[1] >= *segments[4])
	goto ORDER_436125;
else if (*segments[1] >= *segments[3])
	goto ORDER_426135;
else
	goto ORDER_416235;

ORDER_364521:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[3])
	goto ORDER_364521;
else if (*segments[1] >= *segments[2])
	goto ORDER_354621;
else if (*segments[1] >= *segments[0])
	goto ORDER_345621;
else if (*segments[1] >= *segments[4])
	goto ORDER_435621;
else if (*segments[1] >= *segments[5])
	goto ORDER_425631;
else
	goto ORDER_415632;

ORDER_364512:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[3])
	goto ORDER_364512;
else if (*segments[1] >= *segments[2])
	goto ORDER_354612;
else if (*segments[1] >= *segments[0])
	goto ORDER_345612;
else if (*segments[1] >= *segments[5])
	goto ORDER_435612;
else if (*segments[1] >= *segments[4])
	goto ORDER_425613;
else
	goto ORDER_415623;

ORDER_364251:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[4])
	goto ORDER_364251;
else if (*segments[1] >= *segments[2])
	goto ORDER_354261;
else if (*segments[1] >= *segments[0])
	goto ORDER_345261;
else if (*segments[1] >= *segments[3])
	goto ORDER_435261;
else if (*segments[1] >= *segments[5])
	goto ORDER_425361;
else
	goto ORDER_415362;

ORDER_364215:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[5])
	goto ORDER_364215;
else if (*segments[1] >= *segments[2])
	goto ORDER_354216;
else if (*segments[1] >= *segments[0])
	goto ORDER_345216;
else if (*segments[1] >= *segments[3])
	goto ORDER_435216;
else if (*segments[1] >= *segments[4])
	goto ORDER_425316;
else
	goto ORDER_415326;

ORDER_364152:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[4])
	goto ORDER_364152;
else if (*segments[1] >= *segments[2])
	goto ORDER_354162;
else if (*segments[1] >= *segments[0])
	goto ORDER_345162;
else if (*segments[1] >= *segments[5])
	goto ORDER_435162;
else if (*segments[1] >= *segments[3])
	goto ORDER_425163;
else
	goto ORDER_415263;

ORDER_364125:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[5])
	goto ORDER_364125;
else if (*segments[1] >= *segments[2])
	goto ORDER_354126;
else if (*segments[1] >= *segments[0])
	goto ORDER_345126;
else if (*segments[1] >= *segments[4])
	goto ORDER_435126;
else if (*segments[1] >= *segments[3])
	goto ORDER_425136;
else
	goto ORDER_415236;

ORDER_362541:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[3])
	goto ORDER_362541;
else if (*segments[1] >= *segments[4])
	goto ORDER_352641;
else if (*segments[1] >= *segments[0])
	goto ORDER_342651;
else if (*segments[1] >= *segments[2])
	goto ORDER_432651;
else if (*segments[1] >= *segments[5])
	goto ORDER_423651;
else
	goto ORDER_413652;

ORDER_362514:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[3])
	goto ORDER_362514;
else if (*segments[1] >= *segments[5])
	goto ORDER_352614;
else if (*segments[1] >= *segments[0])
	goto ORDER_342615;
else if (*segments[1] >= *segments[2])
	goto ORDER_432615;
else if (*segments[1] >= *segments[4])
	goto ORDER_423615;
else
	goto ORDER_413625;

ORDER_362451:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[4])
	goto ORDER_362451;
else if (*segments[1] >= *segments[3])
	goto ORDER_352461;
else if (*segments[1] >= *segments[0])
	goto ORDER_342561;
else if (*segments[1] >= *segments[2])
	goto ORDER_432561;
else if (*segments[1] >= *segments[5])
	goto ORDER_423561;
else
	goto ORDER_413562;

ORDER_362415:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[5])
	goto ORDER_362415;
else if (*segments[1] >= *segments[3])
	goto ORDER_352416;
else if (*segments[1] >= *segments[0])
	goto ORDER_342516;
else if (*segments[1] >= *segments[2])
	goto ORDER_432516;
else if (*segments[1] >= *segments[4])
	goto ORDER_423516;
else
	goto ORDER_413526;

ORDER_362154:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[4])
	goto ORDER_362154;
else if (*segments[1] >= *segments[5])
	goto ORDER_352164;
else if (*segments[1] >= *segments[0])
	goto ORDER_342165;
else if (*segments[1] >= *segments[2])
	goto ORDER_432165;
else if (*segments[1] >= *segments[3])
	goto ORDER_423165;
else
	goto ORDER_413265;

ORDER_362145:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[5])
	goto ORDER_362145;
else if (*segments[1] >= *segments[4])
	goto ORDER_352146;
else if (*segments[1] >= *segments[0])
	goto ORDER_342156;
else if (*segments[1] >= *segments[2])
	goto ORDER_432156;
else if (*segments[1] >= *segments[3])
	goto ORDER_423156;
else
	goto ORDER_413256;

ORDER_361542:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[3])
	goto ORDER_361542;
else if (*segments[1] >= *segments[4])
	goto ORDER_351642;
else if (*segments[1] >= *segments[0])
	goto ORDER_341652;
else if (*segments[1] >= *segments[5])
	goto ORDER_431652;
else if (*segments[1] >= *segments[2])
	goto ORDER_421653;
else
	goto ORDER_412653;

ORDER_361524:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[3])
	goto ORDER_361524;
else if (*segments[1] >= *segments[5])
	goto ORDER_351624;
else if (*segments[1] >= *segments[0])
	goto ORDER_341625;
else if (*segments[1] >= *segments[4])
	goto ORDER_431625;
else if (*segments[1] >= *segments[2])
	goto ORDER_421635;
else
	goto ORDER_412635;

ORDER_361452:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[4])
	goto ORDER_361452;
else if (*segments[1] >= *segments[3])
	goto ORDER_351462;
else if (*segments[1] >= *segments[0])
	goto ORDER_341562;
else if (*segments[1] >= *segments[5])
	goto ORDER_431562;
else if (*segments[1] >= *segments[2])
	goto ORDER_421563;
else
	goto ORDER_412563;

ORDER_361425:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[5])
	goto ORDER_361425;
else if (*segments[1] >= *segments[3])
	goto ORDER_351426;
else if (*segments[1] >= *segments[0])
	goto ORDER_341526;
else if (*segments[1] >= *segments[4])
	goto ORDER_431526;
else if (*segments[1] >= *segments[2])
	goto ORDER_421536;
else
	goto ORDER_412536;

ORDER_361254:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[4])
	goto ORDER_361254;
else if (*segments[1] >= *segments[5])
	goto ORDER_351264;
else if (*segments[1] >= *segments[0])
	goto ORDER_341265;
else if (*segments[1] >= *segments[3])
	goto ORDER_431265;
else if (*segments[1] >= *segments[2])
	goto ORDER_421365;
else
	goto ORDER_412365;

ORDER_361245:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[5])
	goto ORDER_361245;
else if (*segments[1] >= *segments[4])
	goto ORDER_351246;
else if (*segments[1] >= *segments[0])
	goto ORDER_341256;
else if (*segments[1] >= *segments[3])
	goto ORDER_431256;
else if (*segments[1] >= *segments[2])
	goto ORDER_421356;
else
	goto ORDER_412356;

ORDER_356421:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[1])
	goto ORDER_356421;
else if (*segments[2] >= *segments[3])
	goto ORDER_365421;
else if (*segments[2] >= *segments[0])
	goto ORDER_364521;
else if (*segments[2] >= *segments[4])
	goto ORDER_463521;
else if (*segments[2] >= *segments[5])
	goto ORDER_462531;
else
	goto ORDER_461532;

ORDER_356412:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[1])
	goto ORDER_356412;
else if (*segments[2] >= *segments[3])
	goto ORDER_365412;
else if (*segments[2] >= *segments[0])
	goto ORDER_364512;
else if (*segments[2] >= *segments[5])
	goto ORDER_463512;
else if (*segments[2] >= *segments[4])
	goto ORDER_462513;
else
	goto ORDER_461523;

ORDER_356241:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[1])
	goto ORDER_356241;
else if (*segments[2] >= *segments[4])
	goto ORDER_365241;
else if (*segments[2] >= *segments[0])
	goto ORDER_364251;
else if (*segments[2] >= *segments[3])
	goto ORDER_463251;
else if (*segments[2] >= *segments[5])
	goto ORDER_462351;
else
	goto ORDER_461352;

ORDER_356214:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[1])
	goto ORDER_356214;
else if (*segments[2] >= *segments[5])
	goto ORDER_365214;
else if (*segments[2] >= *segments[0])
	goto ORDER_364215;
else if (*segments[2] >= *segments[3])
	goto ORDER_463215;
else if (*segments[2] >= *segments[4])
	goto ORDER_462315;
else
	goto ORDER_461325;

ORDER_356142:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[1])
	goto ORDER_356142;
else if (*segments[2] >= *segments[4])
	goto ORDER_365142;
else if (*segments[2] >= *segments[0])
	goto ORDER_364152;
else if (*segments[2] >= *segments[5])
	goto ORDER_463152;
else if (*segments[2] >= *segments[3])
	goto ORDER_462153;
else
	goto ORDER_461253;

ORDER_356124:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[1])
	goto ORDER_356124;
else if (*segments[2] >= *segments[5])
	goto ORDER_365124;
else if (*segments[2] >= *segments[0])
	goto ORDER_364125;
else if (*segments[2] >= *segments[4])
	goto ORDER_463125;
else if (*segments[2] >= *segments[3])
	goto ORDER_462135;
else
	goto ORDER_461235;

ORDER_354621:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[1])
	goto ORDER_354621;
else if (*segments[3] >= *segments[2])
	goto ORDER_364521;
else if (*segments[3] >= *segments[0])
	goto ORDER_365421;
else if (*segments[3] >= *segments[4])
	goto ORDER_465321;
else if (*segments[3] >= *segments[5])
	goto ORDER_465231;
else
	goto ORDER_465132;

ORDER_354612:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[1])
	goto ORDER_354612;
else if (*segments[3] >= *segments[2])
	goto ORDER_364512;
else if (*segments[3] >= *segments[0])
	goto ORDER_365412;
else if (*segments[3] >= *segments[5])
	goto ORDER_465312;
else if (*segments[3] >= *segments[4])
	goto ORDER_465213;
else
	goto ORDER_465123;

ORDER_354261:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[1])
	goto ORDER_354261;
else if (*segments[4] >= *segments[2])
	goto ORDER_364251;
else if (*segments[4] >= *segments[0])
	goto ORDER_365241;
else if (*segments[4] >= *segments[3])
	goto ORDER_465231;
else if (*segments[4] >= *segments[5])
	goto ORDER_465321;
else
	goto ORDER_465312;

ORDER_354216:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[1])
	goto ORDER_354216;
else if (*segments[5] >= *segments[2])
	goto ORDER_364215;
else if (*segments[5] >= *segments[0])
	goto ORDER_365214;
else if (*segments[5] >= *segments[3])
	goto ORDER_465213;
else if (*segments[5] >= *segments[4])
	goto ORDER_465312;
else
	goto ORDER_465321;

ORDER_354162:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[1])
	goto ORDER_354162;
else if (*segments[4] >= *segments[2])
	goto ORDER_364152;
else if (*segments[4] >= *segments[0])
	goto ORDER_365142;
else if (*segments[4] >= *segments[5])
	goto ORDER_465132;
else if (*segments[4] >= *segments[3])
	goto ORDER_465123;
else
	goto ORDER_465213;

ORDER_354126:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[1])
	goto ORDER_354126;
else if (*segments[5] >= *segments[2])
	goto ORDER_364125;
else if (*segments[5] >= *segments[0])
	goto ORDER_365124;
else if (*segments[5] >= *segments[4])
	goto ORDER_465123;
else if (*segments[5] >= *segments[3])
	goto ORDER_465132;
else
	goto ORDER_465231;

ORDER_352641:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[1])
	goto ORDER_352641;
else if (*segments[3] >= *segments[4])
	goto ORDER_362541;
else if (*segments[3] >= *segments[0])
	goto ORDER_362451;
else if (*segments[3] >= *segments[2])
	goto ORDER_462351;
else if (*segments[3] >= *segments[5])
	goto ORDER_463251;
else
	goto ORDER_463152;

ORDER_352614:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[1])
	goto ORDER_352614;
else if (*segments[3] >= *segments[5])
	goto ORDER_362514;
else if (*segments[3] >= *segments[0])
	goto ORDER_362415;
else if (*segments[3] >= *segments[2])
	goto ORDER_462315;
else if (*segments[3] >= *segments[4])
	goto ORDER_463215;
else
	goto ORDER_463125;

ORDER_352461:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[1])
	goto ORDER_352461;
else if (*segments[4] >= *segments[3])
	goto ORDER_362451;
else if (*segments[4] >= *segments[0])
	goto ORDER_362541;
else if (*segments[4] >= *segments[2])
	goto ORDER_462531;
else if (*segments[4] >= *segments[5])
	goto ORDER_463521;
else
	goto ORDER_463512;

ORDER_352416:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[1])
	goto ORDER_352416;
else if (*segments[5] >= *segments[3])
	goto ORDER_362415;
else if (*segments[5] >= *segments[0])
	goto ORDER_362514;
else if (*segments[5] >= *segments[2])
	goto ORDER_462513;
else if (*segments[5] >= *segments[4])
	goto ORDER_463512;
else
	goto ORDER_463521;

ORDER_352164:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[1])
	goto ORDER_352164;
else if (*segments[4] >= *segments[5])
	goto ORDER_362154;
else if (*segments[4] >= *segments[0])
	goto ORDER_362145;
else if (*segments[4] >= *segments[2])
	goto ORDER_462135;
else if (*segments[4] >= *segments[3])
	goto ORDER_463125;
else
	goto ORDER_463215;

ORDER_352146:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[1])
	goto ORDER_352146;
else if (*segments[5] >= *segments[4])
	goto ORDER_362145;
else if (*segments[5] >= *segments[0])
	goto ORDER_362154;
else if (*segments[5] >= *segments[2])
	goto ORDER_462153;
else if (*segments[5] >= *segments[3])
	goto ORDER_463152;
else
	goto ORDER_463251;

ORDER_351642:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[1])
	goto ORDER_351642;
else if (*segments[3] >= *segments[4])
	goto ORDER_361542;
else if (*segments[3] >= *segments[0])
	goto ORDER_361452;
else if (*segments[3] >= *segments[5])
	goto ORDER_461352;
else if (*segments[3] >= *segments[2])
	goto ORDER_461253;
else
	goto ORDER_462153;

ORDER_351624:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[1])
	goto ORDER_351624;
else if (*segments[3] >= *segments[5])
	goto ORDER_361524;
else if (*segments[3] >= *segments[0])
	goto ORDER_361425;
else if (*segments[3] >= *segments[4])
	goto ORDER_461325;
else if (*segments[3] >= *segments[2])
	goto ORDER_461235;
else
	goto ORDER_462135;

ORDER_351462:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[1])
	goto ORDER_351462;
else if (*segments[4] >= *segments[3])
	goto ORDER_361452;
else if (*segments[4] >= *segments[0])
	goto ORDER_361542;
else if (*segments[4] >= *segments[5])
	goto ORDER_461532;
else if (*segments[4] >= *segments[2])
	goto ORDER_461523;
else
	goto ORDER_462513;

ORDER_351426:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[1])
	goto ORDER_351426;
else if (*segments[5] >= *segments[3])
	goto ORDER_361425;
else if (*segments[5] >= *segments[0])
	goto ORDER_361524;
else if (*segments[5] >= *segments[4])
	goto ORDER_461523;
else if (*segments[5] >= *segments[2])
	goto ORDER_461532;
else
	goto ORDER_462531;

ORDER_351264:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[1])
	goto ORDER_351264;
else if (*segments[4] >= *segments[5])
	goto ORDER_361254;
else if (*segments[4] >= *segments[0])
	goto ORDER_361245;
else if (*segments[4] >= *segments[3])
	goto ORDER_461235;
else if (*segments[4] >= *segments[2])
	goto ORDER_461325;
else
	goto ORDER_462315;

ORDER_351246:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[1])
	goto ORDER_351246;
else if (*segments[5] >= *segments[4])
	goto ORDER_361245;
else if (*segments[5] >= *segments[0])
	goto ORDER_361254;
else if (*segments[5] >= *segments[3])
	goto ORDER_461253;
else if (*segments[5] >= *segments[2])
	goto ORDER_461352;
else
	goto ORDER_462351;

ORDER_346521:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[3])
	goto ORDER_346521;
else if (*segments[2] >= *segments[1])
	goto ORDER_345621;
else if (*segments[2] >= *segments[0])
	goto ORDER_354621;
else if (*segments[2] >= *segments[4])
	goto ORDER_453621;
else if (*segments[2] >= *segments[5])
	goto ORDER_452631;
else
	goto ORDER_451632;

ORDER_346512:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[3])
	goto ORDER_346512;
else if (*segments[2] >= *segments[1])
	goto ORDER_345612;
else if (*segments[2] >= *segments[0])
	goto ORDER_354612;
else if (*segments[2] >= *segments[5])
	goto ORDER_453612;
else if (*segments[2] >= *segments[4])
	goto ORDER_452613;
else
	goto ORDER_451623;

ORDER_346251:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[4])
	goto ORDER_346251;
else if (*segments[2] >= *segments[1])
	goto ORDER_345261;
else if (*segments[2] >= *segments[0])
	goto ORDER_354261;
else if (*segments[2] >= *segments[3])
	goto ORDER_453261;
else if (*segments[2] >= *segments[5])
	goto ORDER_452361;
else
	goto ORDER_451362;

ORDER_346215:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[5])
	goto ORDER_346215;
else if (*segments[2] >= *segments[1])
	goto ORDER_345216;
else if (*segments[2] >= *segments[0])
	goto ORDER_354216;
else if (*segments[2] >= *segments[3])
	goto ORDER_453216;
else if (*segments[2] >= *segments[4])
	goto ORDER_452316;
else
	goto ORDER_451326;

ORDER_346152:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[4])
	goto ORDER_346152;
else if (*segments[2] >= *segments[1])
	goto ORDER_345162;
else if (*segments[2] >= *segments[0])
	goto ORDER_354162;
else if (*segments[2] >= *segments[5])
	goto ORDER_453162;
else if (*segments[2] >= *segments[3])
	goto ORDER_452163;
else
	goto ORDER_451263;

ORDER_346125:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[5])
	goto ORDER_346125;
else if (*segments[2] >= *segments[1])
	goto ORDER_345126;
else if (*segments[2] >= *segments[0])
	goto ORDER_354126;
else if (*segments[2] >= *segments[4])
	goto ORDER_453126;
else if (*segments[2] >= *segments[3])
	goto ORDER_452136;
else
	goto ORDER_451236;

ORDER_345621:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[2])
	goto ORDER_345621;
else if (*segments[3] >= *segments[1])
	goto ORDER_346521;
else if (*segments[3] >= *segments[0])
	goto ORDER_356421;
else if (*segments[3] >= *segments[4])
	goto ORDER_456321;
else if (*segments[3] >= *segments[5])
	goto ORDER_456231;
else
	goto ORDER_456132;

ORDER_345612:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[2])
	goto ORDER_345612;
else if (*segments[3] >= *segments[1])
	goto ORDER_346512;
else if (*segments[3] >= *segments[0])
	goto ORDER_356412;
else if (*segments[3] >= *segments[5])
	goto ORDER_456312;
else if (*segments[3] >= *segments[4])
	goto ORDER_456213;
else
	goto ORDER_456123;

ORDER_345261:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[2])
	goto ORDER_345261;
else if (*segments[4] >= *segments[1])
	goto ORDER_346251;
else if (*segments[4] >= *segments[0])
	goto ORDER_356241;
else if (*segments[4] >= *segments[3])
	goto ORDER_456231;
else if (*segments[4] >= *segments[5])
	goto ORDER_456321;
else
	goto ORDER_456312;

ORDER_345216:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[2])
	goto ORDER_345216;
else if (*segments[5] >= *segments[1])
	goto ORDER_346215;
else if (*segments[5] >= *segments[0])
	goto ORDER_356214;
else if (*segments[5] >= *segments[3])
	goto ORDER_456213;
else if (*segments[5] >= *segments[4])
	goto ORDER_456312;
else
	goto ORDER_456321;

ORDER_345162:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[2])
	goto ORDER_345162;
else if (*segments[4] >= *segments[1])
	goto ORDER_346152;
else if (*segments[4] >= *segments[0])
	goto ORDER_356142;
else if (*segments[4] >= *segments[5])
	goto ORDER_456132;
else if (*segments[4] >= *segments[3])
	goto ORDER_456123;
else
	goto ORDER_456213;

ORDER_345126:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[2])
	goto ORDER_345126;
else if (*segments[5] >= *segments[1])
	goto ORDER_346125;
else if (*segments[5] >= *segments[0])
	goto ORDER_356124;
else if (*segments[5] >= *segments[4])
	goto ORDER_456123;
else if (*segments[5] >= *segments[3])
	goto ORDER_456132;
else
	goto ORDER_456231;

ORDER_342651:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[4])
	goto ORDER_342651;
else if (*segments[3] >= *segments[1])
	goto ORDER_342561;
else if (*segments[3] >= *segments[0])
	goto ORDER_352461;
else if (*segments[3] >= *segments[2])
	goto ORDER_452361;
else if (*segments[3] >= *segments[5])
	goto ORDER_453261;
else
	goto ORDER_453162;

ORDER_342615:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[5])
	goto ORDER_342615;
else if (*segments[3] >= *segments[1])
	goto ORDER_342516;
else if (*segments[3] >= *segments[0])
	goto ORDER_352416;
else if (*segments[3] >= *segments[2])
	goto ORDER_452316;
else if (*segments[3] >= *segments[4])
	goto ORDER_453216;
else
	goto ORDER_453126;

ORDER_342561:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[3])
	goto ORDER_342561;
else if (*segments[4] >= *segments[1])
	goto ORDER_342651;
else if (*segments[4] >= *segments[0])
	goto ORDER_352641;
else if (*segments[4] >= *segments[2])
	goto ORDER_452631;
else if (*segments[4] >= *segments[5])
	goto ORDER_453621;
else
	goto ORDER_453612;

ORDER_342516:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[3])
	goto ORDER_342516;
else if (*segments[5] >= *segments[1])
	goto ORDER_342615;
else if (*segments[5] >= *segments[0])
	goto ORDER_352614;
else if (*segments[5] >= *segments[2])
	goto ORDER_452613;
else if (*segments[5] >= *segments[4])
	goto ORDER_453612;
else
	goto ORDER_453621;

ORDER_342165:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[5])
	goto ORDER_342165;
else if (*segments[4] >= *segments[1])
	goto ORDER_342156;
else if (*segments[4] >= *segments[0])
	goto ORDER_352146;
else if (*segments[4] >= *segments[2])
	goto ORDER_452136;
else if (*segments[4] >= *segments[3])
	goto ORDER_453126;
else
	goto ORDER_453216;

ORDER_342156:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[4])
	goto ORDER_342156;
else if (*segments[5] >= *segments[1])
	goto ORDER_342165;
else if (*segments[5] >= *segments[0])
	goto ORDER_352164;
else if (*segments[5] >= *segments[2])
	goto ORDER_452163;
else if (*segments[5] >= *segments[3])
	goto ORDER_453162;
else
	goto ORDER_453261;

ORDER_341652:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[4])
	goto ORDER_341652;
else if (*segments[3] >= *segments[1])
	goto ORDER_341562;
else if (*segments[3] >= *segments[0])
	goto ORDER_351462;
else if (*segments[3] >= *segments[5])
	goto ORDER_451362;
else if (*segments[3] >= *segments[2])
	goto ORDER_451263;
else
	goto ORDER_452163;

ORDER_341625:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[5])
	goto ORDER_341625;
else if (*segments[3] >= *segments[1])
	goto ORDER_341526;
else if (*segments[3] >= *segments[0])
	goto ORDER_351426;
else if (*segments[3] >= *segments[4])
	goto ORDER_451326;
else if (*segments[3] >= *segments[2])
	goto ORDER_451236;
else
	goto ORDER_452136;

ORDER_341562:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[3])
	goto ORDER_341562;
else if (*segments[4] >= *segments[1])
	goto ORDER_341652;
else if (*segments[4] >= *segments[0])
	goto ORDER_351642;
else if (*segments[4] >= *segments[5])
	goto ORDER_451632;
else if (*segments[4] >= *segments[2])
	goto ORDER_451623;
else
	goto ORDER_452613;

ORDER_341526:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[3])
	goto ORDER_341526;
else if (*segments[5] >= *segments[1])
	goto ORDER_341625;
else if (*segments[5] >= *segments[0])
	goto ORDER_351624;
else if (*segments[5] >= *segments[4])
	goto ORDER_451623;
else if (*segments[5] >= *segments[2])
	goto ORDER_451632;
else
	goto ORDER_452631;

ORDER_341265:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[5])
	goto ORDER_341265;
else if (*segments[4] >= *segments[1])
	goto ORDER_341256;
else if (*segments[4] >= *segments[0])
	goto ORDER_351246;
else if (*segments[4] >= *segments[3])
	goto ORDER_451236;
else if (*segments[4] >= *segments[2])
	goto ORDER_451326;
else
	goto ORDER_452316;

ORDER_341256:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[4])
	goto ORDER_341256;
else if (*segments[5] >= *segments[1])
	goto ORDER_341265;
else if (*segments[5] >= *segments[0])
	goto ORDER_351264;
else if (*segments[5] >= *segments[3])
	goto ORDER_451263;
else if (*segments[5] >= *segments[2])
	goto ORDER_451362;
else
	goto ORDER_452361;

ORDER_326541:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[3])
	goto ORDER_326541;
else if (*segments[2] >= *segments[4])
	goto ORDER_325641;
else if (*segments[2] >= *segments[0])
	goto ORDER_324651;
else if (*segments[2] >= *segments[1])
	goto ORDER_423651;
else if (*segments[2] >= *segments[5])
	goto ORDER_432651;
else
	goto ORDER_431652;

ORDER_326514:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[3])
	goto ORDER_326514;
else if (*segments[2] >= *segments[5])
	goto ORDER_325614;
else if (*segments[2] >= *segments[0])
	goto ORDER_324615;
else if (*segments[2] >= *segments[1])
	goto ORDER_423615;
else if (*segments[2] >= *segments[4])
	goto ORDER_432615;
else
	goto ORDER_431625;

ORDER_326451:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[4])
	goto ORDER_326451;
else if (*segments[2] >= *segments[3])
	goto ORDER_325461;
else if (*segments[2] >= *segments[0])
	goto ORDER_324561;
else if (*segments[2] >= *segments[1])
	goto ORDER_423561;
else if (*segments[2] >= *segments[5])
	goto ORDER_432561;
else
	goto ORDER_431562;

ORDER_326415:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[5])
	goto ORDER_326415;
else if (*segments[2] >= *segments[3])
	goto ORDER_325416;
else if (*segments[2] >= *segments[0])
	goto ORDER_324516;
else if (*segments[2] >= *segments[1])
	goto ORDER_423516;
else if (*segments[2] >= *segments[4])
	goto ORDER_432516;
else
	goto ORDER_431526;

ORDER_326154:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[4])
	goto ORDER_326154;
else if (*segments[2] >= *segments[5])
	goto ORDER_325164;
else if (*segments[2] >= *segments[0])
	goto ORDER_324165;
else if (*segments[2] >= *segments[1])
	goto ORDER_423165;
else if (*segments[2] >= *segments[3])
	goto ORDER_432165;
else
	goto ORDER_431265;

ORDER_326145:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[5])
	goto ORDER_326145;
else if (*segments[2] >= *segments[4])
	goto ORDER_325146;
else if (*segments[2] >= *segments[0])
	goto ORDER_324156;
else if (*segments[2] >= *segments[1])
	goto ORDER_423156;
else if (*segments[2] >= *segments[3])
	goto ORDER_432156;
else
	goto ORDER_431256;

ORDER_325641:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[2])
	goto ORDER_325641;
else if (*segments[3] >= *segments[4])
	goto ORDER_326541;
else if (*segments[3] >= *segments[0])
	goto ORDER_326451;
else if (*segments[3] >= *segments[1])
	goto ORDER_426351;
else if (*segments[3] >= *segments[5])
	goto ORDER_436251;
else
	goto ORDER_436152;

ORDER_325614:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[2])
	goto ORDER_325614;
else if (*segments[3] >= *segments[5])
	goto ORDER_326514;
else if (*segments[3] >= *segments[0])
	goto ORDER_326415;
else if (*segments[3] >= *segments[1])
	goto ORDER_426315;
else if (*segments[3] >= *segments[4])
	goto ORDER_436215;
else
	goto ORDER_436125;

ORDER_325461:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[2])
	goto ORDER_325461;
else if (*segments[4] >= *segments[3])
	goto ORDER_326451;
else if (*segments[4] >= *segments[0])
	goto ORDER_326541;
else if (*segments[4] >= *segments[1])
	goto ORDER_426531;
else if (*segments[4] >= *segments[5])
	goto ORDER_436521;
else
	goto ORDER_436512;

ORDER_325416:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[2])
	goto ORDER_325416;
else if (*segments[5] >= *segments[3])
	goto ORDER_326415;
else if (*segments[5] >= *segments[0])
	goto ORDER_326514;
else if (*segments[5] >= *segments[1])
	goto ORDER_426513;
else if (*segments[5] >= *segments[4])
	goto ORDER_436512;
else
	goto ORDER_436521;

ORDER_325164:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[2])
	goto ORDER_325164;
else if (*segments[4] >= *segments[5])
	goto ORDER_326154;
else if (*segments[4] >= *segments[0])
	goto ORDER_326145;
else if (*segments[4] >= *segments[1])
	goto ORDER_426135;
else if (*segments[4] >= *segments[3])
	goto ORDER_436125;
else
	goto ORDER_436215;

ORDER_325146:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[2])
	goto ORDER_325146;
else if (*segments[5] >= *segments[4])
	goto ORDER_326145;
else if (*segments[5] >= *segments[0])
	goto ORDER_326154;
else if (*segments[5] >= *segments[1])
	goto ORDER_426153;
else if (*segments[5] >= *segments[3])
	goto ORDER_436152;
else
	goto ORDER_436251;

ORDER_324651:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[4])
	goto ORDER_324651;
else if (*segments[3] >= *segments[2])
	goto ORDER_324561;
else if (*segments[3] >= *segments[0])
	goto ORDER_325461;
else if (*segments[3] >= *segments[1])
	goto ORDER_425361;
else if (*segments[3] >= *segments[5])
	goto ORDER_435261;
else
	goto ORDER_435162;

ORDER_324615:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[5])
	goto ORDER_324615;
else if (*segments[3] >= *segments[2])
	goto ORDER_324516;
else if (*segments[3] >= *segments[0])
	goto ORDER_325416;
else if (*segments[3] >= *segments[1])
	goto ORDER_425316;
else if (*segments[3] >= *segments[4])
	goto ORDER_435216;
else
	goto ORDER_435126;

ORDER_324561:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[3])
	goto ORDER_324561;
else if (*segments[4] >= *segments[2])
	goto ORDER_324651;
else if (*segments[4] >= *segments[0])
	goto ORDER_325641;
else if (*segments[4] >= *segments[1])
	goto ORDER_425631;
else if (*segments[4] >= *segments[5])
	goto ORDER_435621;
else
	goto ORDER_435612;

ORDER_324516:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[3])
	goto ORDER_324516;
else if (*segments[5] >= *segments[2])
	goto ORDER_324615;
else if (*segments[5] >= *segments[0])
	goto ORDER_325614;
else if (*segments[5] >= *segments[1])
	goto ORDER_425613;
else if (*segments[5] >= *segments[4])
	goto ORDER_435612;
else
	goto ORDER_435621;

ORDER_324165:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[5])
	goto ORDER_324165;
else if (*segments[4] >= *segments[2])
	goto ORDER_324156;
else if (*segments[4] >= *segments[0])
	goto ORDER_325146;
else if (*segments[4] >= *segments[1])
	goto ORDER_425136;
else if (*segments[4] >= *segments[3])
	goto ORDER_435126;
else
	goto ORDER_435216;

ORDER_324156:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[4])
	goto ORDER_324156;
else if (*segments[5] >= *segments[2])
	goto ORDER_324165;
else if (*segments[5] >= *segments[0])
	goto ORDER_325164;
else if (*segments[5] >= *segments[1])
	goto ORDER_425163;
else if (*segments[5] >= *segments[3])
	goto ORDER_435162;
else
	goto ORDER_435261;

ORDER_321654:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[4])
	goto ORDER_321654;
else if (*segments[3] >= *segments[5])
	goto ORDER_321564;
else if (*segments[3] >= *segments[0])
	goto ORDER_321465;
else if (*segments[3] >= *segments[1])
	goto ORDER_421365;
else if (*segments[3] >= *segments[2])
	goto ORDER_431265;
else
	goto ORDER_432165;

ORDER_321645:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[5])
	goto ORDER_321645;
else if (*segments[3] >= *segments[4])
	goto ORDER_321546;
else if (*segments[3] >= *segments[0])
	goto ORDER_321456;
else if (*segments[3] >= *segments[1])
	goto ORDER_421356;
else if (*segments[3] >= *segments[2])
	goto ORDER_431256;
else
	goto ORDER_432156;

ORDER_321564:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[3])
	goto ORDER_321564;
else if (*segments[4] >= *segments[5])
	goto ORDER_321654;
else if (*segments[4] >= *segments[0])
	goto ORDER_321645;
else if (*segments[4] >= *segments[1])
	goto ORDER_421635;
else if (*segments[4] >= *segments[2])
	goto ORDER_431625;
else
	goto ORDER_432615;

ORDER_321546:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[3])
	goto ORDER_321546;
else if (*segments[5] >= *segments[4])
	goto ORDER_321645;
else if (*segments[5] >= *segments[0])
	goto ORDER_321654;
else if (*segments[5] >= *segments[1])
	goto ORDER_421653;
else if (*segments[5] >= *segments[2])
	goto ORDER_431652;
else
	goto ORDER_432651;

ORDER_321465:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[5])
	goto ORDER_321465;
else if (*segments[4] >= *segments[3])
	goto ORDER_321456;
else if (*segments[4] >= *segments[0])
	goto ORDER_321546;
else if (*segments[4] >= *segments[1])
	goto ORDER_421536;
else if (*segments[4] >= *segments[2])
	goto ORDER_431526;
else
	goto ORDER_432516;

ORDER_321456:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[4])
	goto ORDER_321456;
else if (*segments[5] >= *segments[3])
	goto ORDER_321465;
else if (*segments[5] >= *segments[0])
	goto ORDER_321564;
else if (*segments[5] >= *segments[1])
	goto ORDER_421563;
else if (*segments[5] >= *segments[2])
	goto ORDER_431562;
else
	goto ORDER_432561;

ORDER_316542:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[3])
	goto ORDER_316542;
else if (*segments[2] >= *segments[4])
	goto ORDER_315642;
else if (*segments[2] >= *segments[0])
	goto ORDER_314652;
else if (*segments[2] >= *segments[5])
	goto ORDER_413652;
else if (*segments[2] >= *segments[1])
	goto ORDER_412653;
else
	goto ORDER_421653;

ORDER_316524:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[3])
	goto ORDER_316524;
else if (*segments[2] >= *segments[5])
	goto ORDER_315624;
else if (*segments[2] >= *segments[0])
	goto ORDER_314625;
else if (*segments[2] >= *segments[4])
	goto ORDER_413625;
else if (*segments[2] >= *segments[1])
	goto ORDER_412635;
else
	goto ORDER_421635;

ORDER_316452:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[4])
	goto ORDER_316452;
else if (*segments[2] >= *segments[3])
	goto ORDER_315462;
else if (*segments[2] >= *segments[0])
	goto ORDER_314562;
else if (*segments[2] >= *segments[5])
	goto ORDER_413562;
else if (*segments[2] >= *segments[1])
	goto ORDER_412563;
else
	goto ORDER_421563;

ORDER_316425:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[5])
	goto ORDER_316425;
else if (*segments[2] >= *segments[3])
	goto ORDER_315426;
else if (*segments[2] >= *segments[0])
	goto ORDER_314526;
else if (*segments[2] >= *segments[4])
	goto ORDER_413526;
else if (*segments[2] >= *segments[1])
	goto ORDER_412536;
else
	goto ORDER_421536;

ORDER_316254:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[4])
	goto ORDER_316254;
else if (*segments[2] >= *segments[5])
	goto ORDER_315264;
else if (*segments[2] >= *segments[0])
	goto ORDER_314265;
else if (*segments[2] >= *segments[3])
	goto ORDER_413265;
else if (*segments[2] >= *segments[1])
	goto ORDER_412365;
else
	goto ORDER_421365;

ORDER_316245:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[5])
	goto ORDER_316245;
else if (*segments[2] >= *segments[4])
	goto ORDER_315246;
else if (*segments[2] >= *segments[0])
	goto ORDER_314256;
else if (*segments[2] >= *segments[3])
	goto ORDER_413256;
else if (*segments[2] >= *segments[1])
	goto ORDER_412356;
else
	goto ORDER_421356;

ORDER_315642:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[2])
	goto ORDER_315642;
else if (*segments[3] >= *segments[4])
	goto ORDER_316542;
else if (*segments[3] >= *segments[0])
	goto ORDER_316452;
else if (*segments[3] >= *segments[5])
	goto ORDER_416352;
else if (*segments[3] >= *segments[1])
	goto ORDER_416253;
else
	goto ORDER_426153;

ORDER_315624:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[2])
	goto ORDER_315624;
else if (*segments[3] >= *segments[5])
	goto ORDER_316524;
else if (*segments[3] >= *segments[0])
	goto ORDER_316425;
else if (*segments[3] >= *segments[4])
	goto ORDER_416325;
else if (*segments[3] >= *segments[1])
	goto ORDER_416235;
else
	goto ORDER_426135;

ORDER_315462:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[2])
	goto ORDER_315462;
else if (*segments[4] >= *segments[3])
	goto ORDER_316452;
else if (*segments[4] >= *segments[0])
	goto ORDER_316542;
else if (*segments[4] >= *segments[5])
	goto ORDER_416532;
else if (*segments[4] >= *segments[1])
	goto ORDER_416523;
else
	goto ORDER_426513;

ORDER_315426:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[2])
	goto ORDER_315426;
else if (*segments[5] >= *segments[3])
	goto ORDER_316425;
else if (*segments[5] >= *segments[0])
	goto ORDER_316524;
else if (*segments[5] >= *segments[4])
	goto ORDER_416523;
else if (*segments[5] >= *segments[1])
	goto ORDER_416532;
else
	goto ORDER_426531;

ORDER_315264:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[2])
	goto ORDER_315264;
else if (*segments[4] >= *segments[5])
	goto ORDER_316254;
else if (*segments[4] >= *segments[0])
	goto ORDER_316245;
else if (*segments[4] >= *segments[3])
	goto ORDER_416235;
else if (*segments[4] >= *segments[1])
	goto ORDER_416325;
else
	goto ORDER_426315;

ORDER_315246:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[2])
	goto ORDER_315246;
else if (*segments[5] >= *segments[4])
	goto ORDER_316245;
else if (*segments[5] >= *segments[0])
	goto ORDER_316254;
else if (*segments[5] >= *segments[3])
	goto ORDER_416253;
else if (*segments[5] >= *segments[1])
	goto ORDER_416352;
else
	goto ORDER_426351;

ORDER_314652:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[4])
	goto ORDER_314652;
else if (*segments[3] >= *segments[2])
	goto ORDER_314562;
else if (*segments[3] >= *segments[0])
	goto ORDER_315462;
else if (*segments[3] >= *segments[5])
	goto ORDER_415362;
else if (*segments[3] >= *segments[1])
	goto ORDER_415263;
else
	goto ORDER_425163;

ORDER_314625:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[5])
	goto ORDER_314625;
else if (*segments[3] >= *segments[2])
	goto ORDER_314526;
else if (*segments[3] >= *segments[0])
	goto ORDER_315426;
else if (*segments[3] >= *segments[4])
	goto ORDER_415326;
else if (*segments[3] >= *segments[1])
	goto ORDER_415236;
else
	goto ORDER_425136;

ORDER_314562:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[3])
	goto ORDER_314562;
else if (*segments[4] >= *segments[2])
	goto ORDER_314652;
else if (*segments[4] >= *segments[0])
	goto ORDER_315642;
else if (*segments[4] >= *segments[5])
	goto ORDER_415632;
else if (*segments[4] >= *segments[1])
	goto ORDER_415623;
else
	goto ORDER_425613;

ORDER_314526:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[3])
	goto ORDER_314526;
else if (*segments[5] >= *segments[2])
	goto ORDER_314625;
else if (*segments[5] >= *segments[0])
	goto ORDER_315624;
else if (*segments[5] >= *segments[4])
	goto ORDER_415623;
else if (*segments[5] >= *segments[1])
	goto ORDER_415632;
else
	goto ORDER_425631;

ORDER_314265:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[5])
	goto ORDER_314265;
else if (*segments[4] >= *segments[2])
	goto ORDER_314256;
else if (*segments[4] >= *segments[0])
	goto ORDER_315246;
else if (*segments[4] >= *segments[3])
	goto ORDER_415236;
else if (*segments[4] >= *segments[1])
	goto ORDER_415326;
else
	goto ORDER_425316;

ORDER_314256:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[4])
	goto ORDER_314256;
else if (*segments[5] >= *segments[2])
	goto ORDER_314265;
else if (*segments[5] >= *segments[0])
	goto ORDER_315264;
else if (*segments[5] >= *segments[3])
	goto ORDER_415263;
else if (*segments[5] >= *segments[1])
	goto ORDER_415362;
else
	goto ORDER_425361;

ORDER_312654:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[4])
	goto ORDER_312654;
else if (*segments[3] >= *segments[5])
	goto ORDER_312564;
else if (*segments[3] >= *segments[0])
	goto ORDER_312465;
else if (*segments[3] >= *segments[2])
	goto ORDER_412365;
else if (*segments[3] >= *segments[1])
	goto ORDER_413265;
else
	goto ORDER_423165;

ORDER_312645:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[5])
	goto ORDER_312645;
else if (*segments[3] >= *segments[4])
	goto ORDER_312546;
else if (*segments[3] >= *segments[0])
	goto ORDER_312456;
else if (*segments[3] >= *segments[2])
	goto ORDER_412356;
else if (*segments[3] >= *segments[1])
	goto ORDER_413256;
else
	goto ORDER_423156;

ORDER_312564:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[3])
	goto ORDER_312564;
else if (*segments[4] >= *segments[5])
	goto ORDER_312654;
else if (*segments[4] >= *segments[0])
	goto ORDER_312645;
else if (*segments[4] >= *segments[2])
	goto ORDER_412635;
else if (*segments[4] >= *segments[1])
	goto ORDER_413625;
else
	goto ORDER_423615;

ORDER_312546:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[3])
	goto ORDER_312546;
else if (*segments[5] >= *segments[4])
	goto ORDER_312645;
else if (*segments[5] >= *segments[0])
	goto ORDER_312654;
else if (*segments[5] >= *segments[2])
	goto ORDER_412653;
else if (*segments[5] >= *segments[1])
	goto ORDER_413652;
else
	goto ORDER_423651;

ORDER_312465:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[5])
	goto ORDER_312465;
else if (*segments[4] >= *segments[3])
	goto ORDER_312456;
else if (*segments[4] >= *segments[0])
	goto ORDER_312546;
else if (*segments[4] >= *segments[2])
	goto ORDER_412536;
else if (*segments[4] >= *segments[1])
	goto ORDER_413526;
else
	goto ORDER_423516;

ORDER_312456:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[4])
	goto ORDER_312456;
else if (*segments[5] >= *segments[3])
	goto ORDER_312465;
else if (*segments[5] >= *segments[0])
	goto ORDER_312564;
else if (*segments[5] >= *segments[2])
	goto ORDER_412563;
else if (*segments[5] >= *segments[1])
	goto ORDER_413562;
else
	goto ORDER_423561;

ORDER_265431:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[2])
	goto ORDER_265431;
else if (*segments[1] >= *segments[3])
	goto ORDER_256431;
else if (*segments[1] >= *segments[4])
	goto ORDER_246531;
else if (*segments[1] >= *segments[0])
	goto ORDER_236541;
else if (*segments[1] >= *segments[5])
	goto ORDER_326541;
else
	goto ORDER_316542;

ORDER_265413:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[2])
	goto ORDER_265413;
else if (*segments[1] >= *segments[3])
	goto ORDER_256413;
else if (*segments[1] >= *segments[5])
	goto ORDER_246513;
else if (*segments[1] >= *segments[0])
	goto ORDER_236514;
else if (*segments[1] >= *segments[4])
	goto ORDER_326514;
else
	goto ORDER_316524;

ORDER_265341:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[2])
	goto ORDER_265341;
else if (*segments[1] >= *segments[4])
	goto ORDER_256341;
else if (*segments[1] >= *segments[3])
	goto ORDER_246351;
else if (*segments[1] >= *segments[0])
	goto ORDER_236451;
else if (*segments[1] >= *segments[5])
	goto ORDER_326451;
else
	goto ORDER_316452;

ORDER_265314:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[2])
	goto ORDER_265314;
else if (*segments[1] >= *segments[5])
	goto ORDER_256314;
else if (*segments[1] >= *segments[3])
	goto ORDER_246315;
else if (*segments[1] >= *segments[0])
	goto ORDER_236415;
else if (*segments[1] >= *segments[4])
	goto ORDER_326415;
else
	goto ORDER_316425;

ORDER_265143:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[2])
	goto ORDER_265143;
else if (*segments[1] >= *segments[4])
	goto ORDER_256143;
else if (*segments[1] >= *segments[5])
	goto ORDER_246153;
else if (*segments[1] >= *segments[0])
	goto ORDER_236154;
else if (*segments[1] >= *segments[3])
	goto ORDER_326154;
else
	goto ORDER_316254;

ORDER_265134:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[2])
	goto ORDER_265134;
else if (*segments[1] >= *segments[5])
	goto ORDER_256134;
else if (*segments[1] >= *segments[4])
	goto ORDER_246135;
else if (*segments[1] >= *segments[0])
	goto ORDER_236145;
else if (*segments[1] >= *segments[3])
	goto ORDER_326145;
else
	goto ORDER_316245;

ORDER_264531:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[3])
	goto ORDER_264531;
else if (*segments[1] >= *segments[2])
	goto ORDER_254631;
else if (*segments[1] >= *segments[4])
	goto ORDER_245631;
else if (*segments[1] >= *segments[0])
	goto ORDER_235641;
else if (*segments[1] >= *segments[5])
	goto ORDER_325641;
else
	goto ORDER_315642;

ORDER_264513:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[3])
	goto ORDER_264513;
else if (*segments[1] >= *segments[2])
	goto ORDER_254613;
else if (*segments[1] >= *segments[5])
	goto ORDER_245613;
else if (*segments[1] >= *segments[0])
	goto ORDER_235614;
else if (*segments[1] >= *segments[4])
	goto ORDER_325614;
else
	goto ORDER_315624;

ORDER_264351:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[4])
	goto ORDER_264351;
else if (*segments[1] >= *segments[2])
	goto ORDER_254361;
else if (*segments[1] >= *segments[3])
	goto ORDER_245361;
else if (*segments[1] >= *segments[0])
	goto ORDER_235461;
else if (*segments[1] >= *segments[5])
	goto ORDER_325461;
else
	goto ORDER_315462;

ORDER_264315:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[5])
	goto ORDER_264315;
else if (*segments[1] >= *segments[2])
	goto ORDER_254316;
else if (*segments[1] >= *segments[3])
	goto ORDER_245316;
else if (*segments[1] >= *segments[0])
	goto ORDER_235416;
else if (*segments[1] >= *segments[4])
	goto ORDER_325416;
else
	goto ORDER_315426;

ORDER_264153:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[4])
	goto ORDER_264153;
else if (*segments[1] >= *segments[2])
	goto ORDER_254163;
else if (*segments[1] >= *segments[5])
	goto ORDER_245163;
else if (*segments[1] >= *segments[0])
	goto ORDER_235164;
else if (*segments[1] >= *segments[3])
	goto ORDER_325164;
else
	goto ORDER_315264;

ORDER_264135:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[5])
	goto ORDER_264135;
else if (*segments[1] >= *segments[2])
	goto ORDER_254136;
else if (*segments[1] >= *segments[4])
	goto ORDER_245136;
else if (*segments[1] >= *segments[0])
	goto ORDER_235146;
else if (*segments[1] >= *segments[3])
	goto ORDER_325146;
else
	goto ORDER_315246;

ORDER_263541:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[3])
	goto ORDER_263541;
else if (*segments[1] >= *segments[4])
	goto ORDER_253641;
else if (*segments[1] >= *segments[2])
	goto ORDER_243651;
else if (*segments[1] >= *segments[0])
	goto ORDER_234651;
else if (*segments[1] >= *segments[5])
	goto ORDER_324651;
else
	goto ORDER_314652;

ORDER_263514:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[3])
	goto ORDER_263514;
else if (*segments[1] >= *segments[5])
	goto ORDER_253614;
else if (*segments[1] >= *segments[2])
	goto ORDER_243615;
else if (*segments[1] >= *segments[0])
	goto ORDER_234615;
else if (*segments[1] >= *segments[4])
	goto ORDER_324615;
else
	goto ORDER_314625;

ORDER_263451:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[4])
	goto ORDER_263451;
else if (*segments[1] >= *segments[3])
	goto ORDER_253461;
else if (*segments[1] >= *segments[2])
	goto ORDER_243561;
else if (*segments[1] >= *segments[0])
	goto ORDER_234561;
else if (*segments[1] >= *segments[5])
	goto ORDER_324561;
else
	goto ORDER_314562;

ORDER_263415:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[5])
	goto ORDER_263415;
else if (*segments[1] >= *segments[3])
	goto ORDER_253416;
else if (*segments[1] >= *segments[2])
	goto ORDER_243516;
else if (*segments[1] >= *segments[0])
	goto ORDER_234516;
else if (*segments[1] >= *segments[4])
	goto ORDER_324516;
else
	goto ORDER_314526;

ORDER_263154:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[4])
	goto ORDER_263154;
else if (*segments[1] >= *segments[5])
	goto ORDER_253164;
else if (*segments[1] >= *segments[2])
	goto ORDER_243165;
else if (*segments[1] >= *segments[0])
	goto ORDER_234165;
else if (*segments[1] >= *segments[3])
	goto ORDER_324165;
else
	goto ORDER_314265;

ORDER_263145:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[5])
	goto ORDER_263145;
else if (*segments[1] >= *segments[4])
	goto ORDER_253146;
else if (*segments[1] >= *segments[2])
	goto ORDER_243156;
else if (*segments[1] >= *segments[0])
	goto ORDER_234156;
else if (*segments[1] >= *segments[3])
	goto ORDER_324156;
else
	goto ORDER_314256;

ORDER_261543:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[3])
	goto ORDER_261543;
else if (*segments[1] >= *segments[4])
	goto ORDER_251643;
else if (*segments[1] >= *segments[5])
	goto ORDER_241653;
else if (*segments[1] >= *segments[0])
	goto ORDER_231654;
else if (*segments[1] >= *segments[2])
	goto ORDER_321654;
else
	goto ORDER_312654;

ORDER_261534:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[3])
	goto ORDER_261534;
else if (*segments[1] >= *segments[5])
	goto ORDER_251634;
else if (*segments[1] >= *segments[4])
	goto ORDER_241635;
else if (*segments[1] >= *segments[0])
	goto ORDER_231645;
else if (*segments[1] >= *segments[2])
	goto ORDER_321645;
else
	goto ORDER_312645;

ORDER_261453:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[4])
	goto ORDER_261453;
else if (*segments[1] >= *segments[3])
	goto ORDER_251463;
else if (*segments[1] >= *segments[5])
	goto ORDER_241563;
else if (*segments[1] >= *segments[0])
	goto ORDER_231564;
else if (*segments[1] >= *segments[2])
	goto ORDER_321564;
else
	goto ORDER_312564;

ORDER_261435:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[5])
	goto ORDER_261435;
else if (*segments[1] >= *segments[3])
	goto ORDER_251436;
else if (*segments[1] >= *segments[4])
	goto ORDER_241536;
else if (*segments[1] >= *segments[0])
	goto ORDER_231546;
else if (*segments[1] >= *segments[2])
	goto ORDER_321546;
else
	goto ORDER_312546;

ORDER_261354:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[4])
	goto ORDER_261354;
else if (*segments[1] >= *segments[5])
	goto ORDER_251364;
else if (*segments[1] >= *segments[3])
	goto ORDER_241365;
else if (*segments[1] >= *segments[0])
	goto ORDER_231465;
else if (*segments[1] >= *segments[2])
	goto ORDER_321465;
else
	goto ORDER_312465;

ORDER_261345:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[5])
	goto ORDER_261345;
else if (*segments[1] >= *segments[4])
	goto ORDER_251346;
else if (*segments[1] >= *segments[3])
	goto ORDER_241356;
else if (*segments[1] >= *segments[0])
	goto ORDER_231456;
else if (*segments[1] >= *segments[2])
	goto ORDER_321456;
else
	goto ORDER_312456;

ORDER_256431:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[1])
	goto ORDER_256431;
else if (*segments[2] >= *segments[3])
	goto ORDER_265431;
else if (*segments[2] >= *segments[4])
	goto ORDER_264531;
else if (*segments[2] >= *segments[0])
	goto ORDER_263541;
else if (*segments[2] >= *segments[5])
	goto ORDER_362541;
else
	goto ORDER_361542;

ORDER_256413:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[1])
	goto ORDER_256413;
else if (*segments[2] >= *segments[3])
	goto ORDER_265413;
else if (*segments[2] >= *segments[5])
	goto ORDER_264513;
else if (*segments[2] >= *segments[0])
	goto ORDER_263514;
else if (*segments[2] >= *segments[4])
	goto ORDER_362514;
else
	goto ORDER_361524;

ORDER_256341:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[1])
	goto ORDER_256341;
else if (*segments[2] >= *segments[4])
	goto ORDER_265341;
else if (*segments[2] >= *segments[3])
	goto ORDER_264351;
else if (*segments[2] >= *segments[0])
	goto ORDER_263451;
else if (*segments[2] >= *segments[5])
	goto ORDER_362451;
else
	goto ORDER_361452;

ORDER_256314:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[1])
	goto ORDER_256314;
else if (*segments[2] >= *segments[5])
	goto ORDER_265314;
else if (*segments[2] >= *segments[3])
	goto ORDER_264315;
else if (*segments[2] >= *segments[0])
	goto ORDER_263415;
else if (*segments[2] >= *segments[4])
	goto ORDER_362415;
else
	goto ORDER_361425;

ORDER_256143:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[1])
	goto ORDER_256143;
else if (*segments[2] >= *segments[4])
	goto ORDER_265143;
else if (*segments[2] >= *segments[5])
	goto ORDER_264153;
else if (*segments[2] >= *segments[0])
	goto ORDER_263154;
else if (*segments[2] >= *segments[3])
	goto ORDER_362154;
else
	goto ORDER_361254;

ORDER_256134:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[1])
	goto ORDER_256134;
else if (*segments[2] >= *segments[5])
	goto ORDER_265134;
else if (*segments[2] >= *segments[4])
	goto ORDER_264135;
else if (*segments[2] >= *segments[0])
	goto ORDER_263145;
else if (*segments[2] >= *segments[3])
	goto ORDER_362145;
else
	goto ORDER_361245;

ORDER_254631:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[1])
	goto ORDER_254631;
else if (*segments[3] >= *segments[2])
	goto ORDER_264531;
else if (*segments[3] >= *segments[4])
	goto ORDER_265431;
else if (*segments[3] >= *segments[0])
	goto ORDER_265341;
else if (*segments[3] >= *segments[5])
	goto ORDER_365241;
else
	goto ORDER_365142;

ORDER_254613:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[1])
	goto ORDER_254613;
else if (*segments[3] >= *segments[2])
	goto ORDER_264513;
else if (*segments[3] >= *segments[5])
	goto ORDER_265413;
else if (*segments[3] >= *segments[0])
	goto ORDER_265314;
else if (*segments[3] >= *segments[4])
	goto ORDER_365214;
else
	goto ORDER_365124;

ORDER_254361:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[1])
	goto ORDER_254361;
else if (*segments[4] >= *segments[2])
	goto ORDER_264351;
else if (*segments[4] >= *segments[3])
	goto ORDER_265341;
else if (*segments[4] >= *segments[0])
	goto ORDER_265431;
else if (*segments[4] >= *segments[5])
	goto ORDER_365421;
else
	goto ORDER_365412;

ORDER_254316:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[1])
	goto ORDER_254316;
else if (*segments[5] >= *segments[2])
	goto ORDER_264315;
else if (*segments[5] >= *segments[3])
	goto ORDER_265314;
else if (*segments[5] >= *segments[0])
	goto ORDER_265413;
else if (*segments[5] >= *segments[4])
	goto ORDER_365412;
else
	goto ORDER_365421;

ORDER_254163:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[1])
	goto ORDER_254163;
else if (*segments[4] >= *segments[2])
	goto ORDER_264153;
else if (*segments[4] >= *segments[5])
	goto ORDER_265143;
else if (*segments[4] >= *segments[0])
	goto ORDER_265134;
else if (*segments[4] >= *segments[3])
	goto ORDER_365124;
else
	goto ORDER_365214;

ORDER_254136:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[1])
	goto ORDER_254136;
else if (*segments[5] >= *segments[2])
	goto ORDER_264135;
else if (*segments[5] >= *segments[4])
	goto ORDER_265134;
else if (*segments[5] >= *segments[0])
	goto ORDER_265143;
else if (*segments[5] >= *segments[3])
	goto ORDER_365142;
else
	goto ORDER_365241;

ORDER_253641:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[1])
	goto ORDER_253641;
else if (*segments[3] >= *segments[4])
	goto ORDER_263541;
else if (*segments[3] >= *segments[2])
	goto ORDER_263451;
else if (*segments[3] >= *segments[0])
	goto ORDER_264351;
else if (*segments[3] >= *segments[5])
	goto ORDER_364251;
else
	goto ORDER_364152;

ORDER_253614:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[1])
	goto ORDER_253614;
else if (*segments[3] >= *segments[5])
	goto ORDER_263514;
else if (*segments[3] >= *segments[2])
	goto ORDER_263415;
else if (*segments[3] >= *segments[0])
	goto ORDER_264315;
else if (*segments[3] >= *segments[4])
	goto ORDER_364215;
else
	goto ORDER_364125;

ORDER_253461:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[1])
	goto ORDER_253461;
else if (*segments[4] >= *segments[3])
	goto ORDER_263451;
else if (*segments[4] >= *segments[2])
	goto ORDER_263541;
else if (*segments[4] >= *segments[0])
	goto ORDER_264531;
else if (*segments[4] >= *segments[5])
	goto ORDER_364521;
else
	goto ORDER_364512;

ORDER_253416:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[1])
	goto ORDER_253416;
else if (*segments[5] >= *segments[3])
	goto ORDER_263415;
else if (*segments[5] >= *segments[2])
	goto ORDER_263514;
else if (*segments[5] >= *segments[0])
	goto ORDER_264513;
else if (*segments[5] >= *segments[4])
	goto ORDER_364512;
else
	goto ORDER_364521;

ORDER_253164:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[1])
	goto ORDER_253164;
else if (*segments[4] >= *segments[5])
	goto ORDER_263154;
else if (*segments[4] >= *segments[2])
	goto ORDER_263145;
else if (*segments[4] >= *segments[0])
	goto ORDER_264135;
else if (*segments[4] >= *segments[3])
	goto ORDER_364125;
else
	goto ORDER_364215;

ORDER_253146:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[1])
	goto ORDER_253146;
else if (*segments[5] >= *segments[4])
	goto ORDER_263145;
else if (*segments[5] >= *segments[2])
	goto ORDER_263154;
else if (*segments[5] >= *segments[0])
	goto ORDER_264153;
else if (*segments[5] >= *segments[3])
	goto ORDER_364152;
else
	goto ORDER_364251;

ORDER_251643:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[1])
	goto ORDER_251643;
else if (*segments[3] >= *segments[4])
	goto ORDER_261543;
else if (*segments[3] >= *segments[5])
	goto ORDER_261453;
else if (*segments[3] >= *segments[0])
	goto ORDER_261354;
else if (*segments[3] >= *segments[2])
	goto ORDER_361254;
else
	goto ORDER_362154;

ORDER_251634:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[1])
	goto ORDER_251634;
else if (*segments[3] >= *segments[5])
	goto ORDER_261534;
else if (*segments[3] >= *segments[4])
	goto ORDER_261435;
else if (*segments[3] >= *segments[0])
	goto ORDER_261345;
else if (*segments[3] >= *segments[2])
	goto ORDER_361245;
else
	goto ORDER_362145;

ORDER_251463:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[1])
	goto ORDER_251463;
else if (*segments[4] >= *segments[3])
	goto ORDER_261453;
else if (*segments[4] >= *segments[5])
	goto ORDER_261543;
else if (*segments[4] >= *segments[0])
	goto ORDER_261534;
else if (*segments[4] >= *segments[2])
	goto ORDER_361524;
else
	goto ORDER_362514;

ORDER_251436:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[1])
	goto ORDER_251436;
else if (*segments[5] >= *segments[3])
	goto ORDER_261435;
else if (*segments[5] >= *segments[4])
	goto ORDER_261534;
else if (*segments[5] >= *segments[0])
	goto ORDER_261543;
else if (*segments[5] >= *segments[2])
	goto ORDER_361542;
else
	goto ORDER_362541;

ORDER_251364:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[1])
	goto ORDER_251364;
else if (*segments[4] >= *segments[5])
	goto ORDER_261354;
else if (*segments[4] >= *segments[3])
	goto ORDER_261345;
else if (*segments[4] >= *segments[0])
	goto ORDER_261435;
else if (*segments[4] >= *segments[2])
	goto ORDER_361425;
else
	goto ORDER_362415;

ORDER_251346:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[1])
	goto ORDER_251346;
else if (*segments[5] >= *segments[4])
	goto ORDER_261345;
else if (*segments[5] >= *segments[3])
	goto ORDER_261354;
else if (*segments[5] >= *segments[0])
	goto ORDER_261453;
else if (*segments[5] >= *segments[2])
	goto ORDER_361452;
else
	goto ORDER_362451;

ORDER_246531:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[3])
	goto ORDER_246531;
else if (*segments[2] >= *segments[1])
	goto ORDER_245631;
else if (*segments[2] >= *segments[4])
	goto ORDER_254631;
else if (*segments[2] >= *segments[0])
	goto ORDER_253641;
else if (*segments[2] >= *segments[5])
	goto ORDER_352641;
else
	goto ORDER_351642;

ORDER_246513:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[3])
	goto ORDER_246513;
else if (*segments[2] >= *segments[1])
	goto ORDER_245613;
else if (*segments[2] >= *segments[5])
	goto ORDER_254613;
else if (*segments[2] >= *segments[0])
	goto ORDER_253614;
else if (*segments[2] >= *segments[4])
	goto ORDER_352614;
else
	goto ORDER_351624;

ORDER_246351:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[4])
	goto ORDER_246351;
else if (*segments[2] >= *segments[1])
	goto ORDER_245361;
else if (*segments[2] >= *segments[3])
	goto ORDER_254361;
else if (*segments[2] >= *segments[0])
	goto ORDER_253461;
else if (*segments[2] >= *segments[5])
	goto ORDER_352461;
else
	goto ORDER_351462;

ORDER_246315:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[5])
	goto ORDER_246315;
else if (*segments[2] >= *segments[1])
	goto ORDER_245316;
else if (*segments[2] >= *segments[3])
	goto ORDER_254316;
else if (*segments[2] >= *segments[0])
	goto ORDER_253416;
else if (*segments[2] >= *segments[4])
	goto ORDER_352416;
else
	goto ORDER_351426;

ORDER_246153:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[4])
	goto ORDER_246153;
else if (*segments[2] >= *segments[1])
	goto ORDER_245163;
else if (*segments[2] >= *segments[5])
	goto ORDER_254163;
else if (*segments[2] >= *segments[0])
	goto ORDER_253164;
else if (*segments[2] >= *segments[3])
	goto ORDER_352164;
else
	goto ORDER_351264;

ORDER_246135:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[5])
	goto ORDER_246135;
else if (*segments[2] >= *segments[1])
	goto ORDER_245136;
else if (*segments[2] >= *segments[4])
	goto ORDER_254136;
else if (*segments[2] >= *segments[0])
	goto ORDER_253146;
else if (*segments[2] >= *segments[3])
	goto ORDER_352146;
else
	goto ORDER_351246;

ORDER_245631:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[2])
	goto ORDER_245631;
else if (*segments[3] >= *segments[1])
	goto ORDER_246531;
else if (*segments[3] >= *segments[4])
	goto ORDER_256431;
else if (*segments[3] >= *segments[0])
	goto ORDER_256341;
else if (*segments[3] >= *segments[5])
	goto ORDER_356241;
else
	goto ORDER_356142;

ORDER_245613:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[2])
	goto ORDER_245613;
else if (*segments[3] >= *segments[1])
	goto ORDER_246513;
else if (*segments[3] >= *segments[5])
	goto ORDER_256413;
else if (*segments[3] >= *segments[0])
	goto ORDER_256314;
else if (*segments[3] >= *segments[4])
	goto ORDER_356214;
else
	goto ORDER_356124;

ORDER_245361:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[2])
	goto ORDER_245361;
else if (*segments[4] >= *segments[1])
	goto ORDER_246351;
else if (*segments[4] >= *segments[3])
	goto ORDER_256341;
else if (*segments[4] >= *segments[0])
	goto ORDER_256431;
else if (*segments[4] >= *segments[5])
	goto ORDER_356421;
else
	goto ORDER_356412;

ORDER_245316:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[2])
	goto ORDER_245316;
else if (*segments[5] >= *segments[1])
	goto ORDER_246315;
else if (*segments[5] >= *segments[3])
	goto ORDER_256314;
else if (*segments[5] >= *segments[0])
	goto ORDER_256413;
else if (*segments[5] >= *segments[4])
	goto ORDER_356412;
else
	goto ORDER_356421;

ORDER_245163:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[2])
	goto ORDER_245163;
else if (*segments[4] >= *segments[1])
	goto ORDER_246153;
else if (*segments[4] >= *segments[5])
	goto ORDER_256143;
else if (*segments[4] >= *segments[0])
	goto ORDER_256134;
else if (*segments[4] >= *segments[3])
	goto ORDER_356124;
else
	goto ORDER_356214;

ORDER_245136:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[2])
	goto ORDER_245136;
else if (*segments[5] >= *segments[1])
	goto ORDER_246135;
else if (*segments[5] >= *segments[4])
	goto ORDER_256134;
else if (*segments[5] >= *segments[0])
	goto ORDER_256143;
else if (*segments[5] >= *segments[3])
	goto ORDER_356142;
else
	goto ORDER_356241;

ORDER_243651:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[4])
	goto ORDER_243651;
else if (*segments[3] >= *segments[1])
	goto ORDER_243561;
else if (*segments[3] >= *segments[2])
	goto ORDER_253461;
else if (*segments[3] >= *segments[0])
	goto ORDER_254361;
else if (*segments[3] >= *segments[5])
	goto ORDER_354261;
else
	goto ORDER_354162;

ORDER_243615:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[5])
	goto ORDER_243615;
else if (*segments[3] >= *segments[1])
	goto ORDER_243516;
else if (*segments[3] >= *segments[2])
	goto ORDER_253416;
else if (*segments[3] >= *segments[0])
	goto ORDER_254316;
else if (*segments[3] >= *segments[4])
	goto ORDER_354216;
else
	goto ORDER_354126;

ORDER_243561:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[3])
	goto ORDER_243561;
else if (*segments[4] >= *segments[1])
	goto ORDER_243651;
else if (*segments[4] >= *segments[2])
	goto ORDER_253641;
else if (*segments[4] >= *segments[0])
	goto ORDER_254631;
else if (*segments[4] >= *segments[5])
	goto ORDER_354621;
else
	goto ORDER_354612;

ORDER_243516:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[3])
	goto ORDER_243516;
else if (*segments[5] >= *segments[1])
	goto ORDER_243615;
else if (*segments[5] >= *segments[2])
	goto ORDER_253614;
else if (*segments[5] >= *segments[0])
	goto ORDER_254613;
else if (*segments[5] >= *segments[4])
	goto ORDER_354612;
else
	goto ORDER_354621;

ORDER_243165:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[5])
	goto ORDER_243165;
else if (*segments[4] >= *segments[1])
	goto ORDER_243156;
else if (*segments[4] >= *segments[2])
	goto ORDER_253146;
else if (*segments[4] >= *segments[0])
	goto ORDER_254136;
else if (*segments[4] >= *segments[3])
	goto ORDER_354126;
else
	goto ORDER_354216;

ORDER_243156:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[4])
	goto ORDER_243156;
else if (*segments[5] >= *segments[1])
	goto ORDER_243165;
else if (*segments[5] >= *segments[2])
	goto ORDER_253164;
else if (*segments[5] >= *segments[0])
	goto ORDER_254163;
else if (*segments[5] >= *segments[3])
	goto ORDER_354162;
else
	goto ORDER_354261;

ORDER_241653:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[4])
	goto ORDER_241653;
else if (*segments[3] >= *segments[1])
	goto ORDER_241563;
else if (*segments[3] >= *segments[5])
	goto ORDER_251463;
else if (*segments[3] >= *segments[0])
	goto ORDER_251364;
else if (*segments[3] >= *segments[2])
	goto ORDER_351264;
else
	goto ORDER_352164;

ORDER_241635:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[5])
	goto ORDER_241635;
else if (*segments[3] >= *segments[1])
	goto ORDER_241536;
else if (*segments[3] >= *segments[4])
	goto ORDER_251436;
else if (*segments[3] >= *segments[0])
	goto ORDER_251346;
else if (*segments[3] >= *segments[2])
	goto ORDER_351246;
else
	goto ORDER_352146;

ORDER_241563:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[3])
	goto ORDER_241563;
else if (*segments[4] >= *segments[1])
	goto ORDER_241653;
else if (*segments[4] >= *segments[5])
	goto ORDER_251643;
else if (*segments[4] >= *segments[0])
	goto ORDER_251634;
else if (*segments[4] >= *segments[2])
	goto ORDER_351624;
else
	goto ORDER_352614;

ORDER_241536:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[3])
	goto ORDER_241536;
else if (*segments[5] >= *segments[1])
	goto ORDER_241635;
else if (*segments[5] >= *segments[4])
	goto ORDER_251634;
else if (*segments[5] >= *segments[0])
	goto ORDER_251643;
else if (*segments[5] >= *segments[2])
	goto ORDER_351642;
else
	goto ORDER_352641;

ORDER_241365:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[5])
	goto ORDER_241365;
else if (*segments[4] >= *segments[1])
	goto ORDER_241356;
else if (*segments[4] >= *segments[3])
	goto ORDER_251346;
else if (*segments[4] >= *segments[0])
	goto ORDER_251436;
else if (*segments[4] >= *segments[2])
	goto ORDER_351426;
else
	goto ORDER_352416;

ORDER_241356:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[4])
	goto ORDER_241356;
else if (*segments[5] >= *segments[1])
	goto ORDER_241365;
else if (*segments[5] >= *segments[3])
	goto ORDER_251364;
else if (*segments[5] >= *segments[0])
	goto ORDER_251463;
else if (*segments[5] >= *segments[2])
	goto ORDER_351462;
else
	goto ORDER_352461;

ORDER_236541:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[3])
	goto ORDER_236541;
else if (*segments[2] >= *segments[4])
	goto ORDER_235641;
else if (*segments[2] >= *segments[1])
	goto ORDER_234651;
else if (*segments[2] >= *segments[0])
	goto ORDER_243651;
else if (*segments[2] >= *segments[5])
	goto ORDER_342651;
else
	goto ORDER_341652;

ORDER_236514:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[3])
	goto ORDER_236514;
else if (*segments[2] >= *segments[5])
	goto ORDER_235614;
else if (*segments[2] >= *segments[1])
	goto ORDER_234615;
else if (*segments[2] >= *segments[0])
	goto ORDER_243615;
else if (*segments[2] >= *segments[4])
	goto ORDER_342615;
else
	goto ORDER_341625;

ORDER_236451:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[4])
	goto ORDER_236451;
else if (*segments[2] >= *segments[3])
	goto ORDER_235461;
else if (*segments[2] >= *segments[1])
	goto ORDER_234561;
else if (*segments[2] >= *segments[0])
	goto ORDER_243561;
else if (*segments[2] >= *segments[5])
	goto ORDER_342561;
else
	goto ORDER_341562;

ORDER_236415:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[5])
	goto ORDER_236415;
else if (*segments[2] >= *segments[3])
	goto ORDER_235416;
else if (*segments[2] >= *segments[1])
	goto ORDER_234516;
else if (*segments[2] >= *segments[0])
	goto ORDER_243516;
else if (*segments[2] >= *segments[4])
	goto ORDER_342516;
else
	goto ORDER_341526;

ORDER_236154:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[4])
	goto ORDER_236154;
else if (*segments[2] >= *segments[5])
	goto ORDER_235164;
else if (*segments[2] >= *segments[1])
	goto ORDER_234165;
else if (*segments[2] >= *segments[0])
	goto ORDER_243165;
else if (*segments[2] >= *segments[3])
	goto ORDER_342165;
else
	goto ORDER_341265;

ORDER_236145:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[5])
	goto ORDER_236145;
else if (*segments[2] >= *segments[4])
	goto ORDER_235146;
else if (*segments[2] >= *segments[1])
	goto ORDER_234156;
else if (*segments[2] >= *segments[0])
	goto ORDER_243156;
else if (*segments[2] >= *segments[3])
	goto ORDER_342156;
else
	goto ORDER_341256;

ORDER_235641:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[2])
	goto ORDER_235641;
else if (*segments[3] >= *segments[4])
	goto ORDER_236541;
else if (*segments[3] >= *segments[1])
	goto ORDER_236451;
else if (*segments[3] >= *segments[0])
	goto ORDER_246351;
else if (*segments[3] >= *segments[5])
	goto ORDER_346251;
else
	goto ORDER_346152;

ORDER_235614:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[2])
	goto ORDER_235614;
else if (*segments[3] >= *segments[5])
	goto ORDER_236514;
else if (*segments[3] >= *segments[1])
	goto ORDER_236415;
else if (*segments[3] >= *segments[0])
	goto ORDER_246315;
else if (*segments[3] >= *segments[4])
	goto ORDER_346215;
else
	goto ORDER_346125;

ORDER_235461:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[2])
	goto ORDER_235461;
else if (*segments[4] >= *segments[3])
	goto ORDER_236451;
else if (*segments[4] >= *segments[1])
	goto ORDER_236541;
else if (*segments[4] >= *segments[0])
	goto ORDER_246531;
else if (*segments[4] >= *segments[5])
	goto ORDER_346521;
else
	goto ORDER_346512;

ORDER_235416:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[2])
	goto ORDER_235416;
else if (*segments[5] >= *segments[3])
	goto ORDER_236415;
else if (*segments[5] >= *segments[1])
	goto ORDER_236514;
else if (*segments[5] >= *segments[0])
	goto ORDER_246513;
else if (*segments[5] >= *segments[4])
	goto ORDER_346512;
else
	goto ORDER_346521;

ORDER_235164:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[2])
	goto ORDER_235164;
else if (*segments[4] >= *segments[5])
	goto ORDER_236154;
else if (*segments[4] >= *segments[1])
	goto ORDER_236145;
else if (*segments[4] >= *segments[0])
	goto ORDER_246135;
else if (*segments[4] >= *segments[3])
	goto ORDER_346125;
else
	goto ORDER_346215;

ORDER_235146:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[2])
	goto ORDER_235146;
else if (*segments[5] >= *segments[4])
	goto ORDER_236145;
else if (*segments[5] >= *segments[1])
	goto ORDER_236154;
else if (*segments[5] >= *segments[0])
	goto ORDER_246153;
else if (*segments[5] >= *segments[3])
	goto ORDER_346152;
else
	goto ORDER_346251;

ORDER_234651:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[4])
	goto ORDER_234651;
else if (*segments[3] >= *segments[2])
	goto ORDER_234561;
else if (*segments[3] >= *segments[1])
	goto ORDER_235461;
else if (*segments[3] >= *segments[0])
	goto ORDER_245361;
else if (*segments[3] >= *segments[5])
	goto ORDER_345261;
else
	goto ORDER_345162;

ORDER_234615:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[5])
	goto ORDER_234615;
else if (*segments[3] >= *segments[2])
	goto ORDER_234516;
else if (*segments[3] >= *segments[1])
	goto ORDER_235416;
else if (*segments[3] >= *segments[0])
	goto ORDER_245316;
else if (*segments[3] >= *segments[4])
	goto ORDER_345216;
else
	goto ORDER_345126;

ORDER_234561:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[3])
	goto ORDER_234561;
else if (*segments[4] >= *segments[2])
	goto ORDER_234651;
else if (*segments[4] >= *segments[1])
	goto ORDER_235641;
else if (*segments[4] >= *segments[0])
	goto ORDER_245631;
else if (*segments[4] >= *segments[5])
	goto ORDER_345621;
else
	goto ORDER_345612;

ORDER_234516:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[3])
	goto ORDER_234516;
else if (*segments[5] >= *segments[2])
	goto ORDER_234615;
else if (*segments[5] >= *segments[1])
	goto ORDER_235614;
else if (*segments[5] >= *segments[0])
	goto ORDER_245613;
else if (*segments[5] >= *segments[4])
	goto ORDER_345612;
else
	goto ORDER_345621;

ORDER_234165:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[5])
	goto ORDER_234165;
else if (*segments[4] >= *segments[2])
	goto ORDER_234156;
else if (*segments[4] >= *segments[1])
	goto ORDER_235146;
else if (*segments[4] >= *segments[0])
	goto ORDER_245136;
else if (*segments[4] >= *segments[3])
	goto ORDER_345126;
else
	goto ORDER_345216;

ORDER_234156:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[4])
	goto ORDER_234156;
else if (*segments[5] >= *segments[2])
	goto ORDER_234165;
else if (*segments[5] >= *segments[1])
	goto ORDER_235164;
else if (*segments[5] >= *segments[0])
	goto ORDER_245163;
else if (*segments[5] >= *segments[3])
	goto ORDER_345162;
else
	goto ORDER_345261;

ORDER_231654:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[4])
	goto ORDER_231654;
else if (*segments[3] >= *segments[5])
	goto ORDER_231564;
else if (*segments[3] >= *segments[1])
	goto ORDER_231465;
else if (*segments[3] >= *segments[0])
	goto ORDER_241365;
else if (*segments[3] >= *segments[2])
	goto ORDER_341265;
else
	goto ORDER_342165;

ORDER_231645:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[5])
	goto ORDER_231645;
else if (*segments[3] >= *segments[4])
	goto ORDER_231546;
else if (*segments[3] >= *segments[1])
	goto ORDER_231456;
else if (*segments[3] >= *segments[0])
	goto ORDER_241356;
else if (*segments[3] >= *segments[2])
	goto ORDER_341256;
else
	goto ORDER_342156;

ORDER_231564:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[3])
	goto ORDER_231564;
else if (*segments[4] >= *segments[5])
	goto ORDER_231654;
else if (*segments[4] >= *segments[1])
	goto ORDER_231645;
else if (*segments[4] >= *segments[0])
	goto ORDER_241635;
else if (*segments[4] >= *segments[2])
	goto ORDER_341625;
else
	goto ORDER_342615;

ORDER_231546:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[3])
	goto ORDER_231546;
else if (*segments[5] >= *segments[4])
	goto ORDER_231645;
else if (*segments[5] >= *segments[1])
	goto ORDER_231654;
else if (*segments[5] >= *segments[0])
	goto ORDER_241653;
else if (*segments[5] >= *segments[2])
	goto ORDER_341652;
else
	goto ORDER_342651;

ORDER_231465:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[5])
	goto ORDER_231465;
else if (*segments[4] >= *segments[3])
	goto ORDER_231456;
else if (*segments[4] >= *segments[1])
	goto ORDER_231546;
else if (*segments[4] >= *segments[0])
	goto ORDER_241536;
else if (*segments[4] >= *segments[2])
	goto ORDER_341526;
else
	goto ORDER_342516;

ORDER_231456:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[4])
	goto ORDER_231456;
else if (*segments[5] >= *segments[3])
	goto ORDER_231465;
else if (*segments[5] >= *segments[1])
	goto ORDER_231564;
else if (*segments[5] >= *segments[0])
	goto ORDER_241563;
else if (*segments[5] >= *segments[2])
	goto ORDER_341562;
else
	goto ORDER_342561;

ORDER_216543:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[3])
	goto ORDER_216543;
else if (*segments[2] >= *segments[4])
	goto ORDER_215643;
else if (*segments[2] >= *segments[5])
	goto ORDER_214653;
else if (*segments[2] >= *segments[0])
	goto ORDER_213654;
else if (*segments[2] >= *segments[1])
	goto ORDER_312654;
else
	goto ORDER_321654;

ORDER_216534:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[3])
	goto ORDER_216534;
else if (*segments[2] >= *segments[5])
	goto ORDER_215634;
else if (*segments[2] >= *segments[4])
	goto ORDER_214635;
else if (*segments[2] >= *segments[0])
	goto ORDER_213645;
else if (*segments[2] >= *segments[1])
	goto ORDER_312645;
else
	goto ORDER_321645;

ORDER_216453:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[4])
	goto ORDER_216453;
else if (*segments[2] >= *segments[3])
	goto ORDER_215463;
else if (*segments[2] >= *segments[5])
	goto ORDER_214563;
else if (*segments[2] >= *segments[0])
	goto ORDER_213564;
else if (*segments[2] >= *segments[1])
	goto ORDER_312564;
else
	goto ORDER_321564;

ORDER_216435:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[5])
	goto ORDER_216435;
else if (*segments[2] >= *segments[3])
	goto ORDER_215436;
else if (*segments[2] >= *segments[4])
	goto ORDER_214536;
else if (*segments[2] >= *segments[0])
	goto ORDER_213546;
else if (*segments[2] >= *segments[1])
	goto ORDER_312546;
else
	goto ORDER_321546;

ORDER_216354:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[4])
	goto ORDER_216354;
else if (*segments[2] >= *segments[5])
	goto ORDER_215364;
else if (*segments[2] >= *segments[3])
	goto ORDER_214365;
else if (*segments[2] >= *segments[0])
	goto ORDER_213465;
else if (*segments[2] >= *segments[1])
	goto ORDER_312465;
else
	goto ORDER_321465;

ORDER_216345:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[5])
	goto ORDER_216345;
else if (*segments[2] >= *segments[4])
	goto ORDER_215346;
else if (*segments[2] >= *segments[3])
	goto ORDER_214356;
else if (*segments[2] >= *segments[0])
	goto ORDER_213456;
else if (*segments[2] >= *segments[1])
	goto ORDER_312456;
else
	goto ORDER_321456;

ORDER_215643:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[2])
	goto ORDER_215643;
else if (*segments[3] >= *segments[4])
	goto ORDER_216543;
else if (*segments[3] >= *segments[5])
	goto ORDER_216453;
else if (*segments[3] >= *segments[0])
	goto ORDER_216354;
else if (*segments[3] >= *segments[1])
	goto ORDER_316254;
else
	goto ORDER_326154;

ORDER_215634:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[2])
	goto ORDER_215634;
else if (*segments[3] >= *segments[5])
	goto ORDER_216534;
else if (*segments[3] >= *segments[4])
	goto ORDER_216435;
else if (*segments[3] >= *segments[0])
	goto ORDER_216345;
else if (*segments[3] >= *segments[1])
	goto ORDER_316245;
else
	goto ORDER_326145;

ORDER_215463:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[2])
	goto ORDER_215463;
else if (*segments[4] >= *segments[3])
	goto ORDER_216453;
else if (*segments[4] >= *segments[5])
	goto ORDER_216543;
else if (*segments[4] >= *segments[0])
	goto ORDER_216534;
else if (*segments[4] >= *segments[1])
	goto ORDER_316524;
else
	goto ORDER_326514;

ORDER_215436:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[2])
	goto ORDER_215436;
else if (*segments[5] >= *segments[3])
	goto ORDER_216435;
else if (*segments[5] >= *segments[4])
	goto ORDER_216534;
else if (*segments[5] >= *segments[0])
	goto ORDER_216543;
else if (*segments[5] >= *segments[1])
	goto ORDER_316542;
else
	goto ORDER_326541;

ORDER_215364:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[2])
	goto ORDER_215364;
else if (*segments[4] >= *segments[5])
	goto ORDER_216354;
else if (*segments[4] >= *segments[3])
	goto ORDER_216345;
else if (*segments[4] >= *segments[0])
	goto ORDER_216435;
else if (*segments[4] >= *segments[1])
	goto ORDER_316425;
else
	goto ORDER_326415;

ORDER_215346:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[2])
	goto ORDER_215346;
else if (*segments[5] >= *segments[4])
	goto ORDER_216345;
else if (*segments[5] >= *segments[3])
	goto ORDER_216354;
else if (*segments[5] >= *segments[0])
	goto ORDER_216453;
else if (*segments[5] >= *segments[1])
	goto ORDER_316452;
else
	goto ORDER_326451;

ORDER_214653:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[4])
	goto ORDER_214653;
else if (*segments[3] >= *segments[2])
	goto ORDER_214563;
else if (*segments[3] >= *segments[5])
	goto ORDER_215463;
else if (*segments[3] >= *segments[0])
	goto ORDER_215364;
else if (*segments[3] >= *segments[1])
	goto ORDER_315264;
else
	goto ORDER_325164;

ORDER_214635:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[5])
	goto ORDER_214635;
else if (*segments[3] >= *segments[2])
	goto ORDER_214536;
else if (*segments[3] >= *segments[4])
	goto ORDER_215436;
else if (*segments[3] >= *segments[0])
	goto ORDER_215346;
else if (*segments[3] >= *segments[1])
	goto ORDER_315246;
else
	goto ORDER_325146;

ORDER_214563:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[3])
	goto ORDER_214563;
else if (*segments[4] >= *segments[2])
	goto ORDER_214653;
else if (*segments[4] >= *segments[5])
	goto ORDER_215643;
else if (*segments[4] >= *segments[0])
	goto ORDER_215634;
else if (*segments[4] >= *segments[1])
	goto ORDER_315624;
else
	goto ORDER_325614;

ORDER_214536:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[3])
	goto ORDER_214536;
else if (*segments[5] >= *segments[2])
	goto ORDER_214635;
else if (*segments[5] >= *segments[4])
	goto ORDER_215634;
else if (*segments[5] >= *segments[0])
	goto ORDER_215643;
else if (*segments[5] >= *segments[1])
	goto ORDER_315642;
else
	goto ORDER_325641;

ORDER_214365:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[5])
	goto ORDER_214365;
else if (*segments[4] >= *segments[2])
	goto ORDER_214356;
else if (*segments[4] >= *segments[3])
	goto ORDER_215346;
else if (*segments[4] >= *segments[0])
	goto ORDER_215436;
else if (*segments[4] >= *segments[1])
	goto ORDER_315426;
else
	goto ORDER_325416;

ORDER_214356:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[4])
	goto ORDER_214356;
else if (*segments[5] >= *segments[2])
	goto ORDER_214365;
else if (*segments[5] >= *segments[3])
	goto ORDER_215364;
else if (*segments[5] >= *segments[0])
	goto ORDER_215463;
else if (*segments[5] >= *segments[1])
	goto ORDER_315462;
else
	goto ORDER_325461;

ORDER_213654:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[4])
	goto ORDER_213654;
else if (*segments[3] >= *segments[5])
	goto ORDER_213564;
else if (*segments[3] >= *segments[2])
	goto ORDER_213465;
else if (*segments[3] >= *segments[0])
	goto ORDER_214365;
else if (*segments[3] >= *segments[1])
	goto ORDER_314265;
else
	goto ORDER_324165;

ORDER_213645:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[5])
	goto ORDER_213645;
else if (*segments[3] >= *segments[4])
	goto ORDER_213546;
else if (*segments[3] >= *segments[2])
	goto ORDER_213456;
else if (*segments[3] >= *segments[0])
	goto ORDER_214356;
else if (*segments[3] >= *segments[1])
	goto ORDER_314256;
else
	goto ORDER_324156;

ORDER_213564:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[3])
	goto ORDER_213564;
else if (*segments[4] >= *segments[5])
	goto ORDER_213654;
else if (*segments[4] >= *segments[2])
	goto ORDER_213645;
else if (*segments[4] >= *segments[0])
	goto ORDER_214635;
else if (*segments[4] >= *segments[1])
	goto ORDER_314625;
else
	goto ORDER_324615;

ORDER_213546:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[3])
	goto ORDER_213546;
else if (*segments[5] >= *segments[4])
	goto ORDER_213645;
else if (*segments[5] >= *segments[2])
	goto ORDER_213654;
else if (*segments[5] >= *segments[0])
	goto ORDER_214653;
else if (*segments[5] >= *segments[1])
	goto ORDER_314652;
else
	goto ORDER_324651;

ORDER_213465:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[5])
	goto ORDER_213465;
else if (*segments[4] >= *segments[3])
	goto ORDER_213456;
else if (*segments[4] >= *segments[2])
	goto ORDER_213546;
else if (*segments[4] >= *segments[0])
	goto ORDER_214536;
else if (*segments[4] >= *segments[1])
	goto ORDER_314526;
else
	goto ORDER_324516;

ORDER_213456:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[4])
	goto ORDER_213456;
else if (*segments[5] >= *segments[3])
	goto ORDER_213465;
else if (*segments[5] >= *segments[2])
	goto ORDER_213564;
else if (*segments[5] >= *segments[0])
	goto ORDER_214563;
else if (*segments[5] >= *segments[1])
	goto ORDER_314562;
else
	goto ORDER_324561;

ORDER_165432:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[2])
	goto ORDER_165432;
else if (*segments[1] >= *segments[3])
	goto ORDER_156432;
else if (*segments[1] >= *segments[4])
	goto ORDER_146532;
else if (*segments[1] >= *segments[5])
	goto ORDER_136542;
else if (*segments[1] >= *segments[0])
	goto ORDER_126543;
else
	goto ORDER_216543;

ORDER_165423:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[2])
	goto ORDER_165423;
else if (*segments[1] >= *segments[3])
	goto ORDER_156423;
else if (*segments[1] >= *segments[5])
	goto ORDER_146523;
else if (*segments[1] >= *segments[4])
	goto ORDER_136524;
else if (*segments[1] >= *segments[0])
	goto ORDER_126534;
else
	goto ORDER_216534;

ORDER_165342:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[2])
	goto ORDER_165342;
else if (*segments[1] >= *segments[4])
	goto ORDER_156342;
else if (*segments[1] >= *segments[3])
	goto ORDER_146352;
else if (*segments[1] >= *segments[5])
	goto ORDER_136452;
else if (*segments[1] >= *segments[0])
	goto ORDER_126453;
else
	goto ORDER_216453;

ORDER_165324:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[2])
	goto ORDER_165324;
else if (*segments[1] >= *segments[5])
	goto ORDER_156324;
else if (*segments[1] >= *segments[3])
	goto ORDER_146325;
else if (*segments[1] >= *segments[4])
	goto ORDER_136425;
else if (*segments[1] >= *segments[0])
	goto ORDER_126435;
else
	goto ORDER_216435;

ORDER_165243:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[2])
	goto ORDER_165243;
else if (*segments[1] >= *segments[4])
	goto ORDER_156243;
else if (*segments[1] >= *segments[5])
	goto ORDER_146253;
else if (*segments[1] >= *segments[3])
	goto ORDER_136254;
else if (*segments[1] >= *segments[0])
	goto ORDER_126354;
else
	goto ORDER_216354;

ORDER_165234:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[2])
	goto ORDER_165234;
else if (*segments[1] >= *segments[5])
	goto ORDER_156234;
else if (*segments[1] >= *segments[4])
	goto ORDER_146235;
else if (*segments[1] >= *segments[3])
	goto ORDER_136245;
else if (*segments[1] >= *segments[0])
	goto ORDER_126345;
else
	goto ORDER_216345;

ORDER_164532:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[3])
	goto ORDER_164532;
else if (*segments[1] >= *segments[2])
	goto ORDER_154632;
else if (*segments[1] >= *segments[4])
	goto ORDER_145632;
else if (*segments[1] >= *segments[5])
	goto ORDER_135642;
else if (*segments[1] >= *segments[0])
	goto ORDER_125643;
else
	goto ORDER_215643;

ORDER_164523:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[3])
	goto ORDER_164523;
else if (*segments[1] >= *segments[2])
	goto ORDER_154623;
else if (*segments[1] >= *segments[5])
	goto ORDER_145623;
else if (*segments[1] >= *segments[4])
	goto ORDER_135624;
else if (*segments[1] >= *segments[0])
	goto ORDER_125634;
else
	goto ORDER_215634;

ORDER_164352:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[4])
	goto ORDER_164352;
else if (*segments[1] >= *segments[2])
	goto ORDER_154362;
else if (*segments[1] >= *segments[3])
	goto ORDER_145362;
else if (*segments[1] >= *segments[5])
	goto ORDER_135462;
else if (*segments[1] >= *segments[0])
	goto ORDER_125463;
else
	goto ORDER_215463;

ORDER_164325:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[5])
	goto ORDER_164325;
else if (*segments[1] >= *segments[2])
	goto ORDER_154326;
else if (*segments[1] >= *segments[3])
	goto ORDER_145326;
else if (*segments[1] >= *segments[4])
	goto ORDER_135426;
else if (*segments[1] >= *segments[0])
	goto ORDER_125436;
else
	goto ORDER_215436;

ORDER_164253:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[4])
	goto ORDER_164253;
else if (*segments[1] >= *segments[2])
	goto ORDER_154263;
else if (*segments[1] >= *segments[5])
	goto ORDER_145263;
else if (*segments[1] >= *segments[3])
	goto ORDER_135264;
else if (*segments[1] >= *segments[0])
	goto ORDER_125364;
else
	goto ORDER_215364;

ORDER_164235:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[5])
	goto ORDER_164235;
else if (*segments[1] >= *segments[2])
	goto ORDER_154236;
else if (*segments[1] >= *segments[4])
	goto ORDER_145236;
else if (*segments[1] >= *segments[3])
	goto ORDER_135246;
else if (*segments[1] >= *segments[0])
	goto ORDER_125346;
else
	goto ORDER_215346;

ORDER_163542:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[3])
	goto ORDER_163542;
else if (*segments[1] >= *segments[4])
	goto ORDER_153642;
else if (*segments[1] >= *segments[2])
	goto ORDER_143652;
else if (*segments[1] >= *segments[5])
	goto ORDER_134652;
else if (*segments[1] >= *segments[0])
	goto ORDER_124653;
else
	goto ORDER_214653;

ORDER_163524:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[3])
	goto ORDER_163524;
else if (*segments[1] >= *segments[5])
	goto ORDER_153624;
else if (*segments[1] >= *segments[2])
	goto ORDER_143625;
else if (*segments[1] >= *segments[4])
	goto ORDER_134625;
else if (*segments[1] >= *segments[0])
	goto ORDER_124635;
else
	goto ORDER_214635;

ORDER_163452:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[4])
	goto ORDER_163452;
else if (*segments[1] >= *segments[3])
	goto ORDER_153462;
else if (*segments[1] >= *segments[2])
	goto ORDER_143562;
else if (*segments[1] >= *segments[5])
	goto ORDER_134562;
else if (*segments[1] >= *segments[0])
	goto ORDER_124563;
else
	goto ORDER_214563;

ORDER_163425:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[5])
	goto ORDER_163425;
else if (*segments[1] >= *segments[3])
	goto ORDER_153426;
else if (*segments[1] >= *segments[2])
	goto ORDER_143526;
else if (*segments[1] >= *segments[4])
	goto ORDER_134526;
else if (*segments[1] >= *segments[0])
	goto ORDER_124536;
else
	goto ORDER_214536;

ORDER_163254:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[4])
	goto ORDER_163254;
else if (*segments[1] >= *segments[5])
	goto ORDER_153264;
else if (*segments[1] >= *segments[2])
	goto ORDER_143265;
else if (*segments[1] >= *segments[3])
	goto ORDER_134265;
else if (*segments[1] >= *segments[0])
	goto ORDER_124365;
else
	goto ORDER_214365;

ORDER_163245:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[5])
	goto ORDER_163245;
else if (*segments[1] >= *segments[4])
	goto ORDER_153246;
else if (*segments[1] >= *segments[2])
	goto ORDER_143256;
else if (*segments[1] >= *segments[3])
	goto ORDER_134256;
else if (*segments[1] >= *segments[0])
	goto ORDER_124356;
else
	goto ORDER_214356;

ORDER_162543:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[3])
	goto ORDER_162543;
else if (*segments[1] >= *segments[4])
	goto ORDER_152643;
else if (*segments[1] >= *segments[5])
	goto ORDER_142653;
else if (*segments[1] >= *segments[2])
	goto ORDER_132654;
else if (*segments[1] >= *segments[0])
	goto ORDER_123654;
else
	goto ORDER_213654;

ORDER_162534:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[3])
	goto ORDER_162534;
else if (*segments[1] >= *segments[5])
	goto ORDER_152634;
else if (*segments[1] >= *segments[4])
	goto ORDER_142635;
else if (*segments[1] >= *segments[2])
	goto ORDER_132645;
else if (*segments[1] >= *segments[0])
	goto ORDER_123645;
else
	goto ORDER_213645;

ORDER_162453:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[4])
	goto ORDER_162453;
else if (*segments[1] >= *segments[3])
	goto ORDER_152463;
else if (*segments[1] >= *segments[5])
	goto ORDER_142563;
else if (*segments[1] >= *segments[2])
	goto ORDER_132564;
else if (*segments[1] >= *segments[0])
	goto ORDER_123564;
else
	goto ORDER_213564;

ORDER_162435:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[5])
	goto ORDER_162435;
else if (*segments[1] >= *segments[3])
	goto ORDER_152436;
else if (*segments[1] >= *segments[4])
	goto ORDER_142536;
else if (*segments[1] >= *segments[2])
	goto ORDER_132546;
else if (*segments[1] >= *segments[0])
	goto ORDER_123546;
else
	goto ORDER_213546;

ORDER_162354:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[4])
	goto ORDER_162354;
else if (*segments[1] >= *segments[5])
	goto ORDER_152364;
else if (*segments[1] >= *segments[3])
	goto ORDER_142365;
else if (*segments[1] >= *segments[2])
	goto ORDER_132465;
else if (*segments[1] >= *segments[0])
	goto ORDER_123465;
else
	goto ORDER_213465;

ORDER_162345:
if (*segments[1] == 0)
	goto DONE;
t->results[pos++] = *segments[1]++;
if (*segments[1] >= *segments[5])
	goto ORDER_162345;
else if (*segments[1] >= *segments[4])
	goto ORDER_152346;
else if (*segments[1] >= *segments[3])
	goto ORDER_142356;
else if (*segments[1] >= *segments[2])
	goto ORDER_132456;
else if (*segments[1] >= *segments[0])
	goto ORDER_123456;
else
	goto ORDER_213456;

ORDER_156432:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[1])
	goto ORDER_156432;
else if (*segments[2] >= *segments[3])
	goto ORDER_165432;
else if (*segments[2] >= *segments[4])
	goto ORDER_164532;
else if (*segments[2] >= *segments[5])
	goto ORDER_163542;
else if (*segments[2] >= *segments[0])
	goto ORDER_162543;
else
	goto ORDER_261543;

ORDER_156423:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[1])
	goto ORDER_156423;
else if (*segments[2] >= *segments[3])
	goto ORDER_165423;
else if (*segments[2] >= *segments[5])
	goto ORDER_164523;
else if (*segments[2] >= *segments[4])
	goto ORDER_163524;
else if (*segments[2] >= *segments[0])
	goto ORDER_162534;
else
	goto ORDER_261534;

ORDER_156342:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[1])
	goto ORDER_156342;
else if (*segments[2] >= *segments[4])
	goto ORDER_165342;
else if (*segments[2] >= *segments[3])
	goto ORDER_164352;
else if (*segments[2] >= *segments[5])
	goto ORDER_163452;
else if (*segments[2] >= *segments[0])
	goto ORDER_162453;
else
	goto ORDER_261453;

ORDER_156324:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[1])
	goto ORDER_156324;
else if (*segments[2] >= *segments[5])
	goto ORDER_165324;
else if (*segments[2] >= *segments[3])
	goto ORDER_164325;
else if (*segments[2] >= *segments[4])
	goto ORDER_163425;
else if (*segments[2] >= *segments[0])
	goto ORDER_162435;
else
	goto ORDER_261435;

ORDER_156243:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[1])
	goto ORDER_156243;
else if (*segments[2] >= *segments[4])
	goto ORDER_165243;
else if (*segments[2] >= *segments[5])
	goto ORDER_164253;
else if (*segments[2] >= *segments[3])
	goto ORDER_163254;
else if (*segments[2] >= *segments[0])
	goto ORDER_162354;
else
	goto ORDER_261354;

ORDER_156234:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[1])
	goto ORDER_156234;
else if (*segments[2] >= *segments[5])
	goto ORDER_165234;
else if (*segments[2] >= *segments[4])
	goto ORDER_164235;
else if (*segments[2] >= *segments[3])
	goto ORDER_163245;
else if (*segments[2] >= *segments[0])
	goto ORDER_162345;
else
	goto ORDER_261345;

ORDER_154632:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[1])
	goto ORDER_154632;
else if (*segments[3] >= *segments[2])
	goto ORDER_164532;
else if (*segments[3] >= *segments[4])
	goto ORDER_165432;
else if (*segments[3] >= *segments[5])
	goto ORDER_165342;
else if (*segments[3] >= *segments[0])
	goto ORDER_165243;
else
	goto ORDER_265143;

ORDER_154623:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[1])
	goto ORDER_154623;
else if (*segments[3] >= *segments[2])
	goto ORDER_164523;
else if (*segments[3] >= *segments[5])
	goto ORDER_165423;
else if (*segments[3] >= *segments[4])
	goto ORDER_165324;
else if (*segments[3] >= *segments[0])
	goto ORDER_165234;
else
	goto ORDER_265134;

ORDER_154362:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[1])
	goto ORDER_154362;
else if (*segments[4] >= *segments[2])
	goto ORDER_164352;
else if (*segments[4] >= *segments[3])
	goto ORDER_165342;
else if (*segments[4] >= *segments[5])
	goto ORDER_165432;
else if (*segments[4] >= *segments[0])
	goto ORDER_165423;
else
	goto ORDER_265413;

ORDER_154326:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[1])
	goto ORDER_154326;
else if (*segments[5] >= *segments[2])
	goto ORDER_164325;
else if (*segments[5] >= *segments[3])
	goto ORDER_165324;
else if (*segments[5] >= *segments[4])
	goto ORDER_165423;
else if (*segments[5] >= *segments[0])
	goto ORDER_165432;
else
	goto ORDER_265431;

ORDER_154263:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[1])
	goto ORDER_154263;
else if (*segments[4] >= *segments[2])
	goto ORDER_164253;
else if (*segments[4] >= *segments[5])
	goto ORDER_165243;
else if (*segments[4] >= *segments[3])
	goto ORDER_165234;
else if (*segments[4] >= *segments[0])
	goto ORDER_165324;
else
	goto ORDER_265314;

ORDER_154236:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[1])
	goto ORDER_154236;
else if (*segments[5] >= *segments[2])
	goto ORDER_164235;
else if (*segments[5] >= *segments[4])
	goto ORDER_165234;
else if (*segments[5] >= *segments[3])
	goto ORDER_165243;
else if (*segments[5] >= *segments[0])
	goto ORDER_165342;
else
	goto ORDER_265341;

ORDER_153642:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[1])
	goto ORDER_153642;
else if (*segments[3] >= *segments[4])
	goto ORDER_163542;
else if (*segments[3] >= *segments[2])
	goto ORDER_163452;
else if (*segments[3] >= *segments[5])
	goto ORDER_164352;
else if (*segments[3] >= *segments[0])
	goto ORDER_164253;
else
	goto ORDER_264153;

ORDER_153624:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[1])
	goto ORDER_153624;
else if (*segments[3] >= *segments[5])
	goto ORDER_163524;
else if (*segments[3] >= *segments[2])
	goto ORDER_163425;
else if (*segments[3] >= *segments[4])
	goto ORDER_164325;
else if (*segments[3] >= *segments[0])
	goto ORDER_164235;
else
	goto ORDER_264135;

ORDER_153462:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[1])
	goto ORDER_153462;
else if (*segments[4] >= *segments[3])
	goto ORDER_163452;
else if (*segments[4] >= *segments[2])
	goto ORDER_163542;
else if (*segments[4] >= *segments[5])
	goto ORDER_164532;
else if (*segments[4] >= *segments[0])
	goto ORDER_164523;
else
	goto ORDER_264513;

ORDER_153426:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[1])
	goto ORDER_153426;
else if (*segments[5] >= *segments[3])
	goto ORDER_163425;
else if (*segments[5] >= *segments[2])
	goto ORDER_163524;
else if (*segments[5] >= *segments[4])
	goto ORDER_164523;
else if (*segments[5] >= *segments[0])
	goto ORDER_164532;
else
	goto ORDER_264531;

ORDER_153264:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[1])
	goto ORDER_153264;
else if (*segments[4] >= *segments[5])
	goto ORDER_163254;
else if (*segments[4] >= *segments[2])
	goto ORDER_163245;
else if (*segments[4] >= *segments[3])
	goto ORDER_164235;
else if (*segments[4] >= *segments[0])
	goto ORDER_164325;
else
	goto ORDER_264315;

ORDER_153246:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[1])
	goto ORDER_153246;
else if (*segments[5] >= *segments[4])
	goto ORDER_163245;
else if (*segments[5] >= *segments[2])
	goto ORDER_163254;
else if (*segments[5] >= *segments[3])
	goto ORDER_164253;
else if (*segments[5] >= *segments[0])
	goto ORDER_164352;
else
	goto ORDER_264351;

ORDER_152643:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[1])
	goto ORDER_152643;
else if (*segments[3] >= *segments[4])
	goto ORDER_162543;
else if (*segments[3] >= *segments[5])
	goto ORDER_162453;
else if (*segments[3] >= *segments[2])
	goto ORDER_162354;
else if (*segments[3] >= *segments[0])
	goto ORDER_163254;
else
	goto ORDER_263154;

ORDER_152634:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[1])
	goto ORDER_152634;
else if (*segments[3] >= *segments[5])
	goto ORDER_162534;
else if (*segments[3] >= *segments[4])
	goto ORDER_162435;
else if (*segments[3] >= *segments[2])
	goto ORDER_162345;
else if (*segments[3] >= *segments[0])
	goto ORDER_163245;
else
	goto ORDER_263145;

ORDER_152463:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[1])
	goto ORDER_152463;
else if (*segments[4] >= *segments[3])
	goto ORDER_162453;
else if (*segments[4] >= *segments[5])
	goto ORDER_162543;
else if (*segments[4] >= *segments[2])
	goto ORDER_162534;
else if (*segments[4] >= *segments[0])
	goto ORDER_163524;
else
	goto ORDER_263514;

ORDER_152436:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[1])
	goto ORDER_152436;
else if (*segments[5] >= *segments[3])
	goto ORDER_162435;
else if (*segments[5] >= *segments[4])
	goto ORDER_162534;
else if (*segments[5] >= *segments[2])
	goto ORDER_162543;
else if (*segments[5] >= *segments[0])
	goto ORDER_163542;
else
	goto ORDER_263541;

ORDER_152364:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[1])
	goto ORDER_152364;
else if (*segments[4] >= *segments[5])
	goto ORDER_162354;
else if (*segments[4] >= *segments[3])
	goto ORDER_162345;
else if (*segments[4] >= *segments[2])
	goto ORDER_162435;
else if (*segments[4] >= *segments[0])
	goto ORDER_163425;
else
	goto ORDER_263415;

ORDER_152346:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[1])
	goto ORDER_152346;
else if (*segments[5] >= *segments[4])
	goto ORDER_162345;
else if (*segments[5] >= *segments[3])
	goto ORDER_162354;
else if (*segments[5] >= *segments[2])
	goto ORDER_162453;
else if (*segments[5] >= *segments[0])
	goto ORDER_163452;
else
	goto ORDER_263451;

ORDER_146532:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[3])
	goto ORDER_146532;
else if (*segments[2] >= *segments[1])
	goto ORDER_145632;
else if (*segments[2] >= *segments[4])
	goto ORDER_154632;
else if (*segments[2] >= *segments[5])
	goto ORDER_153642;
else if (*segments[2] >= *segments[0])
	goto ORDER_152643;
else
	goto ORDER_251643;

ORDER_146523:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[3])
	goto ORDER_146523;
else if (*segments[2] >= *segments[1])
	goto ORDER_145623;
else if (*segments[2] >= *segments[5])
	goto ORDER_154623;
else if (*segments[2] >= *segments[4])
	goto ORDER_153624;
else if (*segments[2] >= *segments[0])
	goto ORDER_152634;
else
	goto ORDER_251634;

ORDER_146352:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[4])
	goto ORDER_146352;
else if (*segments[2] >= *segments[1])
	goto ORDER_145362;
else if (*segments[2] >= *segments[3])
	goto ORDER_154362;
else if (*segments[2] >= *segments[5])
	goto ORDER_153462;
else if (*segments[2] >= *segments[0])
	goto ORDER_152463;
else
	goto ORDER_251463;

ORDER_146325:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[5])
	goto ORDER_146325;
else if (*segments[2] >= *segments[1])
	goto ORDER_145326;
else if (*segments[2] >= *segments[3])
	goto ORDER_154326;
else if (*segments[2] >= *segments[4])
	goto ORDER_153426;
else if (*segments[2] >= *segments[0])
	goto ORDER_152436;
else
	goto ORDER_251436;

ORDER_146253:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[4])
	goto ORDER_146253;
else if (*segments[2] >= *segments[1])
	goto ORDER_145263;
else if (*segments[2] >= *segments[5])
	goto ORDER_154263;
else if (*segments[2] >= *segments[3])
	goto ORDER_153264;
else if (*segments[2] >= *segments[0])
	goto ORDER_152364;
else
	goto ORDER_251364;

ORDER_146235:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[5])
	goto ORDER_146235;
else if (*segments[2] >= *segments[1])
	goto ORDER_145236;
else if (*segments[2] >= *segments[4])
	goto ORDER_154236;
else if (*segments[2] >= *segments[3])
	goto ORDER_153246;
else if (*segments[2] >= *segments[0])
	goto ORDER_152346;
else
	goto ORDER_251346;

ORDER_145632:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[2])
	goto ORDER_145632;
else if (*segments[3] >= *segments[1])
	goto ORDER_146532;
else if (*segments[3] >= *segments[4])
	goto ORDER_156432;
else if (*segments[3] >= *segments[5])
	goto ORDER_156342;
else if (*segments[3] >= *segments[0])
	goto ORDER_156243;
else
	goto ORDER_256143;

ORDER_145623:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[2])
	goto ORDER_145623;
else if (*segments[3] >= *segments[1])
	goto ORDER_146523;
else if (*segments[3] >= *segments[5])
	goto ORDER_156423;
else if (*segments[3] >= *segments[4])
	goto ORDER_156324;
else if (*segments[3] >= *segments[0])
	goto ORDER_156234;
else
	goto ORDER_256134;

ORDER_145362:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[2])
	goto ORDER_145362;
else if (*segments[4] >= *segments[1])
	goto ORDER_146352;
else if (*segments[4] >= *segments[3])
	goto ORDER_156342;
else if (*segments[4] >= *segments[5])
	goto ORDER_156432;
else if (*segments[4] >= *segments[0])
	goto ORDER_156423;
else
	goto ORDER_256413;

ORDER_145326:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[2])
	goto ORDER_145326;
else if (*segments[5] >= *segments[1])
	goto ORDER_146325;
else if (*segments[5] >= *segments[3])
	goto ORDER_156324;
else if (*segments[5] >= *segments[4])
	goto ORDER_156423;
else if (*segments[5] >= *segments[0])
	goto ORDER_156432;
else
	goto ORDER_256431;

ORDER_145263:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[2])
	goto ORDER_145263;
else if (*segments[4] >= *segments[1])
	goto ORDER_146253;
else if (*segments[4] >= *segments[5])
	goto ORDER_156243;
else if (*segments[4] >= *segments[3])
	goto ORDER_156234;
else if (*segments[4] >= *segments[0])
	goto ORDER_156324;
else
	goto ORDER_256314;

ORDER_145236:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[2])
	goto ORDER_145236;
else if (*segments[5] >= *segments[1])
	goto ORDER_146235;
else if (*segments[5] >= *segments[4])
	goto ORDER_156234;
else if (*segments[5] >= *segments[3])
	goto ORDER_156243;
else if (*segments[5] >= *segments[0])
	goto ORDER_156342;
else
	goto ORDER_256341;

ORDER_143652:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[4])
	goto ORDER_143652;
else if (*segments[3] >= *segments[1])
	goto ORDER_143562;
else if (*segments[3] >= *segments[2])
	goto ORDER_153462;
else if (*segments[3] >= *segments[5])
	goto ORDER_154362;
else if (*segments[3] >= *segments[0])
	goto ORDER_154263;
else
	goto ORDER_254163;

ORDER_143625:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[5])
	goto ORDER_143625;
else if (*segments[3] >= *segments[1])
	goto ORDER_143526;
else if (*segments[3] >= *segments[2])
	goto ORDER_153426;
else if (*segments[3] >= *segments[4])
	goto ORDER_154326;
else if (*segments[3] >= *segments[0])
	goto ORDER_154236;
else
	goto ORDER_254136;

ORDER_143562:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[3])
	goto ORDER_143562;
else if (*segments[4] >= *segments[1])
	goto ORDER_143652;
else if (*segments[4] >= *segments[2])
	goto ORDER_153642;
else if (*segments[4] >= *segments[5])
	goto ORDER_154632;
else if (*segments[4] >= *segments[0])
	goto ORDER_154623;
else
	goto ORDER_254613;

ORDER_143526:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[3])
	goto ORDER_143526;
else if (*segments[5] >= *segments[1])
	goto ORDER_143625;
else if (*segments[5] >= *segments[2])
	goto ORDER_153624;
else if (*segments[5] >= *segments[4])
	goto ORDER_154623;
else if (*segments[5] >= *segments[0])
	goto ORDER_154632;
else
	goto ORDER_254631;

ORDER_143265:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[5])
	goto ORDER_143265;
else if (*segments[4] >= *segments[1])
	goto ORDER_143256;
else if (*segments[4] >= *segments[2])
	goto ORDER_153246;
else if (*segments[4] >= *segments[3])
	goto ORDER_154236;
else if (*segments[4] >= *segments[0])
	goto ORDER_154326;
else
	goto ORDER_254316;

ORDER_143256:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[4])
	goto ORDER_143256;
else if (*segments[5] >= *segments[1])
	goto ORDER_143265;
else if (*segments[5] >= *segments[2])
	goto ORDER_153264;
else if (*segments[5] >= *segments[3])
	goto ORDER_154263;
else if (*segments[5] >= *segments[0])
	goto ORDER_154362;
else
	goto ORDER_254361;

ORDER_142653:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[4])
	goto ORDER_142653;
else if (*segments[3] >= *segments[1])
	goto ORDER_142563;
else if (*segments[3] >= *segments[5])
	goto ORDER_152463;
else if (*segments[3] >= *segments[2])
	goto ORDER_152364;
else if (*segments[3] >= *segments[0])
	goto ORDER_153264;
else
	goto ORDER_253164;

ORDER_142635:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[5])
	goto ORDER_142635;
else if (*segments[3] >= *segments[1])
	goto ORDER_142536;
else if (*segments[3] >= *segments[4])
	goto ORDER_152436;
else if (*segments[3] >= *segments[2])
	goto ORDER_152346;
else if (*segments[3] >= *segments[0])
	goto ORDER_153246;
else
	goto ORDER_253146;

ORDER_142563:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[3])
	goto ORDER_142563;
else if (*segments[4] >= *segments[1])
	goto ORDER_142653;
else if (*segments[4] >= *segments[5])
	goto ORDER_152643;
else if (*segments[4] >= *segments[2])
	goto ORDER_152634;
else if (*segments[4] >= *segments[0])
	goto ORDER_153624;
else
	goto ORDER_253614;

ORDER_142536:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[3])
	goto ORDER_142536;
else if (*segments[5] >= *segments[1])
	goto ORDER_142635;
else if (*segments[5] >= *segments[4])
	goto ORDER_152634;
else if (*segments[5] >= *segments[2])
	goto ORDER_152643;
else if (*segments[5] >= *segments[0])
	goto ORDER_153642;
else
	goto ORDER_253641;

ORDER_142365:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[5])
	goto ORDER_142365;
else if (*segments[4] >= *segments[1])
	goto ORDER_142356;
else if (*segments[4] >= *segments[3])
	goto ORDER_152346;
else if (*segments[4] >= *segments[2])
	goto ORDER_152436;
else if (*segments[4] >= *segments[0])
	goto ORDER_153426;
else
	goto ORDER_253416;

ORDER_142356:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[4])
	goto ORDER_142356;
else if (*segments[5] >= *segments[1])
	goto ORDER_142365;
else if (*segments[5] >= *segments[3])
	goto ORDER_152364;
else if (*segments[5] >= *segments[2])
	goto ORDER_152463;
else if (*segments[5] >= *segments[0])
	goto ORDER_153462;
else
	goto ORDER_253461;

ORDER_136542:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[3])
	goto ORDER_136542;
else if (*segments[2] >= *segments[4])
	goto ORDER_135642;
else if (*segments[2] >= *segments[1])
	goto ORDER_134652;
else if (*segments[2] >= *segments[5])
	goto ORDER_143652;
else if (*segments[2] >= *segments[0])
	goto ORDER_142653;
else
	goto ORDER_241653;

ORDER_136524:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[3])
	goto ORDER_136524;
else if (*segments[2] >= *segments[5])
	goto ORDER_135624;
else if (*segments[2] >= *segments[1])
	goto ORDER_134625;
else if (*segments[2] >= *segments[4])
	goto ORDER_143625;
else if (*segments[2] >= *segments[0])
	goto ORDER_142635;
else
	goto ORDER_241635;

ORDER_136452:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[4])
	goto ORDER_136452;
else if (*segments[2] >= *segments[3])
	goto ORDER_135462;
else if (*segments[2] >= *segments[1])
	goto ORDER_134562;
else if (*segments[2] >= *segments[5])
	goto ORDER_143562;
else if (*segments[2] >= *segments[0])
	goto ORDER_142563;
else
	goto ORDER_241563;

ORDER_136425:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[5])
	goto ORDER_136425;
else if (*segments[2] >= *segments[3])
	goto ORDER_135426;
else if (*segments[2] >= *segments[1])
	goto ORDER_134526;
else if (*segments[2] >= *segments[4])
	goto ORDER_143526;
else if (*segments[2] >= *segments[0])
	goto ORDER_142536;
else
	goto ORDER_241536;

ORDER_136254:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[4])
	goto ORDER_136254;
else if (*segments[2] >= *segments[5])
	goto ORDER_135264;
else if (*segments[2] >= *segments[1])
	goto ORDER_134265;
else if (*segments[2] >= *segments[3])
	goto ORDER_143265;
else if (*segments[2] >= *segments[0])
	goto ORDER_142365;
else
	goto ORDER_241365;

ORDER_136245:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[5])
	goto ORDER_136245;
else if (*segments[2] >= *segments[4])
	goto ORDER_135246;
else if (*segments[2] >= *segments[1])
	goto ORDER_134256;
else if (*segments[2] >= *segments[3])
	goto ORDER_143256;
else if (*segments[2] >= *segments[0])
	goto ORDER_142356;
else
	goto ORDER_241356;

ORDER_135642:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[2])
	goto ORDER_135642;
else if (*segments[3] >= *segments[4])
	goto ORDER_136542;
else if (*segments[3] >= *segments[1])
	goto ORDER_136452;
else if (*segments[3] >= *segments[5])
	goto ORDER_146352;
else if (*segments[3] >= *segments[0])
	goto ORDER_146253;
else
	goto ORDER_246153;

ORDER_135624:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[2])
	goto ORDER_135624;
else if (*segments[3] >= *segments[5])
	goto ORDER_136524;
else if (*segments[3] >= *segments[1])
	goto ORDER_136425;
else if (*segments[3] >= *segments[4])
	goto ORDER_146325;
else if (*segments[3] >= *segments[0])
	goto ORDER_146235;
else
	goto ORDER_246135;

ORDER_135462:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[2])
	goto ORDER_135462;
else if (*segments[4] >= *segments[3])
	goto ORDER_136452;
else if (*segments[4] >= *segments[1])
	goto ORDER_136542;
else if (*segments[4] >= *segments[5])
	goto ORDER_146532;
else if (*segments[4] >= *segments[0])
	goto ORDER_146523;
else
	goto ORDER_246513;

ORDER_135426:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[2])
	goto ORDER_135426;
else if (*segments[5] >= *segments[3])
	goto ORDER_136425;
else if (*segments[5] >= *segments[1])
	goto ORDER_136524;
else if (*segments[5] >= *segments[4])
	goto ORDER_146523;
else if (*segments[5] >= *segments[0])
	goto ORDER_146532;
else
	goto ORDER_246531;

ORDER_135264:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[2])
	goto ORDER_135264;
else if (*segments[4] >= *segments[5])
	goto ORDER_136254;
else if (*segments[4] >= *segments[1])
	goto ORDER_136245;
else if (*segments[4] >= *segments[3])
	goto ORDER_146235;
else if (*segments[4] >= *segments[0])
	goto ORDER_146325;
else
	goto ORDER_246315;

ORDER_135246:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[2])
	goto ORDER_135246;
else if (*segments[5] >= *segments[4])
	goto ORDER_136245;
else if (*segments[5] >= *segments[1])
	goto ORDER_136254;
else if (*segments[5] >= *segments[3])
	goto ORDER_146253;
else if (*segments[5] >= *segments[0])
	goto ORDER_146352;
else
	goto ORDER_246351;

ORDER_134652:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[4])
	goto ORDER_134652;
else if (*segments[3] >= *segments[2])
	goto ORDER_134562;
else if (*segments[3] >= *segments[1])
	goto ORDER_135462;
else if (*segments[3] >= *segments[5])
	goto ORDER_145362;
else if (*segments[3] >= *segments[0])
	goto ORDER_145263;
else
	goto ORDER_245163;

ORDER_134625:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[5])
	goto ORDER_134625;
else if (*segments[3] >= *segments[2])
	goto ORDER_134526;
else if (*segments[3] >= *segments[1])
	goto ORDER_135426;
else if (*segments[3] >= *segments[4])
	goto ORDER_145326;
else if (*segments[3] >= *segments[0])
	goto ORDER_145236;
else
	goto ORDER_245136;

ORDER_134562:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[3])
	goto ORDER_134562;
else if (*segments[4] >= *segments[2])
	goto ORDER_134652;
else if (*segments[4] >= *segments[1])
	goto ORDER_135642;
else if (*segments[4] >= *segments[5])
	goto ORDER_145632;
else if (*segments[4] >= *segments[0])
	goto ORDER_145623;
else
	goto ORDER_245613;

ORDER_134526:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[3])
	goto ORDER_134526;
else if (*segments[5] >= *segments[2])
	goto ORDER_134625;
else if (*segments[5] >= *segments[1])
	goto ORDER_135624;
else if (*segments[5] >= *segments[4])
	goto ORDER_145623;
else if (*segments[5] >= *segments[0])
	goto ORDER_145632;
else
	goto ORDER_245631;

ORDER_134265:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[5])
	goto ORDER_134265;
else if (*segments[4] >= *segments[2])
	goto ORDER_134256;
else if (*segments[4] >= *segments[1])
	goto ORDER_135246;
else if (*segments[4] >= *segments[3])
	goto ORDER_145236;
else if (*segments[4] >= *segments[0])
	goto ORDER_145326;
else
	goto ORDER_245316;

ORDER_134256:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[4])
	goto ORDER_134256;
else if (*segments[5] >= *segments[2])
	goto ORDER_134265;
else if (*segments[5] >= *segments[1])
	goto ORDER_135264;
else if (*segments[5] >= *segments[3])
	goto ORDER_145263;
else if (*segments[5] >= *segments[0])
	goto ORDER_145362;
else
	goto ORDER_245361;

ORDER_132654:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[4])
	goto ORDER_132654;
else if (*segments[3] >= *segments[5])
	goto ORDER_132564;
else if (*segments[3] >= *segments[1])
	goto ORDER_132465;
else if (*segments[3] >= *segments[2])
	goto ORDER_142365;
else if (*segments[3] >= *segments[0])
	goto ORDER_143265;
else
	goto ORDER_243165;

ORDER_132645:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[5])
	goto ORDER_132645;
else if (*segments[3] >= *segments[4])
	goto ORDER_132546;
else if (*segments[3] >= *segments[1])
	goto ORDER_132456;
else if (*segments[3] >= *segments[2])
	goto ORDER_142356;
else if (*segments[3] >= *segments[0])
	goto ORDER_143256;
else
	goto ORDER_243156;

ORDER_132564:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[3])
	goto ORDER_132564;
else if (*segments[4] >= *segments[5])
	goto ORDER_132654;
else if (*segments[4] >= *segments[1])
	goto ORDER_132645;
else if (*segments[4] >= *segments[2])
	goto ORDER_142635;
else if (*segments[4] >= *segments[0])
	goto ORDER_143625;
else
	goto ORDER_243615;

ORDER_132546:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[3])
	goto ORDER_132546;
else if (*segments[5] >= *segments[4])
	goto ORDER_132645;
else if (*segments[5] >= *segments[1])
	goto ORDER_132654;
else if (*segments[5] >= *segments[2])
	goto ORDER_142653;
else if (*segments[5] >= *segments[0])
	goto ORDER_143652;
else
	goto ORDER_243651;

ORDER_132465:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[5])
	goto ORDER_132465;
else if (*segments[4] >= *segments[3])
	goto ORDER_132456;
else if (*segments[4] >= *segments[1])
	goto ORDER_132546;
else if (*segments[4] >= *segments[2])
	goto ORDER_142536;
else if (*segments[4] >= *segments[0])
	goto ORDER_143526;
else
	goto ORDER_243516;

ORDER_132456:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[4])
	goto ORDER_132456;
else if (*segments[5] >= *segments[3])
	goto ORDER_132465;
else if (*segments[5] >= *segments[1])
	goto ORDER_132564;
else if (*segments[5] >= *segments[2])
	goto ORDER_142563;
else if (*segments[5] >= *segments[0])
	goto ORDER_143562;
else
	goto ORDER_243561;

ORDER_126543:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[3])
	goto ORDER_126543;
else if (*segments[2] >= *segments[4])
	goto ORDER_125643;
else if (*segments[2] >= *segments[5])
	goto ORDER_124653;
else if (*segments[2] >= *segments[1])
	goto ORDER_123654;
else if (*segments[2] >= *segments[0])
	goto ORDER_132654;
else
	goto ORDER_231654;

ORDER_126534:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[3])
	goto ORDER_126534;
else if (*segments[2] >= *segments[5])
	goto ORDER_125634;
else if (*segments[2] >= *segments[4])
	goto ORDER_124635;
else if (*segments[2] >= *segments[1])
	goto ORDER_123645;
else if (*segments[2] >= *segments[0])
	goto ORDER_132645;
else
	goto ORDER_231645;

ORDER_126453:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[4])
	goto ORDER_126453;
else if (*segments[2] >= *segments[3])
	goto ORDER_125463;
else if (*segments[2] >= *segments[5])
	goto ORDER_124563;
else if (*segments[2] >= *segments[1])
	goto ORDER_123564;
else if (*segments[2] >= *segments[0])
	goto ORDER_132564;
else
	goto ORDER_231564;

ORDER_126435:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[5])
	goto ORDER_126435;
else if (*segments[2] >= *segments[3])
	goto ORDER_125436;
else if (*segments[2] >= *segments[4])
	goto ORDER_124536;
else if (*segments[2] >= *segments[1])
	goto ORDER_123546;
else if (*segments[2] >= *segments[0])
	goto ORDER_132546;
else
	goto ORDER_231546;

ORDER_126354:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[4])
	goto ORDER_126354;
else if (*segments[2] >= *segments[5])
	goto ORDER_125364;
else if (*segments[2] >= *segments[3])
	goto ORDER_124365;
else if (*segments[2] >= *segments[1])
	goto ORDER_123465;
else if (*segments[2] >= *segments[0])
	goto ORDER_132465;
else
	goto ORDER_231465;

ORDER_126345:
if (*segments[2] == 0)
	goto DONE;
t->results[pos++] = *segments[2]++;
if (*segments[2] >= *segments[5])
	goto ORDER_126345;
else if (*segments[2] >= *segments[4])
	goto ORDER_125346;
else if (*segments[2] >= *segments[3])
	goto ORDER_124356;
else if (*segments[2] >= *segments[1])
	goto ORDER_123456;
else if (*segments[2] >= *segments[0])
	goto ORDER_132456;
else
	goto ORDER_231456;

ORDER_125643:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[2])
	goto ORDER_125643;
else if (*segments[3] >= *segments[4])
	goto ORDER_126543;
else if (*segments[3] >= *segments[5])
	goto ORDER_126453;
else if (*segments[3] >= *segments[1])
	goto ORDER_126354;
else if (*segments[3] >= *segments[0])
	goto ORDER_136254;
else
	goto ORDER_236154;

ORDER_125634:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[2])
	goto ORDER_125634;
else if (*segments[3] >= *segments[5])
	goto ORDER_126534;
else if (*segments[3] >= *segments[4])
	goto ORDER_126435;
else if (*segments[3] >= *segments[1])
	goto ORDER_126345;
else if (*segments[3] >= *segments[0])
	goto ORDER_136245;
else
	goto ORDER_236145;

ORDER_125463:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[2])
	goto ORDER_125463;
else if (*segments[4] >= *segments[3])
	goto ORDER_126453;
else if (*segments[4] >= *segments[5])
	goto ORDER_126543;
else if (*segments[4] >= *segments[1])
	goto ORDER_126534;
else if (*segments[4] >= *segments[0])
	goto ORDER_136524;
else
	goto ORDER_236514;

ORDER_125436:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[2])
	goto ORDER_125436;
else if (*segments[5] >= *segments[3])
	goto ORDER_126435;
else if (*segments[5] >= *segments[4])
	goto ORDER_126534;
else if (*segments[5] >= *segments[1])
	goto ORDER_126543;
else if (*segments[5] >= *segments[0])
	goto ORDER_136542;
else
	goto ORDER_236541;

ORDER_125364:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[2])
	goto ORDER_125364;
else if (*segments[4] >= *segments[5])
	goto ORDER_126354;
else if (*segments[4] >= *segments[3])
	goto ORDER_126345;
else if (*segments[4] >= *segments[1])
	goto ORDER_126435;
else if (*segments[4] >= *segments[0])
	goto ORDER_136425;
else
	goto ORDER_236415;

ORDER_125346:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[2])
	goto ORDER_125346;
else if (*segments[5] >= *segments[4])
	goto ORDER_126345;
else if (*segments[5] >= *segments[3])
	goto ORDER_126354;
else if (*segments[5] >= *segments[1])
	goto ORDER_126453;
else if (*segments[5] >= *segments[0])
	goto ORDER_136452;
else
	goto ORDER_236451;

ORDER_124653:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[4])
	goto ORDER_124653;
else if (*segments[3] >= *segments[2])
	goto ORDER_124563;
else if (*segments[3] >= *segments[5])
	goto ORDER_125463;
else if (*segments[3] >= *segments[1])
	goto ORDER_125364;
else if (*segments[3] >= *segments[0])
	goto ORDER_135264;
else
	goto ORDER_235164;

ORDER_124635:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[5])
	goto ORDER_124635;
else if (*segments[3] >= *segments[2])
	goto ORDER_124536;
else if (*segments[3] >= *segments[4])
	goto ORDER_125436;
else if (*segments[3] >= *segments[1])
	goto ORDER_125346;
else if (*segments[3] >= *segments[0])
	goto ORDER_135246;
else
	goto ORDER_235146;

ORDER_124563:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[3])
	goto ORDER_124563;
else if (*segments[4] >= *segments[2])
	goto ORDER_124653;
else if (*segments[4] >= *segments[5])
	goto ORDER_125643;
else if (*segments[4] >= *segments[1])
	goto ORDER_125634;
else if (*segments[4] >= *segments[0])
	goto ORDER_135624;
else
	goto ORDER_235614;

ORDER_124536:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[3])
	goto ORDER_124536;
else if (*segments[5] >= *segments[2])
	goto ORDER_124635;
else if (*segments[5] >= *segments[4])
	goto ORDER_125634;
else if (*segments[5] >= *segments[1])
	goto ORDER_125643;
else if (*segments[5] >= *segments[0])
	goto ORDER_135642;
else
	goto ORDER_235641;

ORDER_124365:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[5])
	goto ORDER_124365;
else if (*segments[4] >= *segments[2])
	goto ORDER_124356;
else if (*segments[4] >= *segments[3])
	goto ORDER_125346;
else if (*segments[4] >= *segments[1])
	goto ORDER_125436;
else if (*segments[4] >= *segments[0])
	goto ORDER_135426;
else
	goto ORDER_235416;

ORDER_124356:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[4])
	goto ORDER_124356;
else if (*segments[5] >= *segments[2])
	goto ORDER_124365;
else if (*segments[5] >= *segments[3])
	goto ORDER_125364;
else if (*segments[5] >= *segments[1])
	goto ORDER_125463;
else if (*segments[5] >= *segments[0])
	goto ORDER_135462;
else
	goto ORDER_235461;

ORDER_123654:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[4])
	goto ORDER_123654;
else if (*segments[3] >= *segments[5])
	goto ORDER_123564;
else if (*segments[3] >= *segments[2])
	goto ORDER_123465;
else if (*segments[3] >= *segments[1])
	goto ORDER_124365;
else if (*segments[3] >= *segments[0])
	goto ORDER_134265;
else
	goto ORDER_234165;

ORDER_123645:
if (*segments[3] == 0)
	goto DONE;
t->results[pos++] = *segments[3]++;
if (*segments[3] >= *segments[5])
	goto ORDER_123645;
else if (*segments[3] >= *segments[4])
	goto ORDER_123546;
else if (*segments[3] >= *segments[2])
	goto ORDER_123456;
else if (*segments[3] >= *segments[1])
	goto ORDER_124356;
else if (*segments[3] >= *segments[0])
	goto ORDER_134256;
else
	goto ORDER_234156;

ORDER_123564:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[3])
	goto ORDER_123564;
else if (*segments[4] >= *segments[5])
	goto ORDER_123654;
else if (*segments[4] >= *segments[2])
	goto ORDER_123645;
else if (*segments[4] >= *segments[1])
	goto ORDER_124635;
else if (*segments[4] >= *segments[0])
	goto ORDER_134625;
else
	goto ORDER_234615;

ORDER_123546:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[3])
	goto ORDER_123546;
else if (*segments[5] >= *segments[4])
	goto ORDER_123645;
else if (*segments[5] >= *segments[2])
	goto ORDER_123654;
else if (*segments[5] >= *segments[1])
	goto ORDER_124653;
else if (*segments[5] >= *segments[0])
	goto ORDER_134652;
else
	goto ORDER_234651;

ORDER_123465:
if (*segments[4] == 0)
	goto DONE;
t->results[pos++] = *segments[4]++;
if (*segments[4] >= *segments[5])
	goto ORDER_123465;
else if (*segments[4] >= *segments[3])
	goto ORDER_123456;
else if (*segments[4] >= *segments[2])
	goto ORDER_123546;
else if (*segments[4] >= *segments[1])
	goto ORDER_124536;
else if (*segments[4] >= *segments[0])
	goto ORDER_134526;
else
	goto ORDER_234516;

ORDER_123456:
if (*segments[5] == 0)
	goto DONE;
t->results[pos++] = *segments[5]++;
if (*segments[5] >= *segments[4])
	goto ORDER_123456;
else if (*segments[5] >= *segments[3])
	goto ORDER_123465;
else if (*segments[5] >= *segments[2])
	goto ORDER_123564;
else if (*segments[5] >= *segments[1])
	goto ORDER_124563;
else if (*segments[5] >= *segments[0])
	goto ORDER_134562;
else
	goto ORDER_234561;

