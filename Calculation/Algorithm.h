
typedef void(__stdcall *AlgStatus)(int, int, int, int);

class Algorithm
{
public:
	Algorithm();
	~Algorithm();
public:
	int Add(int a, int b);
	int Abs(int a, int b);
	int Mul(int a, int b);

public:
	AlgStatus status;
};