enum class color_t
{
    blue=35,
    red=50,
    green=150,
    black=0,
    white=255

};
class Color
{
private :
    int m_r,m_g,m_b;
public:
    Color();
    Color(int,int,int);
    Color(int);
    Color(color_t);
   int invert(int,int,int);
   void display();

};
