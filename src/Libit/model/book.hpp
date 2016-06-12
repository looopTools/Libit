#include "author.hpp"

namespace libit
{
    class book
    {
    public:
        book(std::string title);

        void set_title(std::string new_title);
        void set_isbn(std::string new_isbn);
        void set_author_id(int new_author_id);

        std::string get_title();
        std::string get_isbn();

        int get_author_id();
        int get_id();

    private:
        std::string title, isbn;
        int author_id;
        int id;
    }
}
