#ifndef I_GPIO_HPP
#define I_GPIO_HPP

class IGPIO {
   public:
    virtual ~IGPIO() = default;
    virtual bool setLevel(int level) = 0;
    virtual int getLevel() = 0;
};

#endif
