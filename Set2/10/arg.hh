class Arg
{
    public:
        static Arg const &instance(unsigned argc, char **argv, 
                                   char const *arguments);
};
