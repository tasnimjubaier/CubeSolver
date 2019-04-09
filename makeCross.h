

void makeCross(){
	int nowPos = edgePos[1], currentEdge = 1;
	if(nowPos == 1){
		if(edgeState[currentEdge] != 0)
			RF, R, U, RR, F, F;
	}
	else if(nowPos == 2){
		if(edgeState[currentEdge] == 0)
			R, R, U, F, F;
		else
			R, F;
	}
	else if(nowPos == 3){
		if(edgeState[currentEdge] == 0)
			B, B, U, U, F, F;
		else
			B, B, U, RR, F, R;
	}
	else if(nowPos == 4){
		if(edgeState[currentEdge] == 0)
			L, L, RU, F, F;
		else
			RL, RF;
	}

	else if(nowPos == 5){
		if(edgeState[currentEdge] == 1)
			R, U, RR, F, F;
		else F;
	}
	else if(nowPos == 6){
		if(edgeState[currentEdge] == 1)
			RR, U, R, F, F;
		else
			B, U, U, RB, F, F;
	}
	else if(nowPos == 7){
		if(edgeState[currentEdge] == 1)
			L, RU, RL, F, F;
		else
			RB, U, U, B, F, F;
	}
	else if(nowPos == 8){
		if(edgeState[currentEdge] == 1)
			RL, RU, L, F, F;
		else RF;
	}

	else if(nowPos == 9){
		if(edgeState[currentEdge] == 0)
			F, F;
		else
			RU, RR, F, R;
	}
	else if(nowPos == 10){
		if(edgeState[currentEdge] == 0)
			U, F, F;
		else
			RR, F, R;
	}
	else if(nowPos == 11){
		if(edgeState[currentEdge] == 0)
			U, U, F, F;
		else
			U, RR, F, R;
	}
	else if(nowPos == 12){
		if(edgeState[currentEdge] == 0)
			RU, F, F;
		else
			L, RF, RL;
	}
	///*******************************************************************


	currentEdge = 2; nowPos = edgePos[currentEdge];
	if(nowPos == 1){
		if(edgeState[currentEdge] == 0)
			F, F, RU, R, R;
		else
			RF, RR;
	}
	else if(nowPos == 2){
		if(edgeState[currentEdge] != 0)
			R, RF, RU, F, R, R;
	}
	else if(nowPos == 3){
		if(edgeState[currentEdge] == 0)
			B, B, U, R, R;
		else
			B, R;
	}
	else if(nowPos == 4){
		if(edgeState[currentEdge] == 0)
			L, L, U, U, R, R;
		else
			L, L, RU, F, RR;
	}
	else if(nowPos == 5){
		if(edgeState[currentEdge] == 1)
			RR;
		else
			RF, RU, F, R, R;
	}
	else if(nowPos == 6){
		if(edgeState[currentEdge] == 1)
			R;
		else
			B, U, RB, R, R;
	}
	else if(nowPos == 7){
		if(edgeState[currentEdge] == 1)
			L, U, U, R, R;
		else
			RB, U, B, R, R;
	}
	else if(nowPos == 8){
		if(edgeState[currentEdge] == 1)
			F, F, movmove_UeRR(), F, F;
		else F, RU, RF, R, R;
	}

	else if(nowPos == 9){
		if(edgeState[currentEdge] == 0)
			RU, R, R;
		else
			F, RR, RF;
	}
	else if(nowPos == 10){
		if(edgeState[currentEdge] == 0)
			R, R;
		else
			U, F, RR, RF;
	}
	else if(nowPos == 11){
		if(edgeState[currentEdge] == 0)
			U, R, R;
		else
			U, U, F, RR, RF;
	}
	else if(nowPos == 12){
		if(edgeState[currentEdge] == 0)
			U, U, R, R;
		else
			RU, F, RR, RF;
	}
	///**************************************************************************

	currentEdge = 3; nowPos = edgePos[currentEdge];
	if(nowPos == 1){
		if(edgeState[currentEdge] == 0)
			F, F, U, U, B, B;
		else
			RF, R, RU, RR, B, B;
	}
	else if(nowPos == 2){
		if(edgeState[currentEdge] == 0)
			R, R, RU, B, B;
		else
			RR, RB;
	}
	else if(nowPos == 3){
		if(edgeState[currentEdge] != 0)
			B, RR, RU, R, B, B;
	}
	else if(nowPos == 4){
		if(edgeState[currentEdge] == 0)
			L, L, U, B, B;
		else
			L, B;
	}

	else if(nowPos == 5){
		if(edgeState[currentEdge] == 1)
			R, RU, RR, B, B;
		else
			R, R, RB, R, R;
	}
	else if(nowPos == 6){
		if(edgeState[currentEdge] == 1)
			RR, RU, R, B, B;
		else
			RB;
	}
	else if(nowPos == 7){
		if(edgeState[currentEdge] == 1)
			L, U, B, B;
		else
			B;
	}
	else if(nowPos == 8){
		if(edgeState[currentEdge] == 1)
			RL, U, L, B, B;
		else
			L, L, B, L, L;
	}

	else if(nowPos == 9){
		if(edgeState[currentEdge] == 0)
			U, U, B, B;
		else
			RU, R, RB, RR;
	}
	else if(nowPos == 10){
		if(edgeState[currentEdge] == 0)
			RU, B, B;
		else
			R, RB, RR;
	}
	else if(nowPos == 11){
		if(edgeState[currentEdge] == 0)
			B, B;
		else
			U, R, RB, RR;
	}
	else if(nowPos == 12){
		if(edgeState[currentEdge] == 0)
			U, B, B;
		else
			RL, B, L;
	}
	///*****************************************************************************************

	currentEdge = 4; nowPos = edgePos[currentEdge];
	if(nowPos == 1){
		if(edgeState[currentEdge] == 0)
			F, F, U, L, L;
		else
			F, L;
	}
	else if(nowPos == 2){
		if(edgeState[currentEdge] == 0)
			R, R, RU, RU, L, L;
		else
			R, R, U, RF, L, F;
	}
	else if(nowPos == 3){
		if(edgeState[currentEdge] == 0)
			B, B, RU, L, L;
		else
			RB, RL;
	}
	else if(nowPos == 4){
		if(edgeState[currentEdge] != 0)
			L, L, RU, RF, L, F;
	}

	else if(nowPos == 5){
		if(edgeState[currentEdge] == 1)
			R, RU, RU, RR, L, L;
		else
			F, U, RF, L, L;
	}
	else if(nowPos == 6){
		if(edgeState[currentEdge] == 1)
			RR, RU, RU, R, L, L;
		else
			B, RU, RB, L, L;
	}
	else if(nowPos == 7){
		if(edgeState[currentEdge] == 1)
			RL;
		else
			RB, RU, B, L, L;
	}
	else if(nowPos == 8){
		if(edgeState[currentEdge] == 1)
			L;
		else
			F, U, RF, L, L;
	}

	else if(nowPos == 9){
		if(edgeState[currentEdge] == 0)
			U, L, L;
		else
			RF, L, F;
	}
	else if(nowPos == 10){
		if(edgeState[currentEdge] == 0)
			U, U, L, L;
		else
			U, RF, L, F;
	}
	else if(nowPos == 11){
		if(edgeState[currentEdge] == 0)
			RU, L, L;
		else
			B, RL, RB;
	}
	else if(nowPos == 12){
		if(edgeState[currentEdge] == 0)
			L, L;
		else
			RU, RF, L, F;
	}
	///***************************************
}
