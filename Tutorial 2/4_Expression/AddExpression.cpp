// Nama     : Febryola Kurnia Putri
// NIM      : 13520140
// Kelas    : K02
// Topik    : inheritance
#include "AddExpression.hpp"

AddExpression::AddExpression(Expression* x, Expression* y) : BinaryExpression(x, y){}
int AddExpression::solve(){
	return this->x->solve()+this->y->solve();
}