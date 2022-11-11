#pragma once

#include "statistics.h"
#include <vector>

class STD : public IStatistics {
public:
	STD() : 
        m_count{0},
        m_sum{0.0}, 
        m_sum_square{0.0},
        m_mean{0.0}, 
        m_std{0.0} {}

	void update(double next) override;

	double eval() const override;

	const char * name() const override;

private:
    int m_count;
    double m_sum;
    double m_sum_square;
    double m_mean;
    double m_std;
};