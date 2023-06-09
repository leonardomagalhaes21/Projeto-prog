#ifndef __prog_Color_hpp__
#define __prog_Color_hpp__

namespace prog
{
  typedef unsigned char rgb_value;
  class Color
  {
    private:    // Incluir os parâmetros privados correspondentes às cores vermelho, azul e verde (RGB)
      rgb_value red_;   //variavel correspondente à cor vermelha  
      rgb_value blue_;  //variavel correspondente à cor azul
      rgb_value green_; //variavel correspondente à cor verde
    public:
      Color();
      Color(const Color& c);
      Color(rgb_value r, rgb_value g, rgb_value b);
      rgb_value red() const;
      rgb_value& red();
      rgb_value green() const;
      rgb_value& green();
      rgb_value blue() const;
      rgb_value& blue();
  };
}
#endif