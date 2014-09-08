#ifndef CONTAINERS_H
#define CONTAINERS_H


class Containers
{
    public:
        Containers() {};
        void testAll() const;
        virtual ~Containers() {};
    protected:
        void vectorTest() const;
        void arrayTest() const;
        void listTest() const;
    private:
};


#endif // CONTAINERS_H
