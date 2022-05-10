#pragma once
#include <iostream>
#include <string>
#include <vector>

class Destination
{
private:
	std::string name;
	std::string start_date;
	std::string end_date;
	int rate;
	std::string coments;
	std::vector<std::string> photos;

protected:
	void ValidDate(std::string& date);
	bool ValidDates(std::string start_date, std::string end_date);
	bool ValidPhotos(std::vector<std::string>& photos);
	bool ValidPhoto(std::string photo);

public:
	Destination() = default;
	Destination(std::string name,std::string start_date, std::string end_date,
		int rate, std::string coments, std::vector<std::string> photos);
	~Destination();
	std::string GetPeriod();
	std::string GetRate();
	std::string GetComents() const;
	std::string GetName() const; 
	std::vector<std::string>* GetPhotos();
	bool operator== (const Destination& helper);
	Destination operator= (const Destination& helper);
	void AddPhoto(std::string photo);
	void Print();
	

	friend std::ostream& operator<<(std::ostream& os, const Destination& dt);
	//friend std::istream& operator>>(std::istream& is, Destination& dt);

	
};