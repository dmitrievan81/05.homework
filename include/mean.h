#pragma once

#include "statistics.h"
#include <limits>

class Mean : public IStatistics {
public:
	Mean() : 
        m_mean{0},
        m_sum{0}, 
        m_count{0} {}

	void update(double next) override;

	double eval() const override;

	const char * name() const override;

private:
	double m_mean;
    double m_sum;
    int m_count;
};