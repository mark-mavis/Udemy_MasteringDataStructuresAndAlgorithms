#pragma once
#ifndef GENERIC_TEMPLATE_HPP
#define GENERIC_TEMPLATE_HPP

template<typename t>
class Generic_template {
	t a;
	t b;
public:
	Generic_template(t a, t b);
	t add();
	t sub();

};


template<typename t>
Generic_template<t>::Generic_template(t a, t b) {
	this->a = a;
	this->b = b;
}

template<typename t>
t Generic_template<t>::add() {
	return a + b;
}

template<typename t>
t Generic_template<t>::sub() {
	return a - b;
}

#endif
