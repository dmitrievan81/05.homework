#include "std.h"
#include <cmath>

void STD::update(double next) {
    
    m_count++;
	m_sum += next;
    m_sum_square += next * next;
    m_mean = m_sum / m_count;
    
    m_std = m_sum_square / m_count - m_mean * m_mean;

    m_std = std::sqrt(m_std);
}

double STD::eval() const  {
	return m_std;
}

const char * STD::name() const {
	return "std";
}
