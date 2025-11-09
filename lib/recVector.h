#ifndef _REC_VECTOR_H_
#define _REC_VECTOR_H_

const int MAX = 10; // Avoid too many recursive calls
typedef int RecVector[MAX];

struct RecVOV {
	RecVector vector;
	int count; //occupied cells
	int i; //index
};

// ------- Update functions -------
void endProcessing(RecVOV &v, int count);

// ------- Init functions -------
void init(RecVOV &v);

// ------- Fill functions -------
void fill(RecVOV &v, int count, int val);
void fillRand(RecVOV &v, int count, int max);
// void fillKB(RecVOV &v, int count, int val);

// ------- Output functions -------
void show(RecVOV &v);

// ------- Shift functions (helper functions) -------
void shiftRight(RecVOV &v, int untilPos);
void shiftLeft(RecVOV &v, int untilPos);

// ------- Insert functions -------
void pushFront(RecVOV &v, int val);
void pushBack(RecVOV &v, int val);
void insert(RecVOV &v, int pos, int val);

// ------- Erase functions -------
void erase(RecVOV &v, int val);
void eraseAt(RecVOV &v, int pos);
void eraseAll(RecVOV &v, int val);

// ------- Search functions -------
int search(RecVOV &v, int val, int &pos);

// ------- Arithmetic functions -------
void add(RecVOV &v, RecVOV &w, RecVOV &r);
void substract(RecVOV &v, RecVOV &w, RecVOV &r);
void mult(RecVOV &v, RecVOV &w, RecVOV &r);
void divide(RecVOV &v, RecVOV &w, RecVOV &r);

#endif // _REC_VECTOR_H
