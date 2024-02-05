#include<iostream>
#include<vector>

using namespace std;

template <typename T>
class Stack
{
public:
	Stack() {}

	void	push(const T& e) { v.push_back(e); }
	void	pop() { v.pop_back(); }
	const	T& top()	const { return v.back(); }

	bool	empty()		const { return v.empty(); }
	int		size()		const { return v.size(); }

private:
	vector<T> v;
};