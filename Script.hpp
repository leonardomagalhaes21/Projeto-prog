#ifndef __prog_Script_hpp__
#define __prog_Script_hpp__

#include <string>
#include <fstream>
#include "Image.hpp"

namespace prog
{
  class Script
  {
  public: 
    Script(const std::string &filename);
    ~Script();
    void run();
    // Implementação de novos métodos;
    void invert(); 
    void to_gray_scale(); 
    void replace (rgb_value r1, rgb_value g1 , rgb_value b1 , rgb_value r2, rgb_value g2, rgb_value b2); 
    void fill (int x,int y , int w , int h , rgb_value r , rgb_value g , rgb_value b); 
    void h_mirror();
    void v_mirror();
    void add (std::string &filename,int r, int g, int b, int x, int y);
    void crop (int x, int y, int w, int h);
    void rotate_left();
    void rotate_right();
    void median_filter(int ws);
  private:
    // Current image.
    Image *image;
    // Input stream for reading script commands.
    std::ifstream input;
  private:
    // Private functions
    void clear_image_if_any();
    void open();
    void blank();
    void save();
  };
}
#endif
