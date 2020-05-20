#pragma once
#include "Functions.h"


class SecureCalc
{
public:
	static void run(const Function& t, double x)
	{
		std::cout << "--- Calculation: " << t.name() << "(" << x << ")" << std::endl;

		try
		{
			std::cout << "==> result: " << t.calc(x) << std::endl;
		}
		catch (std::domain_error e_domain)
		{
			std::cout << "failed: " << e_domain.what() << std::endl;
		}
		catch (...)
		{
			std::cout << "failed: unknown exception\n";
		}
	}
};

