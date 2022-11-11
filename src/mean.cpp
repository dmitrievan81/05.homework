#include "mean.h"

void Mean::update(double next) {
	m_sum += next;
    m_count++;
    m_mean = m_sum / m_count;
}

double Mean::eval() const  {
	return m_mean;
}

const char * Mean::name() const {
	return "mean";
}
