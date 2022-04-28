// Nama     : Febryola Kurnia Putri
// NIM      : 13520140
// Kelas    : K02
// Topik    : inheritance
#include "Expression.hpp"
class SubstractExpression : public BinaryExpression {
public:
	SubstractExpression(Expression* x, Expression* y);
	int solve();
};