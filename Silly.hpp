#ifndef SILLY_CLASS_INCLUDED
#define SILLY_CLASS_INCLUDED

class Silly {
    public:
        Silly() = default;
        ~Silly() = default;
    protected:
        unsigned int someSillyValue = 0;
    private:
        friend class GetSilly;

        unsigned int getSillyValue() const {
            return someSillyValue;
        }
};
#endif