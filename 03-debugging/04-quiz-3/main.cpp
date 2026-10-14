#include <iostream>

void d()
{ // here
}

/* 
This question asks what the call stack displays at the above point of execution in function d().
It doesn't show the below function, which is confusing because c() is called before d().

The reason is because the call stack only shows functions you're currently inside.
Once a function has completed execution and is no longer in scope, it leaves the call stack.

So, when you're inside of d(), you are simultaneously inside of main(), a(), b() & d().
You aren't in c() anymore as that function was called, and then completed in b().
*/

void c() 
{
}

void b()
{
	c();
	d();
}

void a()
{
	b();
}

int main()
{
	a();

	return 0;
}