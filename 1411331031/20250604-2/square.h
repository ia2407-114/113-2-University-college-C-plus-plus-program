#include <iostream>
#include <string>
using namespace std;
// square2D���O 
class square2D
{
public:
    double l, w; // ���檫�W�� 
    // square2D���O�غc���禡,�]�wsquare2D�����          
    square2D();
    // square2D���O�Ѻc���禡
    ~square2D();
    // ���square2D�����
    void display();
    void display_2D();
};

// rect3D���O(�l���O)
//�~��square2D��public�������O
class rect3D :public square2D
{
private:
    double h;  // ����    
public:
    // rect3D���O�غc���禡,�]�wrect3D�����  
    rect3D();
    // rect3D���O�Ѻc���禡
    ~rect3D();
    // ���rect3D�����
    void display_3D();
};