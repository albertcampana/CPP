#include <filesystem>

int main(int argc, char *argv[])
{
    auto lwt = std::filesystem::last_write_time(argv[1]);
    std::filesystem::copy_file(argv[1], argv[2]);
    last_write_time(argv[2], lwt);	
}
