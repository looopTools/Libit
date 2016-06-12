namespace libit
{
    class author
    {
    public:
        author(first_name, last_name);
        void set_first_name(std::string new_first_name);
        void set_last_name(std::string new_last_name);

        std::string get_first_name();
        std::string get_last_name();

        int get_id();

    private:
        std::string first_name, last_name;
        int id;
    }
}
