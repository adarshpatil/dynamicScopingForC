float bvar=50;
typedef struct {
	int z;
}who;
int main()
{
	int bvar;
}
void f()
{
	who bvar;
	who svar;
	bvar.z = svar.z = 20;
	bvar.z = bvar.z + svar.z;
}
