class Box
{
private :
    int m_length,m_breadth,m_height;
public:
    Box();
    Box(int,int,int);
    Box(int);
    Box(const Box &);
int length(int);
int breadth(int);
int height(int);
int volume(int, int, int);
void display();
};
