
void makeFirstLayer(){
	int currentCorner = 1, nowPos = cornerPos[currentCorner];

	if(nowPos == 1) {
		if(cornerState[currentCorner] != 0)
			R, U, RR.
			makeFirstLayer();
	}
	else if(nowPos == 2) {
		RR, U, R;
		makeFirstLayer();
	}
	else if(nowPos == 3) {
		L, U, RL;
		makeFirstLayer();
	}
	else if(nowPos == 4) {
		RL, U, L;
		makeFirstLayer();
	}
	else if(nowPos == 5) {
		if(cornerState[currentCorner] == 0)
			R, RU, RR,
			makeFirstLayer();
		else if(cornerState[currentCorner] == 1){

		}
		else{

		}
	}
	else if(nowPos == 6) {
		if(cornerState[currentCorner] == 0)
			RR, U, R,
			makeFirstLayer();
		else if(cornerState[currentCorner] == 1){

		}
		else{

		}
	}
	else if(nowPos == 7) {
		if(cornerState[currentCorner] == 0)
			L, RU, RL,
			makeFirstLayer();
		else if(cornerState[currentCorner] == 1){

		}
		else{

		}
	}
	else if(nowPos == 8) {
		if(cornerState[currentCorner] == 0)
			RL, U, L;
			makeFirstLayer();
		else if(cornerState[currentCorner] == 1){

		}
		else{

		}
	}

}

void makeMiddleLayer(){

}
