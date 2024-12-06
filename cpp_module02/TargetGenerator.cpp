#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(){}

TargetGenerator::~TargetGenerator(){
	std::map<std::string, ATarget *>::iterator it = arr_target.begin();
	std::map<std::string, ATarget *>::iterator it_end = arr_target.end();
	while(it != it_end){
		delete it->second;
		it++;
	}
	this->arr_target.clear();
}

void TargetGenerator::learnTargetType(ATarget *target_ptr){
	if (target_ptr)
		arr_target.insert(std::pair<std::string, ATarget *>(target_ptr->getType(), target_ptr->clone()));}


void TargetGenerator::forgetTargetType(std::string const &target_name){
	std::map<std::string, ATarget *>::iterator it = arr_target.find(target_name);
	if (it != arr_target.end())
		delete it->second;
	arr_target.erase(target_name);
}

ATarget *TargetGenerator::createTarget(const std::string &target_name){
	std::map<std::string, ATarget *>::iterator it = arr_target.find(target_name);
	if (it != arr_target.end())
		return arr_target[target_name];
	return NULL;
}


