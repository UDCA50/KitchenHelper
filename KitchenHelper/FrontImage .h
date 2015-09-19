

const int frontImageSize = 10;

class FrontImage{

private:
	char frontImage[frontImageSize][frontImageSize];

public:

	void printImage(); //frontImage 출력하는 매소드
	
};

void FrontImage::printImage(){

	printf("처음 이미지\n");
}