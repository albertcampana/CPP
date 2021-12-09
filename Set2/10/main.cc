#include "main.ih"

int main(int argc, char **argv)
{
    try
    {
        Arg const &arg = Arg::instance(argc, argv, "ace:fg:h");     // 1

        Process process{ arg };                                     // 2

        process.run();                                              // 3
    }
    catch (int usage_ex)               // int exeption handler
    {
        if (usage_ex)                  // check if usage_ex equals 0
            return 1;
        return 0;
    }
    catch (string const &ex)           // string exeption handler
    {
        cout << ex;
    }
    catch (exception const &ex)              // std::exception exeption handler
    {
        cout << ex.what();
    }
}
