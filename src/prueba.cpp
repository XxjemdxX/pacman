#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <ftxui/screen/color.hpp>
#include <ftxui/screen/terminal.hpp>
#include <iostream>
#include <thread>

using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
    std::string reset_position;
    int frame=0;
    while (true){
    int frame = 0;
 
     do
     {
        auto can = Canvas(100,100);
        can.DrawPointCircle(5+frame,5,5);
        can.DrawBlockLine(10+frame,5,5+frame,5);
        can.DrawBlockLine(2+frame,13,2+frame,11);
        can.DrawBlockLine(3+frame,13,3+frame,10);
        can.DrawBlockLine(7+frame,13,7+frame,10);
        can.DrawBlockLine(8+frame,13,8+frame,10);
        can.DrawBlockLine(0+frame,4,0+frame,7);
        can.DrawBlockLine(1+frame,4,1+frame,7);

        can.DrawPointCircle(94-frame,25,5);
        can.DrawBlockLine(89-frame,25,94-frame,25);
        can.DrawBlockLine(91-frame,33,91-frame,31);
        can.DrawBlockLine(92-frame,33,92-frame,30);
        can.DrawBlockLine(96-frame,33,96-frame,30);
        can.DrawBlockLine(97-frame,33,97-frame,30);
        can.DrawBlockLine(99-frame,24,99-frame,27);
        can.DrawBlockLine(100-frame,24,100-frame,27);

        Screen pantalla = Screen::Create(Dimension::Full(), Dimension::Full());
        Element lienzo = bgcolor(Color::Black, ((canvas(&can))));
        Render(pantalla, lienzo);
        std::cout << reset_position;
        pantalla.Print();
        reset_position = pantalla.ResetPosition(true);
        this_thread::sleep_for(0.05s);
        frame++;

    }while (frame<89);

    
 do{
    auto can = Canvas(100,100);
        can.DrawPointCircle(frame-1,5,5);
        can.DrawBlockLine(frame-6,5,frame-1,5);
        can.DrawBlockLine(frame+2,13,frame+2,11);
        can.DrawBlockLine(frame+1,13,frame+1,10);
        can.DrawBlockLine(frame-3,13,frame-3,10);
        can.DrawBlockLine(frame-4,13,frame-4,10);
        can.DrawBlockLine(frame+4,4,frame+4,7);
        can.DrawBlockLine(frame+5,4,frame+5,7);

        can.DrawPointCircle(102-frame,25,5);
        can.DrawBlockLine(108-frame,25,103-frame,25);
        can.DrawBlockLine(99-frame,33,99-frame,31);
        can.DrawBlockLine(100-frame,33,100-frame,30);
        can.DrawBlockLine(104-frame,33,104-frame,30);
        can.DrawBlockLine(105-frame,33,105-frame,30);
        can.DrawBlockLine(97-frame,24,97-frame,27);
        can.DrawBlockLine(98-frame,24,98-frame,27);

        Screen pantalla = Screen::Create(Dimension::Full(), Dimension::Full());
        Element lienzo = bgcolor(Color::Black, ((canvas(&can))));
        Render(pantalla, lienzo);
        std::cout << reset_position;
        pantalla.Print();
        reset_position = pantalla.ResetPosition(true);
        this_thread::sleep_for(0.05s);
        frame--;
    }while (frame>10);
    }
    return 0;

}