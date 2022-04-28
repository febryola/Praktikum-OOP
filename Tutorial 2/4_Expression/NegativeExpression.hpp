// Nama     : Febryola Kurnia Putri
// NIM      : 13520140
// Kelas    : K02
// Topik    : inheritance
#include "Expression.hpp"
class NegativeExpression : public UnaryExpression {
public:
	NegativeExpression(Expression* x);
	int solve();
};