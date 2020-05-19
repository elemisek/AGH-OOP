#pragma once
#include "Functions.h"

class SecureCalc
{
public:
	template <typename T>
	static void run(const T& t, double x)
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
			std::cout << "failed: unspecified exception\n";
		}
	}
};

