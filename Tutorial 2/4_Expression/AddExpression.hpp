// Nama     : Febryola Kurnia Putri
// NIM      : 13520140
// Kelas    : K02
// Topik    : inheritance
#include "Expression.hpp"
class AddExpression : public BinaryExpression {
public:
	AddExpression(Expression* x, Expression* y);
	int solve();
};