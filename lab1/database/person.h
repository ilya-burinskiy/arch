#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <vector>
#include "Poco/JSON/Object.h"

namespace database
{
    class Person{
        private:
            std::string _first_name;
            std::string _last_name;
            std::string _login;
            int _age;

        public:

            static Person fromJSON(const std::string & str);

            const std::string &get_first_name() const;
            const std::string &get_last_name() const;
            const std::string &get_login() const;
            const int &get_age() const;

            std::string &first_name();
            std::string &last_name();
            std::string &login();
            int &age();

            static void init();

            static Person read_by_login(std::string);
            static std::vector<Person> read_all();
            static std::vector<Person> search(std::string first_name,std::string last_name);
            
            void save_to_mysql();

            Poco::JSON::Object::Ptr toJSON() const;

    };
}

#endif