/*
** EPITECH PROJECT, 2022
** B-CCP-400-MPL-4-1-theplazza-paul.comte
** File description:
** ShellManager
*/

#ifndef SHELLMANAGER_HPP_
    #define SHELLMANAGER_HPP_
    #include <string>

namespace Plazza {

    class ShellManager {
        public:
            ShellManager() {}

            void runShell();

            class Error : public std::exception {
                public:

                    Error(std::string message) : _message(message) {}

                    char const *what() const noexcept override {
                        return (this->_message).c_str();
                    }

                private:
                    std::string const _message;
            };

            class Exit : public std::exception {
            };

        private:
            void _parseInput(std::string command);
    };

}

#endif /* !SHELLMANAGER_HPP_ */
