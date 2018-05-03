//--------------------DIAMOND>H-----------------------
class Diamond
{
public:
	Diamond(int sideSize, char borderChar= '#', char fillChar = '*');
	//Constructor automatically sets border to # and fill to *
	//must input Diamond sideSize
	//unless specified by parameters
	int GetSize();
	int Perimeter();
	double Area();
	void Grow(); //increases size by 1 integer
	void Shrink(); //decreases size by 1 integer
	void SetBorder(char borderChar); 
	void SetFill(char fillChar);
	void Draw();
	void Summary();

private:
	int size; //cannot be less than 1
	char border; // any ascii values from 33 to 127 are allowed
	char fill; //same characters allowed as setBorder function
	//otherwise fill and border will revert to default values
};