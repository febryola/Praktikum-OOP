// Nama     : Febryola Kurnia Putri
// NIM      : 13520140
// Kelas    : K02
// Topik    : inheritance
#include "SubstractExpression.hpp"

SubstractExpression::SubstractExpression(Expression* x, Expression* y) : BinaryExpression(x, y){}
int SubstractExpression::solve(){
	return this->x->solve()-this->y->solve();
}