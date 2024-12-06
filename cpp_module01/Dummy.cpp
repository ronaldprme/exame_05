#include "Dummy.hpp"

Dummy::Dummy():ATarget("Dummy off practice of target."){}
Dummy::~Dummy(){}

ATarget *Dummy::clone()const{return new Dummy(*this);}

