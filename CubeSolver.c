#include <stdio.h>

int edgePos[13], cornerPos[9];		/// e/cPos[i] = position of ith piece;
int edgeState[13], cornerState[9];	/// e/cState[i] = state of ith piece;
int nowEdge[13], nowCorner[9];		/// nowE/C[i] = piece Currently sitting at position i;


/// Defs
/**
edgePos-
1	down front
2	down right
3	down back
4	down left
5	middle front right
6	middle back right
7	middle back left
8	middle front left
9	up front
10	up right
11	up back
12	up left

cornerPos-
1	down front right
2	down back right
3	down back left
4	down front left
5	up fornt right
6	up back right
7	up back left
8	up front left


edgeState-
for white/yellow pieces-
0	white/yellow sticker facing white/yellow
1	white/yellow sticker facing green/blue
2	white/yellow sticker facing red/orange

for middle pieces-
0	red/orange sticker facing red/orange
1	red/orange sticker facing white/yellow
2	red/orange sticker facing green/blue

CornerState-
0	white/yellow sticker facing white/yellow
1	white/yellow sticker facing green/blue
2	white/yellow sticker facing red/orange

*/

#define R R
#define RR RR
#define L L
#define RL RL
#define F F
#define RF RF
#define U U
#define RU RU
#define B B
#define RB RB


int isWhiteEdge(int x)
{
    if(x <= 4 || x >= 9)
        return 0;
    return 1;
}

void moveR(  )
{
    /// move R

    /// edge pieces processing
    int x, temp[4];
    x = nowEdge[5];
    edgePos[x] = 10;
    temp[0] = x;
    if(isWhiteEdge(x)){
		if(edgeState[x] == 1)
			edgeState[x] = 0;
    }else{
		if(edgeState[x] == 2)
			edgeState[x] = 1;
    }

    x = nowEdge[10];
    edgePos[x] = 6;
    temp[1] = x;
    if(isWhiteEdge(x)){
		if(edgeState[x] == 0)
			edgeState[x] = 1;
    }else{
		if(edgeState[x] == 1)
			edgeState[x] = 2;
    }

    x = nowEdge[6];
    edgePos[x] = 2;
    temp[2] = x;
    if(isWhiteEdge(x)){
		if(edgeState[x] == 1)
			edgeState[x] = 0;
    }else{
		if(edgeState[x] == 2)
			edgeState[x] = 1;
    }

    x = nowEdge[2];
    edgePos[x] = 5;
    temp[3] = x;
    if(isWhiteEdge(x)){
		if(edgeState[x] == 0)
			edgeState[x] = 1;
    }else{
		if(edgeState[x] == 1)
			edgeState[x] = 2;
    }

    nowEdge[10] = temp[0];
    nowEdge[6] = temp[1];
    nowEdge[2] = temp[2];
    nowEdge[5] = temp[3];

    /// corner pieces processing

    x = nowCorner[2];
    cornerPos[x] = 6;
    temp[0] = x;
    if(cornerState[x] == 0)
        cornerState[x] = 1;
    else if(cornerState[x] == 1)
        cornerState[x] = 0;

    x = nowCorner[6];
    cornerPos[x] = 7;
    temp[1] = x;
    if(cornerState[x] == 0)
        cornerState[x] = 1;
    else if(cornerState[x] == 1)
        cornerState[x] = 0;

    x = nowCorner[7];
    cornerPos[x] = 3;
    temp[2] = x;
    if(cornerState[x] == 0)
        cornerState[x] = 1;
    else if(cornerState[x] == 1)
        cornerState[x] = 0;

    x = nowCorner[3];
    cornerPos[x] = 2;
    temp[3] = x;
    if(cornerState[x] == 0)
        cornerState[x] = 1;
    else if(cornerState[x] == 1)
        cornerState[x] = 0;

	nowCorner[6] = temp[0];
	nowCorner[7] = temp[1];
	nowCorner[3] = temp[2];
	nowCorner[2] = temp[3];
}

void moveRR(  ){
    /// move RR
    moveR(  ); moveR(  ); moveR(   );
}
void moveRL(  )
{
    /// move RL

	/// edge pieces processing
    int x, temp[4];
    x = nowEdge[8];
    edgePos[x] = 12;
    temp[0] = x;
    if(isWhiteEdge(x)){
		if(edgeState[x] == 1)
			edgeState[x] = 0;
    }else{
		if(edgeState[x] == 2)
			edgeState[x] = 1;
    }

    x = nowEdge[12];
    edgePos[x] = 7;
    temp[1] = x;
    if(isWhiteEdge(x)){
		if(edgeState[x] == 0)
			edgeState[x] = 1;
    }else{
		if(edgeState[x] == 1)
			edgeState[x] = 2;
    }

    x = nowEdge[7];
    edgePos[x] = 4;
    temp[2] = x;
    if(isWhiteEdge(x)){
		if(edgeState[x] == 1)
			edgeState[x] = 0;
    }else{
		if(edgeState[x] == 2)
			edgeState[x] = 1;
    }

    x = nowEdge[4];
    edgePos[x] = 8;
    temp[3] = x;
    if(isWhiteEdge(x)){
		if(edgeState[x] == 0)
			edgeState[x] = 1;
    }else{
		if(edgeState[x] == 1)
			edgeState[x] = 2;
    }


    nowEdge[12] = temp[0];
    nowEdge[7] = temp[1];
    nowEdge[4] = temp[2];
    nowEdge[8] = temp[3];

    /// corner pieces processing

    x = nowCorner[1];
    cornerPos[x] = 5;
    temp[0] = x;
    if(cornerState[x] == 0)
		cornerState[x] = 1;
    else if(cornerState[x] == 1)
        cornerState[x] = 0;

    x = nowCorner[5];
    cornerPos[x] = 8;
    temp[1] = x;
    if(cornerState[x] == 0)
        cornerState[x] = 1;
    else if(cornerState[x] == 1)
        cornerState[x] = 0;

    x = nowCorner[8];
    cornerPos[x] = 4;
    temp[2] = x;
    if(cornerState[x] == 0)
        cornerState[x] = 1;
    else if(cornerState[x] == 1)
        cornerState[x] = 0;

    x = nowCorner[4];
    cornerPos[x] = 1;
    temp[3] = x;
    if(cornerState[x] == 0)
        cornerState[x] = 1;
    else if(cornerState[x] == 1)
        cornerState[x] = 0;

	nowCorner[5] = temp[0];
	nowCorner[8] = temp[1];
	nowCorner[4] = temp[2];
	nowCorner[1] = temp[3];
}
void moveL(  ){
	/// move L;
	moveRL(  ); moveRL(  ); moveRL(  );
}

void moveF(   )
{
	/// move F;

	/// edge pieces processing
    int x, temp[4];
    x = nowEdge[1];
    edgePos[x] = 8;
    temp[0] = x;
    if(isWhiteEdge(x)){
		if(edgeState[x] == 0)
			edgeState[x] = 2;
    }else{
		if(edgeState[x] == 1)
			edgeState[x] = 0;
    }

    x = nowEdge[8];
    edgePos[x] = 9;
    temp[1] = x;
    if(isWhiteEdge(x)){
		if(edgeState[x] == 2)
			edgeState[x] = 0;
    }else{
		if(edgeState[x] == 0)
			edgeState[x] = 1;
    }

    x = nowEdge[9];
    edgePos[x] = 5;
    temp[2] = x;
    if(isWhiteEdge(x)){
		if(edgeState[x] == 0)
			edgeState[x] = 2;
    }else{
		if(edgeState[x] == 1)
			edgeState[x] = 0;
    }

    x = nowEdge[5];
    edgePos[x] = 1;
    temp[3] = x;
    if(isWhiteEdge(x)){
		if(edgeState[x] == 2)
			edgeState[x] = 0;
    }else{
		if(edgeState[x] == 0)
			edgeState[x] = 1;
    }

    nowEdge[8] = temp[0];
    nowEdge[9] = temp[1];
    nowEdge[5] = temp[2];
    nowEdge[1] = temp[3];

    /// corner pieces processing

    x = nowCorner[1];
    cornerPos[x] = 5;
    temp[0] = x;
    if(cornerState[x] == 0)
		cornerState[x] = 2;
	else if(cornerState[x] == 2)
		cornerState[x] = 0;

    x = nowCorner[5];
    cornerPos[x] = 6;
    temp[1] = x;
    if(cornerState[x] == 0)
		cornerState[x] = 2;
	else if(cornerState[x] == 2)
		cornerState[x] = 0;

    x = nowCorner[6];
    cornerPos[x] = 2;
    temp[2] = x;
    if(cornerState[x] == 0)
		cornerState[x] = 2;
	else if(cornerState[x] == 2)
		cornerState[x] = 0;

    x = nowCorner[2];
    cornerPos[x] = 1;
    temp[3] = x;
    if(cornerState[x] == 0)
		cornerState[x] = 2;
	else if(cornerState[x] == 2)
		cornerState[x] = 0;


	nowCorner[5] = temp[0];
	nowCorner[8] = temp[1];
	nowCorner[4] = temp[2];
	nowCorner[1] = temp[3];
}
void moveRF(  ){
	/// move RF;
	moveF(  ); moveF( ); moveF(  );
}

void move_D(  ){
	/// move D;

	/// edge pieces processing
    int x, temp[4];
    x = nowEdge[1];
    edgePos[x] = 2;
    temp[0] = x;
    if(isWhiteEdge(x)){
		if(edgeState[x] == 1)
			edgeState[x] = 2;
    }else{
		if(edgeState[x] == 2)
			edgeState[x] = 0;
    }

    x = nowEdge[2];
    edgePos[x] = 3;
    temp[1] = x;
    if(isWhiteEdge(x)){
		if(edgeState[x] == 2)
			edgeState[x] = 1;
    }else{
		if(edgeState[x] == 0)
			edgeState[x] = 2;
    }

    x = nowEdge[3];
    edgePos[x] = 4;
    temp[2] = x;
    if(isWhiteEdge(x)){
		if(edgeState[x] == 1)
			edgeState[x] = 2;
    }else{
		if(edgeState[x] == 2)
			edgeState[x] = 0;
    }

    x = nowEdge[4];
    edgePos[x] = 1;
    temp[3] = x;
    if(isWhiteEdge(x)){
		if(edgeState[x] == 2)
			edgeState[x] = 1;
    }else{
		if(edgeState[x] == 0)
			edgeState[x] = 2;
    }

    nowEdge[8] = temp[0];
    nowEdge[9] = temp[1];
    nowEdge[4] = temp[2];
    nowEdge[1] = temp[3];

    /// corner pieces processing

    x = nowCorner[1];
    cornerPos[x] = 2;
    temp[0] = x;
    if(cornerState[x] == 1)
		cornerState[x] = 2;
	else if(cornerState[x] == 2)
		cornerState[x] = 1;

    x = nowCorner[2];
    cornerPos[x] = 3;
    temp[1] = x;
    if(cornerState[x] == 2)
		cornerState[x] = 1;
	else if(cornerState[x] == 1)
		cornerState[x] = 2;

    x = nowCorner[3];
    cornerPos[x] = 4;
    temp[2] = x;
    if(cornerState[x] == 1)
		cornerState[x] = 2;
	else if(cornerState[x] == 2)
		cornerState[x] = 1;

    x = nowCorner[4];
    cornerPos[x] = 1;
    temp[3] = x;
    if(cornerState[x] == 1)
		cornerState[x] = 2;
	else if(cornerState[x] == 2)
		cornerState[x] = 1;


	nowCorner[5] = temp[0];
	nowCorner[8] = temp[1];
	nowCorner[4] = temp[2];
	nowCorner[1] = temp[3];
}
void moveRD(  )
{
	/// move RD;
	move_D(  ); move_D(  ); move_D(  );
}

void moveB(  )
{
	/// move B;

	/// edge pieces processing
    int x, temp[4];
    x = nowEdge[3];
    edgePos[x] = 6;
    temp[0] = x;
    if(isWhiteEdge(x)){
		if(edgeState[x] == 0)
			edgeState[x] = 2;
    }else{
		if(edgeState[x] == 1)
			edgeState[x] = 0;
    }

    x = nowEdge[6];
    edgePos[x] = 11;
    temp[1] = x;
    if(isWhiteEdge(x)){
		if(edgeState[x] == 2)
			edgeState[x] = 0;
    }else{
		if(edgeState[x] == 0)
			edgeState[x] = 1;
    }

    x = nowEdge[11];
    edgePos[x] = 7;
    temp[2] = x;
    if(isWhiteEdge(x)){
		if(edgeState[x] == 0)
			edgeState[x] = 2;
    }else{
		if(edgeState[x] == 1)
			edgeState[x] = 0;
    }

    x = nowEdge[7];
    edgePos[x] = 3;
    temp[3] = x;
    if(isWhiteEdge(x)){
		if(edgeState[x] == 2)
			edgeState[x] = 0;
    }else{
		if(edgeState[x] == 0)
			edgeState[x] = 1;
    }

    nowEdge[6] = temp[0];
    nowEdge[11] = temp[1];
    nowEdge[7] = temp[2];
    nowEdge[3] = temp[3];

    /// corner pieces processing

    x = nowCorner[2];
    cornerPos[x] = 6;
    temp[0] = x;
    if(cornerState[x] == 2)
		cornerState[x] = 0;
	else if(cornerState[x] == 0)
		cornerState[x] = 2;

    x = nowCorner[6];
    cornerPos[x] = 7;
    temp[1] = x;
    if(cornerState[x] == 2)
		cornerState[x] = 0;
	else if(cornerState[x] == 0)
		cornerState[x] = 2;

    x = nowCorner[7];
    cornerPos[x] = 3;
    temp[2] = x;
    if(cornerState[x] == 2)
		cornerState[x] = 0;
	else if(cornerState[x] == 0)
		cornerState[x] = 2;

    x = nowCorner[3];
    cornerPos[x] = 2;
    temp[3] = x;
    if(cornerState[x] == 0)
		cornerState[x] = 2;
	else if(cornerState[x] == 2)
		cornerState[x] = 0;

	nowCorner[6] = temp[0];
	nowCorner[7] = temp[1];
	nowCorner[3] = temp[2];
	nowCorner[2] = temp[3];
}
void moveRB(  )
{
	/// move RB;
	moveB(   ); moveB(   ); moveB(   );
}
void moveU(   ){
	///move

	/// edge pieces processing
    int x, temp[4];
    x = nowEdge[9];
    edgePos[x] = 12;
    temp[0] = x;
    if(isWhiteEdge(x)){
		if(edgeState[x] == 1)
			edgeState[x] = 2;
    }else{
		if(edgeState[x] == 2)
			edgeState[x] = 0;
    }

    x = nowEdge[10];
    edgePos[x] = 9;
    temp[1] = x;
    if(isWhiteEdge(x)){
		if(edgeState[x] == 2)
			edgeState[x] = 1;
    }else{
		if(edgeState[x] == 0)
			edgeState[x] = 2;
    }

    x = nowEdge[11];
    edgePos[x] = 10;
    temp[2] = x;
    if(isWhiteEdge(x)){
		if(edgeState[x] == 1)
			edgeState[x] = 2;
    }else{
		if(edgeState[x] == 2)
			edgeState[x] = 0;
    }

    x = nowEdge[12];
    edgePos[x] = 11;
    temp[3] = x;
    if(isWhiteEdge(x)){
		if(edgeState[x] == 2)
			edgeState[x] = 1;
    }else{
		if(edgeState[x] == 0)
			edgeState[x] = 2;
    }

    nowEdge[12] = temp[0];
    nowEdge[9] = temp[1];
    nowEdge[10] = temp[2];
    nowEdge[11] = temp[3];

    /// corner pieces processing

    x = nowCorner[5];
    cornerPos[x] = 8;
    temp[0] = x;
    if(cornerState[x] == 1)
		cornerState[x] = 2;
	else if(cornerState[x] == 2)
		cornerState[x] = 1;

    x = nowCorner[6];
    cornerPos[x] = 5;
    temp[1] = x;
    if(cornerState[x] == 2)
		cornerState[x] = 1;
	else if(cornerState[x] == 1)
		cornerState[x] = 2;

    x = nowCorner[7];
    cornerPos[x] = 6;
    temp[2] = x;
    if(cornerState[x] == 1)
		cornerState[x] = 2;
	else if(cornerState[x] == 2)
		cornerState[x] = 1;

    x = nowCorner[8];
    cornerPos[x] = 7;
    temp[3] = x;
    if(cornerState[x] == 1)
		cornerState[x] = 2;
	else if(cornerState[x] == 2)
		cornerState[x] = 1;


	nowCorner[8] = temp[0];
	nowCorner[5] = temp[1];
	nowCorner[6] = temp[2];
	nowCorner[7] = temp[3];
}
void moveRU(   ){
	/// move
	moveU(   ), moveU(   ), moveU(  );
}


void makeCross(){

}


void makeF2L(){

	/// COR

}

void makeOLL(){

}
void makePLL(){

}

int main()
{
	/// init;


	makeCross();
	makeF2L();
	makeOLL();
	makePLL();
}
